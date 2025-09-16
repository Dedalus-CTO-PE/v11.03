.
. WEBPCBIO    
. --------
. Filename     : webpcbaf.dat
.
RSWBPCB1  RESET     KEY8                                                        
          READ      WEBPCBA1,KEY8;;                                             
          RETURN
.
RAWBPCB1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBPCBA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCB1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBPCBA1,KEY8;WBPBBTHN,WBPBBHTL,WBPBTRIB,WBPBDTBC,WBPBTMBC: 
                                  WBPBOPER,WBPBEFNM,WBPBLOCN,WBPBSNID,WBPBSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPCB1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCBA1;WBPBBTHN,WBPBBHTL,WBPBTRIB,WBPBDTBC,WBPBTMBC:      
                             WBPBOPER,WBPBEFNM,WBPBLOCN,WBPBSNID,WBPBSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPCB1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCBA1;WBPBBTHN,WBPBBHTL,WBPBTRIB,WBPBDTBC,WBPBTMBC:      
                             WBPBOPER,WBPBEFNM,WBPBLOCN,WBPBSNID,WBPBSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPCB1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPCBA1;WBPBBTHN,WBPBBHTL,WBPBTRIB,WBPBDTBC,WBPBTMBC:      
                             WBPBOPER,WBPBEFNM,WBPBLOCN,WBPBSNID,WBPBSPAR       
          RETURN
.
WRWBPCB1  RESET     KEY8                                                        
          WRITE     WEBPCBA1,KEY8;WBPBBTHN,WBPBBHTL,WBPBTRIB,WBPBDTBC,WBPBTMBC: 
                                  WBPBOPER,WBPBEFNM,WBPBLOCN,WBPBSNID,WBPBSPAR  
          RETURN
.
DEWBPCB1  RESET     KEY8                                                        
          DELETE    WEBPCBA1,KEY8                                               
          RETURN
.
RSWBPCB2  RESET     KEY16                                                       
          READ      WEBPCBA2,KEY16;;                                            
          RETURN
.
RAWBPCB2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCBA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCB2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCBA2,KEY16;WBPBBTHN,WBPBBHTL,WBPBTRIB,WBPBDTBC,WBPBTMBC:
                                   WBPBOPER,WBPBEFNM,WBPBLOCN,WBPBSNID,WBPBSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPCB2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCBA2;WBPBBTHN,WBPBBHTL,WBPBTRIB,WBPBDTBC,WBPBTMBC:      
                             WBPBOPER,WBPBEFNM,WBPBLOCN,WBPBSNID,WBPBSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPCB2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCBA2;WBPBBTHN,WBPBBHTL,WBPBTRIB,WBPBDTBC,WBPBTMBC:      
                             WBPBOPER,WBPBEFNM,WBPBLOCN,WBPBSNID,WBPBSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPCB2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPCBA2;WBPBBTHN,WBPBBHTL,WBPBTRIB,WBPBDTBC,WBPBTMBC:      
                             WBPBOPER,WBPBEFNM,WBPBLOCN,WBPBSNID,WBPBSPAR       
          RETURN
.
WRWBPCB2  RESET     KEY16                                                       
          WRITE     WEBPCBA2,KEY16;WBPBBTHN,WBPBBHTL,WBPBTRIB,WBPBDTBC,WBPBTMBC:
                                   WBPBOPER,WBPBEFNM,WBPBLOCN,WBPBSNID,WBPBSPAR 
          RETURN
.
DEWBPCB2  RESET     KEY16                                                       
          DELETE    WEBPCBA2,KEY16                                              
          RETURN
.
