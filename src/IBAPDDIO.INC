.
. IBAPDDIO    
. --------
. Filename     : ibapddaf.dat
.
RSIBPDD1  RESET     KEY12                                                       
          READ      IBAPDDA1,KEY12;;                                            
          RETURN
.
RAIBPDD1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      IBAPDDA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBPDD1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      IBAPDDA1,KEY12;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBPDD1  MOVE      ZERO,OVRCD                                                  
          READKS    IBAPDDA1;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBPDD1  MOVE      ZERO,OVRCD                                                  
          READKP    IBAPDDA1;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBPDD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    IBAPDDA1;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBPDD1  RESET     KEY12                                                       
          WRITE     IBAPDDA1,KEY12;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR 
          RETURN
.
DEIBPDD1  RESET     KEY12                                                       
          DELETE    IBAPDDA1,KEY12                                              
          RETURN
.
RLIBPDD1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     IBAPDDA1,KEY12;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBPDD1  MOVE      ZERO,OVRCD                                                  
          READLKS   IBAPDDA1;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBPDD1  MOVE      ZERO,OVRCD                                                  
          READLKP   IBAPDDA1;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBPDD1  RESET     KEY12                                                       
          UNLOCK    IBAPDDA1                                                    
          RETURN
.
RSIBPDD2  RESET     KEY15                                                       
          READ      IBAPDDA2,KEY15;;                                            
          RETURN
.
RAIBPDD2  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      IBAPDDA2,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBPDD2  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      IBAPDDA2,KEY15;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBPDD2  MOVE      ZERO,OVRCD                                                  
          READKS    IBAPDDA2;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBPDD2  MOVE      ZERO,OVRCD                                                  
          READKP    IBAPDDA2;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBPDD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    IBAPDDA2;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBPDD2  RESET     KEY15                                                       
          WRITE     IBAPDDA2,KEY15;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR 
          RETURN
.
DEIBPDD2  RESET     KEY15                                                       
          DELETE    IBAPDDA2,KEY15                                              
          RETURN
.
RLIBPDD2  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READL     IBAPDDA2,KEY15;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBPDD2  MOVE      ZERO,OVRCD                                                  
          READLKS   IBAPDDA2;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBPDD2  MOVE      ZERO,OVRCD                                                  
          READLKP   IBAPDDA2;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBPDD2  RESET     KEY15                                                       
          UNLOCK    IBAPDDA2                                                    
          RETURN
.
RSIBPDD3  RESET     KEY12                                                       
          READ      IBAPDDA3,KEY12;;                                            
          RETURN
.
RAIBPDD3  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      IBAPDDA3,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBPDD3  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      IBAPDDA3,KEY12;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBPDD3  MOVE      ZERO,OVRCD                                                  
          READKS    IBAPDDA3;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBPDD3  MOVE      ZERO,OVRCD                                                  
          READKP    IBAPDDA3;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBPDD3  MOVE      ZERO,OVRCD                                                  
          UPDATE    IBAPDDA3;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBPDD3  RESET     KEY12                                                       
          WRITE     IBAPDDA3,KEY12;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR 
          RETURN
.
DEIBPDD3  RESET     KEY12                                                       
          DELETE    IBAPDDA3,KEY12                                              
          RETURN
.
RLIBPDD3  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     IBAPDDA3,KEY12;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBPDD3  MOVE      ZERO,OVRCD                                                  
          READLKS   IBAPDDA3;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBPDD3  MOVE      ZERO,OVRCD                                                  
          READLKP   IBAPDDA3;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBPDD3  RESET     KEY12                                                       
          UNLOCK    IBAPDDA3                                                    
          RETURN
.
RSIBPDD4  RESET     KEY32                                                       
          READ      IBAPDDA4,KEY32;;                                            
          RETURN
.
RAIBPDD4  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      IBAPDDA4,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBPDD4  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      IBAPDDA4,KEY32;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBPDD4  MOVE      ZERO,OVRCD                                                  
          READKS    IBAPDDA4;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBPDD4  MOVE      ZERO,OVRCD                                                  
          READKP    IBAPDDA4;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBPDD4  MOVE      ZERO,OVRCD                                                  
          UPDATE    IBAPDDA4;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBPDD4  RESET     KEY32                                                       
          WRITE     IBAPDDA4,KEY32;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR 
          RETURN
.
DEIBPDD4  RESET     KEY32                                                       
          DELETE    IBAPDDA4,KEY32                                              
          RETURN
.
RLIBPDD4  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READL     IBAPDDA4,KEY32;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBPDD4  MOVE      ZERO,OVRCD                                                  
          READLKS   IBAPDDA4;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBPDD4  MOVE      ZERO,OVRCD                                                  
          READLKP   IBAPDDA4;IBPDDEPT,IBPDSEQU,IBPDPRTR,IBPDPDSC,IBPDSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBPDD4  RESET     KEY32                                                       
          UNLOCK    IBAPDDA4                                                    
          RETURN
.
