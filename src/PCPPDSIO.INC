.******************************************************************************
. PCPPDSIO.INC
. ------------
. Filename     : pcpdsfaf
. Description  : Patient Care Plan Patient Description file
. Variables    : OVRCD    FORM     1         0 = NOT OVER
.                                            1 = OVER
. KEY14        : PCPPDSA1
. KEY19        : PCPAUDPD
.******************************************************************************
.
. ------  I/O routines for 1st index ------
.
RAPCPDS1  MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      PCPPDSA1,KEY14;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPCPDS1  RESET     KEY14
          READ      PCPPDSA1,KEY14;;
          RETURN
.
RDPCPDS1  MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      PCPPDSA1,KEY14;DPCPDADM,PCPDDCOD,DPCPDLIN,PCPDDESC,PCPDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCPDADM,PCPDADMN
          MOVE      DPCPDLIN,PCPDLINE
          RETURN
.
RKPCPDS1  MOVE      ZERO,OVRCD
          READKS    PCPPDSA1;DPCPDADM,PCPDDCOD,DPCPDLIN,PCPDDESC,PCPDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCPDADM,PCPDADMN
          MOVE      DPCPDLIN,PCPDLINE
          RETURN
.
RPPCPDS1  MOVE      ZERO,OVRCD
          READKP    PCPPDSA1;DPCPDADM,PCPDDCOD,DPCPDLIN,PCPDDESC,PCPDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCPDADM,PCPDADMN
          MOVE      DPCPDLIN,PCPDLINE
          RETURN
.
WRPCPDS1  RESET     KEY14
          MOVE      PCPDADMN,DPCPDADM
          MOVE      PCPDLINE,DPCPDLIN
          WRITE     PCPPDSA1,KEY14;DPCPDADM,PCPDDCOD,DPCPDLIN,PCPDDESC,PCPDSPAR
          RETURN
.
UPPCPDS1  MOVE      PCPDADMN,DPCPDADM
          MOVE      PCPDLINE,DPCPDLIN
          UPDATE    PCPPDSA1;DPCPDADM,PCPDDCOD,DPCPDLIN,PCPDDESC,PCPDSPAR
          RETURN
.
DEPCPDS1  RESET     KEY14
          DELETE    PCPPDSA1,KEY14
          RETURN
.******************************************************************************
.
. ------  I/O routines for Audits ------
.
ASPCPDS   RESET     KEY19
          READ      PCPAUDPD,KEY19;;
          RETURN
.
AKPCPDS   MOVE      ZERO,OVRCD
          READKS    PCPAUDPD;PCPDAUDD,PCPDAUDT,PCPDAUDP,PCPDAUDR,PCPDAUDS:
                    PCPDAUDO,DPCPDADM,PCPDDCOD,DPCPDLIN,PCPDDESC,PCPDSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCPDADM,PCPDADMN
          MOVE      DPCPDLIN,PCPDLINE
          RETURN
.
AWPCPDS   RESET     KEY19
          MOVE      PCPDADMN,DPCPDADM
          MOVE      PCPDLINE,DPCPDLIN
          WRITE     PCPAUDPD,KEY19;KEY19,PCPDAUDS,PCPDAUDO,DPCPDADM,PCPDDCOD:
                    DPCPDLIN,PCPDDESC,PCPDSPAR
          RETURN
.
ADPCPDS   RESET     KEY19
          DELETE    PCPAUDPD,KEY19
          RETURN
.******************************************************************************
