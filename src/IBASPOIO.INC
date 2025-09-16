.----------------------------------------------------------
.C2.09.00 11/10/2000  Charles Handaya
.         Added third index
.----------------------------------------------------------
.
.         INCLUDE NAME : IBASPOIO.INC
.
.         FILE  I/O REQUESTS FOR SPOOLER TABLE FILE
.
.OVRCD  FORM            1             0=NOT OVER
.                                     1= OVER
.KEY8   DIM             8             KEY FOR IBAPRN
.KEY11  DIM            11             KEY FOR IBAPRN
.
.         NOTE:-
.                  RDAAAX  IS THE READ CALL ON FILE IBAAAAX
.                  RDKAAAX  IS THE READKS CALL
.                  WRAAAX  IS THE WRITE CALL
.                  UPAAAX  IS THE UPDATE CALL
.                  DEAAAX  IS THE DELETE CALL
.
WRSPOL1  RESET     KEY8
         WRITE     IBASPOL1,KEY8;KEY8,CSPDATE,CSPTIME:
                                 CSPDESC,CSPOPER,CSPLEVE:
                                 CSPDEPT,CSPXTRA 
.  
RDSPOL1  MOVE      ZERO,OVRCD 
         RESET     KEY8
         READ      IBASPOL1,KEY8;CSPNAME,CSPDATE,CSPTIME:
                                 CSPDESC,CSPOPER,CSPLEVE:
                                 CSPDEPT,CSPXTRA        
         GOTO      OVERCOND IF OVER
         RETURN
.
RDKSPOL1 MOVE      ZERO,OVRCD
         READKS    IBASPOL1;CSPNAME,CSPDATE,CSPTIME:
                            CSPDESC,CSPOPER,CSPLEVE:
                            CSPDEPT,CSPXTRA        
         GOTO      OVERCOND IF OVER
         RETURN
.
RDSSPOL1 MOVE      ZERO,OVRCD
         RESET     KEY8
         READ      IBASPOL1,KEY8;;
         GOTO      OVERCOND IF OVER
         RETURN
.
DESPOL1 RESET      KEY8
        DELETE     IBASPOL1,KEY8
        RETURN
.
UPSPOL1 UPDATE     IBASPOL1;CSPNAME,CSPDATE,CSPTIME:
                            CSPDESC,CSPOPER,CSPLEVE:
                            CSPDEPT,CSPXTRA        
        RETURN
.
RDKSPOL2 MOVE      ZERO,OVRCD
         READKS    IBASPOL2;CSPNAME,CSPDATE,CSPTIME:
                            CSPDESC,CSPOPER,CSPLEVE:
                            CSPDEPT,CSPXTRA        
         GOTO      OVERCOND IF OVER
         RETURN
.
RDSSPOL2 MOVE      ZERO,OVRCD
         RESET     KEY11
         READ      IBASPOL2,KEY11;;
         GOTO      OVERCOND IF OVER
         RETURN
.
.  
RDSPOL2  MOVE      ZERO,OVRCD 
         RESET     KEY11
         READ      IBASPOL2,KEY11;CSPNAME,CSPDATE,CSPTIME:
                                 CSPDESC,CSPOPER,CSPLEVE:
                                 CSPDEPT,CSPXTRA        
         GOTO      OVERCOND IF OVER
         RETURN
.
WRSPOL3   RESET     KEY27
          WRITE     IBASPOL3,KEY27;CSPNAME,CSPDATE,CSPTIME:
                                   CSPDESC,CSPOPER,CSPLEVE:
                                   CSPDEPT,CSPXTRA
          RETURN
.
RDSPOL3   MOVE      ZERO,OVRCD
          RESET     KEY27
          READ      IBASPOL3,KEY27;CSPNAME,CSPDATE,CSPTIME:
                                   CSPDESC,CSPOPER,CSPLEVE:
                                   CSPDEPT,CSPXTRA
          GOTO      OVERCOND IF OVER
          RETURN
.
RDKSPOL3  MOVE      ZERO,OVRCD
          READKS    IBASPOL3;CSPNAME,CSPDATE,CSPTIME:
                             CSPDESC,CSPOPER,CSPLEVE:
                             CSPDEPT,CSPXTRA
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPSPOL3  MOVE      ZERO,OVRCD
          READKP    IBASPOL3;CSPNAME,CSPDATE,CSPTIME:
                             CSPDESC,CSPOPER,CSPLEVE:
                             CSPDEPT,CSPXTRA
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSSPOL3  MOVE      ZERO,OVRCD
          RESET     KEY27
          READ      IBASPOL3,KEY27;;
          GOTO      OVERCOND IF OVER
          RETURN
.
DESPOL3   RESET     KEY27
          DELETE    IBASPOL3,KEY27
          RETURN
.
UPSPOL3   UPDATE    IBASPOL3;CSPNAME,CSPDATE,CSPTIME:
                             CSPDESC,CSPOPER,CSPLEVE:
                             CSPDEPT,CSPXTRA
          RETURN
.
