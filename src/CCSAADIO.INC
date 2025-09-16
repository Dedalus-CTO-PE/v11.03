.
. CCSAADIO    
. --------
. Filename     : ccsaadaf.dat
.
RSCCAD1   RESET     KEY11                                                       
          READ      CCSAADA1,KEY11;;                                            
          RETURN
.
RACCAD1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      CCSAADA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCAD1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      CCSAADA1,KEY11;CCADDEF,CCADPC,CCADDES,CCADLV2,CCADLV3:      
                        CCADLV4,CCADSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCAD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSAADA1;CCADDEF,CCADPC,CCADDES,CCADLV2,CCADLV3:            
                        CCADLV4,CCADSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCAD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSAADA1;CCADDEF,CCADPC,CCADDES,CCADLV2,CCADLV3:            
                        CCADLV4,CCADSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCAD1                                                                         
          UPDATE    CCSAADA1;CCADDEF,CCADPC,CCADDES,CCADLV2,CCADLV3:            
                        CCADLV4,CCADSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCCAD1   RESET     KEY11                                                       
          WRITE     CCSAADA1,KEY11;CCADDEF,CCADPC,CCADDES,CCADLV2,CCADLV3:      
                        CCADLV4,CCADSPA                                         
          RETURN
.
DECCAD1   RESET     KEY11                                                       
          DELETE    CCSAADA1,KEY11                                              
          RETURN
.
RLCCAD1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     CCSAADA1,KEY11;CCADDEF,CCADPC,CCADDES,CCADLV2,CCADLV3:      
                        CCADLV4,CCADSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCCAD1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CCSAADA1;CCADDEF,CCADPC,CCADDES,CCADLV2,CCADLV3:            
                        CCADLV4,CCADSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCCAD1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CCSAADA1;CCADDEF,CCADPC,CCADDES,CCADLV2,CCADLV3:            
                        CCADLV4,CCADSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCCAD1   RESET     KEY11                                                       
          UNLOCK    CCSAADA1                                                    
          RETURN
.
RSCCAD2   RESET     KEY41                                                       
          READ      CCSAADA2,KEY41;;                                            
          RETURN
.
RACCAD2   RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READ      CCSAADA2,KEY41;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCAD2   RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READ      CCSAADA2,KEY41;CCADDEF,CCADPC,CCADDES,CCADLV2,CCADLV3:      
                        CCADLV4,CCADSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCAD2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSAADA2;CCADDEF,CCADPC,CCADDES,CCADLV2,CCADLV3:            
                        CCADLV4,CCADSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCAD2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSAADA2;CCADDEF,CCADPC,CCADDES,CCADLV2,CCADLV3:            
                        CCADLV4,CCADSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCAD2                                                                         
          UPDATE    CCSAADA2;CCADDEF,CCADPC,CCADDES,CCADLV2,CCADLV3:            
                        CCADLV4,CCADSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCCAD2   RESET     KEY41                                                       
          WRITE     CCSAADA2,KEY41;CCADDEF,CCADPC,CCADDES,CCADLV2,CCADLV3:      
                        CCADLV4,CCADSPA                                         
          RETURN
.
DECCAD2   RESET     KEY41                                                       
          DELETE    CCSAADA2,KEY41                                              
          RETURN
.
RLCCAD2   RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READL     CCSAADA2,KEY41;CCADDEF,CCADPC,CCADDES,CCADLV2,CCADLV3:      
                        CCADLV4,CCADSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCCAD2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CCSAADA2;CCADDEF,CCADPC,CCADDES,CCADLV2,CCADLV3:            
                        CCADLV4,CCADSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCCAD2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CCSAADA2;CCADDEF,CCADPC,CCADDES,CCADLV2,CCADLV3:            
                        CCADLV4,CCADSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCCAD2   RESET     KEY41                                                       
          UNLOCK    CCSAADA2                                                    
          RETURN
.
