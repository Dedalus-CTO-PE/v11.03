.
. OUTIBHIO    
. --------
. Filename     : outibhaf.dat
.
RSOTIBH1  RESET     KEY8                                                        
          READ      OUTIBHA1,KEY8;;                                             
          RETURN
.
RAOTIBH1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      OUTIBHA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTIBH1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      OUTIBHA1,KEY8;OTIBBTHN,OTIBBHTL,OTIBTRIB,OTIBDTBC,OTIBTMBC: 
                                  OTIBOPER,OTIBEFNM,OTIBLOCN,OTIBSNID,OTIBSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTIBH1  MOVE      ZERO,OVRCD                                                  
          READKS    OUTIBHA1;OTIBBTHN,OTIBBHTL,OTIBTRIB,OTIBDTBC,OTIBTMBC:      
                             OTIBOPER,OTIBEFNM,OTIBLOCN,OTIBSNID,OTIBSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTIBH1  MOVE      ZERO,OVRCD                                                  
          READKP    OUTIBHA1;OTIBBTHN,OTIBBHTL,OTIBTRIB,OTIBDTBC,OTIBTMBC:      
                             OTIBOPER,OTIBEFNM,OTIBLOCN,OTIBSNID,OTIBSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTIBH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTIBHA1;OTIBBTHN,OTIBBHTL,OTIBTRIB,OTIBDTBC,OTIBTMBC:      
                             OTIBOPER,OTIBEFNM,OTIBLOCN,OTIBSNID,OTIBSPAR       
          RETURN
.
WROTIBH1  RESET     KEY8                                                        
          WRITE     OUTIBHA1,KEY8;OTIBBTHN,OTIBBHTL,OTIBTRIB,OTIBDTBC,OTIBTMBC: 
                                  OTIBOPER,OTIBEFNM,OTIBLOCN,OTIBSNID,OTIBSPAR  
          RETURN
.
DEOTIBH1  RESET     KEY8                                                        
          DELETE    OUTIBHA1,KEY8                                               
          RETURN
.
RSOTIBH2  RESET     KEY16                                                       
          READ      OUTIBHA2,KEY16;;                                            
          RETURN
.
RAOTIBH2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      OUTIBHA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTIBH2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      OUTIBHA2,KEY16;OTIBBTHN,OTIBBHTL,OTIBTRIB,OTIBDTBC,OTIBTMBC:
                                   OTIBOPER,OTIBEFNM,OTIBLOCN,OTIBSNID,OTIBSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTIBH2  MOVE      ZERO,OVRCD                                                  
          READKS    OUTIBHA2;OTIBBTHN,OTIBBHTL,OTIBTRIB,OTIBDTBC,OTIBTMBC:      
                             OTIBOPER,OTIBEFNM,OTIBLOCN,OTIBSNID,OTIBSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTIBH2  MOVE      ZERO,OVRCD                                                  
          READKP    OUTIBHA2;OTIBBTHN,OTIBBHTL,OTIBTRIB,OTIBDTBC,OTIBTMBC:      
                             OTIBOPER,OTIBEFNM,OTIBLOCN,OTIBSNID,OTIBSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTIBH2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTIBHA2;OTIBBTHN,OTIBBHTL,OTIBTRIB,OTIBDTBC,OTIBTMBC:      
                             OTIBOPER,OTIBEFNM,OTIBLOCN,OTIBSNID,OTIBSPAR       
          RETURN
.
WROTIBH2  RESET     KEY16                                                       
          WRITE     OUTIBHA2,KEY16;OTIBBTHN,OTIBBHTL,OTIBTRIB,OTIBDTBC,OTIBTMBC:
                                   OTIBOPER,OTIBEFNM,OTIBLOCN,OTIBSNID,OTIBSPAR 
          RETURN
.
DEOTIBH2  RESET     KEY16                                                       
          DELETE    OUTIBHA2,KEY16                                              
          RETURN
.
