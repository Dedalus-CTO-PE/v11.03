.
. SINCGBIO    
. --------
. Filename     : sincgbaf.dat
.
RSSIGB1   RESET     KEY12                                                       
          READ      SINCGBA1,KEY12;;                                            
          RETURN
.
RASIGB1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SINCGBA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIGB1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SINCGBA1,KEY12;SIGBCOM,SIGBDAT,SIGBUAM,SIGBUBD,SIGBPAM:     
                        SIGBPBD,SIGBRAM,SIGBRBD,SIGBSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIGB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCGBA1;SIGBCOM,SIGBDAT,SIGBUAM,SIGBUBD,SIGBPAM:           
                        SIGBPBD,SIGBRAM,SIGBRBD,SIGBSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIGB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCGBA1;SIGBCOM,SIGBDAT,SIGBUAM,SIGBUBD,SIGBPAM:           
                        SIGBPBD,SIGBRAM,SIGBRBD,SIGBSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIGB1                                                                         
          UPDATE    SINCGBA1;SIGBCOM,SIGBDAT,SIGBUAM,SIGBUBD,SIGBPAM:           
                        SIGBPBD,SIGBRAM,SIGBRBD,SIGBSPA                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIGB1   RESET     KEY12                                                       
          WRITE     SINCGBA1,KEY12;SIGBCOM,SIGBDAT,SIGBUAM,SIGBUBD,SIGBPAM:     
                        SIGBPBD,SIGBRAM,SIGBRBD,SIGBSPA                         
          RETURN
.
DESIGB1   RESET     KEY12                                                       
          DELETE    SINCGBA1,KEY12                                              
          RETURN
.
RLSIGB1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     SINCGBA1,KEY12;SIGBCOM,SIGBDAT,SIGBUAM,SIGBUBD,SIGBPAM:     
                        SIGBPBD,SIGBRAM,SIGBRBD,SIGBSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIGB1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINCGBA1;SIGBCOM,SIGBDAT,SIGBUAM,SIGBUBD,SIGBPAM:           
                        SIGBPBD,SIGBRAM,SIGBRBD,SIGBSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIGB1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINCGBA1;SIGBCOM,SIGBDAT,SIGBUAM,SIGBUBD,SIGBPAM:           
                        SIGBPBD,SIGBRAM,SIGBRBD,SIGBSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIGB1   RESET     KEY12                                                       
          UNLOCK    SINCGBA1                                                    
          RETURN
.
