. *****************************************************************************
. *                                                                           *
. *      Include Name : HL7MRGIO.INC                                          *
. *                                                                           *
. *      Function     : I/O for hl7mrgaf file                                 *
. *                                                                           *
. *      Keys         : KEY22                                                 *
. *                                                                           *
. *****************************************************************************
.
.         positional read
.
RSH7MRG1  RESET     KEY22
          READ      HL7MRG01,KEY22;;
          RETURN
.
.         read to see if record exists
.
RAH7MRG1  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7MRG01,KEY22;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDH7MRG1  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7MRG01,KEY22;DMRGIN01,DMRGIN02,MRG001,MRG002:
                                  MRG003,MRG004,MRG005,MRG006,MRG007,MRG008
          GOTO      OVERCOND IF OVER
          MOVE      DMRGIN01,MRGIN01
          MOVE      DMRGIN02,MRGIN02
          RETURN
.
.         next read
.
RKH7MRG1  MOVE      ZERO,OVRCD
          READKS    HL7MRG01;DMRGIN01,DMRGIN02,MRG001,MRG002:
                                  MRG003,MRG004,MRG005,MRG006,MRG007,MRG008
          GOTO      OVERCOND IF OVER
          MOVE      DMRGIN01,MRGIN01
          MOVE      DMRGIN02,MRGIN02
          RETURN
.
.         previous read
.
RPH7MRG1  MOVE      ZERO,OVRCD
          READKP    HL7MRG01;DMRGIN01,DMRGIN02,MRG001,MRG002:
                                  MRG003,MRG004,MRG005,MRG006,MRG007,MRG008
          GOTO      OVERCOND IF OVER
          MOVE      DMRGIN01,MRGIN01
          MOVE      DMRGIN02,MRGIN02
          RETURN
.
.         update
.
UPH7MRG1  MOVE      MRGIN01,DMRGIN01
          MOVE      MRGIN02,DMRGIN02
          UPDATE    HL7MRG01;DMRGIN01,DMRGIN02,MRG001,MRG002:
                                  MRG003,MRG004,MRG005,MRG006,MRG007,MRG008
          RETURN
.
.         write
.
WRH7MRG1  RESET     KEY22
          MOVE      MRGIN01,DMRGIN01
          MOVE      MRGIN02,DMRGIN02
          WRITE     HL7MRG01,KEY22;DMRGIN01,DMRGIN02,MRG001,MRG002:
                                  MRG003,MRG004,MRG005,MRG006,MRG007,MRG008
          RETURN
.
.         delete a record
.
DEH7MRG1  RESET     KEY22
          DELETE    HL7MRG01,KEY22
          RETURN
.
