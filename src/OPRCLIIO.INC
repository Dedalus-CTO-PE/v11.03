.
. OPRCLIIO    
. --------
. Filename     : oprcliaf.dat
.
RSOPCLI1  RESET     KEY6                                                        
          READ      OPRCLIA1,KEY6;;                                             
          RETURN
.
RAOPCLI1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      OPRCLIA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPCLI1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      OPRCLIA1,KEY6;OPCLCLIN,OPCLDESC,OPCLDOCT,OPCLCAT,OPCLACTV:  
                        OPCLSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPCLI1  MOVE      ZERO,OVRCD                                                  
          READKS    OPRCLIA1;OPCLCLIN,OPCLDESC,OPCLDOCT,OPCLCAT,OPCLACTV:       
                        OPCLSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPCLI1  MOVE      ZERO,OVRCD                                                  
          READKP    OPRCLIA1;OPCLCLIN,OPCLDESC,OPCLDOCT,OPCLCAT,OPCLACTV:       
                        OPCLSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPCLI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRCLIA1;OPCLCLIN,OPCLDESC,OPCLDOCT,OPCLCAT,OPCLACTV:       
                        OPCLSPAR                                                
          RETURN
.
WROPCLI1  RESET     KEY6                                                        
          WRITE     OPRCLIA1,KEY6;OPCLCLIN,OPCLDESC,OPCLDOCT,OPCLCAT,OPCLACTV:  
                        OPCLSPAR                                                
          RETURN
.
DEOPCLI1  RESET     KEY6                                                        
          DELETE    OPRCLIA1,KEY6                                               
          RETURN
.
RSOPCLI2  RESET     KEY36                                                       
          READ      OPRCLIA2,KEY36;;                                            
          RETURN
.
RAOPCLI2  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      OPRCLIA2,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPCLI2  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      OPRCLIA2,KEY36;OPCLCLIN,OPCLDESC,OPCLDOCT,OPCLCAT,OPCLACTV: 
                        OPCLSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPCLI2  MOVE      ZERO,OVRCD                                                  
          READKS    OPRCLIA2;OPCLCLIN,OPCLDESC,OPCLDOCT,OPCLCAT,OPCLACTV:       
                        OPCLSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPCLI2  MOVE      ZERO,OVRCD                                                  
          READKP    OPRCLIA2;OPCLCLIN,OPCLDESC,OPCLDOCT,OPCLCAT,OPCLACTV:       
                        OPCLSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPCLI2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRCLIA2;OPCLCLIN,OPCLDESC,OPCLDOCT,OPCLCAT,OPCLACTV:       
                        OPCLSPAR                                                
          RETURN
.
WROPCLI2  RESET     KEY36                                                       
          WRITE     OPRCLIA2,KEY36;OPCLCLIN,OPCLDESC,OPCLDOCT,OPCLCAT,OPCLACTV: 
                        OPCLSPAR                                                
          RETURN
.
DEOPCLI2  RESET     KEY36                                                       
          DELETE    OPRCLIA2,KEY36                                              
          RETURN
.
