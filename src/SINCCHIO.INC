.
. SINCCHIO    
. --------
. Filename     : sincchaf.dat
.
RSSICH1   RESET     KEY28                                                       
          READ      SINCCHA1,KEY28;;                                            
          RETURN
.
RASICH1   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCHA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICH1   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCHA1,KEY28;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:     
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICH1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCCHA1;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICH1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCCHA1;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICH1                                                                         
          UPDATE    SINCCHA1;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSICH1   RESET     KEY28                                                       
          WRITE     SINCCHA1,KEY28;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:     
                        SICHUQT,SICHUAM,SICHSPA                                 
          RETURN
.
DESICH1   RESET     KEY28                                                       
          DELETE    SINCCHA1,KEY28                                              
          RETURN
.
RLSICH1   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     SINCCHA1,KEY28;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:     
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSICH1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINCCHA1;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSICH1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINCCHA1;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSICH1   RESET     KEY28                                                       
          UNLOCK    SINCCHA1                                                    
          RETURN
.
RSSICH2   RESET     KEY28                                                       
          READ      SINCCHA2,KEY28;;                                            
          RETURN
.
RASICH2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCHA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICH2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCHA2,KEY28;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:     
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICH2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCCHA2;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICH2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCCHA2;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICH2                                                                         
          UPDATE    SINCCHA2;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSICH2   RESET     KEY28                                                       
          WRITE     SINCCHA2,KEY28;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:     
                        SICHUQT,SICHUAM,SICHSPA                                 
          RETURN
.
DESICH2   RESET     KEY28                                                       
          DELETE    SINCCHA2,KEY28                                              
          RETURN
.
RLSICH2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     SINCCHA2,KEY28;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:     
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSICH2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINCCHA2;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSICH2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINCCHA2;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSICH2   RESET     KEY28                                                       
          UNLOCK    SINCCHA2                                                    
          RETURN
.
RSSICH3   RESET     KEY28                                                       
          READ      SINCCHA3,KEY28;;                                            
          RETURN
.
RASICH3   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCHA3,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICH3   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCHA3,KEY28;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:     
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICH3                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCCHA3;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICH3                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCCHA3;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICH3                                                                         
          UPDATE    SINCCHA3;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSICH3   RESET     KEY28                                                       
          WRITE     SINCCHA3,KEY28;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:     
                        SICHUQT,SICHUAM,SICHSPA                                 
          RETURN
.
DESICH3   RESET     KEY28                                                       
          DELETE    SINCCHA3,KEY28                                              
          RETURN
.
RLSICH3   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     SINCCHA3,KEY28;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:     
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSICH3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINCCHA3;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSICH3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINCCHA3;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSICH3   RESET     KEY28                                                       
          UNLOCK    SINCCHA3                                                    
          RETURN
.
RSSICH4   RESET     KEY28                                                       
          READ      SINCCHA4,KEY28;;                                            
          RETURN
.
RASICH4   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCHA4,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICH4   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCHA4,KEY28;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:     
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICH4                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCCHA4;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICH4                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCCHA4;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICH4                                                                         
          UPDATE    SINCCHA4;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSICH4   RESET     KEY28                                                       
          WRITE     SINCCHA4,KEY28;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:     
                        SICHUQT,SICHUAM,SICHSPA                                 
          RETURN
.
DESICH4   RESET     KEY28                                                       
          DELETE    SINCCHA4,KEY28                                              
          RETURN
.
RLSICH4   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     SINCCHA4,KEY28;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:     
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSICH4                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINCCHA4;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSICH4                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINCCHA4;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSICH4   RESET     KEY28                                                       
          UNLOCK    SINCCHA4                                                    
          RETURN
.
RSSICH5   RESET     KEY28                                                       
          READ      SINCCHA5,KEY28;;                                            
          RETURN
.
RASICH5   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCHA5,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICH5   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCHA5,KEY28;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:     
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICH5                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCCHA5;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICH5                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCCHA5;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICH5                                                                         
          UPDATE    SINCCHA5;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSICH5   RESET     KEY28                                                       
          WRITE     SINCCHA5,KEY28;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:     
                        SICHUQT,SICHUAM,SICHSPA                                 
          RETURN
.
DESICH5   RESET     KEY28                                                       
          DELETE    SINCCHA5,KEY28                                              
          RETURN
.
RLSICH5   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     SINCCHA5,KEY28;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:     
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSICH5                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINCCHA5;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSICH5                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINCCHA5;SICHCST,SICHCAT,SICHWAR,SICHDAT,SICHSUB:           
                        SICHUQT,SICHUAM,SICHSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSICH5   RESET     KEY28                                                       
          UNLOCK    SINCCHA5                                                    
          RETURN
.
