.
. EMRINCIO    
. --------
. Filename     : emrincaf.dat
.
RSEMINC1  RESET     KEY8                                                        
          READ      EMRINCA1,KEY8;;                                             
          RETURN
.
RAEMINC1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      EMRINCA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMINC1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      EMRINCA1,KEY8;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT: 
                        EMIPNURS,EMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMINC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRINCA1;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:      
                        EMIPNURS,EMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMINC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRINCA1;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:      
                        EMIPNURS,EMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMINC1                                                                        
          UPDATE    EMRINCA1;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:      
                        EMIPNURS,EMIPSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMINC1  RESET     KEY8                                                        
          WRITE     EMRINCA1,KEY8;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT: 
                        EMIPNURS,EMIPSPAR                                       
          RETURN
.
DEEMINC1  RESET     KEY8                                                        
          DELETE    EMRINCA1,KEY8                                               
          RETURN
.
RLEMINC1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     EMRINCA1,KEY8;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT: 
                        EMIPNURS,EMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMINC1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRINCA1;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:      
                        EMIPNURS,EMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMINC1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRINCA1;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:      
                        EMIPNURS,EMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMINC1  RESET     KEY8                                                        
          UNLOCK    EMRINCA1                                                    
          RETURN
.
RSEMINC2  RESET     KEY18                                                       
          READ      EMRINCA2,KEY18;;                                            
          RETURN
.
RAEMINC2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      EMRINCA2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMINC2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      EMRINCA2,KEY18;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:
                        EMIPNURS,EMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMINC2                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRINCA2;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:      
                        EMIPNURS,EMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMINC2                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRINCA2;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:      
                        EMIPNURS,EMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMINC2                                                                        
          UPDATE    EMRINCA2;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:      
                        EMIPNURS,EMIPSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMINC2  RESET     KEY18                                                       
          WRITE     EMRINCA2,KEY18;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:
                        EMIPNURS,EMIPSPAR                                       
          RETURN
.
DEEMINC2  RESET     KEY18                                                       
          DELETE    EMRINCA2,KEY18                                              
          RETURN
.
RLEMINC2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     EMRINCA2,KEY18;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:
                        EMIPNURS,EMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMINC2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRINCA2;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:      
                        EMIPNURS,EMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMINC2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRINCA2;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:      
                        EMIPNURS,EMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMINC2  RESET     KEY18                                                       
          UNLOCK    EMRINCA2                                                    
          RETURN
.
RSEMINC3  RESET     KEY18                                                       
          READ      EMRINCA3,KEY18;;                                            
          RETURN
.
RAEMINC3  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      EMRINCA3,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMINC3  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      EMRINCA3,KEY18;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:
                        EMIPNURS,EMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMINC3                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRINCA3;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:      
                        EMIPNURS,EMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMINC3                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRINCA3;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:      
                        EMIPNURS,EMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMINC3                                                                        
          UPDATE    EMRINCA3;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:      
                        EMIPNURS,EMIPSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMINC3  RESET     KEY18                                                       
          WRITE     EMRINCA3,KEY18;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:
                        EMIPNURS,EMIPSPAR                                       
          RETURN
.
DEEMINC3  RESET     KEY18                                                       
          DELETE    EMRINCA3,KEY18                                              
          RETURN
.
RLEMINC3  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     EMRINCA3,KEY18;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:
                        EMIPNURS,EMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMINC3                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRINCA3;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:      
                        EMIPNURS,EMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMINC3                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRINCA3;EMIPADMN,EMIPDCOM,EMIPNCOM,EMIPCCOM,EMIPDOCT:      
                        EMIPNURS,EMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMINC3  RESET     KEY18                                                       
          UNLOCK    EMRINCA3                                                    
          RETURN
.
