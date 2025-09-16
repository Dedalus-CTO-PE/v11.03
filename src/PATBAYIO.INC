.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOBAY                              *
. *                                                        *
. *  Function     :  I/O for patbaysf file                 *
. *                                                        *
. *  Keys         :  KEY5                                  *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                                                        *
. **********************************************************
.
RDABAYS1 MOVE      ZERO,OVRCD
         RESET     KEY5
         READ      PATBAYS1,KEY5;ANS
         GOTO      OVERCOND IF OVER
         RETURN
.
RDBAYS1  MOVE      ZERO,OVRCD
         RESET     KEY5
         READ      PATBAYS1,KEY5;BAYCODE,BAYUR,BAYDESC,BAYSPAR
         GOTO      OVERCOND IF OVER
         MOVE      BAYCODE,SBAYCODE
         MOVE      BAYUR,SBAYUR
         RETURN
.
RLBAYS1  MOVE      ZERO,OVRCD
         RESET     KEY5
         READL     PATBAYS1,KEY5;BAYCODE,BAYUR,BAYDESC,BAYSPAR
         GOTO      OVERLOCK IF LOCKED
         GOTO      OVERCOND IF OVER
         MOVE      BAYCODE,SBAYCODE
         MOVE      BAYUR,SBAYUR
         RETURN
.
RDKBAYS1 MOVE      ZERO,OVRCD
         READKS    PATBAYS1;BAYCODE,BAYUR,BAYDESC,BAYSPAR
         GOTO      OVERCOND IF OVER
         MOVE      BAYCODE,SBAYCODE
         MOVE      BAYUR,SBAYUR
         RETURN
.
RDPBAYS1 MOVE      ZERO,OVRCD
         READKP    PATBAYS1;BAYCODE,BAYUR,BAYDESC,BAYSPAR
         GOTO      OVERCOND IF OVER
         MOVE      BAYCODE,SBAYCODE
         MOVE      BAYUR,SBAYUR
         RETURN
.
WRBAYS1  MOVE      ZERO,OVRCD 
         RESET     KEY5
         UNPACK    KEY5 WITH BAYCODE,BAYUR
         TRAP      OVERLOCK IF IO
         WRITE     PATBAYS1,KEY5;BAYCODE,BAYUR,BAYDESC,BAYSPAR
         TRAPCLR   IO
.
         RETURN
.
UPBAYS1  UPDATE    PATBAYS1;BAYCODE,BAYUR,BAYDESC,BAYSPAR
         RETURN
.
ULBAYS1  UNLOCK    PATBAYS1
         RETURN
.
DEBAYS1  RESET     KEY5
         DELETE    PATBAYS1,KEY5
.
         RETURN
.
RDSBAYS1 RESET     KEY5
         READ      PATBAYS1,KEY5;;
         RETURN
.
RDBAYS2  MOVE      ZERO,OVRCD
         RESET     KEY5
         READ      PATBAYS2,KEY5;BAYCODE,BAYUR,BAYDESC,BAYSPAR
         GOTO      OVERCOND IF OVER
         RETURN
.
RDKBAYS2 MOVE      ZERO,OVRCD
         READKS    PATBAYS2;BAYCODE,BAYUR,BAYDESC,BAYSPAR
         GOTO      OVERCOND IF OVER
         RETURN

RDSBAYS2 RESET     KEY5
         READ      PATBAYS2,KEY5;;
         RETURN
