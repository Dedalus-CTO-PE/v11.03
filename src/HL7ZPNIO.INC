. *****************************************************************************
. *                                                                           *
. *      Include Name : HL7ZPNIO.INC                                          *
. *                                                                           *
. *      Function     : I/O for hl7zpnaf file                                 *
. *                                                                           *
. *      Keys         : KEY29                                                 *
. *                                                                           *
. *****************************************************************************
.
.         positional read
.
RSH7ZPN1  RESET     KEY29
          READ      HL7ZPN01,KEY29;;
          RETURN
.
.         read to see if record exists
.
RAH7ZPN1  MOVE      ZERO,OVRCD
          RESET     KEY29
          READ      HL7ZPN01,KEY29;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDH7ZPN1  MOVE      ZERO,OVRCD
          RESET     KEY29
          READ      HL7ZPN01,KEY29;DZPNIN01,ZPNIN02,DZPNIN03,DZPNIN04:
                                  DZPNIN05,ZPN001,ZPN002,ZPN003,ZPN004:
                                  ZPN005,ZPN006,ZPN007,ZPN008,ZPN009
          GOTO      OVERCOND IF OVER
          MOVE      DZPNIN01,ZPNIN01
          MOVE      DZPNIN03,ZPNIN03
          MOVE      DZPNIN04,ZPNIN04
          MOVE      DZPNIN05,ZPNIN05
          RETURN
.
.         next read
.
RKH7ZPN1  MOVE      ZERO,OVRCD
          READKS    HL7ZPN01;DZPNIN01,ZPNIN02,DZPNIN03,DZPNIN04:
                                  DZPNIN05,ZPN001,ZPN002,ZPN003,ZPN004:
                                  ZPN005,ZPN006,ZPN007,ZPN008,ZPN009
          GOTO      OVERCOND IF OVER
          MOVE      DZPNIN01,ZPNIN01
          MOVE      DZPNIN03,ZPNIN03
          MOVE      DZPNIN04,ZPNIN04
          MOVE      DZPNIN05,ZPNIN05
          RETURN
.
.         previous read
.
RPH7ZPN1  MOVE      ZERO,OVRCD
          READKP    HL7ZPN01;DZPNIN01,ZPNIN02,DZPNIN03,DZPNIN04:
                                  DZPNIN05,ZPN001,ZPN002,ZPN003,ZPN004:
                                  ZPN005,ZPN006,ZPN007,ZPN008,ZPN009
          GOTO      OVERCOND IF OVER
          MOVE      DZPNIN01,ZPNIN01
          MOVE      DZPNIN03,ZPNIN03
          MOVE      DZPNIN04,ZPNIN04
          MOVE      DZPNIN05,ZPNIN05
          RETURN
.
.         update
.
UPH7ZPN1  MOVE      ZPNIN01,DZPNIN01
          MOVE      ZPNIN03,DZPNIN03
          MOVE      ZPNIN04,DZPNIN04
          MOVE      ZPNIN05,DZPNIN05
          UPDATE    HL7ZPN01;DZPNIN01,ZPNIN02,DZPNIN03,DZPNIN04:
                                  DZPNIN05,ZPN001,ZPN002,ZPN003,ZPN004:
                                  ZPN005,ZPN006,ZPN007,ZPN008,ZPN009
          RETURN
.
.         write
.
WRH7ZPN1  RESET     KEY29
          MOVE      ZPNIN01,DZPNIN01
          MOVE      ZPNIN03,DZPNIN03
          MOVE      ZPNIN04,DZPNIN04
          MOVE      ZPNIN05,DZPNIN05
          WRITE     HL7ZPN01,KEY29;DZPNIN01,ZPNIN02,DZPNIN03,DZPNIN04:
                                  DZPNIN05,ZPN001,ZPN002,ZPN003,ZPN004:
                                  ZPN005,ZPN006,ZPN007,ZPN008,ZPN009
          RETURN
.
.         delete a record
.
DEH7ZPN1  RESET     KEY29
          DELETE    HL7ZPN01,KEY29
          RETURN
