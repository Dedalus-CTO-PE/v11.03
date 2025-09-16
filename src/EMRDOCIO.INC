.
. EMRDOCIO    
. --------
. Filename     : emrdocaf.dat
.
RSEMDO1   RESET     KEY10                                                       
          READ      EMRDOCA1,KEY10;;                                            
          RETURN
.
RAEMDO1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      EMRDOCA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMDO1   RESET     KEY10                                                      
          MOVE      ZERO,OVRCD
          READ      EMRDOCA1,KEY10;EMDODOC,EMDODNM,EMDODIN,EMDOACT,EMDOSPA    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMDO1                                                                         
          MOVE      ZERO,OVRCD
          READKS    EMRDOCA1;EMDODOC,EMDODNM,EMDODIN,EMDOACT,EMDOSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMDO1                                                                         
          MOVE      ZERO,OVRCD
          READKP    EMRDOCA1;EMDODOC,EMDODNM,EMDODIN,EMDOACT,EMDOSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMDO1                                                                         
          UPDATE    EMRDOCA1;EMDODOC,EMDODNM,EMDODIN,EMDOACT,EMDOSPA            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMDO1   RESET     KEY10                                                      
          WRITE     EMRDOCA1,KEY10;EMDODOC,EMDODNM,EMDODIN,EMDOACT,EMDOSPA      
          RETURN
.
DEEMDO1   RESET     KEY10                                                       
          DELETE    EMRDOCA1,KEY10                                              
          RETURN
.
RLEMDO1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     EMRDOCA1,KEY10;EMDODOC,EMDODNM,EMDODIN,EMDOACT,EMDOSPA      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMDO1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   EMRDOCA1;EMDODOC,EMDODNM,EMDODIN,EMDOACT,EMDOSPA            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMDO1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   EMRDOCA1;EMDODOC,EMDODNM,EMDODIN,EMDOACT,EMDOSPA            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMDO1   RESET     KEY10                                                       
          UNLOCK    EMRDOCA1                                                    
          RETURN
.
RSEMDO2   RESET     KEY35                                                       
          READ      EMRDOCA2,KEY35;;                                            
          RETURN
.
RAEMDO2   RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      EMRDOCA2,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMDO2   RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      EMRDOCA2,KEY35;EMDODOC,EMDODNM,EMDODIN,EMDOACT,EMDOSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMDO2                                                                         
          MOVE      ZERO,OVRCD
          READKS    EMRDOCA2;EMDODOC,EMDODNM,EMDODIN,EMDOACT,EMDOSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMDO2                                                                         
          MOVE      ZERO,OVRCD
          READKP    EMRDOCA2;EMDODOC,EMDODNM,EMDODIN,EMDOACT,EMDOSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMDO2                                                                         
          UPDATE    EMRDOCA2;EMDODOC,EMDODNM,EMDODIN,EMDOACT,EMDOSPA            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMDO2   RESET     KEY35                                                       
          WRITE     EMRDOCA2,KEY35;EMDODOC,EMDODNM,EMDODIN,EMDOACT,EMDOSPA      
          RETURN
.
DEEMDO2   RESET     KEY35                                                       
          DELETE    EMRDOCA2,KEY35                                              
          RETURN
.
RLEMDO2   RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READL     EMRDOCA2,KEY35;EMDODOC,EMDODNM,EMDODIN,EMDOACT,EMDOSPA      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMDO2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   EMRDOCA2;EMDODOC,EMDODNM,EMDODIN,EMDOACT,EMDOSPA            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMDO2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   EMRDOCA2;EMDODOC,EMDODNM,EMDODIN,EMDOACT,EMDOSPA            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMDO2   RESET     KEY35                                                       
          UNLOCK    EMRDOCA2                                                    
          RETURN
.
