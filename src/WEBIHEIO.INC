.
. WEBIHEIO    
. --------
. Filename     : webiheaf.dat
.
RSWBIHE1  RESET     KEY43                                                       
          READ      WEBIHEA1,KEY43;;                                            
          RETURN
.
RAWBIHE1  RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHEA1,KEY43;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHE1  RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHEA1,KEY43;WBILFBID,WBILARID,WBILFRID,WBILRPTC,WBILCACN:
                                   WBILELNM,WBILMPID,WBILTRID,WBILMSID,WBILSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIHE1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHEA1;WBILFBID,WBILARID,WBILFRID,WBILRPTC,WBILCACN:      
                             WBILELNM,WBILMPID,WBILTRID,WBILMSID,WBILSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIHE1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHEA1;WBILFBID,WBILARID,WBILFRID,WBILRPTC,WBILCACN:      
                             WBILELNM,WBILMPID,WBILTRID,WBILMSID,WBILSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIHE1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHEA1;WBILFBID,WBILARID,WBILFRID,WBILRPTC,WBILCACN:      
                             WBILELNM,WBILMPID,WBILTRID,WBILMSID,WBILSPAR       
          RETURN
.
WRWBIHE1  RESET     KEY43                                                       
          WRITE     WEBIHEA1,KEY43;WBILFBID,WBILARID,WBILFRID,WBILRPTC,WBILCACN:
                                   WBILELNM,WBILMPID,WBILTRID,WBILMSID,WBILSPAR 
          RETURN
.
DEWBIHE1  RESET     KEY43                                                       
          DELETE    WEBIHEA1,KEY43                                              
          RETURN
.
RSWBIHE2  RESET     KEY67                                                       
          READ      WEBIHEA2,KEY67;;                                            
          RETURN
.
RAWBIHE2  RESET     KEY67                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHEA2,KEY67;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHE2  RESET     KEY67                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHEA2,KEY67;WBILFBID,WBILARID,WBILFRID,WBILRPTC,WBILCACN:
                                   WBILELNM,WBILMPID,WBILTRID,WBILMSID,WBILSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIHE2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHEA2;WBILFBID,WBILARID,WBILFRID,WBILRPTC,WBILCACN:      
                             WBILELNM,WBILMPID,WBILTRID,WBILMSID,WBILSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIHE2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHEA2;WBILFBID,WBILARID,WBILFRID,WBILRPTC,WBILCACN:      
                             WBILELNM,WBILMPID,WBILTRID,WBILMSID,WBILSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIHE2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHEA2;WBILFBID,WBILARID,WBILFRID,WBILRPTC,WBILCACN:      
                             WBILELNM,WBILMPID,WBILTRID,WBILMSID,WBILSPAR       
          RETURN
.
WRWBIHE2  RESET     KEY67                                                       
          WRITE     WEBIHEA2,KEY67;WBILFBID,WBILARID,WBILFRID,WBILRPTC,WBILCACN:
                                   WBILELNM,WBILMPID,WBILTRID,WBILMSID,WBILSPAR 
          RETURN
.
DEWBIHE2  RESET     KEY67                                                       
          DELETE    WEBIHEA2,KEY67                                              
          RETURN
.
RSWBIHE3  RESET     KEY79                                                       
          READ      WEBIHEA3,KEY79;;                                            
          RETURN
.
RAWBIHE3  RESET     KEY79                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHEA3,KEY79;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHE3  RESET     KEY79                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHEA3,KEY79;WBILFBID,WBILARID,WBILFRID,WBILRPTC,WBILCACN:
                                   WBILELNM,WBILMPID,WBILTRID,WBILMSID,WBILSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIHE3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHEA3;WBILFBID,WBILARID,WBILFRID,WBILRPTC,WBILCACN:      
                             WBILELNM,WBILMPID,WBILTRID,WBILMSID,WBILSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIHE3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHEA3;WBILFBID,WBILARID,WBILFRID,WBILRPTC,WBILCACN:      
                             WBILELNM,WBILMPID,WBILTRID,WBILMSID,WBILSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIHE3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHEA3;WBILFBID,WBILARID,WBILFRID,WBILRPTC,WBILCACN:      
                             WBILELNM,WBILMPID,WBILTRID,WBILMSID,WBILSPAR       
          RETURN
.
WRWBIHE3  RESET     KEY79                                                       
          WRITE     WEBIHEA3,KEY79;WBILFBID,WBILARID,WBILFRID,WBILRPTC,WBILCACN:
                                   WBILELNM,WBILMPID,WBILTRID,WBILMSID,WBILSPAR 
          RETURN
.
DEWBIHE3  RESET     KEY79                                                       
          DELETE    WEBIHEA3,KEY79                                              
          RETURN
.
