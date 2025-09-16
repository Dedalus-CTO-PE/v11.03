. *****************************************************************************
. *                                                                           *
. *      Include Name : HL7MSHIO.INC                                          *
. *                                                                           *
. *      Function     : I/O for hl7mshaf file                                 *
. *                                                                           *
. *      Keys         : KEY22                                                 *
. *                                                                           *
. *      Modifications:                                                       *
. *      05/02/2008  Jill Habasque CAR 153711                                 *
. *                  Added MSH020 to RHL7MSH1                                 *
. *****************************************************************************
.
.         positional read
.
RSH7MSH1  RESET     KEY22
          READ      HL7MSH01,KEY22;;
          RETURN
.
.         read to see if record exists
.
RAH7MSH1  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7MSH01,KEY22;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDH7MSH1  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7MSH01,KEY22;DMSHIN01,DMSHIN02,MSH001,MSH002:
                                  MSH003,MSH004,MSH005,MSH006,MSH007:
                                  MSH008,MSH009,MSH010,MSH011,MSH012:
                                  MSH013,MSH01401,MSH01402,MSH015,MSH016:
                                  MSH017,MSH018,MSH019,MSH020
          GOTO      OVERCOND IF OVER
          MOVE      DMSHIN01,MSHIN01
          MOVE      DMSHIN02,MSHIN02
          CALL      BRKMSH00
          RETURN
.
.         next read
.
RKH7MSH1  MOVE      ZERO,OVRCD
          READKS    HL7MSH01;DMSHIN01,DMSHIN02,MSH001,MSH002:
                                  MSH003,MSH004,MSH005,MSH006,MSH007:
                                  MSH008,MSH009,MSH010,MSH011,MSH012:
                                  MSH013,MSH01401,MSH01402,MSH015,MSH016:
                                  MSH017,MSH018,MSH019,MSH020
          GOTO      OVERCOND IF OVER
          MOVE      DMSHIN01,MSHIN01
          MOVE      DMSHIN02,MSHIN02
          CALL      BRKMSH00
          RETURN
.
.         previous read
.
RPH7MSH1  MOVE      ZERO,OVRCD
          READKP    HL7MSH01;DMSHIN01,DMSHIN02,MSH001,MSH002:
                                  MSH003,MSH004,MSH005,MSH006,MSH007:
                                  MSH008,MSH009,MSH010,MSH011,MSH012:
                                  MSH013,MSH01401,MSH01402,MSH015,MSH016:
                                  MSH017,MSH018,MSH019,MSH020
          GOTO      OVERCOND IF OVER
          MOVE      DMSHIN01,MSHIN01
          MOVE      DMSHIN02,MSHIN02
          CALL      BRKMSH00
          RETURN
.
.         update
.
UPH7MSH1  MOVE      MSHIN01,DMSHIN01
          MOVE      MSHIN02,DMSHIN02
          UPDATE    HL7MSH01;DMSHIN01,DMSHIN02,MSH001,MSH002:
                                  MSH003,MSH004,MSH005,MSH006,MSH007:
                                  MSH008,MSH009,MSH010,MSH011,MSH012:
                                  MSH013,MSH01401,MSH01402,MSH015,MSH016:
                                  MSH017,MSH018,MSH019,MSH020
          RETURN
.
.         write
.
WRH7MSH1  RESET     KEY22
          MOVE      MSHIN01,DMSHIN01
          MOVE      MSHIN02,DMSHIN02
          WRITE     HL7MSH01,KEY22;DMSHIN01,DMSHIN02,MSH001,MSH002:
                                  MSH003,MSH004,MSH005,MSH006,MSH007:
                                  MSH008,MSH009,MSH010,MSH011,MSH012:
                                  MSH013,MSH01401,MSH01402,MSH015,MSH016:
                                  MSH017,MSH018,MSH019,MSH020
          RETURN
.
.         delete a record
.
DEH7MSH1  RESET     KEY22
          DELETE    HL7MSH01,KEY22
          RETURN
.
.
WHL7MSH   MOVE      ZERO,OVRCD
          MOVE      "MSH",MESSTYPE
.
          PACK      MSH003,MSH00301,CARET,MSH00302,CARET,MSH00303
          PACK      MSH004,MSH00401,CARET,MSH00402,CARET,MSH00403
          PACK      MSH009,MSH00901,CARET,MSH00902
.
          WRITE     DGATEOUT;MESSTYPE,MSH002,MSH003,MSH004,MSH005,MSH006:
                             MSH007,MSH008,MSH009,MSH010,MSH011,MSH012:
                             MSH013,MSH014,MSH015,MSH016,MSH017,MSH018:
                             MSH019;
          GOTO      OVERCOND IF OVER
          RETURN
.
.
RHL7MSH1  MOVE      ZERO,OVRCD
          MOVE      "|",MSH001
          READ      HL7FLFMT,SEQ;MSH002,MSH003,MSH004,MSH005,MSH006:
                                 MSH007,MSH008,MSH009,MSH010,MSH011,MSH012:
                                 MSH013,MSH014,MSH015,MSH016,MSH017,MSH018:
                                 MSH019,MSH020;
          GOTO      OVERCOND IF OVER
          CALL      BRKMSH00
          RETURN
.
.         break certain variables into sub-variables
.
BRKMSH00  MOVE      MSH003,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],MSH00301
          MOVE      HL7CMP[02],MSH00302
          MOVE      HL7CMP[03],MSH00303
.
          MOVE      MSH004,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],MSH00401
          MOVE      HL7CMP[02],MSH00402
          MOVE      HL7CMP[03],MSH00403
.
          MOVE      MSH009,HL7STR
          CALL      HL7BRK00
          MOVE      HL7CMP[01],MSH00901
          MOVE      HL7CMP[02],MSH00902
.
BRKMSH99  RETURN

