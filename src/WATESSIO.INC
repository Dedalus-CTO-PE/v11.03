.
. WATESSIO    
. --------
. Filename     : watessaf.dat
.
RSWTESS1  RESET     KEY7                                                        
          READ      WATESSA1,KEY7;;                                             
          RETURN
.
RAWTESS1  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      WATESSA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTESS1  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      WATESSA1,KEY7;WTSSYEAR,WTSSRUNN,WTSSDATE,WTSSSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTESS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATESSA1;WTSSYEAR,WTSSRUNN,WTSSDATE,WTSSSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTESS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATESSA1;WTSSYEAR,WTSSRUNN,WTSSDATE,WTSSSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTESS1                                                                        
          UPDATE    WATESSA1;WTSSYEAR,WTSSRUNN,WTSSDATE,WTSSSPAR                
          RETURN
.
WRWTESS1  RESET     KEY7                                                        
          WRITE     WATESSA1,KEY7;WTSSYEAR,WTSSRUNN,WTSSDATE,WTSSSPAR           
          RETURN
.
DEWTESS1  RESET     KEY7                                                        
          DELETE    WATESSA1,KEY7                                               
          RETURN
.
RSWTESS2  RESET     KEY15                                                       
          READ      WATESSA2,KEY15;;                                            
          RETURN
.
RAWTESS2  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      WATESSA2,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTESS2  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      WATESSA2,KEY15;WTSSYEAR,WTSSRUNN,WTSSDATE,WTSSSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTESS2                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATESSA2;WTSSYEAR,WTSSRUNN,WTSSDATE,WTSSSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTESS2                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATESSA2;WTSSYEAR,WTSSRUNN,WTSSDATE,WTSSSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTESS2                                                                        
          UPDATE    WATESSA2;WTSSYEAR,WTSSRUNN,WTSSDATE,WTSSSPAR                
          RETURN
.
WRWTESS2  RESET     KEY15                                                       
          WRITE     WATESSA2,KEY15;WTSSYEAR,WTSSRUNN,WTSSDATE,WTSSSPAR          
          RETURN
.
DEWTESS2  RESET     KEY15                                                       
          DELETE    WATESSA2,KEY15                                              
          RETURN
.
