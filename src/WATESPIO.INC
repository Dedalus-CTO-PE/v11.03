.
. WATESPIO    
. --------
. Filename     : watespaf.dat
.
RSWTESP1  RESET     KEY16                                                       
          READ      WATESPA1,KEY16;;                                            
          RETURN
.
RAWTESP1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WATESPA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTESP1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WATESPA1,KEY16;WTEPURNO,WTEPEDAT,WTEPPDOB,WTEPPSEX,WTEPMEDI:
                        WTEPMREF,WTEPRESI,WTEPPOST,WTEPSUBR,WTEPWEBC,WTEPCDAT:  
                        WTEPCTIM,WTEPWEBU,WTEPUDAT,WTEPUTIM,WTEPABRG,WTEPEDOB:  
                        WTEPSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTESP1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATESPA1;WTEPURNO,WTEPEDAT,WTEPPDOB,WTEPPSEX,WTEPMEDI:      
                        WTEPMREF,WTEPRESI,WTEPPOST,WTEPSUBR,WTEPWEBC,WTEPCDAT:  
                        WTEPCTIM,WTEPWEBU,WTEPUDAT,WTEPUTIM,WTEPABRG,WTEPEDOB:  
                        WTEPSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTESP1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATESPA1;WTEPURNO,WTEPEDAT,WTEPPDOB,WTEPPSEX,WTEPMEDI:      
                        WTEPMREF,WTEPRESI,WTEPPOST,WTEPSUBR,WTEPWEBC,WTEPCDAT:  
                        WTEPCTIM,WTEPWEBU,WTEPUDAT,WTEPUTIM,WTEPABRG,WTEPEDOB:  
                        WTEPSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTESP1                                                                        
          UPDATE    WATESPA1;WTEPURNO,WTEPEDAT,WTEPPDOB,WTEPPSEX,WTEPMEDI:      
                        WTEPMREF,WTEPRESI,WTEPPOST,WTEPSUBR,WTEPWEBC,WTEPCDAT:  
                        WTEPCTIM,WTEPWEBU,WTEPUDAT,WTEPUTIM,WTEPABRG,WTEPEDOB:  
                        WTEPSPAR                                                
          RETURN
.
WRWTESP1  RESET     KEY16                                                       
          WRITE     WATESPA1,KEY16;WTEPURNO,WTEPEDAT,WTEPPDOB,WTEPPSEX,WTEPMEDI:
                        WTEPMREF,WTEPRESI,WTEPPOST,WTEPSUBR,WTEPWEBC,WTEPCDAT:  
                        WTEPCTIM,WTEPWEBU,WTEPUDAT,WTEPUTIM,WTEPABRG,WTEPEDOB:  
                        WTEPSPAR                                                
          RETURN
.
DEWTESP1  RESET     KEY16                                                       
          DELETE    WATESPA1,KEY16                                              
          RETURN
.
RSWTESP2  RESET     KEY16                                                       
          READ      WATESPA2,KEY16;;                                            
          RETURN
.
RAWTESP2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WATESPA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTESP2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WATESPA2,KEY16;WTEPURNO,WTEPEDAT,WTEPPDOB,WTEPPSEX,WTEPMEDI:
                        WTEPMREF,WTEPRESI,WTEPPOST,WTEPSUBR,WTEPWEBC,WTEPCDAT:  
                        WTEPCTIM,WTEPWEBU,WTEPUDAT,WTEPUTIM,WTEPABRG,WTEPEDOB:  
                        WTEPSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTESP2                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATESPA2;WTEPURNO,WTEPEDAT,WTEPPDOB,WTEPPSEX,WTEPMEDI:      
                        WTEPMREF,WTEPRESI,WTEPPOST,WTEPSUBR,WTEPWEBC,WTEPCDAT:  
                        WTEPCTIM,WTEPWEBU,WTEPUDAT,WTEPUTIM,WTEPABRG,WTEPEDOB:  
                        WTEPSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTESP2                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATESPA2;WTEPURNO,WTEPEDAT,WTEPPDOB,WTEPPSEX,WTEPMEDI:      
                        WTEPMREF,WTEPRESI,WTEPPOST,WTEPSUBR,WTEPWEBC,WTEPCDAT:  
                        WTEPCTIM,WTEPWEBU,WTEPUDAT,WTEPUTIM,WTEPABRG,WTEPEDOB:  
                        WTEPSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTESP2                                                                        
          UPDATE    WATESPA2;WTEPURNO,WTEPEDAT,WTEPPDOB,WTEPPSEX,WTEPMEDI:      
                        WTEPMREF,WTEPRESI,WTEPPOST,WTEPSUBR,WTEPWEBC,WTEPCDAT:  
                        WTEPCTIM,WTEPWEBU,WTEPUDAT,WTEPUTIM,WTEPABRG,WTEPEDOB:  
                        WTEPSPAR                                                
          RETURN
.
WRWTESP2  RESET     KEY16                                                       
          WRITE     WATESPA2,KEY16;WTEPURNO,WTEPEDAT,WTEPPDOB,WTEPPSEX,WTEPMEDI:
                        WTEPMREF,WTEPRESI,WTEPPOST,WTEPSUBR,WTEPWEBC,WTEPCDAT:  
                        WTEPCTIM,WTEPWEBU,WTEPUDAT,WTEPUTIM,WTEPABRG,WTEPEDOB:  
                        WTEPSPAR                                                
          RETURN
.
DEWTESP2  RESET     KEY16                                                       
          DELETE    WATESPA2,KEY16                                              
          RETURN
.
