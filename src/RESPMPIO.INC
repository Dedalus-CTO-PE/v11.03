.
. RESPMPIO    
. --------
. Filename     : respmpaf.dat
.
RSREPM1   RESET     KEY35                                                       
          READ      RESPMPA1,KEY35;;                                            
          RETURN
.
RAREPM1   RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      RESPMPA1,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREPM1   RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      RESPMPA1,KEY35;REPMLAB,REPMLWD,REPMHWD,REPMSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREPM1                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESPMPA1;REPMLAB,REPMLWD,REPMHWD,REPMSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREPM1                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESPMPA1;REPMLAB,REPMLWD,REPMHWD,REPMSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREPM1                                                                         
          UPDATE    RESPMPA1;REPMLAB,REPMLWD,REPMHWD,REPMSPA                    
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRREPM1   RESET     KEY35                                                       
          WRITE     RESPMPA1,KEY35;REPMLAB,REPMLWD,REPMHWD,REPMSPA              
          RETURN
.
DEREPM1   RESET     KEY35                                                       
          DELETE    RESPMPA1,KEY35                                              
          RETURN
.
RLREPM1   RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READL     RESPMPA1,KEY35;REPMLAB,REPMLWD,REPMHWD,REPMSPA              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLREPM1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESPMPA1;REPMLAB,REPMLWD,REPMHWD,REPMSPA                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLREPM1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESPMPA1;REPMLAB,REPMLWD,REPMHWD,REPMSPA                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUREPM1   RESET     KEY35                                                       
          UNLOCK    RESPMPA1                                                    
          RETURN
.
