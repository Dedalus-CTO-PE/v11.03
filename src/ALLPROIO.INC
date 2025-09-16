.
. ALLPROIO    
. --------
. Filename     : allproaf.dat
.
RSALPRO1  RESET     KEY12                                                       
          READ      ALLPROA1,KEY12;;                                            
          RETURN
.
RAALPRO1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      ALLPROA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALPRO1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      ALLPROA1,KEY12;ALPODEPT,ALPOPROC,ALPODESC,ALPOICDC,ALPOACTV:
                        ALPOCDAT,ALPOCTIM,ALPOCUID,ALPOUDAT,ALPOUTIM,ALPOUUID:  
                        ALPOMHDP,ALPOMHCP,ALPOSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALPRO1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLPROA1;ALPODEPT,ALPOPROC,ALPODESC,ALPOICDC,ALPOACTV:      
                        ALPOCDAT,ALPOCTIM,ALPOCUID,ALPOUDAT,ALPOUTIM,ALPOUUID:  
                        ALPOMHDP,ALPOMHCP,ALPOSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALPRO1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLPROA1;ALPODEPT,ALPOPROC,ALPODESC,ALPOICDC,ALPOACTV:      
                        ALPOCDAT,ALPOCTIM,ALPOCUID,ALPOUDAT,ALPOUTIM,ALPOUUID:  
                        ALPOMHDP,ALPOMHCP,ALPOSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALPRO1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLPROA1;ALPODEPT,ALPOPROC,ALPODESC,ALPOICDC,ALPOACTV:      
                        ALPOCDAT,ALPOCTIM,ALPOCUID,ALPOUDAT,ALPOUTIM,ALPOUUID:  
                        ALPOMHDP,ALPOMHCP,ALPOSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALPRO1  RESET     KEY12                                                       
          WRITE     ALLPROA1,KEY12;ALPODEPT,ALPOPROC,ALPODESC,ALPOICDC,ALPOACTV:
                        ALPOCDAT,ALPOCTIM,ALPOCUID,ALPOUDAT,ALPOUTIM,ALPOUUID:  
                        ALPOMHDP,ALPOMHCP,ALPOSPAR                              
          RETURN
.
DEALPRO1  RESET     KEY12                                                       
          DELETE    ALLPROA1,KEY12                                              
          RETURN
.
RLALPRO1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     ALLPROA1,KEY12;ALPODEPT,ALPOPROC,ALPODESC,ALPOICDC,ALPOACTV:
                        ALPOCDAT,ALPOCTIM,ALPOCUID,ALPOUDAT,ALPOUTIM,ALPOUUID:  
                        ALPOMHDP,ALPOMHCP,ALPOSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALPRO1  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLPROA1;ALPODEPT,ALPOPROC,ALPODESC,ALPOICDC,ALPOACTV:      
                        ALPOCDAT,ALPOCTIM,ALPOCUID,ALPOUDAT,ALPOUTIM,ALPOUUID:  
                        ALPOMHDP,ALPOMHCP,ALPOSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALPRO1  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLPROA1;ALPODEPT,ALPOPROC,ALPODESC,ALPOICDC,ALPOACTV:      
                        ALPOCDAT,ALPOCTIM,ALPOCUID,ALPOUDAT,ALPOUTIM,ALPOUUID:  
                        ALPOMHDP,ALPOMHCP,ALPOSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALPRO1  RESET     KEY12                                                       
          UNLOCK    ALLPROA1                                                    
          RETURN
.
RSALPRO2  RESET     KEY62                                                       
          READ      ALLPROA2,KEY62;;                                            
          RETURN
.
RAALPRO2  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      ALLPROA2,KEY62;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALPRO2  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      ALLPROA2,KEY62;ALPODEPT,ALPOPROC,ALPODESC,ALPOICDC,ALPOACTV:
                        ALPOCDAT,ALPOCTIM,ALPOCUID,ALPOUDAT,ALPOUTIM,ALPOUUID:  
                        ALPOMHDP,ALPOMHCP,ALPOSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALPRO2  MOVE      ZERO,OVRCD                                                  
          READKS    ALLPROA2;ALPODEPT,ALPOPROC,ALPODESC,ALPOICDC,ALPOACTV:      
                        ALPOCDAT,ALPOCTIM,ALPOCUID,ALPOUDAT,ALPOUTIM,ALPOUUID:  
                        ALPOMHDP,ALPOMHCP,ALPOSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALPRO2  MOVE      ZERO,OVRCD                                                  
          READKP    ALLPROA2;ALPODEPT,ALPOPROC,ALPODESC,ALPOICDC,ALPOACTV:      
                        ALPOCDAT,ALPOCTIM,ALPOCUID,ALPOUDAT,ALPOUTIM,ALPOUUID:  
                        ALPOMHDP,ALPOMHCP,ALPOSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALPRO2  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLPROA2;ALPODEPT,ALPOPROC,ALPODESC,ALPOICDC,ALPOACTV:      
                        ALPOCDAT,ALPOCTIM,ALPOCUID,ALPOUDAT,ALPOUTIM,ALPOUUID:  
                        ALPOMHDP,ALPOMHCP,ALPOSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALPRO2  RESET     KEY62                                                       
          WRITE     ALLPROA2,KEY62;ALPODEPT,ALPOPROC,ALPODESC,ALPOICDC,ALPOACTV:
                        ALPOCDAT,ALPOCTIM,ALPOCUID,ALPOUDAT,ALPOUTIM,ALPOUUID:  
                        ALPOMHDP,ALPOMHCP,ALPOSPAR                              
          RETURN
.
DEALPRO2  RESET     KEY62                                                       
          DELETE    ALLPROA2,KEY62                                              
          RETURN
.
RLALPRO2  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READL     ALLPROA2,KEY62;ALPODEPT,ALPOPROC,ALPODESC,ALPOICDC,ALPOACTV:
                        ALPOCDAT,ALPOCTIM,ALPOCUID,ALPOUDAT,ALPOUTIM,ALPOUUID:  
                        ALPOMHDP,ALPOMHCP,ALPOSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALPRO2  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLPROA2;ALPODEPT,ALPOPROC,ALPODESC,ALPOICDC,ALPOACTV:      
                        ALPOCDAT,ALPOCTIM,ALPOCUID,ALPOUDAT,ALPOUTIM,ALPOUUID:  
                        ALPOMHDP,ALPOMHCP,ALPOSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALPRO2  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLPROA2;ALPODEPT,ALPOPROC,ALPODESC,ALPOICDC,ALPOACTV:      
                        ALPOCDAT,ALPOCTIM,ALPOCUID,ALPOUDAT,ALPOUTIM,ALPOUUID:  
                        ALPOMHDP,ALPOMHCP,ALPOSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALPRO2  RESET     KEY62                                                       
          UNLOCK    ALLPROA2                                                    
          RETURN
.
