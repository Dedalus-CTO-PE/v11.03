.
. OPRCPIIO    
. --------
. Filename     : oprcpiaf.dat
.
RSOPCPI1  RESET     KEY15                                                       
          READ      OPRCPIA1,KEY15;;                                            
          RETURN
.
RAOPCPI1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      OPRCPIA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPCPI1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      OPRCPIA1,KEY15;OPCIUNIQ,OPCICOMP,OPCICNTR,OPCICOMM,OPCICDAT:
                                   OPCICTIM,OPCICUID,OPCIUDAT,OPCIUTIM,OPCIUUID:
                                   OPCIDELT,OPCIUDEL,OPCISPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPCPI1  MOVE      ZERO,OVRCD                                                  
          READKS    OPRCPIA1;OPCIUNIQ,OPCICOMP,OPCICNTR,OPCICOMM,OPCICDAT:      
                             OPCICTIM,OPCICUID,OPCIUDAT,OPCIUTIM,OPCIUUID:      
                             OPCIDELT,OPCIUDEL,OPCISPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPCPI1  MOVE      ZERO,OVRCD                                                  
          READKP    OPRCPIA1;OPCIUNIQ,OPCICOMP,OPCICNTR,OPCICOMM,OPCICDAT:      
                             OPCICTIM,OPCICUID,OPCIUDAT,OPCIUTIM,OPCIUUID:      
                             OPCIDELT,OPCIUDEL,OPCISPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPCPI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRCPIA1;OPCIUNIQ,OPCICOMP,OPCICNTR,OPCICOMM,OPCICDAT:      
                             OPCICTIM,OPCICUID,OPCIUDAT,OPCIUTIM,OPCIUUID:      
                             OPCIDELT,OPCIUDEL,OPCISPAR                         
          RETURN
.
WROPCPI1  RESET     KEY15                                                       
          WRITE     OPRCPIA1,KEY15;OPCIUNIQ,OPCICOMP,OPCICNTR,OPCICOMM,OPCICDAT:
                                   OPCICTIM,OPCICUID,OPCIUDAT,OPCIUTIM,OPCIUUID:
                                   OPCIDELT,OPCIUDEL,OPCISPAR                   
          RETURN
.
DEOPCPI1  RESET     KEY15                                                       
          DELETE    OPRCPIA1,KEY15                                              
          RETURN
.
RSOPCPI2  RESET     KEY31                                                       
          READ      OPRCPIA2,KEY31;;                                            
          RETURN
.
RAOPCPI2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      OPRCPIA2,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPCPI2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      OPRCPIA2,KEY31;OPCIUNIQ,OPCICOMP,OPCICNTR,OPCICOMM,OPCICDAT:
                                   OPCICTIM,OPCICUID,OPCIUDAT,OPCIUTIM,OPCIUUID:
                                   OPCIDELT,OPCIUDEL,OPCISPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPCPI2  MOVE      ZERO,OVRCD                                                  
          READKS    OPRCPIA2;OPCIUNIQ,OPCICOMP,OPCICNTR,OPCICOMM,OPCICDAT:      
                             OPCICTIM,OPCICUID,OPCIUDAT,OPCIUTIM,OPCIUUID:      
                             OPCIDELT,OPCIUDEL,OPCISPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPCPI2  MOVE      ZERO,OVRCD                                                  
          READKP    OPRCPIA2;OPCIUNIQ,OPCICOMP,OPCICNTR,OPCICOMM,OPCICDAT:      
                             OPCICTIM,OPCICUID,OPCIUDAT,OPCIUTIM,OPCIUUID:      
                             OPCIDELT,OPCIUDEL,OPCISPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPCPI2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRCPIA2;OPCIUNIQ,OPCICOMP,OPCICNTR,OPCICOMM,OPCICDAT:      
                             OPCICTIM,OPCICUID,OPCIUDAT,OPCIUTIM,OPCIUUID:      
                             OPCIDELT,OPCIUDEL,OPCISPAR                         
          RETURN
.
WROPCPI2  RESET     KEY31                                                       
          WRITE     OPRCPIA2,KEY31;OPCIUNIQ,OPCICOMP,OPCICNTR,OPCICOMM,OPCICDAT:
                                   OPCICTIM,OPCICUID,OPCIUDAT,OPCIUTIM,OPCIUUID:
                                   OPCIDELT,OPCIUDEL,OPCISPAR                   
          RETURN
.
DEOPCPI2  RESET     KEY31                                                       
          DELETE    OPRCPIA2,KEY31                                              
          RETURN
.
