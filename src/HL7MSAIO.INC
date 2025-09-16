. *****************************************************************************
. *                                                                           *
. *      Include Name : HL7MSAIO.INC                                          *
. *                                                                           *
. *      Function     : I/O for hl7msaaf file                                 *
. *                                                                           *
. *      Keys         : KEY22                                                 *
. *                                                                           *
. *****************************************************************************
.
.         positional read
.
RSH7MSA1  RESET     KEY22
          READ      HL7MSA01,KEY22;;
          RETURN
.
.         read to see if record exists
.
RAH7MSA1  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7MSA01,KEY22;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDH7MSA1  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7MSA01,KEY22;DMSAIN01,DMSAIN02,MSA001,MSA002:
                                  MSA003,MSA004,MSA005,MSA006,MSA007
          GOTO      OVERCOND IF OVER
          MOVE      DMSAIN01,MSAIN01
          MOVE      DMSAIN02,MSAIN02
          RETURN
.
.         next read
.
RKH7MSA1  MOVE      ZERO,OVRCD
          READKS    HL7MSA01;DMSAIN01,DMSAIN02,MSA001,MSA002:
                                  MSA003,MSA004,MSA005,MSA006,MSA007
          GOTO      OVERCOND IF OVER
          MOVE      DMSAIN01,MSAIN01
          MOVE      DMSAIN02,MSAIN02
          RETURN
.
.         previous read
.
RPH7MSA1  MOVE      ZERO,OVRCD
          READKP    HL7MSA01;DMSAIN01,DMSAIN02,MSA001,MSA002:
                                  MSA003,MSA004,MSA005,MSA006,MSA007
          GOTO      OVERCOND IF OVER
          MOVE      DMSAIN01,MSAIN01
          MOVE      DMSAIN02,MSAIN02
          RETURN
.
.         update
.
UPH7MSA1  MOVE      MSAIN01,DMSAIN01
          MOVE      MSAIN02,DMSAIN02
          UPDATE    HL7MSA01;DMSAIN01,DMSAIN02,MSA001,MSA002:
                                  MSA003,MSA004,MSA005,MSA006,MSA007
          RETURN
.
.         write
.
WRH7MSA1  RESET     KEY22
          MOVE      MSAIN01,DMSAIN01
          MOVE      MSAIN02,DMSAIN02
          WRITE     HL7MSA01,KEY22;DMSAIN01,DMSAIN02,MSA001,MSA002:
                                  MSA003,MSA004,MSA005,MSA006,MSA007
          RETURN
.
.         delete a record
.
DEH7MSA1  RESET     KEY22
          DELETE    HL7MSA01,KEY22
          RETURN
.
