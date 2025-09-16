.******************************************************************************
. PCPOUTIO.INC
. ------------
. Filename     : pcpoutaf
. Description  : Patient Care Plan Patient Outcomes file
. Variables    : OVRCD    FORM     1         0 = NOT OVER
.                                            1 = OVER
. KEY19        : PCPOUTA1
.******************************************************************************
.
. ------  I/O routines for 1st index ------
.
RAPCOUT1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      PCPOUTA1,KEY19;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPCOUT1  RESET     KEY19
          READ      PCPOUTA1,KEY19;;
          RETURN
.
RDPCOUT1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      PCPOUTA1,KEY19;PCOTUNIQ,PCOTCODE,PCOTDCOD,PCOTDATE,PCOTTYPE:
                    PCOTDYWK,PCOTSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPCOUT1  MOVE      ZERO,OVRCD
          READKS    PCPOUTA1;PCOTUNIQ,PCOTCODE,PCOTDCOD,PCOTDATE,PCOTTYPE:
                    PCOTDYWK,PCOTSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPCOUT1  MOVE      ZERO,OVRCD
          READKP    PCPOUTA1;PCOTUNIQ,PCOTCODE,PCOTDCOD,PCOTDATE,PCOTTYPE:
                    PCOTDYWK,PCOTSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPCOUT1  RESET     KEY19
          WRITE     PCPOUTA1,KEY19;PCOTUNIQ,PCOTCODE,PCOTDCOD,PCOTDATE,PCOTTYPE:
                    PCOTDYWK,PCOTSPAR
          RETURN
.
UPPCOUT1  
          UPDATE    PCPOUTA1;PCOTUNIQ,PCOTCODE,PCOTDCOD,PCOTDATE,PCOTTYPE:
                    PCOTDYWK,PCOTSPAR
          RETURN
.
DEPCOUT1  RESET     KEY19
          DELETE    PCPOUTA1,KEY19
          RETURN
.******************************************************************************
.
. ------  I/O routines for Audit ------
.
ASPCOUT   RESET     KEY19
          READ      PCPAUDOU,KEY19;;
          RETURN
.
AKPCOUT   MOVE      ZERO,OVRCD
          READKS    PCPAUDOU;PCOTAUDD,PCOTAUDT,PCOTAUDP,PCOTAUDR,PCOTAUDS:
                    PCOTAUDO,PCOTUNIQ,PCOTCODE,PCOTDCOD,PCOTDATE,PCOTTYPE:
                    PCOTDYWK,PCOTSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
AWPCOUT   RESET     KEY19
          WRITE     PCPAUDOU,KEY19;KEY19,PCOTAUDS,PCOTAUDO,PCOTUNIQ,PCOTCODE:
                    PCOTDCOD,PCOTDATE,PCOTTYPE:
                    PCOTDYWK,PCOTSPAR
          RETURN
.
ADPCOUT   RESET     KEY19
          DELETE    PCPAUDOU,KEY19
          RETURN
.******************************************************************************
