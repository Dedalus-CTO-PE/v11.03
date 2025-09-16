.
. AMSLEAIO    
. --------
. Filename     : amsleaaf.dat
.
RSAMLE1   RESET     KEY14                                                       
          READ      AMSLEAA1,KEY14;;                                            
          RETURN
.
RAAMLE1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      AMSLEAA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMLE1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      AMSLEAA1,KEY14;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:     
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMLE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSLEAA1;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMLE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSLEAA1;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMLE1                                                                         
          UPDATE    AMSLEAA1;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAMLE1   RESET     KEY14                                                       
          WRITE     AMSLEAA1,KEY14;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:     
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          RETURN
.
DEAMLE1   RESET     KEY14                                                       
          DELETE    AMSLEAA1,KEY14                                              
          RETURN
.
RLAMLE1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     AMSLEAA1,KEY14;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:     
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAMLE1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   AMSLEAA1;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAMLE1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   AMSLEAA1;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAMLE1   RESET     KEY14                                                       
          UNLOCK    AMSLEAA1                                                    
          RETURN
.
RSAMLE2   RESET     KEY49                                                       
          READ      AMSLEAA2,KEY49;;                                            
          RETURN
.
RAAMLE2   RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      AMSLEAA2,KEY49;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMLE2   RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      AMSLEAA2,KEY49;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:     
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMLE2                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSLEAA2;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMLE2                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSLEAA2;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMLE2                                                                         
          UPDATE    AMSLEAA2;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAMLE2   RESET     KEY49                                                       
          WRITE     AMSLEAA2,KEY49;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:     
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          RETURN
.
DEAMLE2   RESET     KEY49                                                       
          DELETE    AMSLEAA2,KEY49                                              
          RETURN
.
RLAMLE2   RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READL     AMSLEAA2,KEY49;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:     
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAMLE2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   AMSLEAA2;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAMLE2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   AMSLEAA2;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAMLE2   RESET     KEY49                                                       
          UNLOCK    AMSLEAA2                                                    
          RETURN
.
RSAMLE3   RESET     KEY49                                                       
          READ      AMSLEAA3,KEY49;;                                            
          RETURN
.
RAAMLE3   RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      AMSLEAA3,KEY49;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMLE3   RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      AMSLEAA3,KEY49;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:     
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMLE3                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSLEAA3;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMLE3                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSLEAA3;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMLE3                                                                         
          UPDATE    AMSLEAA3;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAMLE3   RESET     KEY49                                                       
          WRITE     AMSLEAA3,KEY49;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:     
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          RETURN
.
DEAMLE3   RESET     KEY49                                                       
          DELETE    AMSLEAA3,KEY49                                              
          RETURN
.
RLAMLE3   RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READL     AMSLEAA3,KEY49;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:     
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAMLE3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   AMSLEAA3;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAMLE3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   AMSLEAA3;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAMLE3   RESET     KEY49                                                       
          UNLOCK    AMSLEAA3                                                    
          RETURN
.
RSAMLE4   RESET     KEY22                                                       
          READ      AMSLEAA4,KEY22;;                                            
          RETURN
.
RAAMLE4   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      AMSLEAA4,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMLE4   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      AMSLEAA4,KEY22;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:     
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMLE4                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSLEAA4;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMLE4                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSLEAA4;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMLE4                                                                         
          UPDATE    AMSLEAA4;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAMLE4   RESET     KEY22                                                       
          WRITE     AMSLEAA4,KEY22;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:     
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          RETURN
.
DEAMLE4   RESET     KEY22                                                       
          DELETE    AMSLEAA4,KEY22                                              
          RETURN
.
RLAMLE4   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READL     AMSLEAA4,KEY22;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:     
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAMLE4                                                                         
          MOVE      ZERO,OVRCD
          READLKS   AMSLEAA4;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAMLE4                                                                         
          MOVE      ZERO,OVRCD
          READLKP   AMSLEAA4;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAMLE4   RESET     KEY22                                                       
          UNLOCK    AMSLEAA4                                                    
          RETURN
.
RSAMLE5   RESET     KEY22                                                       
          READ      AMSLEAA5,KEY22;;                                            
          RETURN
.
RAAMLE5   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      AMSLEAA5,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMLE5   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      AMSLEAA5,KEY22;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:     
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMLE5                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSLEAA5;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMLE5                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSLEAA5;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMLE5                                                                         
          UPDATE    AMSLEAA5;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAMLE5   RESET     KEY22                                                       
          WRITE     AMSLEAA5,KEY22;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:     
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          RETURN
.
DEAMLE5   RESET     KEY22                                                       
          DELETE    AMSLEAA5,KEY22                                              
          RETURN
.
RLAMLE5   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READL     AMSLEAA5,KEY22;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:     
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAMLE5                                                                         
          MOVE      ZERO,OVRCD
          READLKS   AMSLEAA5;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAMLE5                                                                         
          MOVE      ZERO,OVRCD
          READLKP   AMSLEAA5;AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAMLE5   RESET     KEY22                                                       
          UNLOCK    AMSLEAA5                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WAAMLE00
          MOVE      "    3",AUDTSECT
          MOVE      " 11",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WAAMLE99 IF NOT EQUAL
.
          PACK     AMLEAUDD,CCC,CYY,CMM,CDD
          REP       " 0",AMLEAUDD
          CLOCK     TIME,AMLEAUDT
          MOVE      PORT,AMLEAUDP
          LOAD      AMLEAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,AMLEAUDS
          MOVE      PASSCODE,AMLEAUDO
          PACK      KEY19,AMLEAUDD,AMLEAUDT,AMLEAUDP,AMLEAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWAMLE
WAAMLE99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DAAMLE00
          MOVE      "    3",AUDTSECT
          MOVE      " 11",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DAAMLE99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADAMLE
DAAMLE99  RETURN
ASAMLE    RESET     KEY19                                                       
          READ      AMSAUDLE,KEY19;;                                            
          RETURN
.
AKAMLE                                                                          
          MOVE      ZERO,OVRCD
          READKS    AMSAUDLE;AMLEAUDD,AMLEAUDT,AMLEAUDP,AMLEAUDR,AMLEAUDS:      
                    AMLEAUDO,AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
AUAMLE                                                                          
          UPDATE    AMSAUDLE;AMLEAUDD,AMLEAUDT,AMLEAUDP,AMLEAUDR,AMLEAUDS:      
                    AMLEAUDO,AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          RETURN
.
AWAMLE    RESET     KEY19                                                       
          WRITE     AMSAUDLE,KEY19;AMLEAUDD,AMLEAUDT,AMLEAUDP,AMLEAUDR,AMLEAUDS:
                    AMLEAUDO,AMLEREG,AMLEASS,AMLECOM,AMLECNM,AMLEREF:           
                        AMLECON,AMLEDAT,AMLEPER,AMLEEDT,AMLEINS,AMLEPMT:        
                        AMLERES,AMLEUA1,AMLEUA2,AMLEUR1,AMLEUR2,AMLEUD1:        
                        AMLEUD2,AMLEUY1,AMLEUY2,AMLESPA                         
          RETURN
.
ADAMLE    RESET     KEY19                                                       
          DELETE    AMSAUDLE,KEY19;                                             
          RETURN
.
