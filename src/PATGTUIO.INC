.
.         positional read
.
RSPTGTU1  RESET     KEY8
          READ      PATGTUA1,KEY8;;
          RETURN
.
.         read to see if record exists
.
RAPTGTU1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATGTUA1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDPTGTU1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      PATGTUA1,KEY8;DPTGTADM,PTGTGSTA,PTGTGSTM,PTGTSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTGTADM,PTGTADMN
          RETURN
.
.         next read
.
RKPTGTU1  MOVE      ZERO,OVRCD
          READKS    PATGTUA1;DPTGTADM,PTGTGSTA,PTGTGSTM,PTGTSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTGTADM,PTGTADMN
          RETURN
.
.         previous read
.
RPPTGTU1  MOVE      ZERO,OVRCD
          READKP    PATGTUA1;DPTGTADM,PTGTGSTA,PTGTGSTM,PTGTSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTGTADM,PTGTADMN
          RETURN
.
.         update
.
UPPTGTU1  MOVE      PTGTADMN,DPTGTADM
          UPDATE    PATGTUA1;DPTGTADM,PTGTGSTA,PTGTGSTM,PTGTSPAR
          RETURN
.
.         write
.
WRPTGTU1  MOVE      PTGTADMN,DPTGTADM
          RESET     KEY8
          WRITE     PATGTUA1,KEY8;DPTGTADM,PTGTGSTA,PTGTGSTM,PTGTSPAR
          RETURN
.
.         delete a record
.
DEPTGTU1  RESET     KEY8
          DELETE    PATGTUA1,KEY8
          RETURN
.
