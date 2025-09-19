.******************************************************************************
. PATTERIO.INC
. ------------
. Filename     : pcptteaf
. Description  : Patient Terminal location file
. Variables    : OVRCD    FORM     1         0 = NOT OVER
.                                            1 = OVER
. KEY2        : PATTERA1
. KEY19       : PATAUDTE
.******************************************************************************
.
. ------  I/O routines for 1st index ------
.
RAPTTER1  MOVE      ZERO,OVRCD
          RESET     KEY2
          READ      PATTERA1,KEY2;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPTTER1  RESET     KEY2
          READ      PATTERA1,KEY2;;
          RETURN
.
RDPTTER1  MOVE      ZERO,OVRCD
          RESET     KEY2
          READ      PATTERA1,KEY2;PTTEPORT,PTTETYPE,PTTENSTN,PTTESITE:
                    PTTECLIN,PTTESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTTER1  MOVE      ZERO,OVRCD
          READKS    PATTERA1;PTTEPORT,PTTETYPE,PTTENSTN,PTTESITE:
                    PTTECLIN,PTTESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTTER1  MOVE      ZERO,OVRCD
          READKP    PATTERA1;PTTEPORT,PTTETYPE,PTTENSTN,PTTESITE:
                    PTTECLIN,PTTESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPTTER1  RESET     KEY2
          WRITE     PATTERA1,KEY2;KEY2,PTTETYPE,PTTENSTN,PTTESITE:
                    PTTECLIN,PTTESPAR
          RETURN
.
UPPTTER1  
          UPDATE    PATTERA1;PTTEPORT,PTTETYPE,PTTENSTN,PTTESITE:
                    PTTECLIN,PTTESPAR
          RETURN
.
DEPTTER1  RESET     KEY2
          DELETE    PATTERA1,KEY2
          RETURN
.******************************************************************************
.
. ------  I/O routines for audit ------
.
ASPTTER   RESET     KEY19
          READ      PATAUDTE,KEY19;;
          RETURN
.
AKPTTER   MOVE      ZERO,OVRCD
          READKS    PATAUDTE;PTTEAUDD,PTTEAUDT,PTTEAUDP,PTTEAUDR,PTTEAUDS:
                    PTTEAUDO,PTTEPORT,PTTETYPE,PTTENSTN,PTTESITE:
                    PTTECLIN,PTTESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
AWPTTER   RESET     KEY19
          WRITE     PATAUDTE,KEY19;KEY19,PTTEAUDS,PTTEAUDO,PTTEPORT:
                    PTTETYPE,PTTENSTN,PTTESITE,PTTECLIN,PTTESPAR
          RETURN
.
ADPTTER   RESET     KEY19
          DELETE    PATAUDTE,KEY19
          RETURN
.******************************************************************************
