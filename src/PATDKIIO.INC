.
.         positional read
.
RSPTDK1   RESET     KEY21
          READ      PATDKIA1,KEY21;;
          RETURN
.
.         read to see if record exists
.
RAPTDK1   MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      PATDKIA1,KEY21;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDPTDK1   MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      PATDKIA1,KEY21;PTDKDOC,PTDKKWD,PTDKSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKPTDK1   MOVE      ZERO,OVRCD
          READKS    PATDKIA1;PTDKDOC,PTDKKWD,PTDKSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPPTDK1   MOVE      ZERO,OVRCD
          READKP    PATDKIA1;PTDKDOC,PTDKKWD,PTDKSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
.         update
.
UPPTDK1   UPDATE    PATDKIA1;PTDKDOC,PTDKKWD,PTDKSPA
          RETURN
.
.         write
.
WRPTDK1   RESET     KEY21
          WRITE     PATDKIA1,KEY21;PTDKDOC,PTDKKWD,PTDKSPA
          RETURN
.
.         delete a record
.
DEPTDK1   RESET     KEY21
          DELETE    PATDKIA1,KEY21
          RETURN
.
.
.         positional read
.
RSPTDK2   RESET     KEY21
          READ      PATDKIA2,KEY21;;
          RETURN
.
.         read to see if record exists
.
RAPTDK2   MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      PATDKIA2,KEY21;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDPTDK2   MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      PATDKIA2,KEY21;PTDKDOC,PTDKKWD,PTDKSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKPTDK2   MOVE      ZERO,OVRCD
          READKS    PATDKIA2;PTDKDOC,PTDKKWD,PTDKSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPPTDK2   MOVE      ZERO,OVRCD
          READKP    PATDKIA2;PTDKDOC,PTDKKWD,PTDKSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
