.
. EMRACTIO    
. --------
. Filename     : emractaf.dat
.
RSEMACT1  RESET     KEY38                                                       
          READ      EMRACTA1,KEY38;;                                            
          RETURN
.
RAEMACT1  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      EMRACTA1,KEY38;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMACT1  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      EMRACTA1,KEY38;EMATCODE,EMATFDAT,EMATTDAT,EMATADMF,EMATDSDC:
                                   EMATRABA,EMATRTAH,EMATABAM,EMATTCT1,EMATTCT2:
                                   EMATTCT3,EMATTCT4,EMATTCT5,EMATCDAT,EMATCTIM:
                                   EMATCUID,EMATUDAT,EMATUTIM,EMATUUID,EMATAFLG:
                                   EMATSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMACT1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRACTA1;EMATCODE,EMATFDAT,EMATTDAT,EMATADMF,EMATDSDC:      
                             EMATRABA,EMATRTAH,EMATABAM,EMATTCT1,EMATTCT2:      
                             EMATTCT3,EMATTCT4,EMATTCT5,EMATCDAT,EMATCTIM:      
                             EMATCUID,EMATUDAT,EMATUTIM,EMATUUID,EMATAFLG:      
                             EMATSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMACT1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRACTA1;EMATCODE,EMATFDAT,EMATTDAT,EMATADMF,EMATDSDC:      
                             EMATRABA,EMATRTAH,EMATABAM,EMATTCT1,EMATTCT2:      
                             EMATTCT3,EMATTCT4,EMATTCT5,EMATCDAT,EMATCTIM:      
                             EMATCUID,EMATUDAT,EMATUTIM,EMATUUID,EMATAFLG:      
                             EMATSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMACT1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRACTA1;EMATCODE,EMATFDAT,EMATTDAT,EMATADMF,EMATDSDC:      
                             EMATRABA,EMATRTAH,EMATABAM,EMATTCT1,EMATTCT2:      
                             EMATTCT3,EMATTCT4,EMATTCT5,EMATCDAT,EMATCTIM:      
                             EMATCUID,EMATUDAT,EMATUTIM,EMATUUID,EMATAFLG:      
                             EMATSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMACT1  RESET     KEY38                                                       
          WRITE     EMRACTA1,KEY38;EMATCODE,EMATFDAT,EMATTDAT,EMATADMF,EMATDSDC:
                                   EMATRABA,EMATRTAH,EMATABAM,EMATTCT1,EMATTCT2:
                                   EMATTCT3,EMATTCT4,EMATTCT5,EMATCDAT,EMATCTIM:
                                   EMATCUID,EMATUDAT,EMATUTIM,EMATUUID,EMATAFLG:
                                   EMATSPAR                                     
          RETURN
.
DEEMACT1  RESET     KEY38                                                       
          DELETE    EMRACTA1,KEY38                                              
          RETURN
.
RLEMACT1  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READL     EMRACTA1,KEY38;EMATCODE,EMATFDAT,EMATTDAT,EMATADMF,EMATDSDC:
                                   EMATRABA,EMATRTAH,EMATABAM,EMATTCT1,EMATTCT2:
                                   EMATTCT3,EMATTCT4,EMATTCT5,EMATCDAT,EMATCTIM:
                                   EMATCUID,EMATUDAT,EMATUTIM,EMATUUID,EMATAFLG:
                                   EMATSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMACT1  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRACTA1;EMATCODE,EMATFDAT,EMATTDAT,EMATADMF,EMATDSDC:      
                             EMATRABA,EMATRTAH,EMATABAM,EMATTCT1,EMATTCT2:      
                             EMATTCT3,EMATTCT4,EMATTCT5,EMATCDAT,EMATCTIM:      
                             EMATCUID,EMATUDAT,EMATUTIM,EMATUUID,EMATAFLG:      
                             EMATSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMACT1  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRACTA1;EMATCODE,EMATFDAT,EMATTDAT,EMATADMF,EMATDSDC:      
                             EMATRABA,EMATRTAH,EMATABAM,EMATTCT1,EMATTCT2:      
                             EMATTCT3,EMATTCT4,EMATTCT5,EMATCDAT,EMATCTIM:      
                             EMATCUID,EMATUDAT,EMATUTIM,EMATUUID,EMATAFLG:      
                             EMATSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMACT1  RESET     KEY38                                                       
          UNLOCK    EMRACTA1                                                    
          RETURN
.
