. *****************************************************************************
. *                                                                           *
. *      Include Name : HL7DSCIO.INC                                          *
. *                                                                           *
. *      Function     : I/O for hl7dscaf file                                 *
. *                                                                           *
. *      Keys         : KEY22                                                 *
. *                                                                           *
. *****************************************************************************
.
.         positional read
.
RSH7DSC1  RESET     KEY22
          READ      HL7DSC01,KEY22;;
          RETURN
.
.         read to see if record exists
.
RAH7DSC1  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7DSC01,KEY22;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDH7DSC1  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7DSC01,KEY22;DDSCIN01,DDSCIN02,DSC00101,DSC00102,DSC002
          GOTO      OVERCOND IF OVER
          MOVE      DDSCIN01,DSCIN01
          MOVE      DDSCIN02,DSCIN02
          RETURN
.
.         next read
.
RKH7DSC1  MOVE      ZERO,OVRCD
          READKS    HL7DSC01;DDSCIN01,DDSCIN02,DSC00101,DSC00102,DSC002
          GOTO      OVERCOND IF OVER
          MOVE      DDSCIN01,DSCIN01
          MOVE      DDSCIN02,DSCIN02
          RETURN
.
.         previous read
.
RPH7DSC1  MOVE      ZERO,OVRCD
          READKP    HL7DSC01;DDSCIN01,DDSCIN02,DSC00101,DSC00102,DSC002
          GOTO      OVERCOND IF OVER
          MOVE      DDSCIN01,DSCIN01
          MOVE      DDSCIN02,DSCIN02
          RETURN
.
.         update
.
UPH7DSC1  MOVE      DSCIN01,DDSCIN01
          MOVE      DSCIN02,DDSCIN02
          UPDATE    HL7DSC01;DDSCIN01,DDSCIN02,DSC00101,DSC00102,DSC002
          RETURN
.
.         write
.
WRH7DSC1  MOVE      DSCIN01,DDSCIN01
          MOVE      DSCIN02,DDSCIN02
          RESET     KEY22
          WRITE     HL7DSC01,KEY22;DDSCIN01,DDSCIN02,DSC00101,DSC00102,DSC002
          RETURN
.
.         delete a record
.
DEH7DSC1  RESET     KEY22
          DELETE    HL7DSC01,KEY22
          RETURN
.
