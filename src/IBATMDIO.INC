.
. IBATMDIO.INC
. ------------
. Filename     : ibatmdaf
. Description  : IBA Variable Definition File for User Defined Stationary
.                I/O Subroutines
. Variables    : OVRCD    FORM    1
.                KEY12    DIM     12
.
RAIBDET1  MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      IBATDET1,KEY12;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSIBDET1  MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      IBATDET1,KEY12;;
          RETURN
.
RDIBDET1  MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      IBATDET1,KEY12;IBDTSCOD,DIBDTROW,DIBDTCOL,IBDTINDC,IBDTPLEN:
                                   IBDTCOLR,IBDTTXFL,IBDTPIND,IBDTSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DIBDTROW,IBDTROW 
          MOVE      DIBDTCOL,IBDTCOL 
          RETURN
.
RKIBDET1  MOVE      ZERO,OVRCD
          RESET     KEY12
          READKS    IBATDET1;IBDTSCOD,DIBDTROW,DIBDTCOL,IBDTINDC,IBDTPLEN:
                             IBDTCOLR,IBDTTXFL,IBDTPIND,IBDTSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DIBDTROW,IBDTROW 
          MOVE      DIBDTCOL,IBDTCOL 
          RETURN
.
RPIBDET1  MOVE      ZERO,OVRCD
          RESET     KEY12
          READKP    IBATDET1;IBDTSCOD,DIBDTROW,DIBDTCOL,IBDTINDC,IBDTPLEN:
                             IBDTCOLR,IBDTTXFL,IBDTPIND,IBDTSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DIBDTROW,IBDTROW 
          MOVE      DIBDTCOL,IBDTCOL 
          RETURN
.
WRIBDET1  MOVE      ZERO,OVRCD
          RESET     KEY12
          MOVE      IBDTROW,DIBDTROW
          MOVE      IBDTCOL,DIBDTCOL
          WRITE     IBATDET1,KEY12;KEY12,IBDTINDC,IBDTPLEN,IBDTCOLR,IBDTTXFL:
                                   IBDTPIND,IBDTSPAR
          RETURN
.
UPIBDET1  MOVE      IBDTROW,DIBDTROW
          MOVE      IBDTCOL,DIBDTCOL
          UPDATE    IBATDET1;IBDTSCOD,DIBDTROW,DIBDTCOL,IBDTINDC,IBDTPLEN:
                             IBDTCOLR,IBDTTXFL,IBDTPIND,IBDTSPAR
          RETURN
.
DEIBDET1  RESET     KEY12
          DELETE    IBATDET1,KEY12
          RETURN
.
