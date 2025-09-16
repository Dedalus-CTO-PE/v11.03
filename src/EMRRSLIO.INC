.
. EMRRSLIO    
. --------
. Filename     : emrrslaf.dat
.
RSEMRSL1  RESET     KEY33                                                       
          READ      EMRRSLA1,KEY33;;                                            
          RETURN
.
RAEMRSL1  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      EMRRSLA1,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMRSL1  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      EMRRSLA1,KEY33;EMRSRESP,EMRSSDAT,EMRSTYPE,EMRSSELF,EMRSSELT:
                        EMRSSTAT,EMRSCUID,EMRSCDAT,EMRSCTIM,EMRSUUID,EMRSUDAT:  
                        EMRSUTIM,EMRSSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMRSL1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRRSLA1;EMRSRESP,EMRSSDAT,EMRSTYPE,EMRSSELF,EMRSSELT:      
                        EMRSSTAT,EMRSCUID,EMRSCDAT,EMRSCTIM,EMRSUUID,EMRSUDAT:  
                        EMRSUTIM,EMRSSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMRSL1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRRSLA1;EMRSRESP,EMRSSDAT,EMRSTYPE,EMRSSELF,EMRSSELT:      
                        EMRSSTAT,EMRSCUID,EMRSCDAT,EMRSCTIM,EMRSUUID,EMRSUDAT:  
                        EMRSUTIM,EMRSSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMRSL1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRRSLA1;EMRSRESP,EMRSSDAT,EMRSTYPE,EMRSSELF,EMRSSELT:      
                        EMRSSTAT,EMRSCUID,EMRSCDAT,EMRSCTIM,EMRSUUID,EMRSUDAT:  
                        EMRSUTIM,EMRSSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMRSL1  RESET     KEY33                                                       
          WRITE     EMRRSLA1,KEY33;EMRSRESP,EMRSSDAT,EMRSTYPE,EMRSSELF,EMRSSELT:
                        EMRSSTAT,EMRSCUID,EMRSCDAT,EMRSCTIM,EMRSUUID,EMRSUDAT:  
                        EMRSUTIM,EMRSSPAR                                       
          RETURN
.
DEEMRSL1  RESET     KEY33                                                       
          DELETE    EMRRSLA1,KEY33                                              
          RETURN
.
RLEMRSL1  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READL     EMRRSLA1,KEY33;EMRSRESP,EMRSSDAT,EMRSTYPE,EMRSSELF,EMRSSELT:
                        EMRSSTAT,EMRSCUID,EMRSCDAT,EMRSCTIM,EMRSUUID,EMRSUDAT:  
                        EMRSUTIM,EMRSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMRSL1  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRRSLA1;EMRSRESP,EMRSSDAT,EMRSTYPE,EMRSSELF,EMRSSELT:      
                        EMRSSTAT,EMRSCUID,EMRSCDAT,EMRSCTIM,EMRSUUID,EMRSUDAT:  
                        EMRSUTIM,EMRSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMRSL1  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRRSLA1;EMRSRESP,EMRSSDAT,EMRSTYPE,EMRSSELF,EMRSSELT:      
                        EMRSSTAT,EMRSCUID,EMRSCDAT,EMRSCTIM,EMRSUUID,EMRSUDAT:  
                        EMRSUTIM,EMRSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMRSL1  RESET     KEY33                                                       
          UNLOCK    EMRRSLA1                                                    
          RETURN
.
