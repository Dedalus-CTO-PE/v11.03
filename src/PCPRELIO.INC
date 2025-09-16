.******************************************************************************
. PCPRELIO.INC
. ------------
. Filename     : pcpcrlaf
. Description  : Patient Care Plan Patient related factors file
. Variables    : OVRCD    FORM     1         0 = NOT OVER
.                                            1 = OVER
. KEY19        : PCPRELA1
.******************************************************************************
.
. ------  I/O routines for 1st index ------
.
RAPCREL1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      PCPRELA1,KEY19;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPCREL1  RESET     KEY19
          READ      PCPRELA1,KEY19;;
          RETURN
.
RDPCREL1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      PCPRELA1,KEY19;PCREUNIQ,PCREFACT,PCREDCOD,PCRESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPCREL1  MOVE      ZERO,OVRCD
          READKS    PCPRELA1;PCREUNIQ,PCREFACT,PCREDCOD,PCRESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPCREL1  MOVE      ZERO,OVRCD
          READKP    PCPRELA1;PCREUNIQ,PCREFACT,PCREDCOD,PCRESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPCREL1  RESET     KEY19
          WRITE     PCPRELA1,KEY19;PCREUNIQ,PCREFACT,PCREDCOD,PCRESPAR
          RETURN
.
UPPCREL1  
          UPDATE    PCPRELA1;PCREUNIQ,PCREFACT,PCREDCOD,PCRESPAR
          RETURN
.
DEPCREL1  RESET     KEY19
          DELETE    PCPRELA1,KEY19
          RETURN
.******************************************************************************
.
. ------  I/O routines for audit------
 
ASPCREL   RESET     KEY19
          READ      PCPAUDRE,KEY19;;
          RETURN
.
AKPCREL   MOVE      ZERO,OVRCD
          READKS    PCPAUDRE;PCREAUDD,PCREAUDT,PCREAUDP,PCREAUDR,PCREAUDS:
                    PCREAUDO,PCREUNIQ,PCREFACT,PCREDCOD,PCRESPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
AWPCREL   RESET     KEY19
          WRITE     PCPAUDRE,KEY19;KEY19,PCREAUDS,PCREAUDO,PCREUNIQ,PCREFACT:
                    PCREDCOD,PCRESPAR
          RETURN
.
ADPCREL   RESET     KEY19
          DELETE    PCPAUDRE,KEY19
          RETURN
.******************************************************************************
