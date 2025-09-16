.
RSPT14D1  RESET     KEY9
          READ      PATI14D1,KEY9;;
          RETURN
.
RAPT14D1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATI14D1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT14D1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATI14D1,KEY9;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                                  DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                                  PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA:
                                  PT0DCPRA:
                                  PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                                  PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                                  PT0DSPR2
          GOTO      OVERCOND IF OVER
          MOVE      DPT0DCMF,PT0DCMFT
          MOVE      DPT0DV1C,PT0DV1CD
          MOVE      DPT0DV2C,PT0DV2CD
          MOVE      DPT0DV3C,PT0DV3CD
          MOVE      DPT0DV4C,PT0DV4CD
          RETURN
.
RKPT14D1  MOVE      ZERO,OVRCD
          READKS    PATI14D1;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                             DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                             PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA,PT0DCPRA:
                             PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                             PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                             PT0DSPR2
          GOTO      OVERCOND IF OVER
          MOVE      DPT0DCMF,PT0DCMFT
          MOVE      DPT0DV1C,PT0DV1CD
          MOVE      DPT0DV2C,PT0DV2CD
          MOVE      DPT0DV3C,PT0DV3CD
          MOVE      DPT0DV4C,PT0DV4CD
          RETURN
.
RPPT14D1  MOVE      ZERO,OVRCD
          READKP    PATI14D1;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                             DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                             PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA,PT0DCPRA:
                             PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                             PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                             PT0DSPR2
          GOTO      OVERCOND IF OVER
          MOVE      DPT0DCMF,PT0DCMFT
          MOVE      DPT0DV1C,PT0DV1CD
          MOVE      DPT0DV2C,PT0DV2CD
          MOVE      DPT0DV3C,PT0DV3CD
          MOVE      DPT0DV4C,PT0DV4CD
          RETURN
.
UPPT14D1  MOVE      PT0DCMFT,DPT0DCMF
          MOVE      PT0DV1CD,DPT0DV1C
          MOVE      PT0DV2CD,DPT0DV2C
          MOVE      PT0DV3CD,DPT0DV3C
          MOVE      PT0DV4CD,DPT0DV4C
          UPDATE    PATI14D1;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                             DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                             PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA,PT0DCPRA:
                             PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                             PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                             PT0DSPR2
          RETURN
.
WRPT14D1  RESET     KEY9
          MOVE      PT0DCMFT,DPT0DCMF
          MOVE      PT0DV1CD,DPT0DV1C
          MOVE      PT0DV2CD,DPT0DV2C
          MOVE      PT0DV3CD,DPT0DV3C
          MOVE      PT0DV4CD,DPT0DV4C
          WRITE     PATI14D1,KEY9;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                                  DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                                  PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA:
                                  PT0DCPRA:
                                  PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                                  PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                                  PT0DSPR2
          RETURN
.
DEPT14D1  RESET     KEY9
          DELETE    PATI14D1,KEY9
          RETURN
.
.
RSPT14D2  RESET     KEY79
          READ      PATI14D2,KEY79;;
          RETURN
.
RAPT14D2  MOVE      ZERO,OVRCD
          RESET     KEY79
          READ      PATI14D2,KEY79;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT14D2  MOVE      ZERO,OVRCD
          RESET     KEY79
          READ      PATI14D2,KEY79;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                                   DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                                   PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA:
                                   PT0DCPRA:
                                   PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                                   PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                                   PT0DSPR2
          GOTO      OVERCOND IF OVER
          MOVE      DPT0DCMF,PT0DCMFT
          MOVE      DPT0DV1C,PT0DV1CD
          MOVE      DPT0DV2C,PT0DV2CD
          MOVE      DPT0DV3C,PT0DV3CD
          MOVE      DPT0DV4C,PT0DV4CD
          RETURN
.
RKPT14D2  MOVE      ZERO,OVRCD
          READKS    PATI14D2;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                             DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                             PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA,PT0DCPRA:
                             PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                             PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                             PT0DSPR2
          GOTO      OVERCOND IF OVER
          MOVE      DPT0DCMF,PT0DCMFT
          MOVE      DPT0DV1C,PT0DV1CD
          MOVE      DPT0DV2C,PT0DV2CD
          MOVE      DPT0DV3C,PT0DV3CD
          MOVE      DPT0DV4C,PT0DV4CD
          RETURN
.
RPPT14D2  MOVE      ZERO,OVRCD
          READKP    PATI14D2;DPCODE,DDESC,DFLAG,DAGEGP,DLOW:
                             DHIGH,PT0D2AGP,PT0D2ALL,PT0D2AHL,DSEX:
                             PT0DADTP,PT0DPRFX,PT0DSAC2,DDAGGER,DAREA,PT0DCPRA:
                             PT0DACRQ,PT0DMI9C,DPT0DCMF,DPT0DV1C,DPT0DV2C:
                             PT0DV1MP,DPT0DV3C,PT0DV2MP,DPT0DV4C:
                             PT0DSPR2
          GOTO      OVERCOND IF OVER
          MOVE      DPT0DCMF,PT0DCMFT
          MOVE      DPT0DV1C,PT0DV1CD
          MOVE      DPT0DV2C,PT0DV2CD
          MOVE      DPT0DV3C,PT0DV3CD
          MOVE      DPT0DV4C,PT0DV4CD
          RETURN
+
.

