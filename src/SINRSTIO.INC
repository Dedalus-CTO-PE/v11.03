.
. SINRSTIO    
. --------
. Filename     : sinrstaf.dat
.
RSSIRS1   RESET     KEY19                                                       
          READ      SINRSTA1,KEY19;;                                            
          RETURN
.
RASIRS1   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      SINRSTA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIRS1   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      SINRSTA1,KEY19;SIRSWAR,SIRSRAND,SIRSCAT,SIRSSPA             
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIRS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINRSTA1;SIRSWAR,SIRSRAND,SIRSCAT,SIRSSPA                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIRS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINRSTA1;SIRSWAR,SIRSRAND,SIRSCAT,SIRSSPA                   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIRS1                                                                         
          UPDATE    SINRSTA1;SIRSWAR,SIRSRAND,SIRSCAT,SIRSSPA                   
          RETURN
.
WRSIRS1   RESET     KEY19                                                       
          WRITE     SINRSTA1,KEY19;SIRSWAR,SIRSRAND,SIRSCAT,SIRSSPA             
          RETURN
.
DESIRS1   RESET     KEY19                                                       
          DELETE    SINRSTA1,KEY19                                              
          RETURN
.
RSSIRS2   RESET     KEY7                                                        
          READ      SINRSTA2,KEY7;;                                             
          RETURN
.
RASIRS2   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      SINRSTA2,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIRS2   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      SINRSTA2,KEY7;SIRSWAR,SIRSRAND,SIRSCAT,SIRSSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIRS2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINRSTA2;SIRSWAR,SIRSRAND,SIRSCAT,SIRSSPA                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIRS2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINRSTA2;SIRSWAR,SIRSRAND,SIRSCAT,SIRSSPA                   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIRS2                                                                         
          UPDATE    SINRSTA2;SIRSWAR,SIRSRAND,SIRSCAT,SIRSSPA                   
          RETURN
.
WRSIRS2   RESET     KEY7                                                        
          WRITE     SINRSTA2,KEY7;SIRSWAR,SIRSRAND,SIRSCAT,SIRSSPA              
          RETURN
.
DESIRS2   RESET     KEY7                                                        
          DELETE    SINRSTA2,KEY7                                               
          RETURN
.
