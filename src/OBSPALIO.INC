.
. OBSPALIO    
. --------
. Filename     : obspalaf.dat
.
RSOBPA1   RESET     KEY12                                                       
          READ      OBSPALA1,KEY12;;                                            
          RETURN
.
RAOBPA1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      OBSPALA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBPA1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      OBSPALA1,KEY12;OBPAURN,OBPAUNI,OBPADTE,OBPAUSR,OBPAALT:     
                        OBPAALV,OBPASLV,OBPAIAC,OBPAIDT,OBPAIUS,OBPACM1:        
                        OBPACM2,OBPALUS,OBPALDT,OBPALTM,OBPARF1,OBPARF2:        
                        OBPAYN1,OBPAYN2,OBPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBPA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    OBSPALA1;OBPAURN,OBPAUNI,OBPADTE,OBPAUSR,OBPAALT:           
                        OBPAALV,OBPASLV,OBPAIAC,OBPAIDT,OBPAIUS,OBPACM1:        
                        OBPACM2,OBPALUS,OBPALDT,OBPALTM,OBPARF1,OBPARF2:        
                        OBPAYN1,OBPAYN2,OBPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBPA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    OBSPALA1;OBPAURN,OBPAUNI,OBPADTE,OBPAUSR,OBPAALT:           
                        OBPAALV,OBPASLV,OBPAIAC,OBPAIDT,OBPAIUS,OBPACM1:        
                        OBPACM2,OBPALUS,OBPALDT,OBPALTM,OBPARF1,OBPARF2:        
                        OBPAYN1,OBPAYN2,OBPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBPA1                                                                         
          UPDATE    OBSPALA1;OBPAURN,OBPAUNI,OBPADTE,OBPAUSR,OBPAALT:           
                        OBPAALV,OBPASLV,OBPAIAC,OBPAIDT,OBPAIUS,OBPACM1:        
                        OBPACM2,OBPALUS,OBPALDT,OBPALTM,OBPARF1,OBPARF2:        
                        OBPAYN1,OBPAYN2,OBPASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROBPA1   RESET     KEY12                                                       
          WRITE     OBSPALA1,KEY12;OBPAURN,OBPAUNI,OBPADTE,OBPAUSR,OBPAALT:     
                        OBPAALV,OBPASLV,OBPAIAC,OBPAIDT,OBPAIUS,OBPACM1:        
                        OBPACM2,OBPALUS,OBPALDT,OBPALTM,OBPARF1,OBPARF2:        
                        OBPAYN1,OBPAYN2,OBPASPA                                 
          RETURN
.
DEOBPA1   RESET     KEY12                                                       
          DELETE    OBSPALA1,KEY12                                              
          RETURN
.
RLOBPA1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     OBSPALA1,KEY12;OBPAURN,OBPAUNI,OBPADTE,OBPAUSR,OBPAALT:     
                        OBPAALV,OBPASLV,OBPAIAC,OBPAIDT,OBPAIUS,OBPACM1:        
                        OBPACM2,OBPALUS,OBPALDT,OBPALTM,OBPARF1,OBPARF2:        
                        OBPAYN1,OBPAYN2,OBPASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOBPA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   OBSPALA1;OBPAURN,OBPAUNI,OBPADTE,OBPAUSR,OBPAALT:           
                        OBPAALV,OBPASLV,OBPAIAC,OBPAIDT,OBPAIUS,OBPACM1:        
                        OBPACM2,OBPALUS,OBPALDT,OBPALTM,OBPARF1,OBPARF2:        
                        OBPAYN1,OBPAYN2,OBPASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOBPA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   OBSPALA1;OBPAURN,OBPAUNI,OBPADTE,OBPAUSR,OBPAALT:           
                        OBPAALV,OBPASLV,OBPAIAC,OBPAIDT,OBPAIUS,OBPACM1:        
                        OBPACM2,OBPALUS,OBPALDT,OBPALTM,OBPARF1,OBPARF2:        
                        OBPAYN1,OBPAYN2,OBPASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOBPA1   RESET     KEY12                                                       
          UNLOCK    OBSPALA1                                                    
          RETURN
.
RSOBPA2   RESET     KEY21                                                       
          READ      OBSPALA2,KEY21;;                                            
          RETURN
.
RAOBPA2   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      OBSPALA2,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBPA2   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      OBSPALA2,KEY21;OBPAURN,OBPAUNI,OBPADTE,OBPAUSR,OBPAALT:     
                        OBPAALV,OBPASLV,OBPAIAC,OBPAIDT,OBPAIUS,OBPACM1:        
                        OBPACM2,OBPALUS,OBPALDT,OBPALTM,OBPARF1,OBPARF2:        
                        OBPAYN1,OBPAYN2,OBPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBPA2                                                                         
          MOVE      ZERO,OVRCD
          READKS    OBSPALA2;OBPAURN,OBPAUNI,OBPADTE,OBPAUSR,OBPAALT:           
                        OBPAALV,OBPASLV,OBPAIAC,OBPAIDT,OBPAIUS,OBPACM1:        
                        OBPACM2,OBPALUS,OBPALDT,OBPALTM,OBPARF1,OBPARF2:        
                        OBPAYN1,OBPAYN2,OBPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBPA2                                                                         
          MOVE      ZERO,OVRCD
          READKP    OBSPALA2;OBPAURN,OBPAUNI,OBPADTE,OBPAUSR,OBPAALT:           
                        OBPAALV,OBPASLV,OBPAIAC,OBPAIDT,OBPAIUS,OBPACM1:        
                        OBPACM2,OBPALUS,OBPALDT,OBPALTM,OBPARF1,OBPARF2:        
                        OBPAYN1,OBPAYN2,OBPASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBPA2                                                                         
          UPDATE    OBSPALA2;OBPAURN,OBPAUNI,OBPADTE,OBPAUSR,OBPAALT:           
                        OBPAALV,OBPASLV,OBPAIAC,OBPAIDT,OBPAIUS,OBPACM1:        
                        OBPACM2,OBPALUS,OBPALDT,OBPALTM,OBPARF1,OBPARF2:        
                        OBPAYN1,OBPAYN2,OBPASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROBPA2   RESET     KEY21                                                       
          WRITE     OBSPALA2,KEY21;OBPAURN,OBPAUNI,OBPADTE,OBPAUSR,OBPAALT:     
                        OBPAALV,OBPASLV,OBPAIAC,OBPAIDT,OBPAIUS,OBPACM1:        
                        OBPACM2,OBPALUS,OBPALDT,OBPALTM,OBPARF1,OBPARF2:        
                        OBPAYN1,OBPAYN2,OBPASPA                                 
          RETURN
.
DEOBPA2   RESET     KEY21                                                       
          DELETE    OBSPALA2,KEY21                                              
          RETURN
.
RLOBPA2   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     OBSPALA2,KEY21;OBPAURN,OBPAUNI,OBPADTE,OBPAUSR,OBPAALT:     
                        OBPAALV,OBPASLV,OBPAIAC,OBPAIDT,OBPAIUS,OBPACM1:        
                        OBPACM2,OBPALUS,OBPALDT,OBPALTM,OBPARF1,OBPARF2:        
                        OBPAYN1,OBPAYN2,OBPASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOBPA2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   OBSPALA2;OBPAURN,OBPAUNI,OBPADTE,OBPAUSR,OBPAALT:           
                        OBPAALV,OBPASLV,OBPAIAC,OBPAIDT,OBPAIUS,OBPACM1:        
                        OBPACM2,OBPALUS,OBPALDT,OBPALTM,OBPARF1,OBPARF2:        
                        OBPAYN1,OBPAYN2,OBPASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOBPA2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   OBSPALA2;OBPAURN,OBPAUNI,OBPADTE,OBPAUSR,OBPAALT:           
                        OBPAALV,OBPASLV,OBPAIAC,OBPAIDT,OBPAIUS,OBPACM1:        
                        OBPACM2,OBPALUS,OBPALDT,OBPALTM,OBPARF1,OBPARF2:        
                        OBPAYN1,OBPAYN2,OBPASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOBPA2   RESET     KEY21                                                       
          UNLOCK    OBSPALA2                                                    
          RETURN
.
