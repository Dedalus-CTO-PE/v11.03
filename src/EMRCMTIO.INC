.
. EMRCMTIO    
. --------
. Filename     : emrcmtaf.dat
.
RSEMCMT1  RESET     KEY2                                                        
          READ      EMRCMTA1,KEY2;;                                             
          RETURN
.
RAEMCMT1  RESET     KEY2                                                        
          MOVE      ZERO,OVRCD
          READ      EMRCMTA1,KEY2;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMCMT1  RESET     KEY2                                                        
          MOVE      ZERO,OVRCD
          READ      EMRCMTA1,KEY2;EMCMLINE,EMCMCMNT,EMCMSPAR                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMCMT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRCMTA1;EMCMLINE,EMCMCMNT,EMCMSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMCMT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRCMTA1;EMCMLINE,EMCMCMNT,EMCMSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMCMT1                                                                        
          UPDATE    EMRCMTA1;EMCMLINE,EMCMCMNT,EMCMSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMCMT1  RESET     KEY2                                                        
          WRITE     EMRCMTA1,KEY2;EMCMLINE,EMCMCMNT,EMCMSPAR                    
          RETURN
.
DEEMCMT1  RESET     KEY2                                                        
          DELETE    EMRCMTA1,KEY2                                               
          RETURN
.
RLEMCMT1  RESET     KEY2                                                        
          MOVE      ZERO,OVRCD
          READL     EMRCMTA1,KEY2;EMCMLINE,EMCMCMNT,EMCMSPAR                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMCMT1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRCMTA1;EMCMLINE,EMCMCMNT,EMCMSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMCMT1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRCMTA1;EMCMLINE,EMCMCMNT,EMCMSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMCMT1  RESET     KEY2                                                        
          UNLOCK    EMRCMTA1                                                    
          RETURN
.
