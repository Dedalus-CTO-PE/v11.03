.
. SINNATIO    
. --------
. Filename     : sinnataf.dat
.
RSSINA1   RESET     KEY7                                                        
          READ      SINNATA1,KEY7;;                                             
          RETURN
.
RASINA1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      SINNATA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSINA1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      SINNATA1,KEY7;SINACAT,SINANAT,SINASPA                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSINA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINNATA1;SINACAT,SINANAT,SINASPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSINA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINNATA1;SINACAT,SINANAT,SINASPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSINA1                                                                         
          UPDATE    SINNATA1;SINACAT,SINANAT,SINASPA                            
          RETURN
.
WRSINA1   RESET     KEY7                                                        
          WRITE     SINNATA1,KEY7;SINACAT,SINANAT,SINASPA                       
          RETURN
.
DESINA1   RESET     KEY7                                                        
          DELETE    SINNATA1,KEY7                                               
          RETURN
.
RSSINA2   RESET     KEY17                                                       
          READ      SINNATA2,KEY17;;                                            
          RETURN
.
RASINA2   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      SINNATA2,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSINA2   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      SINNATA2,KEY17;SINACAT,SINANAT,SINASPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSINA2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINNATA2;SINACAT,SINANAT,SINASPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSINA2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINNATA2;SINACAT,SINANAT,SINASPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSINA2                                                                         
          UPDATE    SINNATA2;SINACAT,SINANAT,SINASPA                            
          RETURN
.
WRSINA2   RESET     KEY17                                                       
          WRITE     SINNATA2,KEY17;SINACAT,SINANAT,SINASPA                      
          RETURN
.
DESINA2   RESET     KEY17                                                       
          DELETE    SINNATA2,KEY17                                              
          RETURN
.
