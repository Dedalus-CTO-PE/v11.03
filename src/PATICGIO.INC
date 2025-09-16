.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOICG                              *
. *                                                        *
. *  Function     :  I/O for paticdgf file                 *
. *                                                        *
. *  Keys         :  KEY5                                  *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                  V5.01.01 15/03/94 I.Rutt              *
. *                        Modified for record lock        *
. *                                                        *
. **********************************************************
.
WRICG1   MOVE      ZERO,OVRCD
         TRAP      OVERLOCK IF IO
         RESET     KEY5
         WRITE     PATICDG1,KEY5;GIDCODE,GGPCODE,GDESC
         TRAPCLR   IO
         RETURN
.
RDICG1
         MOVE      ZERO,OVRCD
         RESET     KEY5
         READ      PATICDG1,KEY5;GIDCODE,GGPCODE,GDESC
         GOTO      OVERCOND IF OVER
         RETURN
.
RLICG1
         MOVE      ZERO,OVRCD
         RESET     KEY5
         READL     PATICDG1,KEY5;GIDCODE,GGPCODE,GDESC
         GOTO      OVERCOND IF OVER
         GOTO      OVERLOCK IF LOCKED
         RETURN
.
RDKICG1
         MOVE      ZERO,OVRCD
         READKS    PATICDG1;GIDCODE,GGPCODE,GDESC
         GOTO      OVERCOND IF OVER
         RETURN
.
RDSICG1
         MOVE      ZERO,OVRCD
         RESET     KEY5
         READ      PATICDG1,KEY5;;
         GOTO      OVERCOND IF OVER
.
         RETURN
.
DEICG1
        RESET      KEY5
        DELETE     PATICDG1,KEY5
        RETURN
.
UPICG1
        RESET      KEY5
        UPDATE     PATICDG1;GIDCODE,GGPCODE,GDESC
        RETURN
.
ULICG1  UNLOCK     PATICDG1
        RETURN
.
