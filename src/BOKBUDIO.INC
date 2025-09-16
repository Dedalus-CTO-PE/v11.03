.
. BOKBUDIO.INC
. ------------
. Filename      : bokbudaf.dat
. Description   : Booking Date Audit file
. Variables     : KEY8  KEY16
. Modifications :
.
. -- I/O routines for 1st Index --
.
RABKBUD1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      BOKBUDA1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSBKBUD1  RESET     KEY8
          READ      BOKBUDA1,KEY8;;
          RETURN
.
RDBKBUD1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      BOKBUDA1,KEY8;DBKBUBOO,BKBUDATE,BKBUTIME,BKBUOPER,BKBUPORT:
                                  BKBUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DBKBUBOO,BKBUBOOK
          RETURN
.
RKBKBUD1  MOVE      ZERO,OVRCD
          READKS    BOKBUDA1;DBKBUBOO,BKBUDATE,BKBUTIME,BKBUOPER,BKBUPORT:
                             BKBUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DBKBUBOO,BKBUBOOK
          RETURN
.
RPBKBUD1  MOVE      ZERO,OVRCD
          READKP    BOKBUDA1;DBKBUBOO,BKBUDATE,BKBUTIME,BKBUOPER,BKBUPORT:
                             BKBUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DBKBUBOO,BKBUBOOK
          RETURN
.
UPBKBUD1  MOVE      BKBUBOOK,DBKBUBOO
          UPDATE    BOKBUDA1;DBKBUBOO,BKBUDATE,BKBUTIME,BKBUOPER,BKBUPORT:
                             BKBUSPAR
          RETURN
.
WRBKBUD1  RESET     KEY8
          PACK      BKBUDATE,CCC,CYY,CMM,CDD
          REP       " 0",BKBUDATE
          CLOCK     TIME,BKBUTIME
          MOVE      PASSCODE,BKBUOPER
          MOVE      PORT,BKBUPORT
          WRITE     BOKBUDA1,KEY8;KEY8,BKBUDATE,BKBUTIME,BKBUOPER,BKBUPORT:
                                  BKBUSPAR
          RETURN
.
DEBKBUD1  RESET     KEY8
          DELETE    BOKBUDA1,KEY8
          RETURN
.
. -- I/O routine for 2nd Index --
.
RABKBUD2  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      BOKBUDA2,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSBKBUD2  RESET     KEY16
          READ      BOKBUDA2,KEY16;;
          RETURN
.
RDBKBUD2  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      BOKBUDA2,KEY16;DBKBUBOO,BKBUDATE,BKBUTIME,BKBUOPER,BKBUPORT:
                                   BKBUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DBKBUBOO,BKBUBOOK
          RETURN
.
RKBKBUD2  MOVE      ZERO,OVRCD
          READKS    BOKBUDA2;DBKBUBOO,BKBUDATE,BKBUTIME,BKBUOPER,BKBUPORT:
                             BKBUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DBKBUBOO,BKBUBOOK
          RETURN
.
RPBKBUD2  MOVE      ZERO,OVRCD
          READKP    BOKBUDA2;DBKBUBOO,BKBUDATE,BKBUTIME,BKBUOPER,BKBUPORT:
                             BKBUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DBKBUBOO,BKBUBOOK
          RETURN
