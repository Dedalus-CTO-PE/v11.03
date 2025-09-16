.
. WATESTIO    
. --------
. Filename     : watestaf.dat
.
RSWTEST1  RESET     KEY8                                                        
          READ      WATESTA1,KEY8;;                                             
          RETURN
.
RAWTEST1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WATESTA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTEST1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WATESTA1,KEY8;WTESSDAT,WTESUSID,WTESDATE,WTESTIME,WTESSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTEST1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATESTA1;WTESSDAT,WTESUSID,WTESDATE,WTESTIME,WTESSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTEST1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATESTA1;WTESSDAT,WTESUSID,WTESDATE,WTESTIME,WTESSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTEST1                                                                        
          UPDATE    WATESTA1;WTESSDAT,WTESUSID,WTESDATE,WTESTIME,WTESSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTEST1  RESET     KEY8                                                        
          WRITE     WATESTA1,KEY8;WTESSDAT,WTESUSID,WTESDATE,WTESTIME,WTESSPAR  
          RETURN
.
DEWTEST1  RESET     KEY8                                                        
          DELETE    WATESTA1,KEY8                                               
          RETURN
.
RLWTEST1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     WATESTA1,KEY8;WTESSDAT,WTESUSID,WTESDATE,WTESTIME,WTESSPAR  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTEST1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATESTA1;WTESSDAT,WTESUSID,WTESDATE,WTESTIME,WTESSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTEST1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATESTA1;WTESSDAT,WTESUSID,WTESDATE,WTESTIME,WTESSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTEST1  RESET     KEY8                                                        
          UNLOCK    WATESTA1                                                    
          RETURN
.
