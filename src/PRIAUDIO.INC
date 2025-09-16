.
. PRIAUDIO.INC
. ------------
. Filename     : priaudaf
. Description  : Private Practice Cash Deposit Audit File I/O Subroutines
. Variables    : OVRCD    FORM    1
.                KEY31    DIM     31
.
RAPRAD1   MOVE      ZERO,OVRCD
          RESET     KEY31
          READ      PRIAUDA1,KEY31;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPRAD1   MOVE      ZERO,OVRCD
          RESET     KEY31
          READ      PRIAUDA1,KEY31;;
          RETURN
.
RDPRAD1   MOVE      ZERO,OVRCD
          RESET     KEY31
          READ      PRIAUDA1,KEY31;PRADDEBT,DPRADSCN,PRADPRAC,PRADRECP:
                                   DPRADTCN,PRADDATE,PRADTIME,PRADOPER:
                                   PRADPORT,PRADAMOU,PRADMETH,PRADDRAW:
                                   PRADBANK,PRADBRNC,PRADSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRADSCN,PRADSCAN
          MOVE      DPRADTCN,PRADTCNT
          MOVE      PRADAMOU,PRADAMNT
          RETURN
.
RKPRAD1   MOVE      ZERO,OVRCD
          RESET     KEY31
          READKS    PRIAUDA1;PRADDEBT,DPRADSCN,PRADPRAC,PRADRECP,DPRADTCN:
                             PRADDATE,PRADTIME,PRADOPER,PRADPORT,PRADAMOU:
                             PRADMETH,PRADDRAW,PRADBANK,PRADBRNC,PRADSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRADSCN,PRADSCAN
          MOVE      DPRADTCN,PRADTCNT
          MOVE      PRADAMOU,PRADAMNT
          RETURN
.
RPPRAD1   MOVE      ZERO,OVRCD
          RESET     KEY31
          READKP    PRIAUDA1;PRADDEBT,DPRADSCN,PRADPRAC,PRADRECP,DPRADTCN:
                             PRADDATE,PRADTIME,PRADOPER,PRADPORT,PRADAMOU:
                             PRADMETH,PRADDRAW,PRADBANK,PRADBRNC,PRADSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRADSCN,PRADSCAN
          MOVE      DPRADTCN,PRADTCNT
          MOVE      PRADAMOU,PRADAMNT
          RETURN
.
WRPRAD1   MOVE      PRADSCAN,DPRADSCN
          MOVE      PRADTCNT,DPRADTCN
          MOVE      PRADAMNT,PRADAMOU
          MOVE      ZERO,OVRCD
          RESET     KEY31
          WRITE     PRIAUDA1,KEY31;KEY31:
                                   PRADDATE,PRADTIME,PRADOPER,PRADPORT:
                                   PRADAMOU,PRADMETH,PRADDRAW,PRADBANK:
                                   PRADBRNC,PRADSPAR
          RETURN
.
UPPRAD1   MOVE      PRADSCAN,DPRADSCN
          MOVE      PRADTCNT,DPRADTCN
          MOVE      PRADAMNT,PRADAMOU
          UPDATE    PRIAUDA1;PRADDEBT,DPRADSCN,PRADPRAC,PRADRECP,DPRADTCN:
                             PRADDATE,PRADTIME,PRADOPER,PRADPORT,PRADAMOU:
                             PRADMETH,PRADDRAW,PRADBANK,PRADBRNC,PRADSPAR
          RETURN
.
DEPRAD1   RESET     KEY31
          DELETE    PRIAUDA1,KEY31
          RETURN
.
