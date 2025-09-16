.
. PMSAILIO    
. --------
. Filename     : pmsailaf.dat
.
RSPMAIL1  RESET     KEY8                                                        
          READ      PMSAILA1,KEY8;;                                             
          RETURN
.
RAPMAIL1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSAILA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMAIL1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSAILA1,KEY8;PMALADMN,PMALFINO,PMALSPAR                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMAIL1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSAILA1;PMALADMN,PMALFINO,PMALSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMAIL1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSAILA1;PMALADMN,PMALFINO,PMALSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMAIL1                                                                        
          UPDATE    PMSAILA1;PMALADMN,PMALFINO,PMALSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMAIL1  RESET     KEY8                                                        
          WRITE     PMSAILA1,KEY8;PMALADMN,PMALFINO,PMALSPAR                    
          RETURN
.
DEPMAIL1  RESET     KEY8                                                        
          DELETE    PMSAILA1,KEY8                                               
          RETURN
.
RLPMAIL1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     PMSAILA1,KEY8;PMALADMN,PMALFINO,PMALSPAR                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMAIL1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSAILA1;PMALADMN,PMALFINO,PMALSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMAIL1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSAILA1;PMALADMN,PMALFINO,PMALSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMAIL1  RESET     KEY8                                                        
          UNLOCK    PMSAILA1                                                    
          RETURN
.
RSPMAIL2  RESET     KEY20                                                       
          READ      PMSAILA2,KEY20;;                                            
          RETURN
.
RAPMAIL2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAILA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMAIL2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAILA2,KEY20;PMALADMN,PMALFINO,PMALSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMAIL2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSAILA2;PMALADMN,PMALFINO,PMALSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMAIL2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSAILA2;PMALADMN,PMALFINO,PMALSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMAIL2                                                                        
          UPDATE    PMSAILA2;PMALADMN,PMALFINO,PMALSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMAIL2  RESET     KEY20                                                       
          WRITE     PMSAILA2,KEY20;PMALADMN,PMALFINO,PMALSPAR                   
          RETURN
.
DEPMAIL2  RESET     KEY20                                                       
          DELETE    PMSAILA2,KEY20                                              
          RETURN
.
RLPMAIL2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     PMSAILA2,KEY20;PMALADMN,PMALFINO,PMALSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMAIL2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSAILA2;PMALADMN,PMALFINO,PMALSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMAIL2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSAILA2;PMALADMN,PMALFINO,PMALSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMAIL2  RESET     KEY20                                                       
          UNLOCK    PMSAILA2                                                    
          RETURN
.
