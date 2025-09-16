.******************************************************************************
. PCPDEFIO.INC
. ------------
. Filename     : pcpdefaf
. Description  : Patient Care Plan Patient defining characteristics file
. Variables    : OVRCD    FORM     1         0 = NOT OVER
.                                            1 = OVER
. KEY19        : PCPDEFA1
.******************************************************************************
.
. ------  I/O routines for 1st index ------
.
RAPCDEF1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      PCPDEFA1,KEY19;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPCDEF1  RESET     KEY19
          READ      PCPDEFA1,KEY19;;
          RETURN
.
RDPCDEF1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      PCPDEFA1,KEY19;PCDEUNIQ,PCDECHAR,PCDEDCOD,PCDESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPCDEF1  MOVE      ZERO,OVRCD
          READKS    PCPDEFA1;PCDEUNIQ,PCDECHAR,PCDEDCOD,PCDESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPCDEF1  MOVE      ZERO,OVRCD
          READKP    PCPDEFA1;PCDEUNIQ,PCDECHAR,PCDEDCOD,PCDESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPCDEF1  RESET     KEY19
          WRITE     PCPDEFA1,KEY19;PCDEUNIQ,PCDECHAR,PCDEDCOD,PCDESPAR
          RETURN
.
UPPCDEF1  
          UPDATE    PCPDEFA1;PCDEUNIQ,PCDECHAR,PCDEDCOD,PCDESPAR
          RETURN
.
DEPCDEF1  RESET     KEY19
          DELETE    PCPDEFA1,KEY19
          RETURN
.******************************************************************************
.
. ------  I/O routines for Audit ------
.
ASPCDEF   RESET     KEY19
          READ      PCPAUDDE,KEY19;;
          RETURN
.
AKPCDEF   MOVE      ZERO,OVRCD
          READKS    PCPAUDDE;PCDEAUDD,PCDEAUDT,PCDEAUDP,PCDEAUDR,PCDEAUDS:
                    PCDEAUDO,PCDEUNIQ,PCDECHAR,PCDEDCOD,PCDESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
AWPCDEF   RESET     KEY19
          WRITE     PCPAUDDE,KEY19;KEY19,PCDEAUDS,PCDEAUDO,PCDEUNIQ,PCDECHAR:
                    PCDEDCOD,PCDESPAR
          RETURN
.
ADPCDEF   RESET     KEY19
          DELETE    PCPAUDDE,KEY19
          RETURN
.******************************************************************************
