.
. SINDPCIO    
. --------
. Filename     : sindpcaf.dat
.
RSSIDP1   RESET     KEY3                                                        
          READ      SINDPCA1,KEY3;;                                             
          RETURN
.
RASIDP1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      SINDPCA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIDP1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      SINDPCA1,KEY3;SIDPCODE,SIDPADD1,SIDPADD2,SIDPACTV,SIDPSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIDP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINDPCA1;SIDPCODE,SIDPADD1,SIDPADD2,SIDPACTV,SIDPSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIDP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINDPCA1;SIDPCODE,SIDPADD1,SIDPADD2,SIDPACTV,SIDPSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIDP1                                                                         
          UPDATE    SINDPCA1;SIDPCODE,SIDPADD1,SIDPADD2,SIDPACTV,SIDPSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIDP1   RESET     KEY3                                                        
          WRITE     SINDPCA1,KEY3;SIDPCODE,SIDPADD1,SIDPADD2,SIDPACTV,SIDPSPAR  
          RETURN
.
DESIDP1   RESET     KEY3                                                        
          DELETE    SINDPCA1,KEY3                                               
          RETURN
.
RLSIDP1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     SINDPCA1,KEY3;SIDPCODE,SIDPADD1,SIDPADD2,SIDPACTV,SIDPSPAR  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIDP1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINDPCA1;SIDPCODE,SIDPADD1,SIDPADD2,SIDPACTV,SIDPSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIDP1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINDPCA1;SIDPCODE,SIDPADD1,SIDPADD2,SIDPACTV,SIDPSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIDP1   RESET     KEY3                                                        
          UNLOCK    SINDPCA1                                                    
          RETURN
.
