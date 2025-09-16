.
. EMROCIIO    
. --------
. Filename     : emrociaf.dat
.
RSEMOCI1  RESET     KEY10                                                       
          READ      EMROCIA1,KEY10;;                                            
          RETURN
.
RAEMOCI1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      EMROCIA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMOCI1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      EMROCIA1,KEY10;EMOCVISN,EMOCCNTR,EMOCTYPE,EMOCORDR,EMOCCTOD:
                        EMOCCTOT,EMOCPRET,EMOCCTRD,EMOCCTRT,EMOCRSFL,EMOCCTSD:  
                        EMOCCTST,EMOCPCCD,EMOCCUID,EMOCCDAT,EMOCCTIM,EMOCUUID:  
                        EMOCUDAT,EMOCUTIM,EMOCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMOCI1  MOVE      ZERO,OVRCD                                                  
          READKS    EMROCIA1;EMOCVISN,EMOCCNTR,EMOCTYPE,EMOCORDR,EMOCCTOD:      
                        EMOCCTOT,EMOCPRET,EMOCCTRD,EMOCCTRT,EMOCRSFL,EMOCCTSD:  
                        EMOCCTST,EMOCPCCD,EMOCCUID,EMOCCDAT,EMOCCTIM,EMOCUUID:  
                        EMOCUDAT,EMOCUTIM,EMOCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMOCI1  MOVE      ZERO,OVRCD                                                  
          READKP    EMROCIA1;EMOCVISN,EMOCCNTR,EMOCTYPE,EMOCORDR,EMOCCTOD:      
                        EMOCCTOT,EMOCPRET,EMOCCTRD,EMOCCTRT,EMOCRSFL,EMOCCTSD:  
                        EMOCCTST,EMOCPCCD,EMOCCUID,EMOCCDAT,EMOCCTIM,EMOCUUID:  
                        EMOCUDAT,EMOCUTIM,EMOCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMOCI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMROCIA1;EMOCVISN,EMOCCNTR,EMOCTYPE,EMOCORDR,EMOCCTOD:      
                        EMOCCTOT,EMOCPRET,EMOCCTRD,EMOCCTRT,EMOCRSFL,EMOCCTSD:  
                        EMOCCTST,EMOCPCCD,EMOCCUID,EMOCCDAT,EMOCCTIM,EMOCUUID:  
                        EMOCUDAT,EMOCUTIM,EMOCSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMOCI1  RESET     KEY10                                                       
          WRITE     EMROCIA1,KEY10;EMOCVISN,EMOCCNTR,EMOCTYPE,EMOCORDR,EMOCCTOD:
                        EMOCCTOT,EMOCPRET,EMOCCTRD,EMOCCTRT,EMOCRSFL,EMOCCTSD:  
                        EMOCCTST,EMOCPCCD,EMOCCUID,EMOCCDAT,EMOCCTIM,EMOCUUID:  
                        EMOCUDAT,EMOCUTIM,EMOCSPAR                              
          RETURN
.
DEEMOCI1  RESET     KEY10                                                       
          DELETE    EMROCIA1,KEY10                                              
          RETURN
.
RLEMOCI1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     EMROCIA1,KEY10;EMOCVISN,EMOCCNTR,EMOCTYPE,EMOCORDR,EMOCCTOD:
                        EMOCCTOT,EMOCPRET,EMOCCTRD,EMOCCTRT,EMOCRSFL,EMOCCTSD:  
                        EMOCCTST,EMOCPCCD,EMOCCUID,EMOCCDAT,EMOCCTIM,EMOCUUID:  
                        EMOCUDAT,EMOCUTIM,EMOCSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMOCI1  MOVE      ZERO,OVRCD                                                  
          READLKS   EMROCIA1;EMOCVISN,EMOCCNTR,EMOCTYPE,EMOCORDR,EMOCCTOD:      
                        EMOCCTOT,EMOCPRET,EMOCCTRD,EMOCCTRT,EMOCRSFL,EMOCCTSD:  
                        EMOCCTST,EMOCPCCD,EMOCCUID,EMOCCDAT,EMOCCTIM,EMOCUUID:  
                        EMOCUDAT,EMOCUTIM,EMOCSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMOCI1  MOVE      ZERO,OVRCD                                                  
          READLKP   EMROCIA1;EMOCVISN,EMOCCNTR,EMOCTYPE,EMOCORDR,EMOCCTOD:      
                        EMOCCTOT,EMOCPRET,EMOCCTRD,EMOCCTRT,EMOCRSFL,EMOCCTSD:  
                        EMOCCTST,EMOCPCCD,EMOCCUID,EMOCCDAT,EMOCCTIM,EMOCUUID:  
                        EMOCUDAT,EMOCUTIM,EMOCSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMOCI1  RESET     KEY10                                                       
          UNLOCK    EMROCIA1                                                    
          RETURN
.
