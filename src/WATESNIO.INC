.
. WATESNIO    
. --------
. Filename     : watesnaf.dat
.
RSWTESN1  RESET     KEY36                                                       
          READ      WATESNA1,KEY36;;                                            
          RETURN
.
RAWTESN1  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      WATESNA1,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTESN1  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      WATESNA1,KEY36;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTESN1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATESNA1;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:      
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTESN1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATESNA1;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:      
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTESN1                                                                        
          UPDATE    WATESNA1;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:      
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          RETURN
.
WRWTESN1  RESET     KEY36                                                       
          WRITE     WATESNA1,KEY36;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          RETURN
.
DEWTESN1  RESET     KEY36                                                       
          DELETE    WATESNA1,KEY36                                              
          RETURN
.
RSWTESN2  RESET     KEY36                                                       
          READ      WATESNA2,KEY36;;                                            
          RETURN
.
RAWTESN2  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      WATESNA2,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTESN2  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      WATESNA2,KEY36;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTESN2                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATESNA2;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:      
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTESN2                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATESNA2;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:      
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTESN2                                                                        
          UPDATE    WATESNA2;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:      
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          RETURN
.
WRWTESN2  RESET     KEY36                                                       
          WRITE     WATESNA2,KEY36;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          RETURN
.
DEWTESN2  RESET     KEY36                                                       
          DELETE    WATESNA2,KEY36                                              
          RETURN
.
RSWTESN3  RESET     KEY36                                                       
          READ      WATESNA3,KEY36;;                                            
          RETURN
.
RAWTESN3  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      WATESNA3,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTESN3  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      WATESNA3,KEY36;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTESN3                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATESNA3;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:      
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTESN3                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATESNA3;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:      
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTESN3                                                                        
          UPDATE    WATESNA3;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:      
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          RETURN
.
WRWTESN3  RESET     KEY36                                                       
          WRITE     WATESNA3,KEY36;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          RETURN
.
DEWTESN3  RESET     KEY36                                                       
          DELETE    WATESNA3,KEY36                                              
          RETURN
.
RSWTESN4  RESET     KEY36                                                       
          READ      WATESNA4,KEY36;;                                            
          RETURN
.
RAWTESN4  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      WATESNA4,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTESN4  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      WATESNA4,KEY36;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTESN4                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATESNA4;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:      
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTESN4                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATESNA4;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:      
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTESN4                                                                        
          UPDATE    WATESNA4;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:      
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          RETURN
.
WRWTESN4  RESET     KEY36                                                       
          WRITE     WATESNA4,KEY36;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          RETURN
.
DEWTESN4  RESET     KEY36                                                       
          DELETE    WATESNA4,KEY36                                              
          RETURN
.
RSWTESN5  RESET     KEY36                                                       
          READ      WATESNA5,KEY36;;                                            
          RETURN
.
RAWTESN5  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      WATESNA5,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTESN5  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      WATESNA5,KEY36;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTESN5                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATESNA5;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:      
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTESN5                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATESNA5;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:      
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTESN5                                                                        
          UPDATE    WATESNA5;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:      
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          RETURN
.
WRWTESN5  RESET     KEY36                                                       
          WRITE     WATESNA5,KEY36;WTENUNIQ,WTENEDAT,WTENETYP,WTENEVDT,WTENEVAL:
                        WTENWEBC,WTENCDAT,WTENCTIM,WTENWEBU,WTENUDAT,WTENUTIM:  
                        WTENSADI,WTENMANU,WTENSPAR                              
          RETURN
.
DEWTESN5  RESET     KEY36                                                       
          DELETE    WATESNA5,KEY36                                              
          RETURN
.
