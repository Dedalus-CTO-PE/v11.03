. *****************************************************************************
. *                                                                           *
. *      Include Name : IBAPOSIO.INC                                          *
. *                                                                           *
. *      Function     : I/O for ibapostf file                                 *
. *                                                                           *
. *      Keys         : KEY56 KEY56                                           *
. *                                                                           *
. *      Modifications:                                                       *
. *       V10.14.01 25/03/2019  Peter Vela    Task 0857392                    *
. *                 Added IBPORRAV - Regional and Remote Areas Value          *
. *       V10.03.01 15/11/2011  Mike Laming   CAR 240184                      *
. *                 Change Keys to KEY56 (from KEY49) Post Code to DIM 8 and  *
. *                 State added to both Keys                                  *
. *                                                                           *
. *****************************************************************************
.
RSIBPOS1  RESET     KEY56
          READ      IBAPOST1,KEY56;;
          RETURN
.
RAIBPOS1  MOVE      ZERO,OVRCD
          RESET     KEY56
          READ      IBAPOST1,KEY56;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBPOS1  MOVE      ZERO,OVRCD
          RESET     KEY56
          READ      IBAPOST1,KEY56;IBPOPCOD,IBPOSUBR,IBPOSTAT,IBPOASGC,IBPORRAV:
                    IBPOSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBPOS1  MOVE      ZERO,OVRCD
          READKS    IBAPOST1;IBPOPCOD,IBPOSUBR,IBPOSTAT,IBPOASGC,IBPORRAV:
                    IBPOSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBPOS1  MOVE      ZERO,OVRCD
          READKP    IBAPOST1;IBPOPCOD,IBPOSUBR,IBPOSTAT,IBPOASGC,IBPORRAV:
                    IBPOSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRIBPOS1  RESET     KEY56
          WRITE     IBAPOST1,KEY56;IBPOPCOD,IBPOSUBR,IBPOSTAT,IBPOASGC,IBPORRAV:
                    IBPOSPAR
          RETURN
.
UPIBPOS1  UPDATE    IBAPOST1;IBPOPCOD,IBPOSUBR,IBPOSTAT,IBPOASGC,IBPORRAV:
                    IBPOSPAR
          RETURN
.
DEIBPOS1  RESET     KEY56
          DELETE    IBAPOST1,KEY56
          RETURN
+
.
RSIBPOS2  RESET     KEY56
          READ      IBAPOST2,KEY56;;
          RETURN
.
RAIBPOS2  MOVE      ZERO,OVRCD
          RESET     KEY56
          READ      IBAPOST2,KEY56;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBPOS2  MOVE      ZERO,OVRCD
          RESET     KEY56
          READ      IBAPOST2,KEY56;IBPOPCOD,IBPOSUBR,IBPOSTAT,IBPOASGC,IBPORRAV:
                    IBPOSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBPOS2  MOVE      ZERO,OVRCD
          READKS    IBAPOST2;IBPOPCOD,IBPOSUBR,IBPOSTAT,IBPOASGC,IBPORRAV:
                    IBPOSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBPOS2  MOVE      ZERO,OVRCD
          READKP    IBAPOST2;IBPOPCOD,IBPOSUBR,IBPOSTAT,IBPOASGC,IBPORRAV:
                    IBPOSPAR
          GOTO      OVERCOND IF OVER
          RETURN
+
.

