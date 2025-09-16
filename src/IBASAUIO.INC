.
.         positional read
.
RSIBSAU1  RESET     KEY21
          READ      IBASAUA1,KEY21;;
          RETURN
.
.         read to see if record exists
.
RAIBSAU1  MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      IBASAUA1,KEY21;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDIBSAU1  MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      IBASAUA1,KEY21;IBSAUSER,IBSADATE,IBSATIME,IBSAPASS,IBSASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKIBSAU1  MOVE      ZERO,OVRCD
          READKS    IBASAUA1;IBSAUSER,IBSADATE,IBSATIME,IBSAPASS,IBSASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPIBSAU1  MOVE      ZERO,OVRCD
          READKP    IBASAUA1;IBSAUSER,IBSADATE,IBSATIME,IBSAPASS,IBSASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         update
.
UPIBSAU1  UPDATE    IBASAUA1;IBSAUSER,IBSADATE,IBSATIME,IBSAPASS,IBSASPAR
          RETURN
.
.         write
.
WRIBSAU1  RESET     KEY21
          WRITE     IBASAUA1,KEY21;IBSAUSER,IBSADATE,IBSATIME,IBSAPASS,IBSASPAR
          RETURN
.
.         delete a record
.
DEIBSAU1  RESET     KEY21
          DELETE    IBASAUA1,KEY21
          RETURN
.
.
.         positional read
.
RSIBSAU2  RESET     KEY21
          READ      IBASAUA2,KEY21;;
          RETURN
.
.         read to see if record exists
.
RAIBSAU2  MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      IBASAUA2,KEY21;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDIBSAU2  MOVE      ZERO,OVRCD
          RESET     KEY21
          READ      IBASAUA2,KEY21;IBSAUSER,IBSADATE,IBSATIME,IBSAPASS,IBSASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKIBSAU2  MOVE      ZERO,OVRCD
          READKS    IBASAUA2;IBSAUSER,IBSADATE,IBSATIME,IBSAPASS,IBSASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPIBSAU2  MOVE      ZERO,OVRCD
          READKP    IBASAUA2;IBSAUSER,IBSADATE,IBSATIME,IBSAPASS,IBSASPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         update
.
UPIBSAU2  UPDATE    IBASAUA2;IBSAUSER,IBSADATE,IBSATIME,IBSAPASS,IBSASPAR
          RETURN
.
.         write
.
WRIBSAU2  RESET     KEY21
          WRITE     IBASAUA2,KEY21;IBSAUSER,IBSADATE,IBSATIME,IBSAPASS,IBSASPAR
          RETURN
.
.         delete a record
.
DEIBSAU2  RESET     KEY21
          DELETE    IBASAUA2,KEY21
          RETURN
.
