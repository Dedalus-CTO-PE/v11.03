.
. IO Include for PATORAFD
. Filename : patoraaf
.
.         positional read
.
RSPTORA1  RESET     KEY16
          READ      PATORAA1,KEY16;;
          RETURN
.
.         read to see if record exists
.
RAPTORA1  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      PATORAA1,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDPTORA1  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      PATORAA1,KEY16;PTORDATE,PTORFILE
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read with a lock
.
RLPTORA1  MOVE      ZERO,OVRCD
          RESET     KEY16
          READL     PATORAA1,KEY16;PTORDATE,PTORFILE
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKPTORA1  MOVE      ZERO,OVRCD
          READKS    PATORAA1;PTORDATE,PTORFILE
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPPTORA1  MOVE      ZERO,OVRCD
          READKP    PATORAA1;PTORDATE,PTORFILE
          GOTO      OVERCOND IF OVER
          RETURN
.
.         update
.
UPPTORA1  UPDATE    PATORAA1;PTORDATE,PTORFILE
          RETURN
.
.         write
.
WRPTORA1  RESET     KEY16
          WRITE     PATORAA1,KEY16;PTORDATE,PTORFILE
          RETURN
.
.         delete a record
.
DEPTORA1  RESET     KEY16
          DELETE    PATORAA1,KEY16
          RETURN
.
.         unlock all locks one user has on the file
.
ULPTORA1  UNLOCK    PATORAA1
          RETURN
.
