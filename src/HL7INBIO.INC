. *****************************************************************************
. *                                                                           *
. *      Include Name : HL7INBIO.INC                                          *
. *                                                                           *
. *      Function     : I/O for hl7inbaf file                                 *
. *                                                                           *
. *      Keys         : KEY20, KEY37, KEY40                                   *
. *                                                                           *
. *****************************************************************************
.
.         positional read
.
RSH7INB1  RESET     KEY20
          READ      HL7INB01,KEY20;;
          RETURN
.
.         read to see if record exists
.
RAH7INB1  MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      HL7INB01,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDH7INB1  MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      HL7INB01,KEY20;DH7INMES,H7INSTAT,H7INDTTM:
                                  H7INMETP,H7INOPER,H7INPORT,H7INPGID,H7INDDAT:
                                  H7INSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7INMES,H7INMESI
          RETURN
.
.         next read
.
RKH7INB1  MOVE      ZERO,OVRCD
          READKS    HL7INB01;DH7INMES,H7INSTAT,H7INDTTM:
                                  H7INMETP,H7INOPER,H7INPORT,H7INPGID,H7INDDAT:
                                  H7INSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7INMES,H7INMESI
          RETURN
.
.         previous read
.
RPH7INB1  MOVE      ZERO,OVRCD
          READKP    HL7INB01;DH7INMES,H7INSTAT,H7INDTTM:
                                  H7INMETP,H7INOPER,H7INPORT,H7INPGID,H7INDDAT:
                                  H7INSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7INMES,H7INMESI
          RETURN
.
.         update
.
UPH7INB1  MOVE      H7INMESI,DH7INMES
          UPDATE    HL7INB01;DH7INMES,H7INSTAT,H7INDTTM:
                                  H7INMETP,H7INOPER,H7INPORT,H7INPGID,H7INDDAT:
                                  H7INSPAR
          RETURN
.
.         write
.
WRH7INB1  MOVE      H7INMESI,DH7INMES
          RESET     KEY20
          MOVE      H7INMESI,DH7INMES
          WRITE     HL7INB01,KEY20;DH7INMES,H7INSTAT,H7INDTTM:
                                  H7INMETP,H7INOPER,H7INPORT,H7INPGID,H7INDDAT:
                                  H7INSPAR
          RETURN
.
.         delete a record
.
DEH7INB1  RESET     KEY20
          DELETE    HL7INB01,KEY20
          RETURN
.
.
.         positional read
.
RSH7INB2  RESET     KEY37
          READ      HL7INB02,KEY37;;
          RETURN
.
.         read to see if record exists
.
RAH7INB2  MOVE      ZERO,OVRCD
          RESET     KEY37
          READ      HL7INB02,KEY37;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDH7INB2  MOVE      ZERO,OVRCD
          RESET     KEY37
          READ      HL7INB02,KEY37;DH7INMES,H7INSTAT,H7INDTTM:
                                  H7INMETP,H7INOPER,H7INPORT,H7INPGID,H7INDDAT:
                                  H7INSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7INMES,H7INMESI
          RETURN
.
.         next read
.
RKH7INB2  MOVE      ZERO,OVRCD
          READKS    HL7INB02;DH7INMES,H7INSTAT,H7INDTTM:
                                  H7INMETP,H7INOPER,H7INPORT,H7INPGID,H7INDDAT:
                                  H7INSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7INMES,H7INMESI
          RETURN
.
.         previous read
.
RPH7INB2  MOVE      ZERO,OVRCD
          READKP    HL7INB02;DH7INMES,H7INSTAT,H7INDTTM:
                                  H7INMETP,H7INOPER,H7INPORT,H7INPGID,H7INDDAT:
                                  H7INSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7INMES,H7INMESI
          RETURN
.
.         update
.
UPH7INB2  MOVE      H7INMESI,DH7INMES
          UPDATE    HL7INB02;DH7INMES,H7INSTAT,H7INDTTM:
                                  H7INMETP,H7INOPER,H7INPORT,H7INPGID,H7INDDAT:
                                  H7INSPAR
          RETURN
.
.         write
.
WRH7INB2  RESET     KEY37
          MOVE      H7INMESI,DH7INMES
          WRITE     HL7INB02,KEY37;DH7INMES,H7INSTAT,H7INDTTM:
                                  H7INMETP,H7INOPER,H7INPORT,H7INPGID,H7INDDAT:
                                  H7INSPAR
          RETURN
.
.         delete a record
.
DEH7INB2  RESET     KEY37
          DELETE    HL7INB02,KEY37
          RETURN
.
.         positional read
.
RSH7INB3  RESET     KEY37
          READ      HL7INB03,KEY37;;
          RETURN
.
.         read to see if record exists
.
RAH7INB3  MOVE      ZERO,OVRCD
          RESET     KEY37
          READ      HL7INB03,KEY37;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDH7INB3  MOVE      ZERO,OVRCD
          RESET     KEY37
          READ      HL7INB03,KEY37;DH7INMES,H7INSTAT,H7INDTTM:
                                  H7INMETP,H7INOPER,H7INPORT,H7INPGID,H7INDDAT:
                                  H7INSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7INMES,H7INMESI
          RETURN
.
.         next read
.
RKH7INB3  MOVE      ZERO,OVRCD
          READKS    HL7INB03;DH7INMES,H7INSTAT,H7INDTTM:
                                  H7INMETP,H7INOPER,H7INPORT,H7INPGID,H7INDDAT:
                                  H7INSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7INMES,H7INMESI
          RETURN
.
.         previous read
.
RPH7INB3  MOVE      ZERO,OVRCD
          READKP    HL7INB03;DH7INMES,H7INSTAT,H7INDTTM:
                                  H7INMETP,H7INOPER,H7INPORT,H7INPGID,H7INDDAT:
                                  H7INSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7INMES,H7INMESI
          RETURN
.
.         positional read
.
RSH7INB4  RESET     KEY40
          READ      HL7INB04,KEY40;;
          RETURN
.
.         read to see if record exists
.
RAH7INB4  MOVE      ZERO,OVRCD
          RESET     KEY40
          READ      HL7INB04,KEY40;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDH7INB4  MOVE      ZERO,OVRCD
          RESET     KEY40
          READ      HL7INB04,KEY40;DH7INMES,H7INSTAT,H7INDTTM:
                                  H7INMETP,H7INOPER,H7INPORT,H7INPGID,H7INDDAT:
                                  H7INSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7INMES,H7INMESI
          RETURN
.
.         next read
.
RKH7INB4  MOVE      ZERO,OVRCD
          READKS    HL7INB04;DH7INMES,H7INSTAT,H7INDTTM:
                                  H7INMETP,H7INOPER,H7INPORT,H7INPGID,H7INDDAT:
                                  H7INSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7INMES,H7INMESI
          RETURN
.
.         previous read
.
RPH7INB4  MOVE      ZERO,OVRCD
          READKP    HL7INB04;DH7INMES,H7INSTAT,H7INDTTM:
                                  H7INMETP,H7INOPER,H7INPORT,H7INPGID,H7INDDAT:
                                  H7INSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7INMES,H7INMESI
          RETURN
+
