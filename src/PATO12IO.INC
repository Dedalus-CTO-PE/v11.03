. V11.03.01 17/01/2023  Thanh T.          TSK 0924686
.           Moved PT0OURTH out of spare variable PTOSPR12
. V11.02.01 13/09/2022  Ebon Clements     TSK 0924038 
.           Added unplanned return to theatre PT0OURTH which is stored 
.           in the spare PTOSPR12
. V11.02.00 25/03/2022  Davin      TSK 0917793 - Created ICD10 Ed.12 Oper. IO
.
RSPO12A1  RESET     KEY9
          READ      PATO12A1,KEY9;;
          RETURN
.
RAPO12A1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATO12A1,KEY9;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPO12A1  MOVE      ZERO,OVRCD
          RESET     KEY9
          READ      PATO12A1,KEY9;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                                  PTXOALL1,PTXOAHL1,PT0O2AGP,PTXOALL2,PTXOAHL2:
                                  OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                                  PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                                  DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C,DPT0OV5C:
                                  PT0ODTMN,DPT0OV6C,PT0ODSC2,DPT0OV7C,DPT0OV8C:
                                  DPT0OV9C,DPT0OVXC,DPT0OVX1,DPT0OVX2,PT0OURTH:
                                  PTOSPR12
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
          MOVE      ZERO,PT0OV9CD
          MOVE      DPT0OV9C,PT0OV9CD
          MOVE      ZERO,PT0OVXCD
          MOVE      DPT0OVXC,PT0OVXCD
          MOVE      ZERO,PT0OVX1C
          MOVE      DPT0OVX1,PT0OVX1C
          MOVE      ZERO,PT0OVX2C
          MOVE      DPT0OVX2,PT0OVX2C
          RETURN
.
RKPO12A1  MOVE      ZERO,OVRCD
          READKS    PATO12A1;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             PTXOALL1,PTXOAHL1,PT0O2AGP,PTXOALL2,PTXOAHL2:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C,DPT0OV5C:
                             PT0ODTMN,DPT0OV6C,PT0ODSC2,DPT0OV7C,DPT0OV8C:
                             DPT0OV9C,DPT0OVXC,DPT0OVX1,DPT0OVX2,PT0OURTH:
                             PTOSPR12
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
          MOVE      ZERO,PT0OV9CD
          MOVE      DPT0OV9C,PT0OV9CD
          MOVE      ZERO,PT0OVXCD
          MOVE      DPT0OVXC,PT0OVXCD
          MOVE      ZERO,PT0OVX1C
          MOVE      DPT0OVX1,PT0OVX1C
          MOVE      ZERO,PT0OVX2C
          MOVE      DPT0OVX2,PT0OVX2C
          RETURN
.
RPPO12A1  MOVE      ZERO,OVRCD
          READKP    PATO12A1;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             PTXOALL1,PTXOAHL1,PT0O2AGP,PTXOALL2,PTXOAHL2:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C,DPT0OV5C:
                             PT0ODTMN,DPT0OV6C,PT0ODSC2,DPT0OV7C,DPT0OV8C:
                             DPT0OV9C,DPT0OVXC,DPT0OVX1,DPT0OVX2,PT0OURTH:
                             PTOSPR12
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
          MOVE      ZERO,PT0OV9CD
          MOVE      DPT0OV9C,PT0OV9CD
          MOVE      ZERO,PT0OVXCD
          MOVE      DPT0OVXC,PT0OVXCD
          MOVE      ZERO,PT0OVX1C
          MOVE      DPT0OVX1,PT0OVX1C
          MOVE      ZERO,PT0OVX2C
          MOVE      DPT0OVX2,PT0OVX2C
          RETURN
.
UPPO12A1  MOVE      PT0OCMFT,DPT0OCMF
          MOVE      PT0OV1CD,DPT0OV1C
          MOVE      PT0OV2CD,DPT0OV2C
          MOVE      PT0OV3CD,DPT0OV3C
          MOVE      PT0OV4CD,DPT0OV4C
          MOVE      PT0OV5CD,DPT0OV5C
          MOVE      PT0OV6CD,DPT0OV6C
          MOVE      PT0OV7CD,DPT0OV7C
          MOVE      PT0OV8CD,DPT0OV8C
          MOVE      PT0OV9CD,DPT0OV9C
          MOVE      PT0OVXCD,DPT0OVXC
          MOVE      PT0OVX1C,DPT0OVX1
          MOVE      PT0OVX2C,DPT0OVX2
          UPDATE    PATO12A1;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             PTXOALL1,PTXOAHL1,PT0O2AGP,PTXOALL2,PTXOAHL2:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C,DPT0OV5C:
                             PT0ODTMN,DPT0OV6C,PT0ODSC2,DPT0OV7C,DPT0OV8C:
                             DPT0OV9C,DPT0OVXC,DPT0OVX1,DPT0OVX2,PT0OURTH:
                             PTOSPR12
          RETURN
.
WRPO12A1  RESET     KEY9
          MOVE      PT0OCMFT,DPT0OCMF
          MOVE      PT0OV1CD,DPT0OV1C
          MOVE      PT0OV2CD,DPT0OV2C
          MOVE      PT0OV3CD,DPT0OV3C
          MOVE      PT0OV4CD,DPT0OV4C
          MOVE      PT0OV5CD,DPT0OV5C
          MOVE      PT0OV6CD,DPT0OV6C
          MOVE      PT0OV7CD,DPT0OV7C
          MOVE      PT0OV8CD,DPT0OV8C
          MOVE      PT0OV9CD,DPT0OV9C
          MOVE      PT0OVXCD,DPT0OVXC
          MOVE      PT0OVX1C,DPT0OVX1
          MOVE      PT0OVX2C,DPT0OVX2
          WRITE     PATO12A1,KEY9;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                                  PTXOALL1,PTXOAHL1,PT0O2AGP,PTXOALL2,PTXOAHL2:
                                  OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                                  PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                                  DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C,DPT0OV5C:
                                  PT0ODTMN,DPT0OV6C,PT0ODSC2,DPT0OV7C,DPT0OV8C:
                                  DPT0OV9C,DPT0OVXC,DPT0OVX1,DPT0OVX2,PT0OURTH:
                                  PTOSPR12
          RETURN
.
DEPO12A1  RESET     KEY9
          DELETE    PATO12A1,KEY9
          RETURN
.
.
RSPO12A2  RESET     KEY79
          READ      PATO12A2,KEY79;;
          RETURN
.
RAPO12A2  MOVE      ZERO,OVRCD
          RESET     KEY79
          READ      PATO12A2,KEY79;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPO12A2  MOVE      ZERO,OVRCD
          RESET     KEY79
          READ      PATO12A2,KEY79;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                                   PTXOALL1,PTXOAHL1,PT0O2AGP,PTXOALL2,PTXOAHL2:
                                   OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                                   PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                                   DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C,DPT0OV5C:
                                   PT0ODTMN,DPT0OV6C,PT0ODSC2,DPT0OV7C,DPT0OV8C:
                                   DPT0OV9C,DPT0OVXC,DPT0OVX1,DPT0OVX2,PT0OURTH:
                                   PTOSPR12
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
          MOVE      ZERO,PT0OV9CD
          MOVE      DPT0OV9C,PT0OV9CD
          MOVE      ZERO,PT0OVXCD
          MOVE      DPT0OVXC,PT0OVXCD
          MOVE      ZERO,PT0OVX1C
          MOVE      DPT0OVX1,PT0OVX1C
          MOVE      ZERO,PT0OVX2C
          MOVE      DPT0OVX2,PT0OVX2C
          RETURN
.
RKPO12A2  MOVE      ZERO,OVRCD
          READKS    PATO12A2;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             PTXOALL1,PTXOAHL1,PT0O2AGP,PTXOALL2,PTXOAHL2:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C,DPT0OV5C:
                             PT0ODTMN,DPT0OV6C,PT0ODSC2,DPT0OV7C,DPT0OV8C:
                             DPT0OV9C,DPT0OVXC,DPT0OVX1,DPT0OVX2,PT0OURTH:
                             PTOSPR12
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
          MOVE      ZERO,PT0OV9CD
          MOVE      DPT0OV9C,PT0OV9CD
          MOVE      ZERO,PT0OVXCD
          MOVE      DPT0OVXC,PT0OVXCD
          MOVE      ZERO,PT0OVX1C
          MOVE      DPT0OVX1,PT0OVX1C
          MOVE      ZERO,PT0OVX2C
          MOVE      DPT0OVX2,PT0OVX2C
          RETURN
.
RPPO12A2  MOVE      ZERO,OVRCD
          READKP    PATO12A2;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             PTXOALL1,PTXOAHL1,PT0O2AGP,PTXOALL2,PTXOAHL2:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C,DPT0OV5C:
                             PT0ODTMN,DPT0OV6C,PT0ODSC2,DPT0OV7C,DPT0OV8C:
                             DPT0OV9C,DPT0OVXC,DPT0OVX1,DPT0OVX2,PT0OURTH:
                             PTOSPR12
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
          MOVE      ZERO,PT0OV9CD
          MOVE      DPT0OV9C,PT0OV9CD
          MOVE      ZERO,PT0OVXCD
          MOVE      DPT0OVXC,PT0OVXCD
          MOVE      ZERO,PT0OVX1C
          MOVE      DPT0OVX1,PT0OVX1C
          MOVE      ZERO,PT0OVX2C
          MOVE      DPT0OVX2,PT0OVX2C
          RETURN
.
.
RSPO12A3  RESET     KEY13
          READ      PATO12A3,KEY13;;
          RETURN
.
RAPO12A3  MOVE      ZERO,OVRCD
          RESET     KEY13
          READ      PATO12A3,KEY13;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPO12A3  MOVE      ZERO,OVRCD
          RESET     KEY13
          READ      PATO12A3,KEY13;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                                   PTXOALL1,PTXOAHL1,PT0O2AGP,PTXOALL2,PTXOAHL2:
                                   OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                                   PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                                   DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C,DPT0OV5C:
                                   PT0ODTMN,DPT0OV6C,PT0ODSC2,DPT0OV7C,DPT0OV8C:
                                   DPT0OV9C,DPT0OVXC,DPT0OVX1,DPT0OVX2,PT0OURTH:
                                   PTOSPR12
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
          MOVE      ZERO,PT0OV9CD
          MOVE      DPT0OV9C,PT0OV9CD
          MOVE      ZERO,PT0OVXCD
          MOVE      DPT0OVXC,PT0OVXCD
          MOVE      ZERO,PT0OVX1C
          MOVE      DPT0OVX1,PT0OVX1C
          MOVE      ZERO,PT0OVX2C
          MOVE      DPT0OVX2,PT0OVX2C
          RETURN
.
RKPO12A3  MOVE      ZERO,OVRCD
          READKS    PATO12A3;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             PTXOALL1,PTXOAHL1,PT0O2AGP,PTXOALL2,PTXOAHL2:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C,DPT0OV5C:
                             PT0ODTMN,DPT0OV6C,PT0ODSC2,DPT0OV7C,DPT0OV8C:
                             DPT0OV9C,DPT0OVXC,DPT0OVX1,DPT0OVX2,PT0OURTH:
                             PTOSPR12
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
          MOVE      ZERO,PT0OV9CD
          MOVE      DPT0OV9C,PT0OV9CD
          MOVE      ZERO,PT0OVXCD
          MOVE      DPT0OVXC,PT0OVXCD
          MOVE      ZERO,PT0OVX1C
          MOVE      DPT0OVX1,PT0OVX1C
          MOVE      ZERO,PT0OVX2C
          MOVE      DPT0OVX2,PT0OVX2C
          RETURN
.
RPPO12A3  MOVE      ZERO,OVRCD
          READKP    PATO12A3;OPCODE,ODESC,OFLAG,PT0OBLKN,OAGEGP:
                             PTXOALL1,PTXOAHL1,PT0O2AGP,PTXOALL2,PTXOAHL2:
                             OSEX,PT0OADTP,PT0OSACD,ODAGGER,OAREA:
                             PT0OMI9C,DPT0OCMF,DPT0OV1C,DPT0OV2C,PT0OV1MP:
                             DPT0OV3C,PT0OV2MP,PT0OSLVL,DPT0OV4C,DPT0OV5C:
                             PT0ODTMN,DPT0OV6C,PT0ODSC2,DPT0OV7C,DPT0OV8C:
                             DPT0OV9C,DPT0OVXC,DPT0OVX1,DPT0OVX2,PT0OURTH:
                             PTOSPR12
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
          MOVE      ZERO,PT0OV9CD
          MOVE      DPT0OV9C,PT0OV9CD
          MOVE      ZERO,PT0OVXCD
          MOVE      DPT0OVXC,PT0OVXCD
          MOVE      DPT0OVX1,PT0OVX1C
          MOVE      DPT0OVX2,PT0OVX2C
          RETURN
.
