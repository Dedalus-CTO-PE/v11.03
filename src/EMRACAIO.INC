.
. EMRACAIO    
. --------
. Filename     : emracaaf.dat
.
RSEMACA1  RESET     KEY38                                                       
          READ      EMRACAA1,KEY38;;                                            
          RETURN
.
RAEMACA1  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      EMRACAA1,KEY38;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMACA1  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      EMRACAA1,KEY38;EMAACODE,EMAAFDAT,EMAATDAT,EMAAAG04,EMAAAG59:
                                   EMAAAG14,EMAAAG69,EMAAAG74,EMAAAG79,EMAAAG84:
                                   EMAAAG85,EMAACDAT,EMAACTIM,EMAACUID,EMAAUDAT:
                                   EMAAUTIM,EMAAUUID,EMAAAFLG,EMAASPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMACA1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRACAA1;EMAACODE,EMAAFDAT,EMAATDAT,EMAAAG04,EMAAAG59:      
                             EMAAAG14,EMAAAG69,EMAAAG74,EMAAAG79,EMAAAG84:      
                             EMAAAG85,EMAACDAT,EMAACTIM,EMAACUID,EMAAUDAT:      
                             EMAAUTIM,EMAAUUID,EMAAAFLG,EMAASPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMACA1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRACAA1;EMAACODE,EMAAFDAT,EMAATDAT,EMAAAG04,EMAAAG59:      
                             EMAAAG14,EMAAAG69,EMAAAG74,EMAAAG79,EMAAAG84:      
                             EMAAAG85,EMAACDAT,EMAACTIM,EMAACUID,EMAAUDAT:      
                             EMAAUTIM,EMAAUUID,EMAAAFLG,EMAASPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMACA1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRACAA1;EMAACODE,EMAAFDAT,EMAATDAT,EMAAAG04,EMAAAG59:      
                             EMAAAG14,EMAAAG69,EMAAAG74,EMAAAG79,EMAAAG84:      
                             EMAAAG85,EMAACDAT,EMAACTIM,EMAACUID,EMAAUDAT:      
                             EMAAUTIM,EMAAUUID,EMAAAFLG,EMAASPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMACA1  RESET     KEY38                                                       
          WRITE     EMRACAA1,KEY38;EMAACODE,EMAAFDAT,EMAATDAT,EMAAAG04,EMAAAG59:
                                   EMAAAG14,EMAAAG69,EMAAAG74,EMAAAG79,EMAAAG84:
                                   EMAAAG85,EMAACDAT,EMAACTIM,EMAACUID,EMAAUDAT:
                                   EMAAUTIM,EMAAUUID,EMAAAFLG,EMAASPAR          
          RETURN
.
DEEMACA1  RESET     KEY38                                                       
          DELETE    EMRACAA1,KEY38                                              
          RETURN
.
RLEMACA1  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READL     EMRACAA1,KEY38;EMAACODE,EMAAFDAT,EMAATDAT,EMAAAG04,EMAAAG59:
                                   EMAAAG14,EMAAAG69,EMAAAG74,EMAAAG79,EMAAAG84:
                                   EMAAAG85,EMAACDAT,EMAACTIM,EMAACUID,EMAAUDAT:
                                   EMAAUTIM,EMAAUUID,EMAAAFLG,EMAASPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMACA1  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRACAA1;EMAACODE,EMAAFDAT,EMAATDAT,EMAAAG04,EMAAAG59:      
                             EMAAAG14,EMAAAG69,EMAAAG74,EMAAAG79,EMAAAG84:      
                             EMAAAG85,EMAACDAT,EMAACTIM,EMAACUID,EMAAUDAT:      
                             EMAAUTIM,EMAAUUID,EMAAAFLG,EMAASPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMACA1  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRACAA1;EMAACODE,EMAAFDAT,EMAATDAT,EMAAAG04,EMAAAG59:      
                             EMAAAG14,EMAAAG69,EMAAAG74,EMAAAG79,EMAAAG84:      
                             EMAAAG85,EMAACDAT,EMAACTIM,EMAACUID,EMAAUDAT:      
                             EMAAUTIM,EMAAUUID,EMAAAFLG,EMAASPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMACA1  RESET     KEY38                                                       
          UNLOCK    EMRACAA1                                                    
          RETURN
.
