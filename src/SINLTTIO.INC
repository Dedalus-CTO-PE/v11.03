.
. SINLTTIO    
. --------
. Filename     : sinlttaf.dat
.
RSSILT1   RESET     KEY8                                                        
          READ      SINLTTA1,KEY8;;                                             
          RETURN
.
RASILT1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      SINLTTA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSILT1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      SINLTTA1,KEY8;SILTLED,SILTCOD,SILTSUB,SILTSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSILT1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINLTTA1;SILTLED,SILTCOD,SILTSUB,SILTSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSILT1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINLTTA1;SILTLED,SILTCOD,SILTSUB,SILTSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSILT1                                                                         
          UPDATE    SINLTTA1;SILTLED,SILTCOD,SILTSUB,SILTSPA                    
          RETURN
.
WRSILT1   RESET     KEY8                                                        
          WRITE     SINLTTA1,KEY8;SILTLED,SILTCOD,SILTSUB,SILTSPA               
          RETURN
.
DESILT1   RESET     KEY8                                                        
          DELETE    SINLTTA1,KEY8                                               
          RETURN
.
RSSILT2   RESET     KEY20                                                       
          READ      SINLTTA2,KEY20;;                                            
          RETURN
.
RASILT2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SINLTTA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSILT2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SINLTTA2,KEY20;SILTLED,SILTCOD,SILTSUB,SILTSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSILT2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINLTTA2;SILTLED,SILTCOD,SILTSUB,SILTSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSILT2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINLTTA2;SILTLED,SILTCOD,SILTSUB,SILTSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSILT2                                                                         
          UPDATE    SINLTTA2;SILTLED,SILTCOD,SILTSUB,SILTSPA                    
          RETURN
.
WRSILT2   RESET     KEY20                                                       
          WRITE     SINLTTA2,KEY20;SILTLED,SILTCOD,SILTSUB,SILTSPA              
          RETURN
.
DESILT2   RESET     KEY20                                                       
          DELETE    SINLTTA2,KEY20                                              
          RETURN
.
RSSILT3   RESET     KEY20                                                       
          READ      SINLTTA3,KEY20;;                                            
          RETURN
.
RASILT3   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SINLTTA3,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSILT3   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SINLTTA3,KEY20;SILTLED,SILTCOD,SILTSUB,SILTSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSILT3                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINLTTA3;SILTLED,SILTCOD,SILTSUB,SILTSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSILT3                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINLTTA3;SILTLED,SILTCOD,SILTSUB,SILTSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSILT3                                                                         
          UPDATE    SINLTTA3;SILTLED,SILTCOD,SILTSUB,SILTSPA                    
          RETURN
.
WRSILT3   RESET     KEY20                                                       
          WRITE     SINLTTA3,KEY20;SILTLED,SILTCOD,SILTSUB,SILTSPA              
          RETURN
.
DESILT3   RESET     KEY20                                                       
          DELETE    SINLTTA3,KEY20                                              
          RETURN
.
