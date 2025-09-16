.*****************************************************************************
.*        HL7RECIO.INC                                                       *
.*****************************************************************************
.
.         Index 1
.
RSH7REC1  RESET     KEY20
          READ      HL7RECA1,KEY20;;
          RETURN
.
RAH7REC1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      HL7RECA1,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDH7REC1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      HL7RECA1,KEY20;DH7REMES,H7RESTAT,H7REDTTM,H7REMTYP:
                                  H7REURNO,H7REDTPR,H7RESPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7REMES,H7REMESI
          RETURN
.
RKH7REC1  MOVE      ZERO,OVRCD
          READKS    HL7RECA1;DH7REMES,H7RESTAT,H7REDTTM,H7REMTYP:
                                  H7REURNO,H7REDTPR,H7RESPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7REMES,H7REMESI
          RETURN
.
RPH7REC1  MOVE      ZERO,OVRCD
          READKP    HL7RECA1;DH7REMES,H7RESTAT,H7REDTTM,H7REMTYP:
                                  H7REURNO,H7REDTPR,H7RESPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7REMES,H7REMESI
          RETURN
.
UPH7REC1  MOVE      H7REMESI,DH7REMES
          UPDATE    HL7RECA1;DH7REMES,H7RESTAT,H7REDTTM,H7REMTYP:
                                  H7REURNO,H7REDTPR,H7RESPAR
          RETURN
.
WRH7REC1  MOVE      H7REMESI,DH7REMES
          RESET     KEY20
          WRITE     HL7RECA1,KEY20;DH7REMES,H7RESTAT,H7REDTTM,H7REMTYP:
                                  H7REURNO,H7REDTPR,H7RESPAR
          RETURN
.
DEH7REC1  RESET     KEY20
          DELETE    HL7RECA1,KEY20
          RETURN
.
.         Index 2
.
RSH7REC2  RESET     KEY37
          READ      HL7RECA2,KEY37;;
          RETURN
.
RAH7REC2  RESET     KEY37
          MOVE      ZERO,OVRCD
          READ      HL7RECA2,KEY37;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDH7REC2  RESET     KEY37
          MOVE      ZERO,OVRCD
          READ      HL7RECA2,KEY37;DH7REMES,H7RESTAT,H7REDTTM,H7REMTYP:
                                  H7REURNO,H7REDTPR,H7RESPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7REMES,H7REMESI
          RETURN
.
RKH7REC2  MOVE      ZERO,OVRCD
          READKS    HL7RECA2;DH7REMES,H7RESTAT,H7REDTTM,H7REMTYP:
                                  H7REURNO,H7REDTPR,H7RESPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7REMES,H7REMESI
          RETURN
.
RPH7REC2  MOVE      ZERO,OVRCD
          READKP    HL7RECA2;DH7REMES,H7RESTAT,H7REDTTM,H7REMTYP:
                                  H7REURNO,H7REDTPR,H7RESPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7REMES,H7REMESI
          RETURN
.
UPH7REC2  MOVE      H7REMESI,DH7REMES
          UPDATE    HL7RECA2;DH7REMES,H7RESTAT,H7REDTTM,H7REMTYP:
                                  H7REURNO,H7REDTPR,H7RESPAR
          RETURN
.
.         Index 3
.
RSH7REC3  RESET     KEY44
          READ      HL7RECA3,KEY44;;
          RETURN
.
RAH7REC3  RESET     KEY44
          MOVE      ZERO,OVRCD
          READ      HL7RECA3,KEY44;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDH7REC3  RESET     KEY44
          MOVE      ZERO,OVRCD
          READ      HL7RECA3,KEY44;DH7REMES,H7RESTAT,H7REDTTM,H7REMTYP:
                                  H7REURNO,H7REDTPR,H7RESPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7REMES,H7REMESI
          RETURN
.
RKH7REC3  MOVE      ZERO,OVRCD
          READKS    HL7RECA3;DH7REMES,H7RESTAT,H7REDTTM,H7REMTYP:
                                  H7REURNO,H7REDTPR,H7RESPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7REMES,H7REMESI
          RETURN
.
RPH7REC3  MOVE      ZERO,OVRCD
          READKP    HL7RECA3;DH7REMES,H7RESTAT,H7REDTTM,H7REMTYP:
                                  H7REURNO,H7REDTPR,H7RESPAR
          GOTO      OVERCOND IF OVER
          MOVE      DH7REMES,H7REMESI
          RETURN
