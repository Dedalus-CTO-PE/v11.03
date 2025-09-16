.
. IBAMENIO    
. --------
. Filename     : ibamenaf.dat
.
RSIBMEN1  RESET     KEY3                                                        
          READ      IBAMENA1,KEY3;;                                             
          RETURN
.
RAIBMEN1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      IBAMENA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBMEN1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      IBAMENA1,KEY3;IBMNMENU,IBMNDESC                             
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBMEN1                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBAMENA1;IBMNMENU,IBMNDESC                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBMEN1                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBAMENA1;IBMNMENU,IBMNDESC                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBMEN1                                                                        
          UPDATE    IBAMENA1;IBMNMENU,IBMNDESC                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBMEN1  RESET     KEY3                                                        
          WRITE     IBAMENA1,KEY3;IBMNMENU,IBMNDESC                             
          RETURN
.
DEIBMEN1  RESET     KEY3                                                        
          DELETE    IBAMENA1,KEY3                                               
          RETURN
.
RLIBMEN1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     IBAMENA1,KEY3;IBMNMENU,IBMNDESC                             
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBMEN1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   IBAMENA1;IBMNMENU,IBMNDESC                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBMEN1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   IBAMENA1;IBMNMENU,IBMNDESC                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBMEN1  RESET     KEY3                                                        
          UNLOCK    IBAMENA1                                                    
          RETURN
.
