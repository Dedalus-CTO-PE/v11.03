.
.         positional read
.
RSIBCHG1  RESET     KEY3
          READ      IBACHGA1,KEY3;;
          RETURN
.
.         read to see if record exists
.
RAIBCHG1  MOVE      ZERO,OVRCD
          RESET     KEY3
          READ      IBACHGA1,KEY3;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDIBCHG1  MOVE      ZERO,OVRCD
          RESET     KEY3
          READ      IBACHGA1,KEY3;IBCHCHRG,IBCHRATE,IBCHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKIBCHG1  MOVE      ZERO,OVRCD
          READKS    IBACHGA1;IBCHCHRG,IBCHRATE,IBCHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPIBCHG1  MOVE      ZERO,OVRCD
          READKP    IBACHGA1;IBCHCHRG,IBCHRATE,IBCHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         update
.
UPIBCHG1  UPDATE    IBACHGA1;IBCHCHRG,IBCHRATE,IBCHSPAR
          RETURN
.
.         write
.
WRIBCHG1  RESET     KEY3
          WRITE     IBACHGA1,KEY3;IBCHCHRG,IBCHRATE,IBCHSPAR
          RETURN
.
.         delete a record
.
DEIBCHG1  RESET     KEY3
          DELETE    IBACHGA1,KEY3
          RETURN
.
