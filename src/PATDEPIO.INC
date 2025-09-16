.
. PATDEPIO.INC
. ------------
. Related FD    :   PATDEPFD.INC
. Filenames     :   patdepaf
. Description   :   Patient Management Department Ward File
. Author        :   Justin Coates    08/02/1991
. Variables     :   OVRCD   FORM    1          0 = NOT OVER
.                                              1 = OVER
.                   KEY14   DIM     14         KEY FOR PATDEPA1
.                   KEY14   DIM     14         KEY FOR PATDEPA2
. Modifications :  
.
. ---------------------------------------
. ------ I/O routines for PATDEPA1 ------
. ---------------------------------------
.
. ------ read to see if record exists ------
.
RAPTDEP1  MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      PATDEPA1,KEY14;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
. ------ positional read ------
.
RSPTDEP1  RESET     KEY14
          READ      PATDEPA1,KEY14;;
          RETURN
.
. ------ direct read ------
.
RDPTDEP1  MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      PATDEPA1,KEY14;PTDPDEPT,PTDPWARD,PTDPDATE,PTDPNBED,PTDPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
. ------ next read ------
.
RKPTDEP1  MOVE      ZERO,OVRCD
          READKS    PATDEPA1;PTDPDEPT,PTDPWARD,PTDPDATE,PTDPNBED,PTDPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
. ------ previous read ------
.
RPPTDEP1  MOVE      ZERO,OVRCD
          READKP    PATDEPA1;PTDPDEPT,PTDPWARD,PTDPDATE,PTDPNBED,PTDPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
. ------ write ------
.
WRPTDEP1  RESET     KEY14
          WRITE     PATDEPA1,KEY14;KEY14,PTDPNBED,PTDPSPAR
          RETURN
.
. ------ update ------
.
UPPTDEP1  RESET     KEY14
          UPDATE    PATDEPA1;PTDPDEPT,PTDPWARD,PTDPDATE,PTDPNBED,PTDPSPAR
          RETURN
.
. ------ delete ------
.
DEPTDEP1  RESET     KEY14
          DELETE    PATDEPA1,KEY14
          RETURN
.
. ---------------------------------------
. ------ I/O routines for PATDEPA2 ------
. ---------------------------------------
.
. ------ read to see if record exists ------
.
RAPTDEP2  MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      PATDEPA2,KEY14;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
. ------ positional read ------
.
RSPTDEP2  RESET     KEY14
          READ      PATDEPA2,KEY14;;
          RETURN
.
. ------ direct read ------
.
RDPTDEP2  MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      PATDEPA2,KEY14;PTDPDEPT,PTDPWARD,PTDPDATE,PTDPNBED,PTDPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
. ------ next read ------
.
RKPTDEP2  MOVE      ZERO,OVRCD
          READKS    PATDEPA2;PTDPDEPT,PTDPWARD,PTDPDATE,PTDPNBED,PTDPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
. ------ previous read ------
.
RPPTDEP2  MOVE      ZERO,OVRCD
          READKP    PATDEPA2;PTDPDEPT,PTDPWARD,PTDPDATE,PTDPNBED,PTDPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
