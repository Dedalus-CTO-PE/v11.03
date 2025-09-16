.
. IBAUSEIO    
. --------
. Filename     : ibauseaf.dat
.
RSIBUSE1  RESET     KEY7                                                        
          READ      IBAUSEA1,KEY7;;                                             
          RETURN
.
RAIBUSE1  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      IBAUSEA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBUSE1  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      IBAUSEA1,KEY7;IBUSCODE,IBUSSYST,IBUSLEVL,IBUSMPRO,IBUSSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBUSE1                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBAUSEA1;IBUSCODE,IBUSSYST,IBUSLEVL,IBUSMPRO,IBUSSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBUSE1                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBAUSEA1;IBUSCODE,IBUSSYST,IBUSLEVL,IBUSMPRO,IBUSSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBUSE1                                                                        
          UPDATE    IBAUSEA1;IBUSCODE,IBUSSYST,IBUSLEVL,IBUSMPRO,IBUSSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBUSE1  RESET     KEY7                                                        
          WRITE     IBAUSEA1,KEY7;IBUSCODE,IBUSSYST,IBUSLEVL,IBUSMPRO,IBUSSPAR  
          RETURN
.
DEIBUSE1  RESET     KEY7                                                        
          DELETE    IBAUSEA1,KEY7                                               
          RETURN
.
RLIBUSE1  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READL     IBAUSEA1,KEY7;IBUSCODE,IBUSSYST,IBUSLEVL,IBUSMPRO,IBUSSPAR  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBUSE1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   IBAUSEA1;IBUSCODE,IBUSSYST,IBUSLEVL,IBUSMPRO,IBUSSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBUSE1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   IBAUSEA1;IBUSCODE,IBUSSYST,IBUSLEVL,IBUSMPRO,IBUSSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBUSE1  RESET     KEY7                                                        
          UNLOCK    IBAUSEA1                                                    
          RETURN
.
RSIBUSE2  RESET     KEY7                                                        
          READ      IBAUSEA2,KEY7;;                                             
          RETURN
.
RAIBUSE2  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      IBAUSEA2,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBUSE2  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      IBAUSEA2,KEY7;IBUSCODE,IBUSSYST,IBUSLEVL,IBUSMPRO,IBUSSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBUSE2                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBAUSEA2;IBUSCODE,IBUSSYST,IBUSLEVL,IBUSMPRO,IBUSSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBUSE2                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBAUSEA2;IBUSCODE,IBUSSYST,IBUSLEVL,IBUSMPRO,IBUSSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBUSE2                                                                        
          UPDATE    IBAUSEA2;IBUSCODE,IBUSSYST,IBUSLEVL,IBUSMPRO,IBUSSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBUSE2  RESET     KEY7                                                        
          WRITE     IBAUSEA2,KEY7;IBUSCODE,IBUSSYST,IBUSLEVL,IBUSMPRO,IBUSSPAR  
          RETURN
.
DEIBUSE2  RESET     KEY7                                                        
          DELETE    IBAUSEA2,KEY7                                               
          RETURN
.
RLIBUSE2  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READL     IBAUSEA2,KEY7;IBUSCODE,IBUSSYST,IBUSLEVL,IBUSMPRO,IBUSSPAR  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBUSE2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   IBAUSEA2;IBUSCODE,IBUSSYST,IBUSLEVL,IBUSMPRO,IBUSSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBUSE2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   IBAUSEA2;IBUSCODE,IBUSSYST,IBUSLEVL,IBUSMPRO,IBUSSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBUSE2  RESET     KEY7                                                        
          UNLOCK    IBAUSEA2                                                    
          RETURN
.
