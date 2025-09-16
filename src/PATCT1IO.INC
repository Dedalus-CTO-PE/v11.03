.
. **********************************************************
. *                                                        *
. *  Include Name :  PATCT1IO                              *
. *                                                        *
. *  Function     :  I/O for patct1cf file                 *
. *                                                        *
. *  Keys         :  KEY4  KEY7  KEY8                      *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                  V5.01 12/01/94 I.Rutt                 *
. *                        Removed SFORMAT of address vars *
. *                        from PATCT1FD                   *
. **********************************************************
.
RDSCATC1  RESET     KEY8
          READ      PATCT1C1,KEY8;;
          RETURN
.
RDCATC1   MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATCT1C1,KEY8;CTCPOST,CTCCODE,CTCLGA,CTCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      CTCCODE,SCTCCODE
          MOVE      CTCLGA,SCTCLGA
          RETURN
.
RDKCATC1  MOVE      ZERO,OVRCD
          READKS    PATCT1C1;CTCPOST,CTCCODE,CTCLGA,CTCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      CTCCODE,SCTCCODE
          MOVE      CTCLGA,SCTCLGA
          RETURN
.
RDPCATC1  MOVE      ZERO,OVRCD
          READKP    PATCT1C1;CTCPOST,CTCCODE,CTCLGA,CTCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      CTCCODE,SCTCCODE
          MOVE      CTCLGA,SCTCLGA
          RETURN
.
WRCATC1   RESET     KEY8
          MOVE      KEY8,CTCPOST
          WRITE     PATCT1C1,KEY8;CTCPOST,CTCCODE,CTCLGA,CTCSPAR
          RETURN
.
UPCATC1   UPDATE    PATCT1C1;CTCPOST,CTCCODE,CTCLGA,CTCSPAR
          RETURN
.
DECATC1   RESET     KEY8
          DELETE    PATCT1C1,KEY8
          RETURN
.
.
RDSCATC2  RESET     KEY11
          READ      PATCT1C2,KEY11;;
          RETURN
.
RDCATC2   MOVE      ZERO,OVRCD
          RESET     KEY11
          READ      PATCT1C2,KEY11;CTCPOST,CTCCODE,CTCLGA,CTCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDKCATC2  MOVE      ZERO,OVRCD
          READKS    PATCT1C2;CTCPOST,CTCCODE,CTCLGA,CTCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPCATC2  MOVE      ZERO,OVRCD
          READKP    PATCT1C2;CTCPOST,CTCCODE,CTCLGA,CTCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      CTCCODE,SCTCCODE
          MOVE      CTCLGA,SCTCLGA
          RETURN
.
RDSCATC3  RESET     KEY12
          READ      PATCT1C3,KEY12;;
          RETURN
.
RDCATC3   MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      PATCT1C3,KEY12;CTCPOST,CTCCODE,CTCLGA,CTCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDKCATC3  MOVE      ZERO,OVRCD
          READKS    PATCT1C3;CTCPOST,CTCCODE,CTCLGA,CTCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPCATC3  MOVE      ZERO,OVRCD
          READKP    PATCT1C3;CTCPOST,CTCCODE,CTCLGA,CTCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      CTCCODE,SCTCCODE
          MOVE      CTCLGA,SCTCLGA
          RETURN
+
.

