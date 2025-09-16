. V10.06.00 17/05/2013  Davin       CAR 311669 - Created ICD10 Ed.9 Disease FD
.
RSPT19D1  RESET     KEY9
          READ      PATI19D1,KEY9;;
          RETURN
.
RAPT19D1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATI19D1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT19D1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATI19D1,KEY9;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                                  DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                                  PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA:
                                  PT0DCPRA:
                                  PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                                  PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                                  DPT0DV5C,DPT0DV6C,PT0DDSC2,DPT0DV7C,DPT0DV8C:
                                  DPT0DV9C,PT0DSPR7
          GOTO      OVERCOND IF OVER
          MOVE      DPT0DCMF,PT0DCMFT
          MOVE      DPT0DV1C,PT0DV1CD
          MOVE      DPT0DV2C,PT0DV2CD
          MOVE      ZERO,PT0DV3CD
          MOVE      DPT0DV3C,PT0DV3CD
          MOVE      ZERO,PT0DV4CD
          MOVE      DPT0DV4C,PT0DV4CD
          MOVE      ZERO,PT0DV5CD
          MOVE      DPT0DV5C,PT0DV5CD
          MOVE      ZERO,PT0DV6CD
          MOVE      DPT0DV6C,PT0DV6CD
          MOVE      ZERO,PT0DV7CD
          MOVE      DPT0DV7C,PT0DV7CD
          MOVE      ZERO,PT0DV8CD
          MOVE      DPT0DV8C,PT0DV8CD
          MOVE      PT0DDSC2,PT0DDESC            * 100 char description
          MOVE      ZERO,PT0DV9CD
          MOVE      DPT0DV9C,PT0DV9CD
          RETURN
.
RKPT19D1  MOVE      ZERO,OVRCD
          READKS    PATI19D1;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                             DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                             PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA,PT0DCPRA:
                             PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                             PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                             DPT0DV5C,DPT0DV6C,PT0DDSC2,DPT0DV7C,DPT0DV8C:
                             DPT0DV9C,PT0DSPR7
          GOTO      OVERCOND IF OVER
          MOVE      DPT0DCMF,PT0DCMFT
          MOVE      DPT0DV1C,PT0DV1CD
          MOVE      DPT0DV2C,PT0DV2CD
          MOVE      ZERO,PT0DV3CD
          MOVE      DPT0DV3C,PT0DV3CD
          MOVE      ZERO,PT0DV4CD
          MOVE      DPT0DV4C,PT0DV4CD
          MOVE      ZERO,PT0DV5CD
          MOVE      DPT0DV5C,PT0DV5CD
          MOVE      ZERO,PT0DV6CD
          MOVE      DPT0DV6C,PT0DV6CD
          MOVE      ZERO,PT0DV7CD
          MOVE      DPT0DV7C,PT0DV7CD
          MOVE      ZERO,PT0DV8CD
          MOVE      DPT0DV8C,PT0DV8CD
          MOVE      PT0DDSC2,PT0DDESC            * 100 char description
          MOVE      ZERO,PT0DV9CD
          MOVE      DPT0DV9C,PT0DV9CD
          RETURN
.
RPPT19D1  MOVE      ZERO,OVRCD
          READKP    PATI19D1;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                             DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                             PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA,PT0DCPRA:
                             PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                             PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                             DPT0DV5C,DPT0DV6C,PT0DDSC2,DPT0DV7C,DPT0DV8C:
                             DPT0DV9C,PT0DSPR7
          GOTO      OVERCOND IF OVER
          MOVE      DPT0DCMF,PT0DCMFT
          MOVE      DPT0DV1C,PT0DV1CD
          MOVE      DPT0DV2C,PT0DV2CD
          MOVE      ZERO,PT0DV3CD
          MOVE      DPT0DV3C,PT0DV3CD
          MOVE      ZERO,PT0DV4CD
          MOVE      DPT0DV4C,PT0DV4CD
          MOVE      ZERO,PT0DV5CD
          MOVE      DPT0DV5C,PT0DV5CD
          MOVE      ZERO,PT0DV6CD
          MOVE      DPT0DV6C,PT0DV6CD
          MOVE      ZERO,PT0DV7CD
          MOVE      DPT0DV7C,PT0DV7CD
          MOVE      ZERO,PT0DV8CD
          MOVE      DPT0DV8C,PT0DV8CD
          MOVE      PT0DDSC2,PT0DDESC            * 100 char description
          MOVE      ZERO,PT0DV9CD
          MOVE      DPT0DV9C,PT0DV9CD
          RETURN
.
UPPT19D1  MOVE      PT0DCMFT,DPT0DCMF
          MOVE      PT0DV1CD,DPT0DV1C
          MOVE      PT0DV2CD,DPT0DV2C
          MOVE      PT0DV3CD,DPT0DV3C
          MOVE      PT0DV4CD,DPT0DV4C
          MOVE      PT0DV5CD,DPT0DV5C
          MOVE      PT0DV6CD,DPT0DV6C
          MOVE      PT0DV7CD,DPT0DV7C
          MOVE      PT0DV8CD,DPT0DV8C
          MOVE      PT0DV9CD,DPT0DV9C
          UPDATE    PATI19D1;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                             DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                             PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA,PT0DCPRA:
                             PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                             PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                             DPT0DV5C,DPT0DV6C,PT0DDSC2,DPT0DV7C,DPT0DV8C:
                             DPT0DV9C,PT0DSPR7
          RETURN
.
WRPT19D1  RESET     KEY9
          MOVE      PT0DCMFT,DPT0DCMF
          MOVE      PT0DV1CD,DPT0DV1C
          MOVE      PT0DV2CD,DPT0DV2C
          MOVE      PT0DV3CD,DPT0DV3C
          MOVE      PT0DV4CD,DPT0DV4C
          MOVE      PT0DV5CD,DPT0DV5C
          MOVE      PT0DV6CD,DPT0DV6C
          MOVE      PT0DV7CD,DPT0DV7C
          MOVE      PT0DV8CD,DPT0DV8C
          MOVE      PT0DV9CD,DPT0DV9C
          WRITE     PATI19D1,KEY9;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                                  DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                                  PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA:
                                  PT0DCPRA:
                                  PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                                  PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                                  DPT0DV5C,DPT0DV6C,PT0DDSC2,DPT0DV7C,DPT0DV8C:
                                  DPT0DV9C,PT0DSPR7
          RETURN
.
DEPT19D1  RESET     KEY9
          DELETE    PATI19D1,KEY9
          RETURN
.
.
RSPT19D2  RESET     KEY79
          READ      PATI19D2,KEY79;;
          RETURN
.
RAPT19D2  MOVE      ZERO,OVRCD
          RESET     KEY79
          READ      PATI19D2,KEY79;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT19D2  MOVE      ZERO,OVRCD
          RESET     KEY79
          READ      PATI19D2,KEY79;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                                   DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                                   PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA:
                                   PT0DCPRA:
                                   PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                                   PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                                   DPT0DV5C,DPT0DV6C,PT0DDSC2,DPT0DV7C,DPT0DV8C:
                                   DPT0DV9C,PT0DSPR7
          GOTO      OVERCOND IF OVER
          MOVE      DPT0DCMF,PT0DCMFT
          MOVE      DPT0DV1C,PT0DV1CD
          MOVE      DPT0DV2C,PT0DV2CD
          MOVE      ZERO,PT0DV3CD
          MOVE      DPT0DV3C,PT0DV3CD
          MOVE      ZERO,PT0DV4CD
          MOVE      DPT0DV4C,PT0DV4CD
          MOVE      ZERO,PT0DV5CD
          MOVE      DPT0DV5C,PT0DV5CD
          MOVE      ZERO,PT0DV6CD
          MOVE      DPT0DV6C,PT0DV6CD
          MOVE      ZERO,PT0DV7CD
          MOVE      DPT0DV7C,PT0DV7CD
          MOVE      ZERO,PT0DV8CD
          MOVE      DPT0DV8C,PT0DV8CD
          MOVE      PT0DDSC2,PT0DDESC            * 100 char description
          MOVE      ZERO,PT0DV9CD
          MOVE      DPT0DV9C,PT0DV9CD
          RETURN
.
RKPT19D2  MOVE      ZERO,OVRCD
          READKS    PATI19D2;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                             DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                             PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA,PT0DCPRA:
                             PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                             PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                             DPT0DV5C,DPT0DV6C,PT0DDSC2,DPT0DV7C,DPT0DV8C:
                             DPT0DV9C,PT0DSPR7
          GOTO      OVERCOND IF OVER
          MOVE      DPT0DCMF,PT0DCMFT
          MOVE      DPT0DV1C,PT0DV1CD
          MOVE      DPT0DV2C,PT0DV2CD
          MOVE      ZERO,PT0DV3CD
          MOVE      DPT0DV3C,PT0DV3CD
          MOVE      ZERO,PT0DV4CD
          MOVE      DPT0DV4C,PT0DV4CD
          MOVE      ZERO,PT0DV5CD
          MOVE      DPT0DV5C,PT0DV5CD
          MOVE      ZERO,PT0DV6CD
          MOVE      DPT0DV6C,PT0DV6CD
          MOVE      ZERO,PT0DV7CD
          MOVE      DPT0DV7C,PT0DV7CD
          MOVE      ZERO,PT0DV8CD
          MOVE      DPT0DV8C,PT0DV8CD
          MOVE      PT0DDSC2,PT0DDESC            * 100 char description
          MOVE      ZERO,PT0DV9CD
          MOVE      DPT0DV9C,PT0DV9CD
          RETURN
.
RPPT19D2  MOVE      ZERO,OVRCD
          READKP    PATI19D2;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                             DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                             PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA,PT0DCPRA:
                             PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                             PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                             DPT0DV5C,DPT0DV6C,PT0DDSC2,DPT0DV7C,DPT0DV8C:
                             DPT0DV9C,PT0DSPR7
          GOTO      OVERCOND IF OVER
          MOVE      DPT0DCMF,PT0DCMFT
          MOVE      DPT0DV1C,PT0DV1CD
          MOVE      DPT0DV2C,PT0DV2CD
          MOVE      ZERO,PT0DV3CD
          MOVE      DPT0DV3C,PT0DV3CD
          MOVE      ZERO,PT0DV4CD
          MOVE      DPT0DV4C,PT0DV4CD
          MOVE      ZERO,PT0DV5CD
          MOVE      DPT0DV5C,PT0DV5CD
          MOVE      ZERO,PT0DV6CD
          MOVE      DPT0DV6C,PT0DV6CD
          MOVE      ZERO,PT0DV7CD
          MOVE      DPT0DV7C,PT0DV7CD
          MOVE      ZERO,PT0DV8CD
          MOVE      DPT0DV8C,PT0DV8CD
          MOVE      PT0DDSC2,PT0DDESC            * 100 char description
          MOVE      ZERO,PT0DV9CD
          MOVE      DPT0DV9C,PT0DV9CD
          RETURN
+
.

