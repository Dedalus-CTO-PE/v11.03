.
. SINREAIO    
. --------
. Filename     : sinreaaf.dat
.
RSSIRA1   RESET     KEY8                                                        
          READ      SINREAA1,KEY8;;                                             
          RETURN
.
RASIRA1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      SINREAA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIRA1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      SINREAA1,KEY8;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:      
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIRA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINREAA1;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:           
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIRA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINREAA1;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:           
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIRA1                                                                         
          UPDATE    SINREAA1;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:           
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIRA1   RESET     KEY8                                                        
          WRITE     SINREAA1,KEY8;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:      
                        SIRADEL,SIRATOT,SIRASPA                                 
          RETURN
.
DESIRA1   RESET     KEY8                                                        
          DELETE    SINREAA1,KEY8                                               
          RETURN
.
RLSIRA1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     SINREAA1,KEY8;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:      
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIRA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINREAA1;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:           
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIRA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINREAA1;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:           
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIRA1   RESET     KEY8                                                        
          UNLOCK    SINREAA1                                                    
          RETURN
.
RSSIRA2   RESET     KEY13                                                       
          READ      SINREAA2,KEY13;;                                            
          RETURN
.
RASIRA2   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      SINREAA2,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIRA2   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      SINREAA2,KEY13;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:     
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIRA2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINREAA2;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:           
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIRA2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINREAA2;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:           
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIRA2                                                                         
          UPDATE    SINREAA2;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:           
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIRA2   RESET     KEY13                                                       
          WRITE     SINREAA2,KEY13;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:     
                        SIRADEL,SIRATOT,SIRASPA                                 
          RETURN
.
DESIRA2   RESET     KEY13                                                       
          DELETE    SINREAA2,KEY13                                              
          RETURN
.
RLSIRA2   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     SINREAA2,KEY13;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:     
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIRA2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINREAA2;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:           
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIRA2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINREAA2;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:           
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIRA2   RESET     KEY13                                                       
          UNLOCK    SINREAA2                                                    
          RETURN
.
RSSIRA3   RESET     KEY16                                                       
          READ      SINREAA3,KEY16;;                                            
          RETURN
.
RASIRA3   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      SINREAA3,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIRA3   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      SINREAA3,KEY16;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:     
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIRA3                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINREAA3;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:           
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIRA3                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINREAA3;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:           
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIRA3                                                                         
          UPDATE    SINREAA3;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:           
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIRA3   RESET     KEY16                                                       
          WRITE     SINREAA3,KEY16;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:     
                        SIRADEL,SIRATOT,SIRASPA                                 
          RETURN
.
DESIRA3   RESET     KEY16                                                       
          DELETE    SINREAA3,KEY16                                              
          RETURN
.
RLSIRA3   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     SINREAA3,KEY16;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:     
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIRA3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINREAA3;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:           
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIRA3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINREAA3;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:           
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIRA3   RESET     KEY16                                                       
          UNLOCK    SINREAA3                                                    
          RETURN
.
RSSIRA4   RESET     KEY21                                                       
          READ      SINREAA4,KEY21;;                                            
          RETURN
.
RASIRA4   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      SINREAA4,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIRA4   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      SINREAA4,KEY21;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:     
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIRA4                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINREAA4;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:           
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIRA4                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINREAA4;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:           
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIRA4                                                                         
          UPDATE    SINREAA4;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:           
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIRA4   RESET     KEY21                                                       
          WRITE     SINREAA4,KEY21;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:     
                        SIRADEL,SIRATOT,SIRASPA                                 
          RETURN
.
DESIRA4   RESET     KEY21                                                       
          DELETE    SINREAA4,KEY21                                              
          RETURN
.
RLSIRA4   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     SINREAA4,KEY21;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:     
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIRA4                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINREAA4;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:           
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIRA4                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINREAA4;SIRATYP,SIRAREQ,SIRAIND,SIRACST,SIRADAT:           
                        SIRADEL,SIRATOT,SIRASPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIRA4   RESET     KEY21                                                       
          UNLOCK    SINREAA4                                                    
          RETURN
.
