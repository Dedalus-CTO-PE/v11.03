. *****************************************************************************
. *                                                                           *
. *      Include Name : PATSFAIO.INC                                          *
. *                                                                           *
. *      Function     : I/O for patsfaaf file                                 *
. *                                                                           *
. *      Keys         : KEY1                                                  *
. *                                                                           *
. *      Modifications:                                                       *
. *                                                                           *
. *****************************************************************************
.
RSPTSFA1  RESET     KEY1
          READ      PATSFAA1,KEY1;;
          RETURN
.
RAPTSFA1  MOVE      ZERO,OVRCD
          RESET     KEY1
          READ      PATSFAA1,KEY1;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTSFA1  MOVE      ZERO,OVRCD
          RESET     KEY1
          READ      PATSFAA1,KEY1;PTSFCODE,PTSFDESC,PTSFSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTSFA1  MOVE      ZERO,OVRCD
          READKS    PATSFAA1;PTSFCODE,PTSFDESC,PTSFSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTSFA1  MOVE      ZERO,OVRCD
          READKP    PATSFAA1;PTSFCODE,PTSFDESC,PTSFSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPTSFA1  RESET     KEY1
          WRITE     PATSFAA1,KEY1;PTSFCODE,PTSFDESC,PTSFSPAR
          RETURN
.
UPPTSFA1  UPDATE    PATSFAA1;PTSFCODE,PTSFDESC,PTSFSPAR
          RETURN
.
DEPTSFA1  RESET     KEY1
          DELETE    PATSFAA1,KEY1
          RETURN
+
.


