.
. EMRIBHIO    
. --------
. Filename     : emribhaf.dat
.
RSEMIBH1  RESET     KEY8                                                        
          READ      EMRIBHA1,KEY8;;                                             
          RETURN
.
RAEMIBH1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      EMRIBHA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMIBH1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      EMRIBHA1,KEY8;EMIBBTHN,EMIBBHTL,EMIBTRIB,EMIBDTBC,EMIBTMBC: 
                                  EMIBOPER,EMIBEFNM,EMIBLOCN,EMIBSNID,EMIBSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMIBH1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRIBHA1;EMIBBTHN,EMIBBHTL,EMIBTRIB,EMIBDTBC,EMIBTMBC:      
                             EMIBOPER,EMIBEFNM,EMIBLOCN,EMIBSNID,EMIBSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMIBH1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRIBHA1;EMIBBTHN,EMIBBHTL,EMIBTRIB,EMIBDTBC,EMIBTMBC:      
                             EMIBOPER,EMIBEFNM,EMIBLOCN,EMIBSNID,EMIBSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMIBH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRIBHA1;EMIBBTHN,EMIBBHTL,EMIBTRIB,EMIBDTBC,EMIBTMBC:      
                             EMIBOPER,EMIBEFNM,EMIBLOCN,EMIBSNID,EMIBSPAR       
          RETURN
.
WREMIBH1  RESET     KEY8                                                        
          WRITE     EMRIBHA1,KEY8;EMIBBTHN,EMIBBHTL,EMIBTRIB,EMIBDTBC,EMIBTMBC: 
                                  EMIBOPER,EMIBEFNM,EMIBLOCN,EMIBSNID,EMIBSPAR  
          RETURN
.
DEEMIBH1  RESET     KEY8                                                        
          DELETE    EMRIBHA1,KEY8                                               
          RETURN
.
RSEMIBH2  RESET     KEY16                                                       
          READ      EMRIBHA2,KEY16;;                                            
          RETURN
.
RAEMIBH2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      EMRIBHA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMIBH2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      EMRIBHA2,KEY16;EMIBBTHN,EMIBBHTL,EMIBTRIB,EMIBDTBC,EMIBTMBC:
                                   EMIBOPER,EMIBEFNM,EMIBLOCN,EMIBSNID,EMIBSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMIBH2  MOVE      ZERO,OVRCD                                                  
          READKS    EMRIBHA2;EMIBBTHN,EMIBBHTL,EMIBTRIB,EMIBDTBC,EMIBTMBC:      
                             EMIBOPER,EMIBEFNM,EMIBLOCN,EMIBSNID,EMIBSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMIBH2  MOVE      ZERO,OVRCD                                                  
          READKP    EMRIBHA2;EMIBBTHN,EMIBBHTL,EMIBTRIB,EMIBDTBC,EMIBTMBC:      
                             EMIBOPER,EMIBEFNM,EMIBLOCN,EMIBSNID,EMIBSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMIBH2  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRIBHA2;EMIBBTHN,EMIBBHTL,EMIBTRIB,EMIBDTBC,EMIBTMBC:      
                             EMIBOPER,EMIBEFNM,EMIBLOCN,EMIBSNID,EMIBSPAR       
          RETURN
.
WREMIBH2  RESET     KEY16                                                       
          WRITE     EMRIBHA2,KEY16;EMIBBTHN,EMIBBHTL,EMIBTRIB,EMIBDTBC,EMIBTMBC:
                                   EMIBOPER,EMIBEFNM,EMIBLOCN,EMIBSNID,EMIBSPAR 
          RETURN
.
DEEMIBH2  RESET     KEY16                                                       
          DELETE    EMRIBHA2,KEY16                                              
          RETURN
.
