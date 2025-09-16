.*****************************************************************************
.*        HL7URHIO.INC                                                       *
.*                                                                           *
.*****************************************************************************
.
RSH7URH1  RESET     KEY8
          READ      HL7URHA1,KEY8;;
          RETURN
.
RAH7URH1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      HL7URHA1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDH7URH1  RESET     KEY8
          MOVE      ZERO,OVRCD
          READ      HL7URHA1,KEY8;H7URNUMB
          GOTO      OVERCOND IF OVER
          RETURN
.
RKH7URH1  MOVE      ZERO,OVRCD
          READKS    HL7URHA1;H7URNUMB
          GOTO      OVERCOND IF OVER
          RETURN
.
RPH7URH1  MOVE      ZERO,OVRCD
          READKP    HL7URHA1;H7URNUMB
          GOTO      OVERCOND IF OVER
          RETURN
.
UPH7URH1  UPDATE    HL7URHA1;H7URNUMB
          RETURN
.
WRH7URH1  RESET     KEY8
          WRITE     HL7URHA1,KEY8;H7URNUMB
          RETURN
.
DEH7URH1  RESET     KEY8
          DELETE    HL7URHA1,KEY8
          RETURN
.
