.
. CCSIPRIO    
. --------
. Filename     : ccsipraf.dat
.
RSCCIP1   RESET     KEY4                                                        
          READ      CCSIPRA1,KEY4;;                                             
          RETURN
.
RACCIP1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSIPRA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCIP1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSIPRA1,KEY4;CCIPDRGC,CCIPPRI,CCIPSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCIP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSIPRA1;CCIPDRGC,CCIPPRI,CCIPSPA                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCIP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSIPRA1;CCIPDRGC,CCIPPRI,CCIPSPA                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCIP1                                                                         
          UPDATE    CCSIPRA1;CCIPDRGC,CCIPPRI,CCIPSPA                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCCIP1   RESET     KEY4                                                        
          WRITE     CCSIPRA1,KEY4;CCIPDRGC,CCIPPRI,CCIPSPA                      
          RETURN
.
DECCIP1   RESET     KEY4                                                        
          DELETE    CCSIPRA1,KEY4                                               
          RETURN
.
RLCCIP1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READL     CCSIPRA1,KEY4;CCIPDRGC,CCIPPRI,CCIPSPA                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCCIP1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CCSIPRA1;CCIPDRGC,CCIPPRI,CCIPSPA                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCCIP1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CCSIPRA1;CCIPDRGC,CCIPPRI,CCIPSPA                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCCIP1   RESET     KEY4                                                        
          UNLOCK    CCSIPRA1                                                    
          RETURN
.
