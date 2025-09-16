.******************************************************************************
. PCPDSCIO.INC
. ------------
. Filename     : pcpdscaf
. Description  : Patient Care Plan Description file
. Variables    : OVRCD    FORM     1         0 = NOT OVER
.                                            1 = OVER
. KEY13        : PCPDSCA1
. KEY19        : PCPAUDDS
.******************************************************************************
.
. ------  I/O routines for 1st index ------
.
RAPCDSC1  MOVE      ZERO,OVRCD
          RESET     KEY13
          READ      PCPDSCA1,KEY13;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPCDSC1  RESET     KEY13
          READ      PCPDSCA1,KEY13;;
          RETURN
.
RDPCDSC1  MOVE      ZERO,OVRCD
          RESET     KEY13
          READ      PCPDSCA1,KEY13;DPCDSTYP,PCDSCODE,DPCDSLIN,PCDSDESC,PCDSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCDSTYP,PCDSTYPE
          MOVE      DPCDSLIN,PCDSLINE
          RETURN
.
RKPCDSC1  MOVE      ZERO,OVRCD
          READKS    PCPDSCA1;DPCDSTYP,PCDSCODE,DPCDSLIN,PCDSDESC,PCDSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCDSTYP,PCDSTYPE
          MOVE      DPCDSLIN,PCDSLINE
          RETURN
.
RPPCDSC1  MOVE      ZERO,OVRCD
          READKP    PCPDSCA1;DPCDSTYP,PCDSCODE,DPCDSLIN,PCDSDESC,PCDSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCDSTYP,PCDSTYPE
          MOVE      DPCDSLIN,PCDSLINE
          RETURN
.
WRPCDSC1  RESET     KEY13
          MOVE      PCDSTYPE,DPCDSTYP
          MOVE      PCDSLINE,DPCDSLIN
          WRITE     PCPDSCA1,KEY13;DPCDSTYP,PCDSCODE,DPCDSLIN,PCDSDESC,PCDSSPAR
          RETURN
.
UPPCDSC1  MOVE      PCDSTYPE,DPCDSTYP
          MOVE      PCDSLINE,DPCDSLIN
          UPDATE    PCPDSCA1;DPCDSTYP,PCDSCODE,DPCDSLIN,PCDSDESC,PCDSSPAR
          RETURN
.
DEPCDSC1  RESET     KEY13
          DELETE    PCPDSCA1,KEY13
          RETURN
.******************************************************************************
.
. ------  I/O routines for Audits ------
.
ASPCDSC   RESET     KEY19
          READ      PCPAUDDS,KEY19;;
          RETURN
.
AKPCDSC   MOVE      ZERO,OVRCD
          READKS    PCPAUDDS;PCDSAUDD,PCDSAUDT,PCDSAUDP,PCDSAUDR,PCDSAUDS:
                    PCDSAUDO,DPCDSTYP,PCDSCODE,DPCDSLIN,PCDSDESC,PCDSSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPCDSTYP,PCDSTYPE
          MOVE      DPCDSLIN,PCDSLINE
          RETURN
.
AWPCDSC   RESET     KEY19
          MOVE      PCDSTYPE,DPCDSTYP
          MOVE      PCDSLINE,DPCDSLIN
          WRITE     PCPAUDDS,KEY19;KEY19,PCDSAUDS,PCDSAUDO,DPCDSTYP,PCDSCODE:
                    DPCDSLIN,PCDSDESC,PCDSSPAR
          RETURN
.
ADPCDSC   RESET     KEY19
          DELETE    PCPAUDDS,KEY19
          RETURN
.******************************************************************************
