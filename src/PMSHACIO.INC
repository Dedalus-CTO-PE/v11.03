.
. PMSHACIO    
. --------
. Filename     : pmshacaf.dat
.
RSPMHAC1  RESET     KEY12                                                       
          READ      PMSHACA1,KEY12;;                                            
          RETURN
.
RAPMHAC1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHACA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHAC1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHACA1,KEY12;PMHACNTR,PMHAHACG,PMHAHACF,PMHAHACV,PMHACDAT:
                                   PMHACTIM,PMHACUID,PMHAUDAT,PMHAUTIM,PMHAUUID:
                                   PMHASPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHAC1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSHACA1;PMHACNTR,PMHAHACG,PMHAHACF,PMHAHACV,PMHACDAT:      
                             PMHACTIM,PMHACUID,PMHAUDAT,PMHAUTIM,PMHAUUID:      
                             PMHASPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHAC1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSHACA1;PMHACNTR,PMHAHACG,PMHAHACF,PMHAHACV,PMHACDAT:      
                             PMHACTIM,PMHACUID,PMHAUDAT,PMHAUTIM,PMHAUUID:      
                             PMHASPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHAC1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSHACA1;PMHACNTR,PMHAHACG,PMHAHACF,PMHAHACV,PMHACDAT:      
                             PMHACTIM,PMHACUID,PMHAUDAT,PMHAUTIM,PMHAUUID:      
                             PMHASPAR                                           
          RETURN
.
WRPMHAC1  RESET     KEY12                                                       
          WRITE     PMSHACA1,KEY12;PMHACNTR,PMHAHACG,PMHAHACF,PMHAHACV,PMHACDAT:
                                   PMHACTIM,PMHACUID,PMHAUDAT,PMHAUTIM,PMHAUUID:
                                   PMHASPAR                                     
          RETURN
.
DEPMHAC1  RESET     KEY12                                                       
          DELETE    PMSHACA1,KEY12                                              
          RETURN
.
RSPMHAC2  RESET     KEY12                                                       
          READ      PMSHACA2,KEY12;;                                            
          RETURN
.
RAPMHAC2  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHACA2,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHAC2  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHACA2,KEY12;PMHACNTR,PMHAHACG,PMHAHACF,PMHAHACV,PMHACDAT:
                                   PMHACTIM,PMHACUID,PMHAUDAT,PMHAUTIM,PMHAUUID:
                                   PMHASPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHAC2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSHACA2;PMHACNTR,PMHAHACG,PMHAHACF,PMHAHACV,PMHACDAT:      
                             PMHACTIM,PMHACUID,PMHAUDAT,PMHAUTIM,PMHAUUID:      
                             PMHASPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHAC2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSHACA2;PMHACNTR,PMHAHACG,PMHAHACF,PMHAHACV,PMHACDAT:      
                             PMHACTIM,PMHACUID,PMHAUDAT,PMHAUTIM,PMHAUUID:      
                             PMHASPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHAC2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSHACA2;PMHACNTR,PMHAHACG,PMHAHACF,PMHAHACV,PMHACDAT:      
                             PMHACTIM,PMHACUID,PMHAUDAT,PMHAUTIM,PMHAUUID:      
                             PMHASPAR                                           
          RETURN
.
WRPMHAC2  RESET     KEY12                                                       
          WRITE     PMSHACA2,KEY12;PMHACNTR,PMHAHACG,PMHAHACF,PMHAHACV,PMHACDAT:
                                   PMHACTIM,PMHACUID,PMHAUDAT,PMHAUTIM,PMHAUUID:
                                   PMHASPAR                                     
          RETURN
.
DEPMHAC2  RESET     KEY12                                                       
          DELETE    PMSHACA2,KEY12                                              
          RETURN
.
