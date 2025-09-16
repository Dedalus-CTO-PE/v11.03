.
. CEAPPMIO    
. --------
. Filename     : ceappmaf.dat
.
RSCEPP1   RESET     KEY1                                                        
          READ      CEAPPMA1,KEY1;;                                             
          RETURN
.
RACEPP1   RESET     KEY1                                                        
          MOVE      ZERO,OVRCD
          READ      CEAPPMA1,KEY1;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEPP1   RESET     KEY1                                                        
          MOVE      ZERO,OVRCD
          READ      CEAPPMA1,KEY1;CEPPIND,CEPPDES,CEPPNURF,CEPPTHEF,CEPPPHAF:   
                        CEPPICUF,CEPPALLF,CEPPMSSF,CEPPTAXF,CEPPOVHF,CEPPCATF:  
                        CEPPDEPF,CEPPOTHF,CEPPNURV,CEPPTHEV,CEPPPHAV,CEPPICUV:  
                        CEPPALLV,CEPPMSSV,CEPPTAXV,CEPPOVHV,CEPPCATV,CEPPDEPV:  
                        CEPPOTHV,CEPPPRO,CEPPICU,CEPPINCI,CEPPUTH,CEPPB01:      
                        CEPPB02,CEPPB03,CEPPB04,CEPPB05,CEPPB06,CEPPB07:        
                        CEPPB08,CEPPB09,CEPPB10,CEPPB11,CEPPB12,CEPPB13:        
                        CEPPB14,CEPPB15,CEPPSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEPP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEAPPMA1;CEPPIND,CEPPDES,CEPPNURF,CEPPTHEF,CEPPPHAF:        
                        CEPPICUF,CEPPALLF,CEPPMSSF,CEPPTAXF,CEPPOVHF,CEPPCATF:  
                        CEPPDEPF,CEPPOTHF,CEPPNURV,CEPPTHEV,CEPPPHAV,CEPPICUV:  
                        CEPPALLV,CEPPMSSV,CEPPTAXV,CEPPOVHV,CEPPCATV,CEPPDEPV:  
                        CEPPOTHV,CEPPPRO,CEPPICU,CEPPINCI,CEPPUTH,CEPPB01:      
                        CEPPB02,CEPPB03,CEPPB04,CEPPB05,CEPPB06,CEPPB07:        
                        CEPPB08,CEPPB09,CEPPB10,CEPPB11,CEPPB12,CEPPB13:        
                        CEPPB14,CEPPB15,CEPPSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEPP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEAPPMA1;CEPPIND,CEPPDES,CEPPNURF,CEPPTHEF,CEPPPHAF:        
                        CEPPICUF,CEPPALLF,CEPPMSSF,CEPPTAXF,CEPPOVHF,CEPPCATF:  
                        CEPPDEPF,CEPPOTHF,CEPPNURV,CEPPTHEV,CEPPPHAV,CEPPICUV:  
                        CEPPALLV,CEPPMSSV,CEPPTAXV,CEPPOVHV,CEPPCATV,CEPPDEPV:  
                        CEPPOTHV,CEPPPRO,CEPPICU,CEPPINCI,CEPPUTH,CEPPB01:      
                        CEPPB02,CEPPB03,CEPPB04,CEPPB05,CEPPB06,CEPPB07:        
                        CEPPB08,CEPPB09,CEPPB10,CEPPB11,CEPPB12,CEPPB13:        
                        CEPPB14,CEPPB15,CEPPSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEPP1                                                                         
          UPDATE    CEAPPMA1;CEPPIND,CEPPDES,CEPPNURF,CEPPTHEF,CEPPPHAF:        
                        CEPPICUF,CEPPALLF,CEPPMSSF,CEPPTAXF,CEPPOVHF,CEPPCATF:  
                        CEPPDEPF,CEPPOTHF,CEPPNURV,CEPPTHEV,CEPPPHAV,CEPPICUV:  
                        CEPPALLV,CEPPMSSV,CEPPTAXV,CEPPOVHV,CEPPCATV,CEPPDEPV:  
                        CEPPOTHV,CEPPPRO,CEPPICU,CEPPINCI,CEPPUTH,CEPPB01:      
                        CEPPB02,CEPPB03,CEPPB04,CEPPB05,CEPPB06,CEPPB07:        
                        CEPPB08,CEPPB09,CEPPB10,CEPPB11,CEPPB12,CEPPB13:        
                        CEPPB14,CEPPB15,CEPPSPA                                 
          RETURN
.
WRCEPP1   RESET     KEY1                                                        
          WRITE     CEAPPMA1,KEY1;CEPPIND,CEPPDES,CEPPNURF,CEPPTHEF,CEPPPHAF:   
                        CEPPICUF,CEPPALLF,CEPPMSSF,CEPPTAXF,CEPPOVHF,CEPPCATF:  
                        CEPPDEPF,CEPPOTHF,CEPPNURV,CEPPTHEV,CEPPPHAV,CEPPICUV:  
                        CEPPALLV,CEPPMSSV,CEPPTAXV,CEPPOVHV,CEPPCATV,CEPPDEPV:  
                        CEPPOTHV,CEPPPRO,CEPPICU,CEPPINCI,CEPPUTH,CEPPB01:      
                        CEPPB02,CEPPB03,CEPPB04,CEPPB05,CEPPB06,CEPPB07:        
                        CEPPB08,CEPPB09,CEPPB10,CEPPB11,CEPPB12,CEPPB13:        
                        CEPPB14,CEPPB15,CEPPSPA                                 
          RETURN
.
DECEPP1   RESET     KEY1                                                        
          DELETE    CEAPPMA1,KEY1                                               
          RETURN
.
