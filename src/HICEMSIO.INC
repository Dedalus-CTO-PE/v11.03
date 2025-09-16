.
. HICEMSIO    
. --------
. Filename     : hicemsaf.dat
.
RSHCEMS1  RESET     KEY3                                                        
          READ      HICEMSA1,KEY3;;                                             
          RETURN
.
RAHCEMS1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      HICEMSA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCEMS1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      HICEMSA1,KEY3;HCEMCODE,HCEMDESC,HCEMSPAR                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCEMS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICEMSA1;HCEMCODE,HCEMDESC,HCEMSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCEMS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICEMSA1;HCEMCODE,HCEMDESC,HCEMSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCEMS1                                                                        
          UPDATE    HICEMSA1;HCEMCODE,HCEMDESC,HCEMSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRHCEMS1  RESET     KEY3                                                        
          WRITE     HICEMSA1,KEY3;HCEMCODE,HCEMDESC,HCEMSPAR                    
          RETURN
.
DEHCEMS1  RESET     KEY3                                                        
          DELETE    HICEMSA1,KEY3                                               
          RETURN
.
RLHCEMS1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     HICEMSA1,KEY3;HCEMCODE,HCEMDESC,HCEMSPAR                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLHCEMS1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   HICEMSA1;HCEMCODE,HCEMDESC,HCEMSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLHCEMS1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   HICEMSA1;HCEMCODE,HCEMDESC,HCEMSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUHCEMS1  RESET     KEY3                                                        
          UNLOCK    HICEMSA1                                                    
          RETURN
.
RSHCEMS2  RESET     KEY73                                                       
          READ      HICEMSA2,KEY73;;                                            
          RETURN
.
RAHCEMS2  RESET     KEY73                                                       
          MOVE      ZERO,OVRCD
          READ      HICEMSA2,KEY73;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCEMS2  RESET     KEY73                                                       
          MOVE      ZERO,OVRCD
          READ      HICEMSA2,KEY73;HCEMCODE,HCEMDESC,HCEMSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCEMS2                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICEMSA2;HCEMCODE,HCEMDESC,HCEMSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCEMS2                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICEMSA2;HCEMCODE,HCEMDESC,HCEMSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCEMS2                                                                        
          UPDATE    HICEMSA2;HCEMCODE,HCEMDESC,HCEMSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRHCEMS2  RESET     KEY73                                                       
          WRITE     HICEMSA2,KEY73;HCEMCODE,HCEMDESC,HCEMSPAR                   
          RETURN
.
DEHCEMS2  RESET     KEY73                                                       
          DELETE    HICEMSA2,KEY73                                              
          RETURN
.
RLHCEMS2  RESET     KEY73                                                       
          MOVE      ZERO,OVRCD
          READL     HICEMSA2,KEY73;HCEMCODE,HCEMDESC,HCEMSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLHCEMS2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   HICEMSA2;HCEMCODE,HCEMDESC,HCEMSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLHCEMS2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   HICEMSA2;HCEMCODE,HCEMDESC,HCEMSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUHCEMS2  RESET     KEY73                                                       
          UNLOCK    HICEMSA2                                                    
          RETURN
.
