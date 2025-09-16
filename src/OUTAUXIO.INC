
.
.         INC       OUTAUXIO.INC  (+ STRT & STOPAUDX)
.
.         FILE  I/O REQUESTS FOR ALL OUTATRE AUDIT FILES
.       INCLUDES REQUIRED : OUTAUXFD   FILE DEFINITIONS
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.
.         NOTE:-   STRTAUDX   - OPENS AND CREATES AUDIT FILE FOR USER
.                               INPUT : AUTYPE
.                  PRNTAUDX   - OPENS FOR PRINTING
.                               INPUT : AUTYPE,AUPORT
.                  STOPAUDX   - CLOSES AUDIT FILE
.
.                  POSTAUDX   - POSTS MAINTENANCE RECORDS 
.                               ( MOVES AUNEXT,AUORIG)
.                  CANCAUDX   - CANCELS MAINTENANCE RECORDS
.                               ( MOVES AUORIG,AUNEXT)
.                  WRITAUDX   - WRITES A DATA RECORD TO OUT AUDIT
.                               INPUT : AUITEM,AUMODE,AUDESC,AUCONBEF
.                               & AUCONAFT ONLY IN AUMODE=C(hange) 
.
.                  READAUDX   - READS A DATA RECORD FROM OUT AUDIT
.
.       THIS INCLUDE WILL OPEN (OR CREATE) AN OUTENTORY AUDIT FILE
.       BASED ON OUT AUTYPE AND PORT NUMBER
.
STRTAUDX  MOVE      CDATE,AUDATE
          MOVE      PASSCODE,AUPASSCD
.
          MOVE      PORT,AUPORT
          PACK      AUFILE WITH AUOUTAU,AUTYPE,AUPORT
          REP       " 0",AUFILE
.
          MOVE      ZERO,OVRCD
.
          TRAP      NOAUDX IF IO 
          OPEN      OUTAUDXX,AUFILE
          TRAPCLR   IO 
.  
          READ      OUTAUDXX,ZERO;AUNEXT,AUFLAG
          MOVE      AUNEXT,AUORIG
          COMPARE   TWO,AUFLAG
          GOTO      AUXFREE IF NOT EQUAL
.
          DISPLAY   *P1:24,*EL,*B,*V2LON,"*** Audit file is Printing.":
                    "  Please Wait Until Audit Listing is Completed ***",*W6
          MOVE      ONE,OVRCD
          RETURN             
.
AUXFREE   MOVE      ONE,AUFLAG    *** TERMINAL NOW USING THIS AUDIT
          WRITE      OUTAUDXX,ZERO;AUNEXT,AUFLAG
          RETURN
.
NOAUDX   NORETURN
.
         PREP      OUTAUDXX,AUFILE
.
        MOVE       ONE,AUNEXT
        MOVE       ONE,AUFLAG
        WRITE      OUTAUDXX,ZERO;AUNEXT,AUFLAG
        WEOF       OUTAUDXX,AUNEXT
        MOVE       AUNEXT,AUORIG
        RETURN             
.
.
.          UPDATING OUT AUDIT NEXT SECT FLAG
.
POSTAUDX MOVE      AUNEXT,AUORIG
        WRITE      OUTAUDXX,ZERO;AUNEXT,AUFLAG
        WEOF       OUTAUDXX,AUNEXT
        RETURN
.
.       USED IF CANCEL IN CHANGE... MODE TO RESET TO ORIGNAL SECTOR
.
CANCAUDX MOVE       AUORIG,AUNEXT
         WRITE      OUTAUDXX,ZERO;AUNEXT,AUFLAG
         WEOF       OUTAUDXX,AUNEXT
         RETURN
.
STOPAUDX MOVE      ZERO,AUFLAG
        WRITE      OUTAUDXX,ZERO;AUNEXT,AUFLAG
        CLOSE      OUTAUDXX
        RETURN
.
.      WRITE A RECORD TO OUT AUDIT
.
WRITAUDX CLOCK      TIME,AUTIME
.
        CMATCH     ANSC,AUMODE
        GOTO       WRAUDX1 IF NOT EQUAL
.
        MATCH      AUCONBEF,AUCONAFT
        RETURN     IF EQUAL
.
        WRITE      OUTAUDXX,AUNEXT;AUDATE,AUTIME,AUPASSCD,AUITEM:
                                  AUMODE,AUDESC,AUCONBEF,AUCONAFT
        GOTO       WRAUDX2
.
WRAUDX1 WRITE      OUTAUDXX,AUNEXT;AUDATE,AUTIME,AUPASSCD,AUITEM:
                                  AUMODE,AUDESC,AUCONBEF,SP30,SP20
WRAUDX2 ADD        ONE,AUNEXT
        RETURN
.
.      READ A RECORD FROM OUT AUDIT
.
READAUDX READ       OUTAUDXX,AUNEXT;AUDATE,AUTIME,AUPASSCD,AUITEM:    
                                  AUMODE,AUDESC,AUCONBEF,AUCONAFT
        RETURN
.
.
.
.       THIS INCLUDE WILL PRINT AN OUTATRE AUDIT FILE
.       BASED ON OUT AUTYPE
.
.       INCLUDES REQUIRED : OUTAUXFD   FILE DEFINITIONS
.                           OUTIOAUX   FILE IO'S
.
PRNTAUDX  PACK      AUFILE WITH AUOUTAU,AUTYPE,AUPORT
          REP       " 0",AUFILE
.
          MOVE      ZERO,OVRCD
.
          TRAP      NOAUDXP IF IO 
          OPEN      OUTAUDXX,AUFILE
          TRAPCLR   IO 
.  
          READ       OUTAUDXX,ZERO;AUNEXT,AUFLAG
          MOVE       AUNEXT,AUORIG
          COMPARE    ZERO,AUFLAG
          GOTO       AUXPRNT IF EQUAL
.
          DISPLAY   *P1:24,*EL,*B:
                    *V2LON,"*** Audit file in use on Terminal ":
                    *V2LON,AUPORT,*HOFF," **":
                    ".. Hit ",*V2LON,"<RETURN>",*HOFF:
                    " to continue ..";
         KEYIN      *EOFF,ANS,*P1:24,*EL;
.
         CLOSE     OUTAUDXX
         GOTO     OVERLOCK
.
AUXPRNT   MOVE      TWO,AUFLAG    *** AUDIT NOW BEING PRINTED
          WRITE      OUTAUDXX,ZERO;AUNEXT,AUFLAG
          RETURN
.
.       IF PRINTING AND DOESNT EXIST FORGET IT
.       
NOAUDXP   NORETURN
          GOTO     OVERCOND
.
