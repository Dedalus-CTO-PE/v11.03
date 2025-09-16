.
. SINPODIO    
. --------
. Filename     : sinpodaf.dat
.
RSSIPD1   RESET     KEY13                                                       
          READ      SINPODA1,KEY13;;                                            
          RETURN
.
RASIPD1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      SINPODA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPD1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      SINPODA1,KEY13;SIPDPON,SIPDITM,SIPDLIN,SIPDCOM,SIPDSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPODA1;SIPDPON,SIPDITM,SIPDLIN,SIPDCOM,SIPDSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPODA1;SIPDPON,SIPDITM,SIPDLIN,SIPDCOM,SIPDSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPD1                                                                         
          UPDATE    SINPODA1;SIPDPON,SIPDITM,SIPDLIN,SIPDCOM,SIPDSPA            
          RETURN
.
WRSIPD1   RESET     KEY13                                                       
          WRITE     SINPODA1,KEY13;SIPDPON,SIPDITM,SIPDLIN,SIPDCOM,SIPDSPA      
          RETURN
.
DESIPD1   RESET     KEY13                                                       
          DELETE    SINPODA1,KEY13                                              
          RETURN
.
