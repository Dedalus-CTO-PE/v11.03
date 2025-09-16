.******************************************************************************
. PCPDBSIO.INC
. ------------
. Filename     : pcpdbsaf
. Description  : Patient Care Plan Database file
. Variables    : OVRCD    FORM     1         0 = NOT OVER
.                                            1 = OVER
. KEY20        : PCPDBSA1
.******************************************************************************
.
. ------  I/O routines for 1st index ------
.
RAPCDBS1  MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      PCPDBSA1,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPCDBS1  RESET     KEY20
          READ      PCPDBSA1,KEY20;;
          RETURN
.
RDPCDBS1  MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      PCPDBSA1,KEY20;DPCDBTYP,PCDBCLSS,PCDBCODE,PCDBSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCDBTYP,PCDBTYPE
          RETURN
.
RKPCDBS1  MOVE      ZERO,OVRCD
          READKS    PCPDBSA1;DPCDBTYP,PCDBCLSS,PCDBCODE,PCDBSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCDBTYP,PCDBTYPE
          RETURN
.
RPPCDBS1  MOVE      ZERO,OVRCD
          READKP    PCPDBSA1;DPCDBTYP,PCDBCLSS,PCDBCODE,PCDBSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCDBTYP,PCDBTYPE
          RETURN
.
WRPCDBS1  RESET     KEY20
          MOVE      PCDBTYPE,DPCDBTYP
          WRITE     PCPDBSA1,KEY20;DPCDBTYP,PCDBCLSS,PCDBCODE,PCDBSPAR
          RETURN
.
UPPCDBS1  MOVE      PCDBTYPE,DPCDBTYP
          UPDATE    PCPDBSA1;DPCDBTYP,PCDBCLSS,PCDBCODE,PCDBSPAR
          RETURN
.
DEPCDBS1  RESET     KEY20
          DELETE    PCPDBSA1,KEY20
          RETURN
.******************************************************************************
.
. ------  I/O routines for audits ------
.
ASPCDBS   RESET     KEY19
          READ      PCPAUDDB,KEY19;;
          RETURN
.
AKPCDBS   MOVE      ZERO,OVRCD
          READKS    PCPAUDDB;PCDBAUDD,PCDBAUDT,PCDBAUDP,PCDBAUDR,PCDBAUDS:
                    PCDBAUDO,DPCDBTYP,PCDBCLSS,PCDBCODE,PCDBSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCDBTYP,PCDBTYPE
          RETURN
.
AWPCDBS   RESET     KEY19
          MOVE      PCDBTYPE,DPCDBTYP
          WRITE     PCPAUDDB,KEY19;KEY19,PCDBAUDS,PCDBAUDO,DPCDBTYP,PCDBCLSS:
                    PCDBCODE,PCDBSPAR
          RETURN
.
ADPCDBS   RESET     KEY19
          DELETE    PCPAUDDB,KEY19
          RETURN
.******************************************************************************
