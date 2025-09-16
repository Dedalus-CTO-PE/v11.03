.
. COMDEPIO    
. --------
. Filename     : comdepaf.dat
.
RSCMDEP1  RESET     KEY17                                                       
          READ      COMDEPA1,KEY17;;                                            
          RETURN
.
RACMDEP1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      COMDEPA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMDEP1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      COMDEPA1,KEY17;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMDEP1  MOVE      ZERO,OVRCD                                                  
          READKS    COMDEPA1;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMDEP1  MOVE      ZERO,OVRCD                                                  
          READKP    COMDEPA1;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMDEP1  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMDEPA1;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCMDEP1  RESET     KEY17                                                       
          WRITE     COMDEPA1,KEY17;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          RETURN
.
DECMDEP1  RESET     KEY17                                                       
          DELETE    COMDEPA1,KEY17                                              
          RETURN
.
RLCMDEP1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     COMDEPA1,KEY17;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCMDEP1  MOVE      ZERO,OVRCD                                                  
          READLKS   COMDEPA1;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCMDEP1  MOVE      ZERO,OVRCD                                                  
          READLKP   COMDEPA1;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCMDEP1  RESET     KEY17                                                       
          UNLOCK    COMDEPA1                                                    
          RETURN
.
RSCMDEP2  RESET     KEY26                                                       
          READ      COMDEPA2,KEY26;;                                            
          RETURN
.
RACMDEP2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      COMDEPA2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMDEP2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      COMDEPA2,KEY26;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMDEP2  MOVE      ZERO,OVRCD                                                  
          READKS    COMDEPA2;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMDEP2  MOVE      ZERO,OVRCD                                                  
          READKP    COMDEPA2;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMDEP2  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMDEPA2;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCMDEP2  RESET     KEY26                                                       
          WRITE     COMDEPA2,KEY26;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          RETURN
.
DECMDEP2  RESET     KEY26                                                       
          DELETE    COMDEPA2,KEY26                                              
          RETURN
.
RLCMDEP2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READL     COMDEPA2,KEY26;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCMDEP2  MOVE      ZERO,OVRCD                                                  
          READLKS   COMDEPA2;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCMDEP2  MOVE      ZERO,OVRCD                                                  
          READLKP   COMDEPA2;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCMDEP2  RESET     KEY26                                                       
          UNLOCK    COMDEPA2                                                    
          RETURN
.
RSCMDEP3  RESET     KEY34                                                       
          READ      COMDEPA3,KEY34;;                                            
          RETURN
.
RACMDEP3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      COMDEPA3,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMDEP3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      COMDEPA3,KEY34;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMDEP3  MOVE      ZERO,OVRCD                                                  
          READKS    COMDEPA3;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMDEP3  MOVE      ZERO,OVRCD                                                  
          READKP    COMDEPA3;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMDEP3  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMDEPA3;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCMDEP3  RESET     KEY34                                                       
          WRITE     COMDEPA3,KEY34;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          RETURN
.
DECMDEP3  RESET     KEY34                                                       
          DELETE    COMDEPA3,KEY34                                              
          RETURN
.
RLCMDEP3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READL     COMDEPA3,KEY34;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCMDEP3  MOVE      ZERO,OVRCD                                                  
          READLKS   COMDEPA3;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCMDEP3  MOVE      ZERO,OVRCD                                                  
          READLKP   COMDEPA3;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCMDEP3  RESET     KEY34                                                       
          UNLOCK    COMDEPA3                                                    
          RETURN
.
RSCMDEP4  RESET     KEY33                                                       
          READ      COMDEPA4,KEY33;;                                            
          RETURN
.
RACMDEP4  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      COMDEPA4,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMDEP4  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      COMDEPA4,KEY33;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMDEP4  MOVE      ZERO,OVRCD                                                  
          READKS    COMDEPA4;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMDEP4  MOVE      ZERO,OVRCD                                                  
          READKP    COMDEPA4;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMDEP4  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMDEPA4;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCMDEP4  RESET     KEY33                                                       
          WRITE     COMDEPA4,KEY33;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          RETURN
.
DECMDEP4  RESET     KEY33                                                       
          DELETE    COMDEPA4,KEY33                                              
          RETURN
.
RLCMDEP4  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READL     COMDEPA4,KEY33;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCMDEP4  MOVE      ZERO,OVRCD                                                  
          READLKS   COMDEPA4;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCMDEP4  MOVE      ZERO,OVRCD                                                  
          READLKP   COMDEPA4;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCMDEP4  RESET     KEY33                                                       
          UNLOCK    COMDEPA4                                                    
          RETURN
.
RSCMDEP5  RESET     KEY26                                                       
          READ      COMDEPA5,KEY26;;                                            
          RETURN
.
RACMDEP5  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      COMDEPA5,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMDEP5  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      COMDEPA5,KEY26;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMDEP5  MOVE      ZERO,OVRCD                                                  
          READKS    COMDEPA5;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMDEP5  MOVE      ZERO,OVRCD                                                  
          READKP    COMDEPA5;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMDEP5  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMDEPA5;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCMDEP5  RESET     KEY26                                                       
          WRITE     COMDEPA5,KEY26;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          RETURN
.
DECMDEP5  RESET     KEY26                                                       
          DELETE    COMDEPA5,KEY26                                              
          RETURN
.
RLCMDEP5  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READL     COMDEPA5,KEY26;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCMDEP5  MOVE      ZERO,OVRCD                                                  
          READLKS   COMDEPA5;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCMDEP5  MOVE      ZERO,OVRCD                                                  
          READLKP   COMDEPA5;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCMDEP5  RESET     KEY26                                                       
          UNLOCK    COMDEPA5                                                    
          RETURN
.
RSCMDEP6  RESET     KEY33                                                       
          READ      COMDEPA6,KEY33;;                                            
          RETURN
.
RACMDEP6  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      COMDEPA6,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMDEP6  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      COMDEPA6,KEY33;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMDEP6  MOVE      ZERO,OVRCD                                                  
          READKS    COMDEPA6;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMDEP6  MOVE      ZERO,OVRCD                                                  
          READKP    COMDEPA6;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMDEP6  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMDEPA6;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCMDEP6  RESET     KEY33                                                       
          WRITE     COMDEPA6,KEY33;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          RETURN
.
DECMDEP6  RESET     KEY33                                                       
          DELETE    COMDEPA6,KEY33                                              
          RETURN
.
RLCMDEP6  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READL     COMDEPA6,KEY33;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCMDEP6  MOVE      ZERO,OVRCD                                                  
          READLKS   COMDEPA6;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCMDEP6  MOVE      ZERO,OVRCD                                                  
          READLKP   COMDEPA6;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCMDEP6  RESET     KEY33                                                       
          UNLOCK    COMDEPA6                                                    
          RETURN
.
RSCMDEP7  RESET     KEY26                                                       
          READ      COMDEPA7,KEY26;;                                            
          RETURN
.
RACMDEP7  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      COMDEPA7,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMDEP7  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      COMDEPA7,KEY26;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMDEP7  MOVE      ZERO,OVRCD                                                  
          READKS    COMDEPA7;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMDEP7  MOVE      ZERO,OVRCD                                                  
          READKP    COMDEPA7;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMDEP7  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMDEPA7;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCMDEP7  RESET     KEY26                                                       
          WRITE     COMDEPA7,KEY26;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          RETURN
.
DECMDEP7  RESET     KEY26                                                       
          DELETE    COMDEPA7,KEY26                                              
          RETURN
.
RLCMDEP7  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READL     COMDEPA7,KEY26;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:
                                   CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:
                                   CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:
                                   CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:
                                   CMDESDOC,CMDETRSF,CMDESPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCMDEP7  MOVE      ZERO,OVRCD                                                  
          READLKS   COMDEPA7;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCMDEP7  MOVE      ZERO,OVRCD                                                  
          READLKP   COMDEPA7;CMDETDAT,CMDERECN,CMDETCNT,CMDEDTYP,CMDERRFN:      
                             CMDEREFD,CMDEREFT,CMDEURNO,CMDEADMN,CMDESFLG:      
                             CMDESYST,CMDEPRAC,CMDECDAT,CMDECTIM,CMDECUID:      
                             CMDEUDAT,CMDEUTIM,CMDEUUID,CMDESTAT,CMDEAINV:      
                             CMDESDOC,CMDETRSF,CMDESPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCMDEP7  RESET     KEY26                                                       
          UNLOCK    COMDEPA7                                                    
          RETURN
.
