. *****************************************************************************
. *                                                                           *
. *      Include Name : HL7QRDIO.INC                                          *
. *                                                                           *
. *      Function     : I/O for hl7qrdaf file                                 *
. *                                                                           *
. *      Keys         : KEY22                                                 *
. *                                                                           *
. *****************************************************************************
.
.         positional read
.
RSH7QRD1  RESET     KEY22
          READ      HL7QRD01,KEY22;;
          RETURN
.
.         read to see if record exists
.
RAH7QRD1  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7QRD01,KEY22;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDH7QRD1  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7QRD01,KEY22;DQRDIN01,DQRDIN02,QRD001,QRD002:
                                  QRD003,QRD004,QRD005,QRD006,QRD007:
                                  QRD008,QRD009,QRD010,QRD011,QRD012,QRD013
          GOTO      OVERCOND IF OVER
          MOVE      DQRDIN01,QRDIN01
          MOVE      DQRDIN02,QRDIN02
          RETURN
.
.         next read
.
RKH7QRD1  MOVE      ZERO,OVRCD
          READKS    HL7QRD01;DQRDIN01,DQRDIN02,QRD001,QRD002:
                                  QRD003,QRD004,QRD005,QRD006,QRD007:
                                  QRD008,QRD009,QRD010,QRD011,QRD012,QRD013
          GOTO      OVERCOND IF OVER
          MOVE      DQRDIN01,QRDIN01
          MOVE      DQRDIN02,QRDIN02
          RETURN
.
.         previous read
.
RPH7QRD1  MOVE      ZERO,OVRCD
          READKP    HL7QRD01;DQRDIN01,DQRDIN02,QRD001,QRD002:
                                  QRD003,QRD004,QRD005,QRD006,QRD007:
                                  QRD008,QRD009,QRD010,QRD011,QRD012,QRD013
          GOTO      OVERCOND IF OVER
          MOVE      DQRDIN01,QRDIN01
          MOVE      DQRDIN02,QRDIN02
          RETURN
.
.         update
.
UPH7QRD1  MOVE      QRDIN01,DQRDIN01
          MOVE      QRDIN02,DQRDIN02
          UPDATE    HL7QRD01;DQRDIN01,DQRDIN02,QRD001,QRD002:
                                  QRD003,QRD004,QRD005,QRD006,QRD007:
                                  QRD008,QRD009,QRD010,QRD011,QRD012,QRD013
          RETURN
.
.         write
.
WRH7QRD1  RESET     KEY22
          MOVE      QRDIN01,DQRDIN01
          MOVE      QRDIN02,DQRDIN02
          WRITE     HL7QRD01,KEY22;DQRDIN01,DQRDIN02,QRD001,QRD002:
                                  QRD003,QRD004,QRD005,QRD006,QRD007:
                                  QRD008,QRD009,QRD010,QRD011,QRD012,QRD013
          RETURN
.
.         delete a record
.
DEH7QRD1  RESET     KEY22
          DELETE    HL7QRD01,KEY22
          RETURN
.
