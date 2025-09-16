.
. WATEPSIO    
. --------
. Filename     : watepsaf.dat
.
RSWTEPS1  RESET     KEY23                                                       
          READ      WATEPSA1,KEY23;;                                            
          RETURN
.
RAWTEPS1  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      WATEPSA1,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTEPS1  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      WATEPSA1,KEY23;WTEPEID,WTEPURN,WTEPPRO,WTEPCNT,WTEPLEV1:    
                        WTEPLEV2,WTEPLEV3,WTEPLEV4,WTEPANL1,WTEPANL2,WTEPANL3:  
                        WTEPDEL,WTEPSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTEPS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATEPSA1;WTEPEID,WTEPURN,WTEPPRO,WTEPCNT,WTEPLEV1:          
                        WTEPLEV2,WTEPLEV3,WTEPLEV4,WTEPANL1,WTEPANL2,WTEPANL3:  
                        WTEPDEL,WTEPSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTEPS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATEPSA1;WTEPEID,WTEPURN,WTEPPRO,WTEPCNT,WTEPLEV1:          
                        WTEPLEV2,WTEPLEV3,WTEPLEV4,WTEPANL1,WTEPANL2,WTEPANL3:  
                        WTEPDEL,WTEPSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTEPS1                                                                        
          UPDATE    WATEPSA1;WTEPEID,WTEPURN,WTEPPRO,WTEPCNT,WTEPLEV1:          
                        WTEPLEV2,WTEPLEV3,WTEPLEV4,WTEPANL1,WTEPANL2,WTEPANL3:  
                        WTEPDEL,WTEPSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTEPS1  RESET     KEY23                                                       
          WRITE     WATEPSA1,KEY23;WTEPEID,WTEPURN,WTEPPRO,WTEPCNT,WTEPLEV1:    
                        WTEPLEV2,WTEPLEV3,WTEPLEV4,WTEPANL1,WTEPANL2,WTEPANL3:  
                        WTEPDEL,WTEPSPA                                         
          RETURN
.
DEWTEPS1  RESET     KEY23                                                       
          DELETE    WATEPSA1,KEY23                                              
          RETURN
.
RLWTEPS1  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READL     WATEPSA1,KEY23;WTEPEID,WTEPURN,WTEPPRO,WTEPCNT,WTEPLEV1:    
                        WTEPLEV2,WTEPLEV3,WTEPLEV4,WTEPANL1,WTEPANL2,WTEPANL3:  
                        WTEPDEL,WTEPSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTEPS1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATEPSA1;WTEPEID,WTEPURN,WTEPPRO,WTEPCNT,WTEPLEV1:          
                        WTEPLEV2,WTEPLEV3,WTEPLEV4,WTEPANL1,WTEPANL2,WTEPANL3:  
                        WTEPDEL,WTEPSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTEPS1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATEPSA1;WTEPEID,WTEPURN,WTEPPRO,WTEPCNT,WTEPLEV1:          
                        WTEPLEV2,WTEPLEV3,WTEPLEV4,WTEPANL1,WTEPANL2,WTEPANL3:  
                        WTEPDEL,WTEPSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTEPS1  RESET     KEY23                                                       
          UNLOCK    WATEPSA1                                                    
          RETURN
.
RSWTEPS2  RESET     KEY63                                                       
          READ      WATEPSA2,KEY63;;                                            
          RETURN
.
RAWTEPS2  RESET     KEY63                                                       
          MOVE      ZERO,OVRCD
          READ      WATEPSA2,KEY63;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTEPS2  RESET     KEY63                                                       
          MOVE      ZERO,OVRCD
          READ      WATEPSA2,KEY63;WTEPEID,WTEPURN,WTEPPRO,WTEPCNT,WTEPLEV1:    
                        WTEPLEV2,WTEPLEV3,WTEPLEV4,WTEPANL1,WTEPANL2,WTEPANL3:  
                        WTEPDEL,WTEPSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTEPS2                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATEPSA2;WTEPEID,WTEPURN,WTEPPRO,WTEPCNT,WTEPLEV1:          
                        WTEPLEV2,WTEPLEV3,WTEPLEV4,WTEPANL1,WTEPANL2,WTEPANL3:  
                        WTEPDEL,WTEPSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTEPS2                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATEPSA2;WTEPEID,WTEPURN,WTEPPRO,WTEPCNT,WTEPLEV1:          
                        WTEPLEV2,WTEPLEV3,WTEPLEV4,WTEPANL1,WTEPANL2,WTEPANL3:  
                        WTEPDEL,WTEPSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTEPS2                                                                        
          UPDATE    WATEPSA2;WTEPEID,WTEPURN,WTEPPRO,WTEPCNT,WTEPLEV1:          
                        WTEPLEV2,WTEPLEV3,WTEPLEV4,WTEPANL1,WTEPANL2,WTEPANL3:  
                        WTEPDEL,WTEPSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTEPS2  RESET     KEY63                                                       
          WRITE     WATEPSA2,KEY63;WTEPEID,WTEPURN,WTEPPRO,WTEPCNT,WTEPLEV1:    
                        WTEPLEV2,WTEPLEV3,WTEPLEV4,WTEPANL1,WTEPANL2,WTEPANL3:  
                        WTEPDEL,WTEPSPA                                         
          RETURN
.
DEWTEPS2  RESET     KEY63                                                       
          DELETE    WATEPSA2,KEY63                                              
          RETURN
.
RLWTEPS2  RESET     KEY63                                                       
          MOVE      ZERO,OVRCD
          READL     WATEPSA2,KEY63;WTEPEID,WTEPURN,WTEPPRO,WTEPCNT,WTEPLEV1:    
                        WTEPLEV2,WTEPLEV3,WTEPLEV4,WTEPANL1,WTEPANL2,WTEPANL3:  
                        WTEPDEL,WTEPSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTEPS2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATEPSA2;WTEPEID,WTEPURN,WTEPPRO,WTEPCNT,WTEPLEV1:          
                        WTEPLEV2,WTEPLEV3,WTEPLEV4,WTEPANL1,WTEPANL2,WTEPANL3:  
                        WTEPDEL,WTEPSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTEPS2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATEPSA2;WTEPEID,WTEPURN,WTEPPRO,WTEPCNT,WTEPLEV1:          
                        WTEPLEV2,WTEPLEV3,WTEPLEV4,WTEPANL1,WTEPANL2,WTEPANL3:  
                        WTEPDEL,WTEPSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTEPS2  RESET     KEY63                                                       
          UNLOCK    WATEPSA2                                                    
          RETURN
.
