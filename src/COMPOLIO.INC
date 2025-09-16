.
. COMPOLIO    
. --------
. Filename     : compolaf.dat
.
RSCMPOL1  RESET     KEY24                                                       
          READ      COMPOLA1,KEY24;;                                            
          RETURN
.
RACMPOL1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      COMPOLA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMPOL1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      COMPOLA1,KEY24;CMPLSTAT,CMPLTYPE,CMPLUNIQ,CMPLFILN,CMPLSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMPOL1  MOVE      ZERO,OVRCD                                                  
          READKS    COMPOLA1;CMPLSTAT,CMPLTYPE,CMPLUNIQ,CMPLFILN,CMPLSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMPOL1  MOVE      ZERO,OVRCD                                                  
          READKP    COMPOLA1;CMPLSTAT,CMPLTYPE,CMPLUNIQ,CMPLFILN,CMPLSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMPOL1  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMPOLA1;CMPLSTAT,CMPLTYPE,CMPLUNIQ,CMPLFILN,CMPLSPAR       
          RETURN
.
WRCMPOL1  RESET     KEY24                                                       
          WRITE     COMPOLA1,KEY24;CMPLSTAT,CMPLTYPE,CMPLUNIQ,CMPLFILN,CMPLSPAR 
          RETURN
.
DECMPOL1  RESET     KEY24                                                       
          DELETE    COMPOLA1,KEY24                                              
          RETURN
.
RSCMPOL2  RESET     KEY23                                                       
          READ      COMPOLA2,KEY23;;                                            
          RETURN
.
RACMPOL2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      COMPOLA2,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMPOL2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      COMPOLA2,KEY23;CMPLSTAT,CMPLTYPE,CMPLUNIQ,CMPLFILN,CMPLSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMPOL2  MOVE      ZERO,OVRCD                                                  
          READKS    COMPOLA2;CMPLSTAT,CMPLTYPE,CMPLUNIQ,CMPLFILN,CMPLSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMPOL2  MOVE      ZERO,OVRCD                                                  
          READKP    COMPOLA2;CMPLSTAT,CMPLTYPE,CMPLUNIQ,CMPLFILN,CMPLSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMPOL2  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMPOLA2;CMPLSTAT,CMPLTYPE,CMPLUNIQ,CMPLFILN,CMPLSPAR       
          RETURN
.
WRCMPOL2  RESET     KEY23                                                       
          WRITE     COMPOLA2,KEY23;CMPLSTAT,CMPLTYPE,CMPLUNIQ,CMPLFILN,CMPLSPAR 
          RETURN
.
DECMPOL2  RESET     KEY23                                                       
          DELETE    COMPOLA2,KEY23                                              
          RETURN
.
RSCMPOL3  RESET     KEY24                                                       
          READ      COMPOLA3,KEY24;;                                            
          RETURN
.
RACMPOL3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      COMPOLA3,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMPOL3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      COMPOLA3,KEY24;CMPLSTAT,CMPLTYPE,CMPLUNIQ,CMPLFILN,CMPLSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMPOL3  MOVE      ZERO,OVRCD                                                  
          READKS    COMPOLA3;CMPLSTAT,CMPLTYPE,CMPLUNIQ,CMPLFILN,CMPLSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMPOL3  MOVE      ZERO,OVRCD                                                  
          READKP    COMPOLA3;CMPLSTAT,CMPLTYPE,CMPLUNIQ,CMPLFILN,CMPLSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMPOL3  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMPOLA3;CMPLSTAT,CMPLTYPE,CMPLUNIQ,CMPLFILN,CMPLSPAR       
          RETURN
.
WRCMPOL3  RESET     KEY24                                                       
          WRITE     COMPOLA3,KEY24;CMPLSTAT,CMPLTYPE,CMPLUNIQ,CMPLFILN,CMPLSPAR 
          RETURN
.
DECMPOL3  RESET     KEY24                                                       
          DELETE    COMPOLA3,KEY24                                              
          RETURN
.
