. *****************************************************************************
. *                                                                           *
. *      Include Name : HL7ERRIO.INC                                          *
. *                                                                           *
. *      Function     : I/O for hl7erraf file                                 *
. *                                                                           *
. *      Keys         : KEY22                                                 *
. *                                                                           *
. *****************************************************************************
.
.         positional read
.
RSH7ERR1  RESET     KEY22
          READ      HL7ERR01,KEY22;;
          RETURN
.
.         read to see if record exists
.
RAH7ERR1  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7ERR01,KEY22;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDH7ERR1  MOVE      ZERO,OVRCD
          RESET     KEY22
          READ      HL7ERR01,KEY22;DERRIN01,DERRIN02,ERR001,ERR002
          GOTO      OVERCOND IF OVER
          MOVE      DERRIN01,ERRIN01
          MOVE      DERRIN02,ERRIN02
          RETURN
.
.         next read
.
RKH7ERR1  MOVE      ZERO,OVRCD
          READKS    HL7ERR01;DERRIN01,DERRIN02,ERR001,ERR002
          GOTO      OVERCOND IF OVER
          MOVE      DERRIN01,ERRIN01          
          MOVE      DERRIN02,ERRIN02          
          RETURN
.
.         previous read
.
RPH7ERR1  MOVE      ZERO,OVRCD
          READKP    HL7ERR01;DERRIN01,DERRIN02,ERR001,ERR002
          GOTO      OVERCOND IF OVER
          MOVE      DERRIN01,ERRIN01          
          MOVE      DERRIN02,ERRIN02          
          RETURN
.
.         update
.
UPH7ERR1  MOVE      ERRIN01,DERRIN01                    
          MOVE      ERRIN02,DERRIN02                    
          UPDATE    HL7ERR01;DERRIN01,DERRIN02,ERR001,ERR002
          RETURN
.
.         write
.
WRH7ERR1  RESET     KEY22
          MOVE      ERRIN01,DERRIN01                    
          MOVE      ERRIN02,DERRIN02                    
          WRITE     HL7ERR01,KEY22;DERRIN01,DERRIN02,ERR001,ERR002
          RETURN
.
.         delete a record
.
DEH7ERR1  RESET     KEY22
          DELETE    HL7ERR01,KEY22
          RETURN
.
