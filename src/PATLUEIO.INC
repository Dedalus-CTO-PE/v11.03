.
. PATLUEIO.INC
. ------------
. Filenames       : patlueaf
. Description     : Last U/R Entered file
.
.         positional read
.
RSPTLUE1  RESET     KEY4
          READ      PATLUEA1,KEY4;;
          RETURN
.
.         read to see if record exists
.
RAPTLUE1  MOVE      ZERO,OVRCD
          RESET     KEY4
          READ      PATLUEA1,KEY4;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDPTLUE1  MOVE      ZERO,OVRCD
          RESET     KEY4
          READ      PATLUEA1,KEY4;PTLUOPER,PTLUURNO
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read with a lock
.
RLPTLUE1  MOVE      ZERO,OVRCD
          RESET     KEY4
          READL     PATLUEA1,KEY4;PTLUOPER,PTLUURNO
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKPTLUE1  MOVE      ZERO,OVRCD
          READKS    PATLUEA1;PTLUOPER,PTLUURNO
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPPTLUE1  MOVE      ZERO,OVRCD
          READKP    PATLUEA1;PTLUOPER,PTLUURNO
          GOTO      OVERCOND IF OVER
          RETURN
.
.         update
.
UPPTLUE1  UPDATE    PATLUEA1;PTLUOPER,PTLUURNO
          RETURN
.
.         write
.
WRPTLUE1  RESET     KEY4
          WRITE     PATLUEA1,KEY4;PTLUOPER,PTLUURNO
          RETURN
.
.         delete a record
.
DEPTLUE1  RESET     KEY4
          DELETE    PATLUEA1,KEY4
          RETURN
.
.         unlock all locks one user has on the file
.
ULPTLUE1  UNLOCK    PATLUEA1
          RETURN
.
