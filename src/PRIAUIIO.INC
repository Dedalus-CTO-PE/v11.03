.
. PRIAUIIO.INC
. ------------
. Filename     : priauiaf
. Description  : Private Practice Cash Deposits Invoiced Audit File I/O
.                Subroutines
. Variables    : OVRCD    FORM    1
.                KEY18    DIM     18
.
RAPRAI1   MOVE      ZERO,OVRCD
          RESET     KEY18
          READ      PRIAUIA1,KEY18;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPRAI1   RESET     KEY18
          READ      PRIAUIA1,KEY18;;
          RETURN
.
RDPRAI1   MOVE      ZERO,OVRCD
          RESET     KEY18
          READ      PRIAUIA1,KEY18;PRAIDEBT,DPRAISCN,PRAIINVN,PRAIIDTE:
                                   PRAIDDTE,PRAIOPER,PRAIPORT,PRAIAMNT,PRAISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRAISCN,PRAISCAN
          RETURN
.
RKPRAI1   MOVE      ZERO,OVRCD
          READKS    PRIAUIA1;PRAIDEBT,DPRAISCN,PRAIINVN,PRAIIDTE,PRAIDDTE:
                                      PRAIOPER,PRAIPORT,PRAIAMNT,PRAISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRAISCN,PRAISCAN
          RETURN
.
RPPRAI1   MOVE      ZERO,OVRCD
          READKP    PRIAUIA1;PRAIDEBT,DPRAISCN,PRAIINVN,PRAIIDTE,PRAIDDTE:
                             PRAIOPER,PRAIPORT,PRAIAMNT,PRAISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPRAISCN,PRAISCAN
          RETURN
.
WRPRAI1   MOVE      ZERO,OVRCD
          RESET     KEY18
          WRITE     PRIAUIA1,KEY18;KEY18,PRAIIDTE,PRAIDDTE,PRAIOPER,PRAIPORT:
                                   PRAIAMNT,PRAISPAR
          RETURN
.
UPPRAI1   MOVE      PRAISCAN,DPRAISCN
          UPDATE    PRIAUIA1;PRAIDEBT,DPRAISCN,PRAIINVN,PRAIIDTE,PRAIDDTE:
                             PRAIOPER,PRAIPORT,PRAIAMNT,PRAISPAR
          RETURN
.
DEPRAI1   RESET     KEY18
          DELETE    PRIAUIA1,KEY18
          RETURN
.
