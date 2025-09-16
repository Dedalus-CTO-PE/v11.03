.******************************************************************************
. PCPDISIO.INC
. ------------
. Filename     : pcpdisaf
. Description  : Patient Care Plan Patient discharges file
. Variables    : OVRCD    FORM     1         0 = NOT OVER
.                                            1 = OVER
. KEY9         : PCPDISA1
.******************************************************************************
.
. ------  I/O routines for 1st index ------
.
RAPCDIS1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PCPDISA1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPCDIS1  RESET     KEY9
          READ      PCPDISA1,KEY9;;
          RETURN
.
RDPCDIS1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PCPDISA1,KEY9;DPCDHADM,DPCDHTYP,PCDHDCOD,PCDISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCDHADM,PCDHADMN
          MOVE      DPCDHTYP,PCDHTYPE
          RETURN
.
RKPCDIS1  MOVE      ZERO,OVRCD
          READKS    PCPDISA1;DPCDHADM,DPCDHTYP,PCDHDCOD,PCDISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCDHADM,PCDHADMN
          MOVE      DPCDHTYP,PCDHTYPE
          RETURN
.
RPPCDIS1  MOVE      ZERO,OVRCD
          READKP    PCPDISA1;DPCDHADM,DPCDHTYP,PCDHDCOD,PCDISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCDHADM,PCDHADMN
          MOVE      DPCDHTYP,PCDHTYPE
          RETURN
.
WRPCDIS1  RESET     KEY9
          MOVE      PCDHADMN,DPCDHADM
          MOVE      PCDHTYPE,DPCDHTYP
          WRITE     PCPDISA1,KEY9;DPCDHADM,DPCDHTYP,PCDHDCOD,PCDISPAR
          RETURN
.
UPPCDIS1  MOVE      PCDHADMN,DPCDHADM
          MOVE      PCDHTYPE,DPCDHTYP
          UPDATE    PCPDISA1;DPCDHADM,DPCDHTYP,PCDHDCOD,PCDISPAR
          RETURN
.
DEPCDIS1  RESET     KEY9
          DELETE    PCPDISA1,KEY9
          RETURN
.******************************************************************************
.
. ------  I/O routines for audit ------
.
ASPCDIS   RESET     KEY19
          READ      PCPAUDDH,KEY19;;
          RETURN
.
AKPCDIS   MOVE      ZERO,OVRCD
          READKS    PCPAUDDH;PCDHAUDD,PCDHAUDT,PCDHAUDP,PCDHAUDR,PCDHAUDS:
                    PCDHAUDO,DPCDHADM,DPCDHTYP,PCDHDCOD,PCDISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCDHADM,PCDHADMN
          MOVE      DPCDHTYP,PCDHTYPE
          RETURN
.
AWPCDIS   RESET     KEY19
          MOVE      PCDHADMN,DPCDHADM
          MOVE      PCDHTYPE,DPCDHTYP
          WRITE     PCPAUDDH,KEY19;KEY19,PCDHAUDS,PCDHAUDO,DPCDHADM,DPCDHTYP:
                    PCDHDCOD,PCDISPAR
          RETURN
.
ADPCDIS   RESET     KEY19
          DELETE    PCPAUDDH,KEY19
          RETURN
.******************************************************************************
