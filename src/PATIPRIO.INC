.--------------------------------------------------------------------------
. PATIPRIO.INC
. ------------
. Filename       :  patipraf
. Description    :  Patient Medical Claims details for Johns Hopkins
. Variables      :  OVRCD     FORM      1
.                   KEY19     DIM       19
.-------------------------------------------------------------------------- 
.
RAPTIPA1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      PATIPRA1,KEY19;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTIPA1  RESET     KEY19
          READ      PATIPRA1,KEY19;;
          RETURN
.
RDPTIPA1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      PATIPRA1,KEY19;PTIRVISN,PTIRINVN,PTIRCOUN,PTIRMEDI,PTIRPOLA:
                                   PTIRCHOL,PTIRCPFN,PTIRAMNT,PTIRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RLPTIPA1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READL     PATIPRA1,KEY19;PTIRVISN,PTIRINVN,PTIRCOUN,PTIRMEDI,PTIRPOLA:
                                   PTIRCHOL,PTIRCPFN,PTIRAMNT,PTIRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTIPA1  MOVE      ZERO,OVRCD
          READKS    PATIPRA1;PTIRVISN,PTIRINVN,PTIRCOUN,PTIRMEDI,PTIRPOLA:
                             PTIRCHOL,PTIRCPFN,PTIRAMNT,PTIRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTIPA1  MOVE      ZERO,OVRCD
          READKP    PATIPRA1;PTIRVISN,PTIRINVN,PTIRCOUN,PTIRMEDI,PTIRPOLA:
                             PTIRCHOL,PTIRCPFN,PTIRAMNT,PTIRSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTIPA1  UPDATE    PATIPRA1;PTIRVISN,PTIRINVN,PTIRCOUN,PTIRMEDI,PTIRPOLA:
                             PTIRCHOL,PTIRCPFN,PTIRAMNT,PTIRSPAR
          RETURN
.
WRPTIPA1  RESET     KEY19
          WRITE     PATIPRA1,KEY19;PTIRVISN,PTIRINVN,PTIRCOUN,PTIRMEDI,PTIRPOLA:
                                   PTIRCHOL,PTIRCPFN,PTIRAMNT,PTIRSPAR
          RETURN
.
DEPTIPA1  RESET     KEY19
          DELETE    PATIPRA1,KEY19
          RETURN
.
ULPTIRA1  UNLOCK    PATIPRA1
          RETURN
. 
