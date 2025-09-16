.
. PMSPLAIO    
. --------
. Filename     : pmsplaaf.dat
.
RSPMPLA1  RESET     KEY18                                                       
          READ      PMSPLAA1,KEY18;;                                            
          RETURN
.
RAPMPLA1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPLAA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPLA1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPLAA1,KEY18;PMPLUNIQ,PMPLADMN,PMPLWEBC,PMPLDATC,PMPLTIMC:
                        PMPLWEBU,PMPLDATU,PMPLTIMU,PMPLSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPLA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSPLAA1;PMPLUNIQ,PMPLADMN,PMPLWEBC,PMPLDATC,PMPLTIMC:      
                        PMPLWEBU,PMPLDATU,PMPLTIMU,PMPLSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPLA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSPLAA1;PMPLUNIQ,PMPLADMN,PMPLWEBC,PMPLDATC,PMPLTIMC:      
                        PMPLWEBU,PMPLDATU,PMPLTIMU,PMPLSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPLA1                                                                        
          UPDATE    PMSPLAA1;PMPLUNIQ,PMPLADMN,PMPLWEBC,PMPLDATC,PMPLTIMC:      
                        PMPLWEBU,PMPLDATU,PMPLTIMU,PMPLSPAR                     
          RETURN
.
WRPMPLA1  RESET     KEY18                                                       
          WRITE     PMSPLAA1,KEY18;PMPLUNIQ,PMPLADMN,PMPLWEBC,PMPLDATC,PMPLTIMC:
                        PMPLWEBU,PMPLDATU,PMPLTIMU,PMPLSPAR                     
          RETURN
.
DEPMPLA1  RESET     KEY18                                                       
          DELETE    PMSPLAA1,KEY18                                              
          RETURN
.
RSPMPLA2  RESET     KEY18                                                       
          READ      PMSPLAA2,KEY18;;                                            
          RETURN
.
RAPMPLA2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPLAA2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPLA2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPLAA2,KEY18;PMPLUNIQ,PMPLADMN,PMPLWEBC,PMPLDATC,PMPLTIMC:
                        PMPLWEBU,PMPLDATU,PMPLTIMU,PMPLSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPLA2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSPLAA2;PMPLUNIQ,PMPLADMN,PMPLWEBC,PMPLDATC,PMPLTIMC:      
                        PMPLWEBU,PMPLDATU,PMPLTIMU,PMPLSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPLA2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSPLAA2;PMPLUNIQ,PMPLADMN,PMPLWEBC,PMPLDATC,PMPLTIMC:      
                        PMPLWEBU,PMPLDATU,PMPLTIMU,PMPLSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPLA2                                                                        
          UPDATE    PMSPLAA2;PMPLUNIQ,PMPLADMN,PMPLWEBC,PMPLDATC,PMPLTIMC:      
                        PMPLWEBU,PMPLDATU,PMPLTIMU,PMPLSPAR                     
          RETURN
.
WRPMPLA2  RESET     KEY18                                                       
          WRITE     PMSPLAA2,KEY18;PMPLUNIQ,PMPLADMN,PMPLWEBC,PMPLDATC,PMPLTIMC:
                        PMPLWEBU,PMPLDATU,PMPLTIMU,PMPLSPAR                     
          RETURN
.
DEPMPLA2  RESET     KEY18                                                       
          DELETE    PMSPLAA2,KEY18                                              
          RETURN
.
