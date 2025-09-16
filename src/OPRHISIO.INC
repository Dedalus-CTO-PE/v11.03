.
. OPRHISIO    
. --------
. Filename     : oprhisaf.dat
.
RSOPHIS1  RESET     KEY38                                                       
          READ      OPRHISA1,KEY38;;                                            
          RETURN
.
RAOPHIS1  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      OPRHISA1,KEY38;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPHIS1  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      OPRHISA1,KEY38;OPHIURNO,OPHIEVNT,OPHIUNIQ,OPHIEDAT,DOPHIUCN:
                        OPHIDATE,OPHICHGD,OPHITCHG,OPHISPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DOPHIUCN,OPHIUCNT                                           
          RETURN
.
RKOPHIS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OPRHISA1;OPHIURNO,OPHIEVNT,OPHIUNIQ,OPHIEDAT,DOPHIUCN:      
                        OPHIDATE,OPHICHGD,OPHITCHG,OPHISPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DOPHIUCN,OPHIUCNT                                           
          RETURN
.
RPOPHIS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OPRHISA1;OPHIURNO,OPHIEVNT,OPHIUNIQ,OPHIEDAT,DOPHIUCN:      
                        OPHIDATE,OPHICHGD,OPHITCHG,OPHISPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DOPHIUCN,OPHIUCNT                                           
          RETURN
.
UPOPHIS1                                                                        
          MOVE      OPHIUCNT,DOPHIUCN                                           
          UPDATE    OPRHISA1;OPHIURNO,OPHIEVNT,OPHIUNIQ,OPHIEDAT,DOPHIUCN:      
                        OPHIDATE,OPHICHGD,OPHITCHG,OPHISPAR   
          RETURN
.
WROPHIS1  RESET     KEY38                                                       
          MOVE      OPHIUCNT,DOPHIUCN                                           
          WRITE     OPRHISA1,KEY38;OPHIURNO,OPHIEVNT,OPHIUNIQ,OPHIEDAT,DOPHIUCN:
                        OPHIDATE,OPHICHGD,OPHITCHG,OPHISPAR   
          RETURN
.
DEOPHIS1  RESET     KEY38                                                       
          DELETE    OPRHISA1,KEY38                                              
          RETURN
.
