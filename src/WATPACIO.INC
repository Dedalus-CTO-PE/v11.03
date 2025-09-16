.
. WATPACIO    
. --------
. Filename     : watpacaf.dat
.
RSWTPAC1  RESET     KEY21                                                       
          READ      WATPACA1,KEY21;;                                            
          RETURN
.
RAWTPAC1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      WATPACA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTPAC1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      WATPACA1,KEY21;WTPCURNO,WTPCPCOD,WTPCPCNT,WTPCLINE,WTPCCOMM:
                        WTPCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTPAC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATPACA1;WTPCURNO,WTPCPCOD,WTPCPCNT,WTPCLINE,WTPCCOMM:      
                        WTPCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTPAC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATPACA1;WTPCURNO,WTPCPCOD,WTPCPCNT,WTPCLINE,WTPCCOMM:      
                        WTPCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTPAC1                                                                        
          UPDATE    WATPACA1;WTPCURNO,WTPCPCOD,WTPCPCNT,WTPCLINE,WTPCCOMM:      
                        WTPCSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTPAC1  RESET     KEY21                                                       
          WRITE     WATPACA1,KEY21;WTPCURNO,WTPCPCOD,WTPCPCNT,WTPCLINE,WTPCCOMM:
                        WTPCSPAR                                                
          RETURN
.
DEWTPAC1  RESET     KEY21                                                       
          DELETE    WATPACA1,KEY21                                              
          RETURN
.
RLWTPAC1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     WATPACA1,KEY21;WTPCURNO,WTPCPCOD,WTPCPCNT,WTPCLINE,WTPCCOMM:
                        WTPCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTPAC1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATPACA1;WTPCURNO,WTPCPCOD,WTPCPCNT,WTPCLINE,WTPCCOMM:      
                        WTPCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTPAC1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATPACA1;WTPCURNO,WTPCPCOD,WTPCPCNT,WTPCLINE,WTPCCOMM:      
                        WTPCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTPAC1  RESET     KEY21                                                       
          UNLOCK    WATPACA1                                                    
          RETURN
.
