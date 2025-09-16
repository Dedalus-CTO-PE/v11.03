. *****************************************************************************
. *                                                                           *
. *      Include Name : HL7ZADIO.INC                                          *
. *                                                                           *
. *      Function     : I/O for hl7zadaf file                                 *
. *                                                                           *
. *      Keys         : KEY29                                                 *
. *                                                                           *
. *****************************************************************************
.
.         positional read
.
RSH7ZAD1  RESET     KEY29
          READ      HL7ZAD01,KEY29;;
          RETURN
.
.         read to see if record exists
.
RAH7ZAD1  MOVE      ZERO,OVRCD
          RESET     KEY29
          READ      HL7ZAD01,KEY29;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDH7ZAD1  MOVE      ZERO,OVRCD
          RESET     KEY29
          READ      HL7ZAD01,KEY29;DZADIN01,ZADIN02,DZADIN03,DZADIN04:
                                  DZADIN05,ZAD001,ZAD002,ZAD003,ZAD004:
                                  ZAD005,ZAD006,ZAD007,ZAD008,ZAD009,ZAD010
          GOTO      OVERCOND IF OVER
          MOVE      DZADIN01,ZADIN01
          MOVE      DZADIN03,ZADIN03
          MOVE      DZADIN04,ZADIN04
          MOVE      DZADIN05,ZADIN05
          RETURN
.
.         next read
.
RKH7ZAD1  MOVE      ZERO,OVRCD
          READKS    HL7ZAD01;DZADIN01,ZADIN02,DZADIN03,DZADIN04:
                                  DZADIN05,ZAD001,ZAD002,ZAD003,ZAD004:
                                  ZAD005,ZAD006,ZAD007,ZAD008,ZAD009,ZAD010
          GOTO      OVERCOND IF OVER
          MOVE      DZADIN01,ZADIN01
          MOVE      DZADIN03,ZADIN03
          MOVE      DZADIN04,ZADIN04
          MOVE      DZADIN05,ZADIN05
          RETURN
.
.         previous read
.
RPH7ZAD1  MOVE      ZERO,OVRCD
          READKP    HL7ZAD01;DZADIN01,ZADIN02,DZADIN03,DZADIN04:
                                  DZADIN05,ZAD001,ZAD002,ZAD003,ZAD004:
                                  ZAD005,ZAD006,ZAD007,ZAD008,ZAD009,ZAD010
          GOTO      OVERCOND IF OVER
          MOVE      DZADIN01,ZADIN01
          MOVE      DZADIN03,ZADIN03
          MOVE      DZADIN04,ZADIN04
          MOVE      DZADIN05,ZADIN05
          RETURN
.
.         update
.
UPH7ZAD1  MOVE      ZADIN01,DZADIN01
          MOVE      ZADIN03,DZADIN03
          MOVE      ZADIN04,DZADIN04
          MOVE      ZADIN05,DZADIN05
          UPDATE    HL7ZAD01;DZADIN01,ZADIN02,DZADIN03,DZADIN04:
                                  DZADIN05,ZAD001,ZAD002,ZAD003,ZAD004:
                                  ZAD005,ZAD006,ZAD007,ZAD008,ZAD009,ZAD010
          RETURN
.
.         write
.
WRH7ZAD1  RESET     KEY29
          MOVE      ZADIN01,DZADIN01
          MOVE      ZADIN03,DZADIN03
          MOVE      ZADIN04,DZADIN04
          MOVE      ZADIN05,DZADIN05
          WRITE     HL7ZAD01,KEY29;DZADIN01,ZADIN02,DZADIN03,DZADIN04:
                                  DZADIN05,ZAD001,ZAD002,ZAD003,ZAD004:
                                  ZAD005,ZAD006,ZAD007,ZAD008,ZAD009,ZAD010
          RETURN
.
.         delete a record
.
DEH7ZAD1  RESET     KEY29
          DELETE    HL7ZAD01,KEY29
          RETURN
.
