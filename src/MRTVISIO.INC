.
. MRTVISIO    
. --------
. Filename     : mrtvisaf.dat
.
RSMRVS1   RESET     KEY8                                                        
          READ      MRTVISA1,KEY8;;                                             
          RETURN
.
RAMRVS1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      MRTVISA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRVS1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      MRTVISA1,KEY8;MRVSVSNO,MRVSMKEY,MRVSSPAR                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRVS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    MRTVISA1;MRVSVSNO,MRVSMKEY,MRVSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRVS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    MRTVISA1;MRVSVSNO,MRVSMKEY,MRVSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRVS1                                                                         
          UPDATE    MRTVISA1;MRVSVSNO,MRVSMKEY,MRVSSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRVS1   RESET     KEY8                                                        
          WRITE     MRTVISA1,KEY8;MRVSVSNO,MRVSMKEY,MRVSSPAR                    
          RETURN
.
DEMRVS1   RESET     KEY8                                                        
          DELETE    MRTVISA1,KEY8                                               
          RETURN
.
RLMRVS1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     MRTVISA1,KEY8;MRVSVSNO,MRVSMKEY,MRVSSPAR                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRVS1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   MRTVISA1;MRVSVSNO,MRVSMKEY,MRVSSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRVS1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   MRTVISA1;MRVSVSNO,MRVSMKEY,MRVSSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRVS1   RESET     KEY8                                                        
          UNLOCK    MRTVISA1                                                    
          RETURN
.
RSMRVS2   RESET     KEY18                                                       
          READ      MRTVISA2,KEY18;;                                            
          RETURN
.
RAMRVS2   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      MRTVISA2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRVS2   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      MRTVISA2,KEY18;MRVSVSNO,MRVSMKEY,MRVSSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRVS2                                                                         
          MOVE      ZERO,OVRCD
          READKS    MRTVISA2;MRVSVSNO,MRVSMKEY,MRVSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRVS2                                                                         
          MOVE      ZERO,OVRCD
          READKP    MRTVISA2;MRVSVSNO,MRVSMKEY,MRVSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRVS2                                                                         
          UPDATE    MRTVISA2;MRVSVSNO,MRVSMKEY,MRVSSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRVS2   RESET     KEY18                                                       
          WRITE     MRTVISA2,KEY18;MRVSVSNO,MRVSMKEY,MRVSSPAR                   
          RETURN
.
DEMRVS2   RESET     KEY18                                                       
          DELETE    MRTVISA2,KEY18                                              
          RETURN
.
RLMRVS2   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     MRTVISA2,KEY18;MRVSVSNO,MRVSMKEY,MRVSSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRVS2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   MRTVISA2;MRVSVSNO,MRVSMKEY,MRVSSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRVS2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   MRTVISA2;MRVSVSNO,MRVSMKEY,MRVSSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRVS2   RESET     KEY18                                                       
          UNLOCK    MRTVISA2                                                    
          RETURN
.
