. V10.03.00 23/04/2013  Davin       CAR 284420 - Created ICD10 Ed.8 Operatn FD
.
RSPT18O1  RESET     KEY9
          READ      PATI18O1,KEY9;;
          RETURN
.
RAPT18O1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATI18O1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT18O1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATI18O1,KEY9;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                                  OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                                  OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                                  PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                                  DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                                  DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODSC2:
                                  DPT0OV7C,DPT0OV8C,PT0OSPR6
          GOTO      OVERCOND IF OVER
          MOVE      DPT0OCMF,PT0OCMFT
          MOVE      DPT0OV1C,PT0OV1CD
          MOVE      DPT0OV2C,PT0OV2CD
          MOVE      ZERO,PT0OV3CD
          MOVE      DPT0OV3C,PT0OV3CD
          MOVE      ZERO,PT0OV4CD
          MOVE      DPT0OV4C,PT0OV4CD
          MOVE      ZERO,PT0OV5CD
          MOVE      DPT0OV5C,PT0OV5CD
          MOVE      ZERO,PT0OV6CD
          MOVE      DPT0OV6C,PT0OV6CD
          MOVE      ZERO,PT0OV7CD
          MOVE      DPT0OV7C,PT0OV7CD
          MOVE      ZERO,PT0OV8CD
          MOVE      DPT0OV8C,PT0OV8CD
          MOVE      PT0ODSC2,PT0ODESC            * 100 char description
          RETURN
.
RKPT18O1  MOVE      ZERO,OVRCD
          READKS    PATI18O1;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODSC2:
                             DPT0OV7C,DPT0OV8C,PT0OSPR6
          GOTO      OVERCOND IF OVER
          MOVE      DPT0OCMF,PT0OCMFT
          MOVE      DPT0OV1C,PT0OV1CD
          MOVE      DPT0OV2C,PT0OV2CD
          MOVE      ZERO,PT0OV3CD
          MOVE      DPT0OV3C,PT0OV3CD
          MOVE      ZERO,PT0OV4CD
          MOVE      DPT0OV4C,PT0OV4CD
          MOVE      ZERO,PT0OV5CD
          MOVE      DPT0OV5C,PT0OV5CD
          MOVE      ZERO,PT0OV6CD
          MOVE      DPT0OV6C,PT0OV6CD
          MOVE      ZERO,PT0OV7CD
          MOVE      DPT0OV7C,PT0OV7CD
          MOVE      ZERO,PT0OV8CD
          MOVE      DPT0OV8C,PT0OV8CD
          MOVE      PT0ODSC2,PT0ODESC            * 100 char description
          RETURN
.
RPPT18O1  MOVE      ZERO,OVRCD
          READKP    PATI18O1;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODSC2:
                             DPT0OV7C,DPT0OV8C,PT0OSPR6
          GOTO      OVERCOND IF OVER
          MOVE      DPT0OCMF,PT0OCMFT
          MOVE      DPT0OV1C,PT0OV1CD
          MOVE      DPT0OV2C,PT0OV2CD
          MOVE      ZERO,PT0OV3CD
          MOVE      DPT0OV3C,PT0OV3CD
          MOVE      ZERO,PT0OV4CD
          MOVE      DPT0OV4C,PT0OV4CD
          MOVE      ZERO,PT0OV5CD
          MOVE      DPT0OV5C,PT0OV5CD
          MOVE      ZERO,PT0OV6CD
          MOVE      DPT0OV6C,PT0OV6CD
          MOVE      ZERO,PT0OV7CD
          MOVE      DPT0OV7C,PT0OV7CD
          MOVE      ZERO,PT0OV8CD
          MOVE      DPT0OV8C,PT0OV8CD
          MOVE      PT0ODSC2,PT0ODESC            * 100 char description
          RETURN
.
UPPT18O1  MOVE      PT0OCMFT,DPT0OCMF
          MOVE      PT0OV1CD,DPT0OV1C
          MOVE      PT0OV2CD,DPT0OV2C
          MOVE      PT0OV3CD,DPT0OV3C
          MOVE      PT0OV4CD,DPT0OV4C
          MOVE      PT0OV5CD,DPT0OV5C
          MOVE      PT0OV6CD,DPT0OV6C
          MOVE      PT0OV7CD,DPT0OV7C
          MOVE      PT0OV8CD,DPT0OV8C
          UPDATE    PATI18O1;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODSC2:
                             DPT0OV7C,DPT0OV8C,PT0OSPR6
          RETURN
.
WRPT18O1  RESET     KEY9
          MOVE      PT0OCMFT,DPT0OCMF
          MOVE      PT0OV1CD,DPT0OV1C
          MOVE      PT0OV2CD,DPT0OV2C
          MOVE      PT0OV3CD,DPT0OV3C
          MOVE      PT0OV4CD,DPT0OV4C
          MOVE      PT0OV5CD,DPT0OV5C
          MOVE      PT0OV6CD,DPT0OV6C
          MOVE      PT0OV7CD,DPT0OV7C
          MOVE      PT0OV8CD,DPT0OV8C
          WRITE     PATI18O1,KEY9;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                                  OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                                  OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                                  PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                                  DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                                  DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODSC2:
                                  DPT0OV7C,DPT0OV8C,PT0OSPR6
          RETURN
.
DEPT18O1  RESET     KEY9
          DELETE    PATI18O1,KEY9
          RETURN
.
.
RSPT18O2  RESET     KEY79
          READ      PATI18O2,KEY79;;
          RETURN
.
RAPT18O2  MOVE      ZERO,OVRCD
          RESET     KEY79
          READ      PATI18O2,KEY79;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT18O2  MOVE      ZERO,OVRCD
          RESET     KEY79
          READ      PATI18O2,KEY79;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                                   OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                                   OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                                   PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                                   DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                                   DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODSC2:
                                   DPT0OV7C,DPT0OV8C,PT0OSPR6
          GOTO      OVERCOND IF OVER
          MOVE      DPT0OCMF,PT0OCMFT
          MOVE      DPT0OV1C,PT0OV1CD
          MOVE      DPT0OV2C,PT0OV2CD
          MOVE      ZERO,PT0OV3CD
          MOVE      DPT0OV3C,PT0OV3CD
          MOVE      ZERO,PT0OV4CD
          MOVE      DPT0OV4C,PT0OV4CD
          MOVE      ZERO,PT0OV5CD
          MOVE      DPT0OV5C,PT0OV5CD
          MOVE      ZERO,PT0OV6CD
          MOVE      DPT0OV6C,PT0OV6CD
          MOVE      ZERO,PT0OV7CD
          MOVE      DPT0OV7C,PT0OV7CD
          MOVE      ZERO,PT0OV8CD
          MOVE      DPT0OV8C,PT0OV8CD
          MOVE      PT0ODSC2,PT0ODESC            * 100 char description
          RETURN
.
RKPT18O2  MOVE      ZERO,OVRCD
          READKS    PATI18O2;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODSC2:
                             DPT0OV7C,DPT0OV8C,PT0OSPR6
          GOTO      OVERCOND IF OVER
          MOVE      DPT0OCMF,PT0OCMFT
          MOVE      DPT0OV1C,PT0OV1CD
          MOVE      DPT0OV2C,PT0OV2CD
          MOVE      ZERO,PT0OV3CD
          MOVE      DPT0OV3C,PT0OV3CD
          MOVE      ZERO,PT0OV4CD
          MOVE      DPT0OV4C,PT0OV4CD
          MOVE      ZERO,PT0OV5CD
          MOVE      DPT0OV5C,PT0OV5CD
          MOVE      ZERO,PT0OV6CD
          MOVE      DPT0OV6C,PT0OV6CD
          MOVE      ZERO,PT0OV7CD
          MOVE      DPT0OV7C,PT0OV7CD
          MOVE      ZERO,PT0OV8CD
          MOVE      DPT0OV8C,PT0OV8CD
          MOVE      PT0ODSC2,PT0ODESC            * 100 char description
          RETURN
.
RPPT18O2  MOVE      ZERO,OVRCD
          READKP    PATI18O2;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODSC2:
                             DPT0OV7C,DPT0OV8C,PT0OSPR6
          GOTO      OVERCOND IF OVER
          MOVE      DPT0OCMF,PT0OCMFT
          MOVE      DPT0OV1C,PT0OV1CD
          MOVE      DPT0OV2C,PT0OV2CD
          MOVE      ZERO,PT0OV3CD
          MOVE      DPT0OV3C,PT0OV3CD
          MOVE      ZERO,PT0OV4CD
          MOVE      DPT0OV4C,PT0OV4CD
          MOVE      ZERO,PT0OV5CD
          MOVE      DPT0OV5C,PT0OV5CD
          MOVE      ZERO,PT0OV6CD
          MOVE      DPT0OV6C,PT0OV6CD
          MOVE      ZERO,PT0OV7CD
          MOVE      DPT0OV7C,PT0OV7CD
          MOVE      ZERO,PT0OV8CD
          MOVE      DPT0OV8C,PT0OV8CD
          MOVE      PT0ODSC2,PT0ODESC            * 100 char description
          RETURN
.
.
RSPT18O3  RESET     KEY13
          READ      PATI18O3,KEY13;;
          RETURN
.
RAPT18O3  MOVE      ZERO,OVRCD
          RESET     KEY13
          READ      PATI18O3,KEY13;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT18O3  MOVE      ZERO,OVRCD
          RESET     KEY13
          READ      PATI18O3,KEY13;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                                   OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                                   OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                                   PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                                   DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                                   DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODSC2:
                                   DPT0OV7C,DPT0OV8C,PT0OSPR6
          GOTO      OVERCOND IF OVER
          MOVE      DPT0OCMF,PT0OCMFT
          MOVE      DPT0OV1C,PT0OV1CD
          MOVE      DPT0OV2C,PT0OV2CD
          MOVE      ZERO,PT0OV3CD
          MOVE      DPT0OV3C,PT0OV3CD
          MOVE      ZERO,PT0OV4CD
          MOVE      DPT0OV4C,PT0OV4CD
          MOVE      ZERO,PT0OV5CD
          MOVE      DPT0OV5C,PT0OV5CD
          MOVE      ZERO,PT0OV6CD
          MOVE      DPT0OV6C,PT0OV6CD
          MOVE      ZERO,PT0OV7CD
          MOVE      DPT0OV7C,PT0OV7CD
          MOVE      ZERO,PT0OV8CD
          MOVE      DPT0OV8C,PT0OV8CD
          MOVE      PT0ODSC2,PT0ODESC            * 100 char description
          RETURN
.
RKPT18O3  MOVE      ZERO,OVRCD
          READKS    PATI18O3;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODSC2:
                             DPT0OV7C,DPT0OV8C,PT0OSPR6
          GOTO      OVERCOND IF OVER
          MOVE      DPT0OCMF,PT0OCMFT
          MOVE      DPT0OV1C,PT0OV1CD
          MOVE      ZERO,PT0OV3CD
          MOVE      DPT0OV3C,PT0OV3CD
          MOVE      ZERO,PT0OV4CD
          MOVE      DPT0OV4C,PT0OV4CD
          MOVE      ZERO,PT0OV5CD
          MOVE      DPT0OV5C,PT0OV5CD
          MOVE      ZERO,PT0OV6CD
          MOVE      DPT0OV6C,PT0OV6CD
          MOVE      ZERO,PT0OV7CD
          MOVE      DPT0OV7C,PT0OV7CD
          MOVE      ZERO,PT0OV8CD
          MOVE      DPT0OV8C,PT0OV8CD
          MOVE      PT0ODSC2,PT0ODESC            * 100 char description
          RETURN
.
RPPT18O3  MOVE      ZERO,OVRCD
          READKP    PATI18O3;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODSC2:
                             DPT0OV7C,DPT0OV8C,PT0OSPR6
          GOTO      OVERCOND IF OVER
          MOVE      DPT0OCMF,PT0OCMFT
          MOVE      DPT0OV1C,PT0OV1CD
          MOVE      ZERO,PT0OV3CD
          MOVE      DPT0OV3C,PT0OV3CD
          MOVE      ZERO,PT0OV4CD
          MOVE      DPT0OV4C,PT0OV4CD
          MOVE      ZERO,PT0OV5CD
          MOVE      DPT0OV5C,PT0OV5CD
          MOVE      ZERO,PT0OV6CD
          MOVE      DPT0OV6C,PT0OV6CD
          MOVE      ZERO,PT0OV7CD
          MOVE      DPT0OV7C,PT0OV7CD
          MOVE      ZERO,PT0OV8CD
          MOVE      DPT0OV8C,PT0OV8CD
          MOVE      PT0ODSC2,PT0ODESC            * 100 char description
          RETURN
+
.

