.
. RESERRIO    
. --------
. Filename     : reserraf.dat
.
RSREER1   RESET     KEY17                                                       
          READ      RESERRA1,KEY17;;                                            
          RETURN
.
RAREER1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      RESERRA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREER1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      RESERRA1,KEY17;REERRDT,REERRTM,REERRUN,REERMSG,REERSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREER1                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESERRA1;REERRDT,REERRTM,REERRUN,REERMSG,REERSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREER1                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESERRA1;REERRDT,REERRTM,REERRUN,REERMSG,REERSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREER1                                                                         
          UPDATE    RESERRA1;REERRDT,REERRTM,REERRUN,REERMSG,REERSPA            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRREER1   RESET     KEY17                                                       
          WRITE     RESERRA1,KEY17;REERRDT,REERRTM,REERRUN,REERMSG,REERSPA      
          RETURN
.
DEREER1   RESET     KEY17                                                       
          DELETE    RESERRA1,KEY17                                              
          RETURN
.
RLREER1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     RESERRA1,KEY17;REERRDT,REERRTM,REERRUN,REERMSG,REERSPA      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLREER1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESERRA1;REERRDT,REERRTM,REERRUN,REERMSG,REERSPA            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLREER1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESERRA1;REERRDT,REERRTM,REERRUN,REERMSG,REERSPA            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUREER1   RESET     KEY17                                                       
          UNLOCK    RESERRA1                                                    
          RETURN
.
