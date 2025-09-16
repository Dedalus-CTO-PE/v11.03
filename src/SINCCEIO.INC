.
. SINCCEIO    
. --------
. Filename     : sincceaf.dat
.
RSSICE1   RESET     KEY17                                                       
          READ      SINCCEA1,KEY17;;                                            
          RETURN
.
RASICE1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCEA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICE1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCEA1,KEY17;SICECST,SICECOM,SICEDAT,SICEAMT,SICEBUD:     
                        SICESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCCEA1;SICECST,SICECOM,SICEDAT,SICEAMT,SICEBUD:           
                        SICESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCCEA1;SICECST,SICECOM,SICEDAT,SICEAMT,SICEBUD:           
                        SICESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICE1                                                                         
          UPDATE    SINCCEA1;SICECST,SICECOM,SICEDAT,SICEAMT,SICEBUD:           
                        SICESPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSICE1   RESET     KEY17                                                       
          WRITE     SINCCEA1,KEY17;SICECST,SICECOM,SICEDAT,SICEAMT,SICEBUD:     
                        SICESPAR                                                
          RETURN
.
DESICE1   RESET     KEY17                                                       
          DELETE    SINCCEA1,KEY17                                              
          RETURN
.
RLSICE1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     SINCCEA1,KEY17;SICECST,SICECOM,SICEDAT,SICEAMT,SICEBUD:     
                        SICESPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSICE1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINCCEA1;SICECST,SICECOM,SICEDAT,SICEAMT,SICEBUD:           
                        SICESPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSICE1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINCCEA1;SICECST,SICECOM,SICEDAT,SICEAMT,SICEBUD:           
                        SICESPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSICE1   RESET     KEY17                                                       
          UNLOCK    SINCCEA1                                                    
          RETURN
.
RSSICE2   RESET     KEY17                                                       
          READ      SINCCEA2,KEY17;;                                            
          RETURN
.
RASICE2   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCEA2,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICE2   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCEA2,KEY17;SICECST,SICECOM,SICEDAT,SICEAMT,SICEBUD:     
                        SICESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICE2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCCEA2;SICECST,SICECOM,SICEDAT,SICEAMT,SICEBUD:           
                        SICESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICE2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCCEA2;SICECST,SICECOM,SICEDAT,SICEAMT,SICEBUD:           
                        SICESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICE2                                                                         
          UPDATE    SINCCEA2;SICECST,SICECOM,SICEDAT,SICEAMT,SICEBUD:           
                        SICESPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSICE2   RESET     KEY17                                                       
          WRITE     SINCCEA2,KEY17;SICECST,SICECOM,SICEDAT,SICEAMT,SICEBUD:     
                        SICESPAR                                                
          RETURN
.
DESICE2   RESET     KEY17                                                       
          DELETE    SINCCEA2,KEY17                                              
          RETURN
.
RLSICE2   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     SINCCEA2,KEY17;SICECST,SICECOM,SICEDAT,SICEAMT,SICEBUD:     
                        SICESPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSICE2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINCCEA2;SICECST,SICECOM,SICEDAT,SICEAMT,SICEBUD:           
                        SICESPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSICE2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINCCEA2;SICECST,SICECOM,SICEDAT,SICEAMT,SICEBUD:           
                        SICESPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSICE2   RESET     KEY17                                                       
          UNLOCK    SINCCEA2                                                    
          RETURN
.
