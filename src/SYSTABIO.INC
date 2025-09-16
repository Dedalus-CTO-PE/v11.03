.  ****************************************************************************
.  *                                                                          *
.  *  Include Name    :   SYSTABIO.INC                                        *
.  *                                                                          *
.  *  Modifications   :                                                       *
.  *      V9.03.01  09/09/2003  CAR 43237   Mike Laming                       *
.  *                Add a IO routines for new "systables" where Directory     *
.  *                Paths are 256 characters. Uses SYSTABLX                   *
.  ****************************************************************************
RSSYTB1   RESET     KEY26
          READ      SYSTABLE,KEY26;;
          RETURN
.
RASYTB1   RESET     KEY26
          MOVE      ZERO,OVRCD
          READ      SYSTABLE,KEY26;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSYTB1   RESET     KEY26
          MOVE      ZERO,OVRCD
          READ      SYSTABLE,KEY26;SYTBNAME,SYTBOWN,SYTBPATH
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSYTB1   MOVE      ZERO,OVRCD
          READKS    SYSTABLE;SYTBNAME,SYTBOWN,SYTBPATH
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSYTB1   MOVE      ZERO,OVRCD
          READKP    SYSTABLE;SYTBNAME,SYTBOWN,SYTBPATH
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSYTB1   UPDATE    SYSTABLE;SYTBNAME,SYTBOWN,SYTBPATH
          RETURN
.
.* ****************************************** Start of Addition        *I-90301
RSSYTX1   RESET     KEY26
          READ      SYSTABLX,KEY26;;
          RETURN
.
RASYTX1   RESET     KEY26
          MOVE      ZERO,OVRCD
          READ      SYSTABLX,KEY26;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSYTX1   RESET     KEY26
          MOVE      ZERO,OVRCD
          READ      SYSTABLX,KEY26;SYTBNAME,SYTBOWN,SYTBPATX,SYTBPAT2,SYTBPAT3
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSYTX1   MOVE      ZERO,OVRCD
          READKS    SYSTABLX;SYTBNAME,SYTBOWN,SYTBPATX,SYTBPAT2,SYTBPAT3
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSYTX1   MOVE      ZERO,OVRCD
          READKP    SYSTABLX;SYTBNAME,SYTBOWN,SYTBPATX,SYTBPAT2,SYTBPAT3
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSYTX1   UPDATE    SYSTABLX;SYTBNAME,SYTBOWN,SYTBPATX,SYTBPAT2,SYTBPAT3
          RETURN
