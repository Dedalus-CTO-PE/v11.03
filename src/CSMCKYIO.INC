.
. CSMCKYIO    
. --------
. Filename     : csmckyaf.dat
.
RSCSCK1   RESET     KEY22                                                       
          READ      CSMCKYA1,KEY22;;                                            
          RETURN
.
RACSCK1   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      CSMCKYA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCSCK1   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      CSMCKYA1,KEY22;CSCKKWD,CSCKCAT,CSCKSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCSCK1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CSMCKYA1;CSCKKWD,CSCKCAT,CSCKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCSCK1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CSMCKYA1;CSCKKWD,CSCKCAT,CSCKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCSCK1                                                                         
          UPDATE    CSMCKYA1;CSCKKWD,CSCKCAT,CSCKSPA                            
          RETURN
.
WRCSCK1   RESET     KEY22                                                       
          WRITE     CSMCKYA1,KEY22;CSCKKWD,CSCKCAT,CSCKSPA                      
          RETURN
.
DECSCK1   RESET     KEY22                                                       
          DELETE    CSMCKYA1,KEY22                                              
          RETURN
.
RSCSCK2   RESET     KEY22                                                       
          READ      CSMCKYA2,KEY22;;                                            
          RETURN
.
RACSCK2   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      CSMCKYA2,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCSCK2   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      CSMCKYA2,KEY22;CSCKKWD,CSCKCAT,CSCKSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCSCK2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CSMCKYA2;CSCKKWD,CSCKCAT,CSCKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCSCK2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CSMCKYA2;CSCKKWD,CSCKCAT,CSCKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCSCK2                                                                         
          UPDATE    CSMCKYA2;CSCKKWD,CSCKCAT,CSCKSPA                            
          RETURN
.
WRCSCK2   RESET     KEY22                                                       
          WRITE     CSMCKYA2,KEY22;CSCKKWD,CSCKCAT,CSCKSPA                      
          RETURN
.
DECSCK2   RESET     KEY22                                                       
          DELETE    CSMCKYA2,KEY22                                              
          RETURN
.
