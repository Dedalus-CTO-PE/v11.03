.
. PMSUPDIO    
. --------
. Filename     : pmsupdaf.dat
.
RSPMUPD1  RESET     KEY8                                                        
          READ      PMSUPDA1,KEY8;;                                             
          RETURN
.
RAPMUPD1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSUPDA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMUPD1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSUPDA1,KEY8;PMUDURNO,PMUDDATE,PMUDTIME,PMUDUSER,PMUDDATC: 
                        PMUDTIMC,PMUDWEBC,PMUDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMUPD1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSUPDA1;PMUDURNO,PMUDDATE,PMUDTIME,PMUDUSER,PMUDDATC:      
                        PMUDTIMC,PMUDWEBC,PMUDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMUPD1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSUPDA1;PMUDURNO,PMUDDATE,PMUDTIME,PMUDUSER,PMUDDATC:      
                        PMUDTIMC,PMUDWEBC,PMUDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMUPD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSUPDA1;PMUDURNO,PMUDDATE,PMUDTIME,PMUDUSER,PMUDDATC:      
                        PMUDTIMC,PMUDWEBC,PMUDSPAR                              
          RETURN
.
WRPMUPD1  RESET     KEY8                                                        
          WRITE     PMSUPDA1,KEY8;PMUDURNO,PMUDDATE,PMUDTIME,PMUDUSER,PMUDDATC: 
                        PMUDTIMC,PMUDWEBC,PMUDSPAR                              
          RETURN
.
DEPMUPD1  RESET     KEY8                                                        
          DELETE    PMSUPDA1,KEY8                                               
          RETURN
.
