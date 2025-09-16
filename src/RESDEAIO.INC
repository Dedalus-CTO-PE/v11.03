.
. RESDEAIO    
. --------
. Filename     : resdeaaf.dat
.
RSREDA1   RESET     KEY21                                                       
          READ      RESDEAA1,KEY21;;                                            
          RETURN
.
RAREDA1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      RESDEAA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREDA1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      RESDEAA1,KEY21;REDARDT,REDARTM,REDARUN,REDASID,REDAPID:     
                        REDAVTY,REDAOTY,REDAOCS,REDAOSC,REDAOSD,REDAVST:        
                        REDAVNM,REDAUNI,REDARFR,REDAABF,REDAPRB,REDANAT:        
                        REDASTA,REDATFL,REDAODT,REDAOTM,REDAPER,REDAROB:        
                        REDASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREDA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESDEAA1;REDARDT,REDARTM,REDARUN,REDASID,REDAPID:           
                        REDAVTY,REDAOTY,REDAOCS,REDAOSC,REDAOSD,REDAVST:        
                        REDAVNM,REDAUNI,REDARFR,REDAABF,REDAPRB,REDANAT:        
                        REDASTA,REDATFL,REDAODT,REDAOTM,REDAPER,REDAROB:        
                        REDASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREDA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESDEAA1;REDARDT,REDARTM,REDARUN,REDASID,REDAPID:           
                        REDAVTY,REDAOTY,REDAOCS,REDAOSC,REDAOSD,REDAVST:        
                        REDAVNM,REDAUNI,REDARFR,REDAABF,REDAPRB,REDANAT:        
                        REDASTA,REDATFL,REDAODT,REDAOTM,REDAPER,REDAROB:        
                        REDASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREDA1                                                                         
          UPDATE    RESDEAA1;REDARDT,REDARTM,REDARUN,REDASID,REDAPID:           
                        REDAVTY,REDAOTY,REDAOCS,REDAOSC,REDAOSD,REDAVST:        
                        REDAVNM,REDAUNI,REDARFR,REDAABF,REDAPRB,REDANAT:        
                        REDASTA,REDATFL,REDAODT,REDAOTM,REDAPER,REDAROB:        
                        REDASPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRREDA1   RESET     KEY21                                                       
          WRITE     RESDEAA1,KEY21;REDARDT,REDARTM,REDARUN,REDASID,REDAPID:     
                        REDAVTY,REDAOTY,REDAOCS,REDAOSC,REDAOSD,REDAVST:        
                        REDAVNM,REDAUNI,REDARFR,REDAABF,REDAPRB,REDANAT:        
                        REDASTA,REDATFL,REDAODT,REDAOTM,REDAPER,REDAROB:        
                        REDASPA                                                 
          RETURN
.
DEREDA1   RESET     KEY21                                                       
          DELETE    RESDEAA1,KEY21                                              
          RETURN
.
RLREDA1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     RESDEAA1,KEY21;REDARDT,REDARTM,REDARUN,REDASID,REDAPID:     
                        REDAVTY,REDAOTY,REDAOCS,REDAOSC,REDAOSD,REDAVST:        
                        REDAVNM,REDAUNI,REDARFR,REDAABF,REDAPRB,REDANAT:        
                        REDASTA,REDATFL,REDAODT,REDAOTM,REDAPER,REDAROB:        
                        REDASPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLREDA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESDEAA1;REDARDT,REDARTM,REDARUN,REDASID,REDAPID:           
                        REDAVTY,REDAOTY,REDAOCS,REDAOSC,REDAOSD,REDAVST:        
                        REDAVNM,REDAUNI,REDARFR,REDAABF,REDAPRB,REDANAT:        
                        REDASTA,REDATFL,REDAODT,REDAOTM,REDAPER,REDAROB:        
                        REDASPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLREDA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESDEAA1;REDARDT,REDARTM,REDARUN,REDASID,REDAPID:           
                        REDAVTY,REDAOTY,REDAOCS,REDAOSC,REDAOSD,REDAVST:        
                        REDAVNM,REDAUNI,REDARFR,REDAABF,REDAPRB,REDANAT:        
                        REDASTA,REDATFL,REDAODT,REDAOTM,REDAPER,REDAROB:        
                        REDASPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUREDA1   RESET     KEY21                                                       
          UNLOCK    RESDEAA1                                                    
          RETURN
.
RSREDA2   RESET     KEY61                                                       
          READ      RESDEAA2,KEY61;;                                            
          RETURN
.
RAREDA2   RESET     KEY61                                                       
          MOVE      ZERO,OVRCD
          READ      RESDEAA2,KEY61;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREDA2   RESET     KEY61                                                       
          MOVE      ZERO,OVRCD
          READ      RESDEAA2,KEY61;REDARDT,REDARTM,REDARUN,REDASID,REDAPID:     
                        REDAVTY,REDAOTY,REDAOCS,REDAOSC,REDAOSD,REDAVST:        
                        REDAVNM,REDAUNI,REDARFR,REDAABF,REDAPRB,REDANAT:        
                        REDASTA,REDATFL,REDAODT,REDAOTM,REDAPER,REDAROB:        
                        REDASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREDA2                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESDEAA2;REDARDT,REDARTM,REDARUN,REDASID,REDAPID:           
                        REDAVTY,REDAOTY,REDAOCS,REDAOSC,REDAOSD,REDAVST:        
                        REDAVNM,REDAUNI,REDARFR,REDAABF,REDAPRB,REDANAT:        
                        REDASTA,REDATFL,REDAODT,REDAOTM,REDAPER,REDAROB:        
                        REDASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREDA2                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESDEAA2;REDARDT,REDARTM,REDARUN,REDASID,REDAPID:           
                        REDAVTY,REDAOTY,REDAOCS,REDAOSC,REDAOSD,REDAVST:        
                        REDAVNM,REDAUNI,REDARFR,REDAABF,REDAPRB,REDANAT:        
                        REDASTA,REDATFL,REDAODT,REDAOTM,REDAPER,REDAROB:        
                        REDASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREDA2                                                                         
          UPDATE    RESDEAA2;REDARDT,REDARTM,REDARUN,REDASID,REDAPID:           
                        REDAVTY,REDAOTY,REDAOCS,REDAOSC,REDAOSD,REDAVST:        
                        REDAVNM,REDAUNI,REDARFR,REDAABF,REDAPRB,REDANAT:        
                        REDASTA,REDATFL,REDAODT,REDAOTM,REDAPER,REDAROB:        
                        REDASPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRREDA2   RESET     KEY61                                                       
          WRITE     RESDEAA2,KEY61;REDARDT,REDARTM,REDARUN,REDASID,REDAPID:     
                        REDAVTY,REDAOTY,REDAOCS,REDAOSC,REDAOSD,REDAVST:        
                        REDAVNM,REDAUNI,REDARFR,REDAABF,REDAPRB,REDANAT:        
                        REDASTA,REDATFL,REDAODT,REDAOTM,REDAPER,REDAROB:        
                        REDASPA                                                 
          RETURN
.
DEREDA2   RESET     KEY61                                                       
          DELETE    RESDEAA2,KEY61                                              
          RETURN
.
RLREDA2   RESET     KEY61                                                       
          MOVE      ZERO,OVRCD
          READL     RESDEAA2,KEY61;REDARDT,REDARTM,REDARUN,REDASID,REDAPID:     
                        REDAVTY,REDAOTY,REDAOCS,REDAOSC,REDAOSD,REDAVST:        
                        REDAVNM,REDAUNI,REDARFR,REDAABF,REDAPRB,REDANAT:        
                        REDASTA,REDATFL,REDAODT,REDAOTM,REDAPER,REDAROB:        
                        REDASPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLREDA2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESDEAA2;REDARDT,REDARTM,REDARUN,REDASID,REDAPID:           
                        REDAVTY,REDAOTY,REDAOCS,REDAOSC,REDAOSD,REDAVST:        
                        REDAVNM,REDAUNI,REDARFR,REDAABF,REDAPRB,REDANAT:        
                        REDASTA,REDATFL,REDAODT,REDAOTM,REDAPER,REDAROB:        
                        REDASPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLREDA2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESDEAA2;REDARDT,REDARTM,REDARUN,REDASID,REDAPID:           
                        REDAVTY,REDAOTY,REDAOCS,REDAOSC,REDAOSD,REDAVST:        
                        REDAVNM,REDAUNI,REDARFR,REDAABF,REDAPRB,REDANAT:        
                        REDASTA,REDATFL,REDAODT,REDAOTM,REDAPER,REDAROB:        
                        REDASPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUREDA2   RESET     KEY61                                                       
          UNLOCK    RESDEAA2                                                    
          RETURN
.
