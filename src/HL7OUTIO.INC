. *****************************************************************************
. *                                                                           *
. *      Include Name : HL7OUTIO.INC                                          *
. *                                                                           *
. *      Function     : I/O for hl7outaf file                                 *
. *                                                                           *
. *      Keys         : KEY20                                                 *
. *                                                                           *
. *****************************************************************************
.
.         positional read
.
RSH7OUT1  RESET     KEY20
          READ      HL7OUT01,KEY20;;
          RETURN
.
.         read to see if record exists
.
RAH7OUT1  MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      HL7OUT01,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDH7OUT1  MOVE      ZERO,OVRCD
          RESET     KEY20
          READ      HL7OUT01,KEY20;DH7OUMES,H7OUDTTM,H7OUMETP,H7OUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7OUMES,H7OUMESI
          RETURN
.
.         next read
.
RKH7OUT1  MOVE      ZERO,OVRCD
          READKS    HL7OUT01;DH7OUMES,H7OUDTTM,H7OUMETP,H7OUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7OUMES,H7OUMESI
          RETURN
.
.         previous read
.
RPH7OUT1  MOVE      ZERO,OVRCD
          READKP    HL7OUT01;DH7OUMES,H7OUDTTM,H7OUMETP,H7OUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7OUMES,H7OUMESI
          RETURN
.
.         update
.
UPH7OUT1  MOVE      H7OUMESI,DH7OUMES
          UPDATE    HL7OUT01;DH7OUMES,H7OUDTTM,H7OUMETP,H7OUSPAR
          RETURN
.
.         write
.
WRH7OUT1  RESET     KEY20
          MOVE      H7OUMESI,DH7OUMES
          WRITE     HL7OUT01,KEY20;DH7OUMES,H7OUDTTM,H7OUMETP,H7OUSPAR
          RETURN
.
.         delete a record
.
DEH7OUT1  RESET     KEY20
          DELETE    HL7OUT01,KEY20
          RETURN
.
