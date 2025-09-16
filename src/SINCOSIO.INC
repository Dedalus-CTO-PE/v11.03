.
. SINCOSIO    
. --------
. Filename     : sincosaf.dat
.
RSSICO1   RESET     KEY35                                                       
          READ      SINCOSA1,KEY35;;                                            
          RETURN
.
RASICO1   RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      SINCOSA1,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICO1   RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      SINCOSA1,KEY35;SICOCAT,SICOSUP,SICOSUT,SICODAT,SICOOPR:     
                        SICONPR,SICOSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICO1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCOSA1;SICOCAT,SICOSUP,SICOSUT,SICODAT,SICOOPR:           
                        SICONPR,SICOSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICO1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCOSA1;SICOCAT,SICOSUP,SICOSUT,SICODAT,SICOOPR:           
                        SICONPR,SICOSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICO1                                                                         
          UPDATE    SINCOSA1;SICOCAT,SICOSUP,SICOSUT,SICODAT,SICOOPR:           
                        SICONPR,SICOSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSICO1   RESET     KEY35                                                       
          WRITE     SINCOSA1,KEY35;SICOCAT,SICOSUP,SICOSUT,SICODAT,SICOOPR:     
                        SICONPR,SICOSPA                                         
          RETURN
.
DESICO1   RESET     KEY35                                                       
          DELETE    SINCOSA1,KEY35                                              
          RETURN
.
RLSICO1   RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READL     SINCOSA1,KEY35;SICOCAT,SICOSUP,SICOSUT,SICODAT,SICOOPR:     
                        SICONPR,SICOSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSICO1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINCOSA1;SICOCAT,SICOSUP,SICOSUT,SICODAT,SICOOPR:           
                        SICONPR,SICOSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSICO1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINCOSA1;SICOCAT,SICOSUP,SICOSUT,SICODAT,SICOOPR:           
                        SICONPR,SICOSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSICO1   RESET     KEY35                                                       
          UNLOCK    SINCOSA1                                                    
          RETURN
.
