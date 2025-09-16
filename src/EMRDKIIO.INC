.
.         positional read
.
RSEMDK1   RESET     KEY25
          READ      EMRDKIA1,KEY25;;
          RETURN
.
.         read to see if record exists
.
RAEMDK1   MOVE      ZERO,OVRCD
          RESET     KEY25
          READ      EMRDKIA1,KEY25;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDEMDK1   MOVE      ZERO,OVRCD
          RESET     KEY25
          READ      EMRDKIA1,KEY25;EMDKDOC,EMDKKWD,EMDKSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKEMDK1   MOVE      ZERO,OVRCD
          READKS    EMRDKIA1;EMDKDOC,EMDKKWD,EMDKSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPEMDK1   MOVE      ZERO,OVRCD
          READKP    EMRDKIA1;EMDKDOC,EMDKKWD,EMDKSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
.         update
.
UPEMDK1   UPDATE    EMRDKIA1;EMDKDOC,EMDKKWD,EMDKSPA
          RETURN
.
.         write
.
WREMDK1   RESET     KEY25
          WRITE     EMRDKIA1,KEY25;EMDKDOC,EMDKKWD,EMDKSPA
          RETURN
.
.         delete a record
.
DEEMDK1   RESET     KEY25
          DELETE    EMRDKIA1,KEY25
          RETURN
.
.
.         positional read
.
RSEMDK2   RESET     KEY25
          READ      EMRDKIA2,KEY25;;
          RETURN
.
.         read to see if record exists
.
RAEMDK2   MOVE      ZERO,OVRCD
          RESET     KEY25
          READ      EMRDKIA2,KEY25;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDEMDK2   MOVE      ZERO,OVRCD
          RESET     KEY25
          READ      EMRDKIA2,KEY25;EMDKDOC,EMDKKWD,EMDKSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKEMDK2   MOVE      ZERO,OVRCD
          READKS    EMRDKIA2;EMDKDOC,EMDKKWD,EMDKSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPEMDK2   MOVE      ZERO,OVRCD
          READKP    EMRDKIA2;EMDKDOC,EMDKKWD,EMDKSPA
          GOTO      OVERCOND IF OVER
          RETURN
.
