.
. BOKDIAIO.INC
. ------------
. Related FD      : BOKDIAFD.INC
. Filenames       : bokdiaaf
. Description     : Booking Diagnosis file
. Variables       : OVRCD   FORM   1        0 = NOT OVER
.                                           1 = OVER
.                   KEY18    DIM   18       KEY FOR BOKDIAA1
.
. -----------------------------------------
. ------- I/O routines for BOKDIAA1 -------
. -----------------------------------------
.
RSBKDIA1  RESET     KEY18                    * positional read
          READ      BOKDIAA1,KEY18;;
          RETURN
.
RABKDIA1  RESET     KEY18                    * existing read
          MOVE      ZERO,OVRCD
          READ      BOKDIAA1,KEY18;ANS
          GOTO      OVERCOND IF OVER
        
          RETURN
.
RDBKDIA1  RESET     KEY18                    * full read
          MOVE      ZERO,OVRCD
          READ      BOKDIAA1,KEY18;DBKDIBOO,BKDICODE,BKDIDES1,BKDIDES2,BKDICOMM:
                                  BKDIUNIQ,BKDIDES3,BKDIDES4,BKDIDES5,BKDIDES6:
                                  BKDISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DBKDIBOO,BKDIBOOK
          RETURN
.
RKBKDIA1  MOVE      ZERO,OVRCD              * next read
          READKS    BOKDIAA1;DBKDIBOO,BKDICODE,BKDIDES1,BKDIDES2,BKDICOMM:
                             BKDIUNIQ,BKDIDES3,BKDIDES4,BKDIDES5,BKDIDES6:
                             BKDISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DBKDIBOO,BKDIBOOK
          RETURN
.
RPBKDIA1  MOVE      ZERO,OVRCD              * previous read
          READKP    BOKDIAA1;DBKDIBOO,BKDICODE,BKDIDES1,BKDIDES2,BKDICOMM:
                             BKDIUNIQ,BKDIDES3,BKDIDES4,BKDIDES5,BKDIDES6:
                             BKDISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DBKDIBOO,BKDIBOOK
          RETURN
.
UPBKDIA1  MOVE      BKDIBOOK,DBKDIBOO       * update
          UPDATE    BOKDIAA1;DBKDIBOO,BKDICODE,BKDIDES1,BKDIDES2,BKDICOMM:
                             BKDIUNIQ,BKDIDES3,BKDIDES4,BKDIDES5,BKDIDES6:
                             BKDISPAR
          RETURN
.
WRBKDIA1  MOVE      BKDIBOOK,DBKDIBOO       * write
          RESET     KEY18
          WRITE     BOKDIAA1,KEY18;DBKDIBOO,BKDICODE,BKDIDES1,BKDIDES2,BKDICOMM:
                                  BKDIUNIQ,BKDIDES3,BKDIDES4,BKDIDES5,BKDIDES6:
                                  BKDISPAR
          RETURN
.
DEBKDIA1  RESET     KEY18                    * delete
          DELETE    BOKDIAA1,KEY18
          RETURN
.
