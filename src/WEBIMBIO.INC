.
. WEBIMBIO    
. --------
. Filename     : webimbaf.dat
.
RSWBIMB1  RESET     KEY8                                                        
          READ      WEBIMBA1,KEY8;;                                             
          RETURN
.
RAWBIMB1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBIMBA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMB1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBIMBA1,KEY8;WBIBBTHN,WBIBHFND,WBIBBHTL,WBIBTRIB,WBIBDTBC: 
                                  WBIBTMBC,WBIBOPER,DWBIBEET,WBIBEFNM,WBIBLOCN: 
                                  WBIBSNID,WBIBSPAR                             
          GOTO      OVERCOND IF OVER
          MOVE      DWBIBEET,WBIBEETP
          RETURN
.
RKWBIMB1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMBA1;WBIBBTHN,WBIBHFND,WBIBBHTL,WBIBTRIB,WBIBDTBC:      
                             WBIBTMBC,WBIBOPER,DWBIBEET,WBIBEFNM,WBIBLOCN:      
                             WBIBSNID,WBIBSPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBIBEET,WBIBEETP
          RETURN
.
RPWBIMB1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMBA1;WBIBBTHN,WBIBHFND,WBIBBHTL,WBIBTRIB,WBIBDTBC:      
                             WBIBTMBC,WBIBOPER,DWBIBEET,WBIBEFNM,WBIBLOCN:      
                             WBIBSNID,WBIBSPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBIBEET,WBIBEETP
          RETURN
.
UPWBIMB1  MOVE      ZERO,OVRCD                                                  
          MOVE      WBIBEETP,DWBIBEET
          UPDATE    WEBIMBA1;WBIBBTHN,WBIBHFND,WBIBBHTL,WBIBTRIB,WBIBDTBC:      
                             WBIBTMBC,WBIBOPER,DWBIBEET,WBIBEFNM,WBIBLOCN:      
                             WBIBSNID,WBIBSPAR                                  
          RETURN
.
WRWBIMB1  MOVE      WBIBEETP,DWBIBEET
          RESET     KEY8                                                        
          WRITE     WEBIMBA1,KEY8;WBIBBTHN,WBIBHFND,WBIBBHTL,WBIBTRIB,WBIBDTBC: 
                                  WBIBTMBC,WBIBOPER,DWBIBEET,WBIBEFNM,WBIBLOCN: 
                                  WBIBSNID,WBIBSPAR                             
          RETURN
.
DEWBIMB1  RESET     KEY8                                                        
          DELETE    WEBIMBA1,KEY8                                               
          RETURN
.
RSWBIMB2  RESET     KEY16                                                       
          READ      WEBIMBA2,KEY16;;                                            
          RETURN
.
RAWBIMB2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMBA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMB2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMBA2,KEY16;WBIBBTHN,WBIBHFND,WBIBBHTL,WBIBTRIB,WBIBDTBC:
                                   WBIBTMBC,WBIBOPER,DWBIBEET,WBIBEFNM,WBIBLOCN:
                                   WBIBSNID,WBIBSPAR                            
          GOTO      OVERCOND IF OVER
          MOVE      DWBIBEET,WBIBEETP
          RETURN
.
RKWBIMB2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMBA2;WBIBBTHN,WBIBHFND,WBIBBHTL,WBIBTRIB,WBIBDTBC:      
                             WBIBTMBC,WBIBOPER,DWBIBEET,WBIBEFNM,WBIBLOCN:      
                             WBIBSNID,WBIBSPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBIBEET,WBIBEETP
          RETURN
.
RPWBIMB2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMBA2;WBIBBTHN,WBIBHFND,WBIBBHTL,WBIBTRIB,WBIBDTBC:      
                             WBIBTMBC,WBIBOPER,DWBIBEET,WBIBEFNM,WBIBLOCN:      
                             WBIBSNID,WBIBSPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBIBEET,WBIBEETP
          RETURN
.
UPWBIMB2  MOVE      ZERO,OVRCD                                                  
          MOVE      WBIBEETP,DWBIBEET
          UPDATE    WEBIMBA2;WBIBBTHN,WBIBHFND,WBIBBHTL,WBIBTRIB,WBIBDTBC:      
                             WBIBTMBC,WBIBOPER,DWBIBEET,WBIBEFNM,WBIBLOCN:      
                             WBIBSNID,WBIBSPAR                                  
          RETURN
.
WRWBIMB2  MOVE      WBIBEETP,DWBIBEET
          RESET     KEY16                                                       
          WRITE     WEBIMBA2,KEY16;WBIBBTHN,WBIBHFND,WBIBBHTL,WBIBTRIB,WBIBDTBC:
                                   WBIBTMBC,WBIBOPER,DWBIBEET,WBIBEFNM,WBIBLOCN:
                                   WBIBSNID,WBIBSPAR                            
          RETURN
.
DEWBIMB2  RESET     KEY16                                                       
          DELETE    WEBIMBA2,KEY16                                              
          RETURN
.
