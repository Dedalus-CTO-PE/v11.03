. *****************************************************************************
. *                                                                           *
. *      Include Name : HL7EVNIO.INC                                          *
. *                                                                           *
. *      Function     : I/O for hl7evnaf file                                 *
. *                                                                           *
. *      Keys         : KEY22                                                 *
. *                                                                           *
. *****************************************************************************
.
.         positional read
.
RSH7EVN1  RESET     KEY22
          READ      HL7EVN01,KEY22;;
          RETURN
.
.         read to see if record exists
.
RAH7EVN1  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7EVN01,KEY22;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDH7EVN1  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7EVN01,KEY22;DEVNIN01,DEVNIN02,EVN001,EVN002:
                                  EVN003,EVN004,EVN005,EVN006,EVN007
          GOTO      OVERCOND IF OVER
          MOVE      DEVNIN01,EVNIN01
          MOVE      DEVNIN02,EVNIN02
          RETURN
.
.         next read
.
RKH7EVN1  MOVE      ZERO,OVRCD
          READKS    HL7EVN01;DEVNIN01,DEVNIN02,EVN001,EVN002:
                                  EVN003,EVN004,EVN005,EVN006,EVN007
          GOTO      OVERCOND IF OVER
          MOVE      DEVNIN01,EVNIN01
          MOVE      DEVNIN02,EVNIN02
          RETURN
.
.         previous read
.
RPH7EVN1  MOVE      ZERO,OVRCD
          READKP    HL7EVN01;DEVNIN01,DEVNIN02,EVN001,EVN002:
                                  EVN003,EVN004,EVN005,EVN006,EVN007
          GOTO      OVERCOND IF OVER
          MOVE      DEVNIN01,EVNIN01
          MOVE      DEVNIN02,EVNIN02
          RETURN
.
.         update
.
UPH7EVN1  MOVE      EVNIN01,DEVNIN01
          MOVE      EVNIN02,DEVNIN02
          UPDATE    HL7EVN01;DEVNIN01,DEVNIN02,EVN001,EVN002:
                                  EVN003,EVN004,EVN005,EVN006,EVN007
          RETURN
.
.         write
.
WRH7EVN1  RESET     KEY22
          MOVE      EVNIN01,DEVNIN01
          MOVE      EVNIN02,DEVNIN02
          WRITE     HL7EVN01,KEY22;DEVNIN01,DEVNIN02,EVN001,EVN002:
                                  EVN003,EVN004,EVN005,EVN006,EVN007
          RETURN
.
.         delete a record
.
DEH7EVN1  RESET     KEY22
          DELETE    HL7EVN01,KEY22
          RETURN
.
.
RHL7EVN   MOVE      ZERO,OVRCD     
          READ      DGATEOUT;EVN001,EVN002,EVN003,EVN004,EVN005,EVN006
          GOTO      OVERCOND IF OVER 
          RETURN
. 
WHL7EVN   MOVE      ZERO,OVRCD
          CLEAR     NEXTSEG
          APPEND    CRFORM,NEXTSEG
          APPEND    "EVN",NEXTSEG
          RESET     NEXTSEG
          WRITE     DGATEOUT;NEXTSEG,EVN001,EVN002,EVN003,EVN004,EVN005,EVN006;
          GOTO      OVERCOND IF OVER
          RETURN
