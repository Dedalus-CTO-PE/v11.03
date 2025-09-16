.
. **********************************************************
. *                                                        *
. *  Include Name :  OUTDIAIO                              *
. *                                                        *
. *  Function     :  I/O for outdiagf file                 *
. *                                                        *
. *  Keys         :  KEY8                                  *
. *                                                        *
. *  Modifications:  V5.10.B00 23/04/2001 Dean Cramer      *
. *                  Add variables diagnosis codes and     *
. *                  descriptions 2 thru 5                 *
. *                  V5.01.01 11/09/89 Graeme Williams     *
. *                  Write include                         *
. *                                                        *
. **********************************************************
.
.         1st index - OBAOUTNO
.
RDADIAG1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      OUTDIAG1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSDIAG1  RESET     KEY8
          READ      OUTDIAG1,KEY8;;
          RETURN
.
RDDIAG1   MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      OUTDIAG1,KEY8;DOPDIOUT,OPDICODE,OPDIDESC,OPDICOD2:
                                  OPDIDES2,OPDICOD3,OPDIDES3,OPDICOD4:
                                  OPDIDES4,OPDICOD5,OPDIDES5,OPDISPAR 
          GOTO      OVERCOND IF OVER
          MOVE      DOPDIOUT,OPDIOUTN
          RETURN
.
RDKDIAG1  MOVE      ZERO,OVRCD
          READKS    OUTDIAG1;DOPDIOUT,OPDICODE,OPDIDESC,OPDICOD2:
                             OPDIDES2,OPDICOD3,OPDIDES3,OPDICOD4:
                             OPDIDES4,OPDICOD5,OPDIDES5,OPDISPAR 
          GOTO      OVERCOND IF OVER
          MOVE      DOPDIOUT,OPDIOUTN
          RETURN
.
WRDIAG1   RESET     KEY8
          WRITE     OUTDIAG1,KEY8;KEY8,OPDICODE,OPDIDESC,OPDICOD2:
                                  OPDIDES2,OPDICOD3,OPDIDES3,OPDICOD4:
                                  OPDIDES4,OPDICOD5,OPDIDES5,OPDISPAR 
          RETURN
.
UPDIAG1   MOVE      OPDIOUTN,DOPDIOUT
          UPDATE    OUTDIAG1;DOPDIOUT,OPDICODE,OPDIDESC,OPDICOD2:
                             OPDIDES2,OPDICOD3,OPDIDES3,OPDICOD4:
                             OPDIDES4,OPDICOD5,OPDIDES5,OPDISPAR 
          RETURN
.
DEDIAG1   RESET     KEY8
          DELETE    OUTDIAG1,KEY8
          RETURN
