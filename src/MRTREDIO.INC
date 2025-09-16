.
. MRTREDIO    
. --------
. Filename     : mrtredaf.dat
.
RSMRED1   RESET     KEY12                                                       
          READ      MRTREDA1,KEY12;;                                            
          RETURN
.
RAMRED1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      MRTREDA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRED1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      MRTREDA1,KEY12;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:  
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRED1                                                                         
          MOVE      ZERO,OVRCD
          READKS    MRTREDA1;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:        
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRED1                                                                         
          MOVE      ZERO,OVRCD
          READKP    MRTREDA1;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:        
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRED1                                                                         
          UPDATE    MRTREDA1;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:        
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRED1   RESET     KEY12                                                       
          WRITE     MRTREDA1,KEY12;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:  
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          RETURN
.
DEMRED1   RESET     KEY12                                                       
          DELETE    MRTREDA1,KEY12                                              
          RETURN
.
RLMRED1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     MRTREDA1,KEY12;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:  
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRED1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   MRTREDA1;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:        
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRED1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   MRTREDA1;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:        
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
ULMRED1   RESET     KEY12                                                       
          UNLOCK    MRTREDA1                                                    
          RETURN
.
RSMRED2   RESET     KEY52                                                       
          READ      MRTREDA2,KEY52;;                                            
          RETURN
.
RAMRED2   RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      MRTREDA2,KEY52;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRED2   RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      MRTREDA2,KEY52;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:  
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRED2                                                                         
          MOVE      ZERO,OVRCD
          READKS    MRTREDA2;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:        
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRED2                                                                         
          MOVE      ZERO,OVRCD
          READKP    MRTREDA2;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:        
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRED2                                                                         
          UPDATE    MRTREDA2;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:        
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRED2   RESET     KEY52                                                       
          WRITE     MRTREDA2,KEY52;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:  
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          RETURN
.
DEMRED2   RESET     KEY52                                                       
          DELETE    MRTREDA2,KEY52                                              
          RETURN
.
RLMRED2   RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READL     MRTREDA2,KEY52;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:  
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRED2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   MRTREDA2;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:        
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRED2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   MRTREDA2;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:        
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
ULMRED2   RESET     KEY52                                                       
          UNLOCK    MRTREDA2                                                    
          RETURN
.
RSMRED3   RESET     KEY20                                                       
          READ      MRTREDA3,KEY20;;                                            
          RETURN
.
RAMRED3   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      MRTREDA3,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRED3   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      MRTREDA3,KEY20;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:  
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRED3                                                                         
          MOVE      ZERO,OVRCD
          READKS    MRTREDA3;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:        
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRED3                                                                         
          MOVE      ZERO,OVRCD
          READKP    MRTREDA3;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:        
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRED3                                                                         
          UPDATE    MRTREDA3;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:        
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRED3   RESET     KEY20                                                       
          WRITE     MRTREDA3,KEY20;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:  
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          RETURN
.
DEMRED3   RESET     KEY20                                                       
          DELETE    MRTREDA3,KEY20                                              
          RETURN
.
RLMRED3   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     MRTREDA3,KEY20;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:  
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRED3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   MRTREDA3;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:        
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRED3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   MRTREDA3;MREDEID,MREDVIS,MREDLEV1,MREDLEV2,MREDLEV3:        
                        MREDLEV4,MREDANL1,MREDANL2,MREDANL3,MREDDEL,MREDURNO:   
                        MREDTDIG,MREDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
ULMRED3   RESET     KEY20                                                       
          UNLOCK    MRTREDA3                                                    
          RETURN
.
