.
.         INC       AAEAUXIO.PBL  (+ STRT & STOPAUDX)
.
.         FILE  I/O REQUESTS FOR ALL AAEATRE AUDIT FILES
.       INCLUDES REQUIRED : AAEAUXFD   FILE DEFINITIONS
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
.                  WRITAUDX   - WRITES A DATA RECORD TO AAE AUDIT
.                               INPUT : AUITEM,AUMODE,AUDESC,AUCONBEF
.                               & AUCONAFT ONLY IN AUMODE=C(hange) 
.
.                  READAUDX   - READS A DATA RECORD FROM AAE AUDIT
.
.       THIS INCLUDE WILL OPEN (OR CREATE) AN AAEENTORY AUDIT FILE
.       BASED ON AAE AUTYPE AND PORT NUMBER
.
STRTAUDX  MOVE      CDATE,AUDATE
          MOVE      PASSCODE,AUPASSCD
.
          MOVE      PORT,AUPORT
          PACK      AUFILE WITH AUAAEAU,AUTYPE,AUPORT
          REP       " 0",AUFILE
.
          MOVE      ZERO,OVRCD
.
          TRAP      NOAUDX IF IO 
          OPEN      AAEAUDXX,AUFILE
          TRAPCLR   IO 
.  
          READ      AAEAUDXX,ZERO;AUNEXT,AUFLAG
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
          WRITE     AAEAUDXX,ZERO;AUNEXT,AUFLAG
          RETURN
.
NOAUDX   NORETURN
.
         PREP      AAEAUDXX,AUFILE
.
        MOVE       ONE,AUNEXT
        MOVE       ONE,AUFLAG
        WRITE      AAEAUDXX,ZERO;AUNEXT,AUFLAG
        WEOF       AAEAUDXX,AUNEXT
        MOVE       AUNEXT,AUORIG
        RETURN             
.
.
.          UPDATING AAE AUDIT NEXT SECT FLAG
.
POSTAUDX MOVE      AUNEXT,AUORIG
        WRITE      AAEAUDXX,ZERO;AUNEXT,AUFLAG
        WEOF       AAEAUDXX,AUNEXT
        RETURN
.
.       USED IF CANCEL IN CHANGE... MODE TO RESET TO ORIGNAL SECTOR
.
CANCAUDX MOVE       AUORIG,AUNEXT
         WRITE      AAEAUDXX,ZERO;AUNEXT,AUFLAG
         WEOF       AAEAUDXX,AUNEXT
         RETURN
.
STOPAUDX MOVE      ZERO,AUFLAG
        WRITE      AAEAUDXX,ZERO;AUNEXT,AUFLAG
        CLOSE      AAEAUDXX
        RETURN
.
.      WRITE A RECORD TO AAE AUDIT
.
WRITAUDX CLOCK      TIME,AUTIME
.
        CMATCH     ANSC,AUMODE
        GOTO       WRAUDX1 IF NOT EQUAL
.
        MATCH      AUCONBEF,AUCONAFT
        RETURN     IF EQUAL
.
        WRITE      AAEAUDXX,AUNEXT;AUDATE,AUTIME,AUPASSCD,AUITEM:
                                  AUMODE,AUDESC,AUCONBEF,AUCONAFT
        GOTO       WRAUDX2
.
WRAUDX1 WRITE      AAEAUDXX,AUNEXT;AUDATE,AUTIME,AUPASSCD,AUITEM:
                                  AUMODE,AUDESC,AUCONBEF,SP30,SP20
WRAUDX2 ADD        ONE,AUNEXT
        RETURN
.
.      READ A RECORD FROM AAE AUDIT
.
READAUDX READ       AAEAUDXX,AUNEXT;AUDATE,AUTIME,AUPASSCD,AUITEM:    
                                  AUMODE,AUDESC,AUCONBEF,AUCONAFT
        RETURN
.
.
.
.       THIS INCLUDE WILL PRINT AN AAEATRE AUDIT FILE
.       BASED ON AAE AUTYPE
.
.       INCLUDES REQUIRED : AAEAUXFD   FILE DEFINITIONS
.                           AAEIOAUX   FILE IO'S
.
PRNTAUDX  PACK      AUFILE WITH AUAAEAU,AUTYPE,AUPORT
          REP       " 0",AUFILE
.
          MOVE      ZERO,OVRCD
.
          TRAP      NOAUDXP IF IO 
          OPEN      AAEAUDXX,AUFILE
          TRAPCLR   IO 
.  
          READ      AAEAUDXX,ZERO;AUNEXT,AUFLAG
          MOVE      AUNEXT,AUORIG
          COMPARE   ZERO,AUFLAG
          GOTO      AUXPRNT IF EQUAL
.
          DISPLAY   *P1:24,*EL,*B:
                    *V2LON,"*** Audit file in use on Terminal ":
                    *V2LON,AUPORT,*HOFF," **":
                    ".. Hit ",*V2LON,"<RETURN>",*HOFF:
                    " to continue ..";
         KEYIN      *EOFF,ANS,*P1:24,*EL;
.
         CLOSE     AAEAUDXX
         GOTO     OVERLOCK
.
AUXPRNT   MOVE      TWO,AUFLAG    *** AUDIT NOW BEING PRINTED
          WRITE      AAEAUDXX,ZERO;AUNEXT,AUFLAG
          RETURN
.
.       IF PRINTING AND DOESNT EXIST FORGET IT
.       
NOAUDXP   NORETURN
          GOTO     OVERCOND
.
