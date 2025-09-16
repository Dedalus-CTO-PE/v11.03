. *****************************************************************************
. *                                                                           *
. *      Include Name : HL7ZIDIO.INC                                          *
. *                                                                           *
. *      Function     : I/O for hl7zidaf file                                 *
. *                                                                           *
. *      Keys         : KEY22                                                 *
. *                                                                           *
. *****************************************************************************
.
.         positional read
.
RSH7ZID1  RESET     KEY22
          READ      HL7ZID01,KEY22;;
          RETURN
.
.         read to see if record exists
.
RAH7ZID1  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7ZID01,KEY22;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDH7ZID1  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7ZID01,KEY22;DZIDIN01,DZIDIN02,ZID001,ZID002:
                                  ZID003,ZID004,ZID005,ZID006,ZID007:
                                  ZID008,ZID009,ZID010,ZID011,ZID012
          GOTO      OVERCOND IF OVER
          MOVE      DZIDIN01,ZIDIN01
          MOVE      DZIDIN02,ZIDIN02
          RETURN
.
.         next read
.
RKH7ZID1  MOVE      ZERO,OVRCD
          READKS    HL7ZID01;DZIDIN01,DZIDIN02,ZID001,ZID002:
                                  ZID003,ZID004,ZID005,ZID006,ZID007:
                                  ZID008,ZID009,ZID010,ZID011,ZID012
          GOTO      OVERCOND IF OVER
          MOVE      DZIDIN01,ZIDIN01
          MOVE      DZIDIN02,ZIDIN02
          RETURN
.
.         previous read
.
RPH7ZID1  MOVE      ZERO,OVRCD
          READKP    HL7ZID01;DZIDIN01,DZIDIN02,ZID001,ZID002:
                                  ZID003,ZID004,ZID005,ZID006,ZID007:
                                  ZID008,ZID009,ZID010,ZID011,ZID012
          GOTO      OVERCOND IF OVER
          MOVE      DZIDIN01,ZIDIN01
          MOVE      DZIDIN02,ZIDIN02
          RETURN
.
.         update
.
UPH7ZID1  MOVE      ZIDIN01,DZIDIN01
          MOVE      ZIDIN02,DZIDIN02
          UPDATE    HL7ZID01;DZIDIN01,DZIDIN02,ZID001,ZID002:
                                  ZID003,ZID004,ZID005,ZID006,ZID007:
                                  ZID008,ZID009,ZID010,ZID011,ZID012
          RETURN
.
.         write
.
WRH7ZID1  RESET     KEY22
          MOVE      ZIDIN01,DZIDIN01
          MOVE      ZIDIN02,DZIDIN02
          WRITE     HL7ZID01,KEY22;DZIDIN01,DZIDIN02,ZID001,ZID002:
                                  ZID003,ZID004,ZID005,ZID006,ZID007:
                                  ZID008,ZID009,ZID010,ZID011,ZID012
          RETURN
.
.         delete a record
.
DEH7ZID1  RESET     KEY22
          DELETE    HL7ZID01,KEY22
          RETURN
.
