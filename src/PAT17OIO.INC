. V10.00.01 01/04/2010 Mike Laming  CAR 219246 - Created ICD10 Ed.7 Operatn FD
.
RSPT17O1  RESET     KEY9
          READ      PATI17O1,KEY9;;
          RETURN
.
RAPT17O1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATI17O1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT17O1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATI17O1,KEY9;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                                  OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                                  OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                                  PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                                  DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                                  DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODESC:
                                  DPT0OV7C,PT0OSPR5
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
          RETURN
.
RKPT17O1  MOVE      ZERO,OVRCD
          READKS    PATI17O1;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODESC:
                             DPT0OV7C,PT0OSPR5
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
          RETURN
.
RPPT17O1  MOVE      ZERO,OVRCD
          READKP    PATI17O1;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODESC:
                             DPT0OV7C,PT0OSPR5
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
          RETURN
.
UPPT17O1  MOVE      PT0OCMFT,DPT0OCMF
          MOVE      PT0OV1CD,DPT0OV1C
          MOVE      PT0OV2CD,DPT0OV2C
          MOVE      PT0OV3CD,DPT0OV3C
          MOVE      PT0OV4CD,DPT0OV4C
          MOVE      PT0OV5CD,DPT0OV5C
          MOVE      PT0OV6CD,DPT0OV6C
          MOVE      PT0OV7CD,DPT0OV7C
          UPDATE    PATI17O1;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODESC:
                             DPT0OV7C,PT0OSPR5
          RETURN
.
WRPT17O1  RESET     KEY9
          MOVE      PT0OCMFT,DPT0OCMF
          MOVE      PT0OV1CD,DPT0OV1C
          MOVE      PT0OV2CD,DPT0OV2C
          MOVE      PT0OV3CD,DPT0OV3C
          MOVE      PT0OV4CD,DPT0OV4C
          MOVE      PT0OV5CD,DPT0OV5C
          MOVE      PT0OV6CD,DPT0OV6C
          MOVE      PT0OV7CD,DPT0OV7C
          WRITE     PATI17O1,KEY9;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                                  OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                                  OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                                  PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                                  DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                                  DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODESC:
                                  DPT0OV7C,PT0OSPR5
          RETURN
.
DEPT17O1  RESET     KEY9
          DELETE    PATI17O1,KEY9
          RETURN
.
.
RSPT17O2  RESET     KEY79
          READ      PATI17O2,KEY79;;
          RETURN
.
RAPT17O2  MOVE      ZERO,OVRCD
          RESET     KEY79
          READ      PATI17O2,KEY79;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT17O2  MOVE      ZERO,OVRCD
          RESET     KEY79
          READ      PATI17O2,KEY79;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                                   OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                                   OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                                   PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                                   DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                                   DPT0OV5C,PT0ODTMN,DPT0OV6C:
                                   DPT0OV7C,PT0OSPR5
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
          RETURN
.
RKPT17O2  MOVE      ZERO,OVRCD
          READKS    PATI17O2;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODESC:
                             DPT0OV7C,PT0OSPR5
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
          RETURN
.
RPPT17O2  MOVE      ZERO,OVRCD
          READKP    PATI17O2;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODESC:
                             DPT0OV7C,PT0OSPR5
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
          RETURN
.
.
RSPT17O3  RESET     KEY13
          READ      PATI17O3,KEY13;;
          RETURN
.
RAPT17O3  MOVE      ZERO,OVRCD
          RESET     KEY13
          READ      PATI17O3,KEY13;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT17O3  MOVE      ZERO,OVRCD
          RESET     KEY13
          READ      PATI17O3,KEY13;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                                   OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                                   OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                                   PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                                   DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                                   DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODESC:
                                   DPT0OV7C,PT0OSPR5
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
          RETURN
.
RKPT17O3  MOVE      ZERO,OVRCD
          READKS    PATI17O3;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODESC:
                             DPT0OV7C,PT0OSPR5
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
          RETURN
.
RPPT17O3  MOVE      ZERO,OVRCD
          READKP    PATI17O3;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             DPT0OV5C,PT0ODTMN,DPT0OV6C,PT0ODESC:
                             DPT0OV7C,PT0OSPR5
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
          RETURN
+
.

