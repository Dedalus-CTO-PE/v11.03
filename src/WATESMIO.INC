.
. WATESMIO    
. --------
. Filename     : watesmaf.dat
.
RSWTESM1  RESET     KEY24                                                       
          READ      WATESMA1,KEY24;;                                            
          RETURN
.
RAWTESM1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WATESMA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTESM1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WATESMA1,KEY24;WTEMEDAT,WTEMCURN,WTEMRURN,WTEMSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTESM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATESMA1;WTEMEDAT,WTEMCURN,WTEMRURN,WTEMSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTESM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATESMA1;WTEMEDAT,WTEMCURN,WTEMRURN,WTEMSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTESM1                                                                        
          UPDATE    WATESMA1;WTEMEDAT,WTEMCURN,WTEMRURN,WTEMSPAR                
          RETURN
.
WRWTESM1  RESET     KEY24                                                       
          WRITE     WATESMA1,KEY24;WTEMEDAT,WTEMCURN,WTEMRURN,WTEMSPAR          
          RETURN
.
DEWTESM1  RESET     KEY24                                                       
          DELETE    WATESMA1,KEY24                                              
          RETURN
.
RSWTESM2  RESET     KEY24                                                       
          READ      WATESMA2,KEY24;;                                            
          RETURN
.
RAWTESM2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WATESMA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTESM2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WATESMA2,KEY24;WTEMEDAT,WTEMCURN,WTEMRURN,WTEMSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTESM2                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATESMA2;WTEMEDAT,WTEMCURN,WTEMRURN,WTEMSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTESM2                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATESMA2;WTEMEDAT,WTEMCURN,WTEMRURN,WTEMSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTESM2                                                                        
          UPDATE    WATESMA2;WTEMEDAT,WTEMCURN,WTEMRURN,WTEMSPAR                
          RETURN
.
WRWTESM2  RESET     KEY24                                                       
          WRITE     WATESMA2,KEY24;WTEMEDAT,WTEMCURN,WTEMRURN,WTEMSPAR          
          RETURN
.
DEWTESM2  RESET     KEY24                                                       
          DELETE    WATESMA2,KEY24                                              
          RETURN
.
