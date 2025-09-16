.
RSPT14O1  RESET     KEY9
          READ      PATI14O1,KEY9;;
          RETURN
.
RAPT14O1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATI14O1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT14O1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATI14O1,KEY9;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                                  OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                                  OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                                  PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                                  DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                                  PT0OSPR2
          GOTO      OVERCOND IF OVER
          MOVE      DPT0OCMF,PT0OCMFT
          MOVE      DPT0OV1C,PT0OV1CD
          MOVE      DPT0OV2C,PT0OV2CD
          MOVE      DPT0OV3C,PT0OV3CD
          MOVE      DPT0OV4C,PT0OV4CD
          RETURN
.
RKPT14O1  MOVE      ZERO,OVRCD
          READKS    PATI14O1;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             PT0OSPR2
          GOTO      OVERCOND IF OVER
          MOVE      DPT0OCMF,PT0OCMFT
          MOVE      DPT0OV1C,PT0OV1CD
          MOVE      DPT0OV2C,PT0OV2CD
          MOVE      DPT0OV3C,PT0OV3CD
          MOVE      DPT0OV4C,PT0OV4CD
          RETURN
.
RPPT14O1  MOVE      ZERO,OVRCD
          READKP    PATI14O1;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             PT0OSPR2
          GOTO      OVERCOND IF OVER
          MOVE      DPT0OCMF,PT0OCMFT
          MOVE      DPT0OV1C,PT0OV1CD
          MOVE      DPT0OV2C,PT0OV2CD
          MOVE      DPT0OV3C,PT0OV3CD
          MOVE      DPT0OV4C,PT0OV4CD
          RETURN
.
UPPT14O1  MOVE      PT0OCMFT,DPT0OCMF
          MOVE      PT0OV1CD,DPT0OV1C
          MOVE      PT0OV2CD,DPT0OV2C
          MOVE      PT0OV3CD,DPT0OV3C
          MOVE      PT0OV4CD,DPT0OV4C
          UPDATE    PATI14O1;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             PT0OSPR2
          RETURN
.
WRPT14O1  RESET     KEY9
          MOVE      PT0OCMFT,DPT0OCMF
          MOVE      PT0OV1CD,DPT0OV1C
          MOVE      PT0OV2CD,DPT0OV2C
          MOVE      PT0OV3CD,DPT0OV3C
          MOVE      PT0OV4CD,DPT0OV4C
          WRITE     PATI14O1,KEY9;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                                  OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                                  OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                                  PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                                  DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                                  PT0OSPR2
          RETURN
.
DEPT14O1  RESET     KEY9
          DELETE    PATI14O1,KEY9
          RETURN
.
.
RSPT14O2  RESET     KEY79
          READ      PATI14O2,KEY79;;
          RETURN
.
RAPT14O2  MOVE      ZERO,OVRCD
          RESET     KEY79
          READ      PATI14O2,KEY79;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT14O2  MOVE      ZERO,OVRCD
          RESET     KEY79
          READ      PATI14O2,KEY79;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                                   OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                                   OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                                   PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                                   DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                                   PT0OSPR2
          GOTO      OVERCOND IF OVER
          MOVE      DPT0OCMF,PT0OCMFT
          MOVE      DPT0OV1C,PT0OV1CD
          MOVE      DPT0OV2C,PT0OV2CD
          MOVE      DPT0OV3C,PT0OV3CD
          MOVE      DPT0OV4C,PT0OV4CD
          RETURN
.
RKPT14O2  MOVE      ZERO,OVRCD
          READKS    PATI14O2;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             PT0OSPR2
          GOTO      OVERCOND IF OVER
          MOVE      DPT0OCMF,PT0OCMFT
          MOVE      DPT0OV1C,PT0OV1CD
          MOVE      DPT0OV2C,PT0OV2CD
          MOVE      DPT0OV3C,PT0OV3CD
          MOVE      DPT0OV4C,PT0OV4CD
          RETURN
.
RPPT14O2  MOVE      ZERO,OVRCD
          READKP    PATI14O2;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             PT0OSPR2
          GOTO      OVERCOND IF OVER
          MOVE      DPT0OCMF,PT0OCMFT
          MOVE      DPT0OV1C,PT0OV1CD
          MOVE      DPT0OV2C,PT0OV2CD
          MOVE      DPT0OV3C,PT0OV3CD
          MOVE      DPT0OV4C,PT0OV4CD
          RETURN
.
.
RSPT14O3  RESET     KEY13
          READ      PATI14O3,KEY13;;
          RETURN
.
RAPT14O3  MOVE      ZERO,OVRCD
          RESET     KEY13
          READ      PATI14O3,KEY13;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT14O3  MOVE      ZERO,OVRCD
          RESET     KEY13
          READ      PATI14O3,KEY13;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                                   OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                                   OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                                   PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                                   DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                                   PT0OSPR2
          GOTO      OVERCOND IF OVER
          MOVE      DPT0OCMF,PT0OCMFT
          MOVE      DPT0OV1C,PT0OV1CD
          MOVE      DPT0OV2C,PT0OV2CD
          MOVE      DPT0OV3C,PT0OV3CD
          MOVE      DPT0OV4C,PT0OV4CD
          RETURN
.
RKPT14O3  MOVE      ZERO,OVRCD
          READKS    PATI14O3;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             PT0OSPR2
          GOTO      OVERCOND IF OVER
          MOVE      DPT0OCMF,PT0OCMFT
          MOVE      DPT0OV1C,PT0OV1CD
          MOVE      DPT0OV3C,PT0OV3CD
          MOVE      DPT0OV4C,PT0OV4CD
          RETURN
.
RPPT14O3  MOVE      ZERO,OVRCD
          READKP    PATI14O3;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             OLOW,OHIGH,PT0O2AGP,PT0O2ALL,PT0O2AHL:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C:
                             PT0OSPR2
          GOTO      OVERCOND IF OVER
          MOVE      DPT0OCMF,PT0OCMFT
          MOVE      DPT0OV1C,PT0OV1CD
          MOVE      DPT0OV3C,PT0OV3CD
          MOVE      DPT0OV4C,PT0OV4CD
          RETURN
+
.

