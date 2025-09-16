.
. ALLAUDIO    
. --------
. Filename     : allaudaf.dat
.
RSALAUD1  RESET     KEY24                                                       
          READ      ALLAUDA1,KEY24;;                                            
          RETURN
.
RAALAUD1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLAUDA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALAUD1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLAUDA1,KEY24;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:
                                   ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:
                                   ALAUSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALAUD1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLAUDA1;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:      
                             ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:      
                             ALAUSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALAUD1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLAUDA1;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:      
                             ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:      
                             ALAUSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALAUD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLAUDA1;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:      
                             ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:      
                             ALAUSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALAUD1  RESET     KEY24                                                       
          WRITE     ALLAUDA1,KEY24;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:
                                   ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:
                                   ALAUSPAR                                     
          RETURN
.
DEALAUD1  RESET     KEY24                                                       
          DELETE    ALLAUDA1,KEY24                                              
          RETURN
.
RLALAUD1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     ALLAUDA1,KEY24;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:
                                   ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:
                                   ALAUSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALAUD1  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLAUDA1;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:      
                             ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:      
                             ALAUSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALAUD1  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLAUDA1;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:      
                             ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:      
                             ALAUSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALAUD1  RESET     KEY24                                                       
          UNLOCK    ALLAUDA1                                                    
          RETURN
.
RSALAUD2  RESET     KEY26                                                       
          READ      ALLAUDA2,KEY26;;                                            
          RETURN
.
RAALAUD2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      ALLAUDA2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALAUD2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      ALLAUDA2,KEY26;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:
                                   ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:
                                   ALAUSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALAUD2  MOVE      ZERO,OVRCD                                                  
          READKS    ALLAUDA2;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:      
                             ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:      
                             ALAUSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALAUD2  MOVE      ZERO,OVRCD                                                  
          READKP    ALLAUDA2;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:      
                             ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:      
                             ALAUSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALAUD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLAUDA2;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:      
                             ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:      
                             ALAUSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALAUD2  RESET     KEY26                                                       
          WRITE     ALLAUDA2,KEY26;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:
                                   ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:
                                   ALAUSPAR                                     
          RETURN
.
DEALAUD2  RESET     KEY26                                                       
          DELETE    ALLAUDA2,KEY26                                              
          RETURN
.
RLALAUD2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READL     ALLAUDA2,KEY26;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:
                                   ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:
                                   ALAUSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALAUD2  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLAUDA2;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:      
                             ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:      
                             ALAUSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALAUD2  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLAUDA2;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:      
                             ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:      
                             ALAUSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALAUD2  RESET     KEY26                                                       
          UNLOCK    ALLAUDA2                                                    
          RETURN
.
RSALAUD3  RESET     KEY24                                                       
          READ      ALLAUDA3,KEY24;;                                            
          RETURN
.
RAALAUD3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLAUDA3,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALAUD3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLAUDA3,KEY24;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:
                                   ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:
                                   ALAUSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALAUD3  MOVE      ZERO,OVRCD                                                  
          READKS    ALLAUDA3;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:      
                             ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:      
                             ALAUSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALAUD3  MOVE      ZERO,OVRCD                                                  
          READKP    ALLAUDA3;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:      
                             ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:      
                             ALAUSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALAUD3  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLAUDA3;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:      
                             ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:      
                             ALAUSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALAUD3  RESET     KEY24                                                       
          WRITE     ALLAUDA3,KEY24;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:
                                   ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:
                                   ALAUSPAR                                     
          RETURN
.
DEALAUD3  RESET     KEY24                                                       
          DELETE    ALLAUDA3,KEY24                                              
          RETURN
.
RLALAUD3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     ALLAUDA3,KEY24;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:
                                   ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:
                                   ALAUSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALAUD3  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLAUDA3;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:      
                             ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:      
                             ALAUSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALAUD3  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLAUDA3;ALAUVISN,ALAUADAT,ALAUATIM,ALAUAUID,ALAUACTI:      
                             ALAUUPDT,ALAUCOMM,ALAUUDAT,ALAUUTIM,ALAUUUID:      
                             ALAUSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALAUD3  RESET     KEY24                                                       
          UNLOCK    ALLAUDA3                                                    
          RETURN
.
