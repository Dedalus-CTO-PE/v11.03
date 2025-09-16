.
. RESDEBIO    
. --------
. Filename     : resdebaf.dat
.
RSREDB1   RESET     KEY24                                                       
          READ      RESDEBA1,KEY24;;                                            
          RETURN
.
RAREDB1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      RESDEBA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREDB1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      RESDEBA1,KEY24;REDBRDT,REDBRTM,REDBRUN,REDBSID,REDBLNO:     
                        REDBTXT,REDBSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREDB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESDEBA1;REDBRDT,REDBRTM,REDBRUN,REDBSID,REDBLNO:           
                        REDBTXT,REDBSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREDB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESDEBA1;REDBRDT,REDBRTM,REDBRUN,REDBSID,REDBLNO:           
                        REDBTXT,REDBSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREDB1                                                                         
          UPDATE    RESDEBA1;REDBRDT,REDBRTM,REDBRUN,REDBSID,REDBLNO:           
                        REDBTXT,REDBSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRREDB1   RESET     KEY24                                                       
          WRITE     RESDEBA1,KEY24;REDBRDT,REDBRTM,REDBRUN,REDBSID,REDBLNO:     
                        REDBTXT,REDBSPA                                         
          RETURN
.
DEREDB1   RESET     KEY24                                                       
          DELETE    RESDEBA1,KEY24                                              
          RETURN
.
RLREDB1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     RESDEBA1,KEY24;REDBRDT,REDBRTM,REDBRUN,REDBSID,REDBLNO:     
                        REDBTXT,REDBSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLREDB1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESDEBA1;REDBRDT,REDBRTM,REDBRUN,REDBSID,REDBLNO:           
                        REDBTXT,REDBSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLREDB1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESDEBA1;REDBRDT,REDBRTM,REDBRUN,REDBSID,REDBLNO:           
                        REDBTXT,REDBSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUREDB1   RESET     KEY24                                                       
          UNLOCK    RESDEBA1                                                    
          RETURN
.
