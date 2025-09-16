.
. SINKCTIO    
. --------
. Filename     : sinkctaf.dat
.
RSSIKC1   RESET     KEY22                                                       
          READ      SINKCTA1,KEY22;;                                            
          RETURN
.
RASIKC1   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      SINKCTA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIKC1   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      SINKCTA1,KEY22;SIKCKWD,SIKCCAT,SIKCSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIKC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINKCTA1;SIKCKWD,SIKCCAT,SIKCSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIKC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINKCTA1;SIKCKWD,SIKCCAT,SIKCSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIKC1                                                                         
          UPDATE    SINKCTA1;SIKCKWD,SIKCCAT,SIKCSPA                            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIKC1   RESET     KEY22                                                       
          WRITE     SINKCTA1,KEY22;SIKCKWD,SIKCCAT,SIKCSPA                      
          RETURN
.
DESIKC1   RESET     KEY22                                                       
          DELETE    SINKCTA1,KEY22                                              
          RETURN
.
RLSIKC1   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READL     SINKCTA1,KEY22;SIKCKWD,SIKCCAT,SIKCSPA                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIKC1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINKCTA1;SIKCKWD,SIKCCAT,SIKCSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIKC1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINKCTA1;SIKCKWD,SIKCCAT,SIKCSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIKC1   RESET     KEY22                                                       
          UNLOCK    SINKCTA1                                                    
          RETURN
.
RSSIKC2   RESET     KEY22                                                       
          READ      SINKCTA2,KEY22;;                                            
          RETURN
.
RASIKC2   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      SINKCTA2,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIKC2   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      SINKCTA2,KEY22;SIKCKWD,SIKCCAT,SIKCSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIKC2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINKCTA2;SIKCKWD,SIKCCAT,SIKCSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIKC2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINKCTA2;SIKCKWD,SIKCCAT,SIKCSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIKC2                                                                         
          UPDATE    SINKCTA2;SIKCKWD,SIKCCAT,SIKCSPA                            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIKC2   RESET     KEY22                                                       
          WRITE     SINKCTA2,KEY22;SIKCKWD,SIKCCAT,SIKCSPA                      
          RETURN
.
DESIKC2   RESET     KEY22                                                       
          DELETE    SINKCTA2,KEY22                                              
          RETURN
.
RLSIKC2   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READL     SINKCTA2,KEY22;SIKCKWD,SIKCCAT,SIKCSPA                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIKC2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINKCTA2;SIKCKWD,SIKCCAT,SIKCSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIKC2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINKCTA2;SIKCKWD,SIKCCAT,SIKCSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIKC2   RESET     KEY22                                                       
          UNLOCK    SINKCTA2                                                    
          RETURN
.
