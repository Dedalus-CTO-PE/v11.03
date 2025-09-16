. V10.03.00 23/04/2013  Davin       CAR 284420 - Created ICD10 Ed.8 Disease FD
.
RSPT18D1  RESET     KEY9
          READ      PATI18D1,KEY9;;
          RETURN
.
RAPT18D1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATI18D1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT18D1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATI18D1,KEY9;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                                  DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                                  PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA:
                                  PT0DCPRA:
                                  PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                                  PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                                  DPT0DV5C,DPT0DV6C,PT0DDSC2,DPT0DV7C,DPT0DV8C:
                                  PT0DSPR6
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
          RETURN
.
RKPT18D1  MOVE      ZERO,OVRCD
          READKS    PATI18D1;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                             DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                             PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA,PT0DCPRA:
                             PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                             PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                             DPT0DV5C,DPT0DV6C,PT0DDSC2,DPT0DV7C,DPT0DV8C:
                             PT0DSPR6
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
          RETURN
.
RPPT18D1  MOVE      ZERO,OVRCD
          READKP    PATI18D1;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                             DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                             PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA,PT0DCPRA:
                             PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                             PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                             DPT0DV5C,DPT0DV6C,PT0DDSC2,DPT0DV7C,DPT0DV8C:
                             PT0DSPR6
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
          RETURN
.
UPPT18D1  MOVE      PT0DCMFT,DPT0DCMF
          MOVE      PT0DV1CD,DPT0DV1C
          MOVE      PT0DV2CD,DPT0DV2C
          MOVE      PT0DV3CD,DPT0DV3C
          MOVE      PT0DV4CD,DPT0DV4C
          MOVE      PT0DV5CD,DPT0DV5C
          MOVE      PT0DV6CD,DPT0DV6C
          MOVE      PT0DV7CD,DPT0DV7C
          MOVE      PT0DV8CD,DPT0DV8C
          UPDATE    PATI18D1;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                             DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                             PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA,PT0DCPRA:
                             PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                             PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                             DPT0DV5C,DPT0DV6C,PT0DDSC2,DPT0DV7C,DPT0DV8C:
                             PT0DSPR6
          RETURN
.
WRPT18D1  RESET     KEY9
          MOVE      PT0DCMFT,DPT0DCMF
          MOVE      PT0DV1CD,DPT0DV1C
          MOVE      PT0DV2CD,DPT0DV2C
          MOVE      PT0DV3CD,DPT0DV3C
          MOVE      PT0DV4CD,DPT0DV4C
          MOVE      PT0DV5CD,DPT0DV5C
          MOVE      PT0DV6CD,DPT0DV6C
          MOVE      PT0DV7CD,DPT0DV7C
          MOVE      PT0DV8CD,DPT0DV8C
          WRITE     PATI18D1,KEY9;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                                  DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                                  PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA:
                                  PT0DCPRA:
                                  PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                                  PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                                  DPT0DV5C,DPT0DV6C,PT0DDSC2,DPT0DV7C,DPT0DV8C:
                                  PT0DSPR6
          RETURN
.
DEPT18D1  RESET     KEY9
          DELETE    PATI18D1,KEY9
          RETURN
.
.
RSPT18D2  RESET     KEY79
          READ      PATI18D2,KEY79;;
          RETURN
.
RAPT18D2  MOVE      ZERO,OVRCD
          RESET     KEY79
          READ      PATI18D2,KEY79;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT18D2  MOVE      ZERO,OVRCD
          RESET     KEY79
          READ      PATI18D2,KEY79;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                                   DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                                   PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA:
                                   PT0DCPRA:
                                   PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                                   PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                                   DPT0DV5C,DPT0DV6C,PT0DDSC2,DPT0DV7C,DPT0DV8C:
                                   PT0DSPR6
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
          RETURN
.
RKPT18D2  MOVE      ZERO,OVRCD
          READKS    PATI18D2;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                             DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                             PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA,PT0DCPRA:
                             PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                             PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                             DPT0DV5C,DPT0DV6C,PT0DDSC2,DPT0DV7C,DPT0DV8C:
                             PT0DSPR6
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
          RETURN
.
RPPT18D2  MOVE      ZERO,OVRCD
          READKP    PATI18D2;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                             DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                             PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA,PT0DCPRA:
                             PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                             PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                             DPT0DV5C,DPT0DV6C,PT0DDSC2,DPT0DV7C,DPT0DV8C:
                             PT0DSPR6
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
          RETURN
+
.

