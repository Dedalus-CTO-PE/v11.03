.
. SINCSEIO    
. --------
. Filename     : sincseaf.dat
.
RSSICS1   RESET     KEY9                                                        
          READ      SINCSEA1,KEY9;;                                             
          RETURN
.
RASICS1   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      SINCSEA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICS1   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      SINCSEA1,KEY9;SICSUID,SICSCST,SICSLEV,SICSSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCSEA1;SICSUID,SICSCST,SICSLEV,SICSSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCSEA1;SICSUID,SICSCST,SICSLEV,SICSSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICS1                                                                         
          UPDATE    SINCSEA1;SICSUID,SICSCST,SICSLEV,SICSSPA                    
          RETURN
.
WRSICS1   RESET     KEY9                                                        
          WRITE     SINCSEA1,KEY9;SICSUID,SICSCST,SICSLEV,SICSSPA               
          RETURN
.
DESICS1   RESET     KEY9                                                        
          DELETE    SINCSEA1,KEY9                                               
          RETURN
.
RSSICS2   RESET     KEY9                                                        
          READ      SINCSEA2,KEY9;;                                             
          RETURN
.
RASICS2   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      SINCSEA2,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICS2   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      SINCSEA2,KEY9;SICSUID,SICSCST,SICSLEV,SICSSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICS2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCSEA2;SICSUID,SICSCST,SICSLEV,SICSSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICS2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCSEA2;SICSUID,SICSCST,SICSLEV,SICSSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICS2                                                                         
          UPDATE    SINCSEA2;SICSUID,SICSCST,SICSLEV,SICSSPA                    
          RETURN
.
WRSICS2   RESET     KEY9                                                        
          WRITE     SINCSEA2,KEY9;SICSUID,SICSCST,SICSLEV,SICSSPA               
          RETURN
.
DESICS2   RESET     KEY9                                                        
          DELETE    SINCSEA2,KEY9                                               
          RETURN
.
