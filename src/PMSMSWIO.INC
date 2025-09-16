.
. PMSMSWIO    
. --------
. Filename     : pmsmswaf.dat
.
RSPMMSW1  RESET     KEY12                                                       
          READ      PMSMSWA1,KEY12;;                                            
          RETURN
.
RAPMMSW1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMSWA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMMSW1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMSWA1,KEY12;PMMWHOSP,PMMWWARD,PMMWBEDC,PMMWWCLS,PMMWORDP:
                        PMMWWEBC,PMMWDATC,PMMWTIMC,PMMWWEBU,PMMWDATU,PMMWTIMU:  
                        PMMWSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMMSW1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSMSWA1;PMMWHOSP,PMMWWARD,PMMWBEDC,PMMWWCLS,PMMWORDP:      
                        PMMWWEBC,PMMWDATC,PMMWTIMC,PMMWWEBU,PMMWDATU,PMMWTIMU:  
                        PMMWSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMMSW1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSMSWA1;PMMWHOSP,PMMWWARD,PMMWBEDC,PMMWWCLS,PMMWORDP:      
                        PMMWWEBC,PMMWDATC,PMMWTIMC,PMMWWEBU,PMMWDATU,PMMWTIMU:  
                        PMMWSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMMSW1                                                                        
          UPDATE    PMSMSWA1;PMMWHOSP,PMMWWARD,PMMWBEDC,PMMWWCLS,PMMWORDP:      
                        PMMWWEBC,PMMWDATC,PMMWTIMC,PMMWWEBU,PMMWDATU,PMMWTIMU:  
                        PMMWSPAR                                                
          RETURN
.
WRPMMSW1  RESET     KEY12                                                       
          WRITE     PMSMSWA1,KEY12;PMMWHOSP,PMMWWARD,PMMWBEDC,PMMWWCLS,PMMWORDP:
                        PMMWWEBC,PMMWDATC,PMMWTIMC,PMMWWEBU,PMMWDATU,PMMWTIMU:  
                        PMMWSPAR                                                
          RETURN
.
DEPMMSW1  RESET     KEY12                                                       
          DELETE    PMSMSWA1,KEY12                                              
          RETURN
.
RSPMMSW2  RESET     KEY14                                                       
          READ      PMSMSWA2,KEY14;;                                            
          RETURN
.
RAPMMSW2  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMSWA2,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMMSW2  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMSWA2,KEY14;PMMWHOSP,PMMWWARD,PMMWBEDC,PMMWWCLS,PMMWORDP:
                        PMMWWEBC,PMMWDATC,PMMWTIMC,PMMWWEBU,PMMWDATU,PMMWTIMU:  
                        PMMWSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMMSW2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSMSWA2;PMMWHOSP,PMMWWARD,PMMWBEDC,PMMWWCLS,PMMWORDP:      
                        PMMWWEBC,PMMWDATC,PMMWTIMC,PMMWWEBU,PMMWDATU,PMMWTIMU:  
                        PMMWSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMMSW2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSMSWA2;PMMWHOSP,PMMWWARD,PMMWBEDC,PMMWWCLS,PMMWORDP:      
                        PMMWWEBC,PMMWDATC,PMMWTIMC,PMMWWEBU,PMMWDATU,PMMWTIMU:  
                        PMMWSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMMSW2                                                                        
          UPDATE    PMSMSWA2;PMMWHOSP,PMMWWARD,PMMWBEDC,PMMWWCLS,PMMWORDP:      
                        PMMWWEBC,PMMWDATC,PMMWTIMC,PMMWWEBU,PMMWDATU,PMMWTIMU:  
                        PMMWSPAR                                                
          RETURN
.
WRPMMSW2  RESET     KEY14                                                       
          WRITE     PMSMSWA2,KEY14;PMMWHOSP,PMMWWARD,PMMWBEDC,PMMWWCLS,PMMWORDP:
                        PMMWWEBC,PMMWDATC,PMMWTIMC,PMMWWEBU,PMMWDATU,PMMWTIMU:  
                        PMMWSPAR                                                
          RETURN
.
DEPMMSW2  RESET     KEY14                                                       
          DELETE    PMSMSWA2,KEY14                                              
          RETURN
.
