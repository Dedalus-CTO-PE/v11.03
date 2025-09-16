.*****************************************************************************
.*        HL7RERFD.INC                                                       *
.*****************************************************************************
.
RSH7RER1  RESET     KEY23
          READ      HL7RERA1,KEY23;;
          RETURN
.
RAH7RER1  RESET     KEY23
          MOVE      ZERO,OVRCD
          READ      HL7RERA1,KEY23;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDH7RER1  RESET     KEY23
          MOVE      ZERO,OVRCD
          READ      HL7RERA1,KEY23;DH7RRMES,DH7RRCNT,H7RRDESC,H7RRCODE,H7RRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7RRMES,H7RRMESI
          MOVE      DH7RRCNT,H7RRSCNT
          RETURN
.
RKH7RER1  MOVE      ZERO,OVRCD
          READKS    HL7RERA1;DH7RRMES,DH7RRCNT,H7RRDESC,H7RRCODE,H7RRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7RRMES,H7RRMESI
          MOVE      DH7RRCNT,H7RRSCNT
          RETURN
.
RPH7RER1  MOVE      ZERO,OVRCD
          READKP    HL7RERA1;DH7RRMES,DH7RRCNT,H7RRDESC,H7RRCODE,H7RRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7RRMES,H7RRMESI
          MOVE      DH7RRCNT,H7RRSCNT
          RETURN
.
UPH7RER1  MOVE      H7RRMESI,DH7RRMES
          MOVE      H7RRSCNT,DH7RRCNT
          UPDATE    HL7RERA1;DH7RRMES,DH7RRCNT,H7RRDESC,H7RRCODE,H7RRSPAR
          RETURN
.
WRH7RER1  MOVE      H7RRMESI,DH7RRMES
          MOVE      H7RRSCNT,DH7RRCNT
          RESET     KEY23
          WRITE     HL7RERA1,KEY23;DH7RRMES,DH7RRCNT,H7RRDESC,H7RRCODE,H7RRSPAR
          RETURN
.
DEH7RER1  RESET     KEY23
          DELETE    HL7RERA1,KEY23
          RETURN
