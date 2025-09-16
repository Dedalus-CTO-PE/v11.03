.**************************************************************************
.
. Include Name : OPRPCMIO
. Data file    : oprcpmaf
. Keys         : KEY24
.
.**************************************************************************
.
RSOPPCM1  RESET     KEY24
          READ      OPRPCMA1,KEY24;;
          RETURN
.
RAOPPCM1  RESET     KEY24
          MOVE      ZERO,OVRCD
          READ      OPRPCMA1,KEY24;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPPCM1  RESET     KEY24
          MOVE      ZERO,OVRCD
          READ      OPRPCMA1,KEY24;OPPCCODE,OPPCPREF,OPPCCLSS,DOPPCLIN,OPPCDESC:
                                   OPPCHOSP,OPPCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPPCLIN,OPPCLINE
          RETURN
.
RKOPPCM1  MOVE      ZERO,OVRCD
          READKS    OPRPCMA1;OPPCCODE,OPPCPREF,OPPCCLSS,DOPPCLIN,OPPCDESC:
                                      OPPCHOSP,OPPCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPPCLIN,OPPCLINE
          RETURN
.
RPOPPCM1  MOVE      ZERO,OVRCD
          READKP    OPRPCMA1;OPPCCODE,OPPCPREF,OPPCCLSS,DOPPCLIN,OPPCDESC:
                             OPPCHOSP,OPPCSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOPPCLIN,OPPCLINE
          RETURN
.
UPOPPCM1  MOVE      OPPCLINE,DOPPCLIN
          UPDATE    OPRPCMA1;OPPCCODE,OPPCPREF,OPPCCLSS,DOPPCLIN,OPPCDESC:
                             OPPCHOSP,OPPCSPAR
          RETURN
.
WROPPCM1  RESET     KEY24
          MOVE      OPPCLINE,DOPPCLIN
          WRITE     OPRPCMA1,KEY24;OPPCCODE,OPPCPREF,OPPCCLSS,DOPPCLIN,OPPCDESC:
                                   OPPCHOSP,OPPCSPAR
          RETURN
.
DEOPPCM1  RESET     KEY24
          DELETE    OPRPCMA1,KEY24
          RETURN
.
