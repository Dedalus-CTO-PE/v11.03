.
. PATSGCIO.INC
. ------------
. Filenames    : patsgcaf
. Description  : Suggested Classification Exceptions File
. Variables    : OVRCD   FORM    1          0 = NOT OVER
.                                           1 = OVER
.                KEY18   DIM     18         KEY FOR PATSGCA1
.
. ---------------------------------------
. ------ I/O routines for PATSGCA1 ------
. ---------------------------------------
.
. ------- read to see if record exists -------
.
RAPTSGC1  MOVE      ZERO,OVRCD
          RESET     KEY18
          READ      PATSGCA1,KEY18;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
. ------- positional read -------
.
RSPTSGC1  RESET     KEY18
          READ      PATSGCA1,KEY18;;
          RETURN
.
. ------- direct read -------
.
RDPTSGC1  MOVE      ZERO,OVRCD
          RESET     KEY18
          READ      PATSGCA1,KEY18;PTSGFUND,PTSGMBS,PTSGCLSS,PTSGCLMN,PTSGSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
. ------- next read -------
.
RKPTSGC1  MOVE      ZERO,OVRCD
          READKS    PATSGCA1;PTSGFUND,PTSGMBS,PTSGCLSS,PTSGCLMN,PTSGSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
. ------- previous read -------
.
RPPTSGC1  MOVE      ZERO,OVRCD
          READKP    PATSGCA1;PTSGFUND,PTSGMBS,PTSGCLSS,PTSGCLMN,PTSGSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
. ------- write -------
.
WRPTSGC1  RESET     KEY18
          WRITE     PATSGCA1,KEY18;PTSGFUND,PTSGMBS,PTSGCLSS,PTSGCLMN,PTSGSPAR
          RETURN
.
. ------- update -------
.
UPPTSGC1  RESET     KEY18
          UPDATE    PATSGCA1;PTSGFUND,PTSGMBS,PTSGCLSS,PTSGCLMN,PTSGSPAR
          RETURN
.
. ------- delete -------
.
DEPTSGC1  RESET     KEY18
          DELETE    PATSGCA1,KEY18
          RETURN
.
