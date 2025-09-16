.******************************************************************************
. PCPINTIO.INC
. ------------
. Filename        : pcpintaf
. Description     : Patient Care Plan Nursing Interventions file
. Variables       : OVRCD    FORM     1         0 = NOT OVER
.                                               1 = OVER
. KEY19           : PCPINTA1
. Modifications   : 19/11/1991    Justin Coates
.                   Added PCINSTAF and PCINTIME
.                   02/12/1993    Justin Coates  Quote 7841 SRF 123724
.                   added PCINODTE, PCINOSFT
.******************************************************************************
.
. ------  I/O routines for 1st index ------
.
RAPCINT1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      PCPINTA1,KEY19;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RSPCINT1  RESET     KEY19
          READ      PCPINTA1,KEY19;;
          RETURN
.
RDPCINT1  MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      PCPINTA1,KEY19;PCINUNIQ,PCINCODE,PCINDCOD,PCINFREQ,PCINSTAF:
                                   PCINTIME,PCINODTE,PCINOSFT,PCINSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPCINT1  MOVE      ZERO,OVRCD
          READKS    PCPINTA1;PCINUNIQ,PCINCODE,PCINDCOD,PCINFREQ,PCINSTAF:
                             PCINTIME,PCINODTE,PCINOSFT,PCINSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPCINT1  MOVE      ZERO,OVRCD
          READKP    PCPINTA1;PCINUNIQ,PCINCODE,PCINDCOD,PCINFREQ,PCINSTAF:
                             PCINTIME,PCINODTE,PCINOSFT,PCINSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
WRPCINT1  RESET     KEY19
          WRITE     PCPINTA1,KEY19;PCINUNIQ,PCINCODE,PCINDCOD,PCINFREQ,PCINSTAF:
                                   PCINTIME,PCINODTE,PCINOSFT,PCINSPAR
          RETURN
.
UPPCINT1  UPDATE    PCPINTA1;PCINUNIQ,PCINCODE,PCINDCOD,PCINFREQ,PCINSTAF:
                             PCINTIME,PCINODTE,PCINOSFT,PCINSPAR
          RETURN
.
DEPCINT1  RESET     KEY19
          DELETE    PCPINTA1,KEY19
          RETURN
.******************************************************************************
.
. ------  I/O routines for audits ------
.
ASPCINT   RESET     KEY19
          READ      PCPAUDIN,KEY19;;
          RETURN
.
AKPCINT   MOVE      ZERO,OVRCD
          READKS    PCPAUDIN;PCINAUDD,PCINAUDT,PCINAUDP,PCINAUDR,PCINAUDS:
                    PCINAUDO,PCINUNIQ,PCINCODE,PCINDCOD,PCINFREQ,PCINSTAF:
                    PCINTIME,PCINODTE,PCINOSFT,PCINSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
AWPCINT   RESET     KEY19
          WRITE     PCPAUDIN,KEY19;KEY19,PCINAUDS,PCINAUDO,PCINUNIQ,PCINCODE:
                    PCINDCOD,PCINFREQ,PCINSTAF,PCINTIME,PCINODTE,PCINOSFT,PCINSPAR
          RETURN
.
ADPCINT   RESET     KEY19
          DELETE    PCPAUDIN,KEY19
          RETURN
...............................................................................
