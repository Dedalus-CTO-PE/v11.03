.
. PRIIBHIO    
. --------
. Filename     : priibhaf.dat
.
RSPRIBH1  RESET     KEY8                                                        
          READ      PRIIBHA1,KEY8;;                                             
          RETURN
.
RAPRIBH1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PRIIBHA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRIBH1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PRIIBHA1,KEY8;PRIBBTHN,PRIBHFND,PRIBBHTL,PRIBTRIB,PRIBDTBC: 
                        PRIBTMBC,PRIBOPER,DPIEBEET,PRIBEFNM,PRIBLOCN,PRIBSNID:  
                        PRIBSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPIEBEET,PRIBEETP
          RETURN
.
RKPRIBH1  MOVE      ZERO,OVRCD                                                  
          READKS    PRIIBHA1;PRIBBTHN,PRIBHFND,PRIBBHTL,PRIBTRIB,PRIBDTBC:      
                        PRIBTMBC,PRIBOPER,DPIEBEET,PRIBEFNM,PRIBLOCN,PRIBSNID:  
                        PRIBSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPIEBEET,PRIBEETP
          RETURN
.
RPPRIBH1  MOVE      ZERO,OVRCD                                                  
          READKP    PRIIBHA1;PRIBBTHN,PRIBHFND,PRIBBHTL,PRIBTRIB,PRIBDTBC:      
                        PRIBTMBC,PRIBOPER,DPIEBEET,PRIBEFNM,PRIBLOCN,PRIBSNID:  
                        PRIBSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPIEBEET,PRIBEETP
          RETURN
.
UPPRIBH1  MOVE      PRIBEETP,DPIEBEET
          UPDATE    PRIIBHA1;PRIBBTHN,PRIBHFND,PRIBBHTL,PRIBTRIB,PRIBDTBC:      
                        PRIBTMBC,PRIBOPER,DPIEBEET,PRIBEFNM,PRIBLOCN,PRIBSNID:  
                        PRIBSPAR                                                
          RETURN
.
WRPRIBH1  RESET     KEY8                                                        
          MOVE      PRIBEETP,DPIEBEET
          WRITE     PRIIBHA1,KEY8;PRIBBTHN,PRIBHFND,PRIBBHTL,PRIBTRIB,PRIBDTBC: 
                        PRIBTMBC,PRIBOPER,DPIEBEET,PRIBEFNM,PRIBLOCN,PRIBSNID:  
                        PRIBSPAR                                                
          RETURN
.
DEPRIBH1  RESET     KEY8                                                        
          DELETE    PRIIBHA1,KEY8                                               
          RETURN
.
RSPRIBH2  RESET     KEY16                                                       
          READ      PRIIBHA2,KEY16;;                                            
          RETURN
.
RAPRIBH2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PRIIBHA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRIBH2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PRIIBHA2,KEY16;PRIBBTHN,PRIBHFND,PRIBBHTL,PRIBTRIB,PRIBDTBC:
                        PRIBTMBC,PRIBOPER,DPIEBEET,PRIBEFNM,PRIBLOCN,PRIBSNID:  
                        PRIBSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPIEBEET,PRIBEETP
          RETURN
.
RKPRIBH2  MOVE      ZERO,OVRCD                                                  
          READKS    PRIIBHA2;PRIBBTHN,PRIBHFND,PRIBBHTL,PRIBTRIB,PRIBDTBC:      
                        PRIBTMBC,PRIBOPER,DPIEBEET,PRIBEFNM,PRIBLOCN,PRIBSNID:  
                        PRIBSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPIEBEET,PRIBEETP
          RETURN
.
RPPRIBH2  MOVE      ZERO,OVRCD                                                  
          READKP    PRIIBHA2;PRIBBTHN,PRIBHFND,PRIBBHTL,PRIBTRIB,PRIBDTBC:      
                        PRIBTMBC,PRIBOPER,DPIEBEET,PRIBEFNM,PRIBLOCN,PRIBSNID:  
                        PRIBSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPIEBEET,PRIBEETP
          RETURN
.
UPPRIBH2  MOVE      PRIBEETP,DPIEBEET
          UPDATE    PRIIBHA2;PRIBBTHN,PRIBHFND,PRIBBHTL,PRIBTRIB,PRIBDTBC:      
                        PRIBTMBC,PRIBOPER,DPIEBEET,PRIBEFNM,PRIBLOCN,PRIBSNID:  
                        PRIBSPAR                                                
          RETURN
.
WRPRIBH2  RESET     KEY16                                                       
          MOVE      PRIBEETP,DPIEBEET
          WRITE     PRIIBHA2,KEY16;PRIBBTHN,PRIBHFND,PRIBBHTL,PRIBTRIB,PRIBDTBC:
                        PRIBTMBC,PRIBOPER,DPIEBEET,PRIBEFNM,PRIBLOCN,PRIBSNID:  
                        PRIBSPAR                                                
          RETURN
.
DEPRIBH2  RESET     KEY16                                                       
          DELETE    PRIIBHA2,KEY16                                              
          RETURN
.
