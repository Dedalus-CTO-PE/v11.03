.
. CCSSPCIO    
. --------
. Filename     : ccsspcaf.dat
.
RSCCSP1   RESET     KEY3                                                        
          READ      CCSSPCA1,KEY3;;                                             
          RETURN
.
RACCSP1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      CCSSPCA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCSP1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      CCSSPCA1,KEY3;CCSPMID,CCSPDES,CCSPFYR,CCSPFPR,CCSPTYR:      
                        CCSPTPR,CCSPMOD,CCSPSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCSP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSSPCA1;CCSPMID,CCSPDES,CCSPFYR,CCSPFPR,CCSPTYR:           
                        CCSPTPR,CCSPMOD,CCSPSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCSP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSSPCA1;CCSPMID,CCSPDES,CCSPFYR,CCSPFPR,CCSPTYR:           
                        CCSPTPR,CCSPMOD,CCSPSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCSP1                                                                         
          UPDATE    CCSSPCA1;CCSPMID,CCSPDES,CCSPFYR,CCSPFPR,CCSPTYR:           
                        CCSPTPR,CCSPMOD,CCSPSPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCCSP1   RESET     KEY3                                                        
          WRITE     CCSSPCA1,KEY3;CCSPMID,CCSPDES,CCSPFYR,CCSPFPR,CCSPTYR:      
                        CCSPTPR,CCSPMOD,CCSPSPA                                 
          RETURN
.
DECCSP1   RESET     KEY3                                                        
          DELETE    CCSSPCA1,KEY3                                               
          RETURN
.
RLCCSP1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     CCSSPCA1,KEY3;CCSPMID,CCSPDES,CCSPFYR,CCSPFPR,CCSPTYR:      
                        CCSPTPR,CCSPMOD,CCSPSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCCSP1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CCSSPCA1;CCSPMID,CCSPDES,CCSPFYR,CCSPFPR,CCSPTYR:           
                        CCSPTPR,CCSPMOD,CCSPSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCCSP1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CCSSPCA1;CCSPMID,CCSPDES,CCSPFYR,CCSPFPR,CCSPTYR:           
                        CCSPTPR,CCSPMOD,CCSPSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCCSP1   RESET     KEY3                                                        
          UNLOCK    CCSSPCA1                                                    
          RETURN
.
