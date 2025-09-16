.
. IBAMDPIO    
. --------
. Filename     : ibamdpaf.dat
.
RSIBMDP1  RESET     KEY5                                                        
          READ      IBAMDPA1,KEY5;;                                             
          RETURN
.
RAIBMDP1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      IBAMDPA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBMDP1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      IBAMDPA1,KEY5;IBMDMENU,IBMDLINE,IBMDDATA,IBMDATTR,IBMDSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBMDP1                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBAMDPA1;IBMDMENU,IBMDLINE,IBMDDATA,IBMDATTR,IBMDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBMDP1                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBAMDPA1;IBMDMENU,IBMDLINE,IBMDDATA,IBMDATTR,IBMDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBMDP1                                                                        
          UPDATE    IBAMDPA1;IBMDMENU,IBMDLINE,IBMDDATA,IBMDATTR,IBMDSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBMDP1  RESET     KEY5                                                        
          WRITE     IBAMDPA1,KEY5;IBMDMENU,IBMDLINE,IBMDDATA,IBMDATTR,IBMDSPAR  
          RETURN
.
DEIBMDP1  RESET     KEY5                                                        
          DELETE    IBAMDPA1,KEY5                                               
          RETURN
.
RLIBMDP1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READL     IBAMDPA1,KEY5;IBMDMENU,IBMDLINE,IBMDDATA,IBMDATTR,IBMDSPAR  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBMDP1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   IBAMDPA1;IBMDMENU,IBMDLINE,IBMDDATA,IBMDATTR,IBMDSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBMDP1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   IBAMDPA1;IBMDMENU,IBMDLINE,IBMDDATA,IBMDATTR,IBMDSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBMDP1  RESET     KEY5                                                        
          UNLOCK    IBAMDPA1                                                    
          RETURN
.
