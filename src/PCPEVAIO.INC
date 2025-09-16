.******************************************************************************
. PCPEVAIO.INC
. ------------
. Filename     : pcpoutaf
. Description  : Patient Care Plan Patient Evaluation file
. Variables    : OVRCD    FORM     1         0 = NOT OVER
.                                            1 = OVER
. KEY26        : PCPEVAA1
.******************************************************************************
.
. ------  I/O routines for 1st index ------
.
RAPCEVA1  MOVE      ZERO,OVRCD
          RESET     KEY26
          READ      PCPEVAA1,KEY26;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPCEVA1  RESET     KEY26
          READ      PCPEVAA1,KEY26;;
          RETURN
.
RDPCEVA1  MOVE      ZERO,OVRCD
          RESET     KEY26
          READ      PCPEVAA1,KEY26;PCEVUNIQ,PCEVDATE,PCEVTIME,PCEVDCOD:
                    PCEVNURS,PCEVSTAT,PCEVSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPCEVA1  MOVE      ZERO,OVRCD
          READKS    PCPEVAA1;PCEVUNIQ,PCEVDATE,PCEVTIME,PCEVDCOD:
                    PCEVNURS,PCEVSTAT,PCEVSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPCEVA1  MOVE      ZERO,OVRCD
          READKP    PCPEVAA1;PCEVUNIQ,PCEVDATE,PCEVTIME,PCEVDCOD:
                    PCEVNURS,PCEVSTAT,PCEVSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPCEVA1  RESET     KEY26
          WRITE     PCPEVAA1,KEY26;PCEVUNIQ,PCEVDATE,PCEVTIME,PCEVDCOD:
                    PCEVNURS,PCEVSTAT,PCEVSPAR
          RETURN
.
UPPCEVA1  
          UPDATE    PCPEVAA1;PCEVUNIQ,PCEVDATE,PCEVTIME,PCEVDCOD:
                    PCEVNURS,PCEVSTAT,PCEVSPAR
          RETURN
.
DEPCEVA1  RESET     KEY26
          DELETE    PCPEVAA1,KEY26
          RETURN
.******************************************************************************
.
. ------  I/O routines for audit ------
.
ASPCEVA   RESET     KEY19
          READ      PCPAUDEV,KEY19;;
          RETURN
.
AKPCEVA   MOVE      ZERO,OVRCD
          READKS    PCPAUDEV;PCEVAUDD,PCEVAUDT,PCEVAUDP,PCEVAUDR,PCEVAUDS:
                    PCEVAUDO,PCEVUNIQ,PCEVDATE,PCEVTIME,PCEVDATE,PCEVDCOD:
                    PCEVNURS,PCEVSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
AWPCEVA   RESET     KEY19
          WRITE     PCPAUDEV,KEY19;KEY19,PCEVAUDS,PCEVAUDO,PCEVUNIQ,PCEVDATE:
                    PCEVTIME,PCEVDCOD,PCEVNURS,PCEVSPAR
          RETURN
.
ADPCEVA   RESET     KEY19
          DELETE    PCPAUDEV,KEY19
          RETURN
.******************************************************************************
