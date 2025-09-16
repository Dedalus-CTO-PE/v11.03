.
. ALLSASIO    
. --------
. Filename     : allsasaf.dat
.
RSALSAS1  RESET     KEY24                                                       
          READ      ALLSASA1,KEY24;;                                            
          RETURN
.
RAALSAS1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLSASA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALSAS1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLSASA1,KEY24;ALSAVISN,ALSADATE,ALSATIME,ALSAPAIN,ALSASYMP:
                        ALSAPSYC,ALSAFMLY,ALSADELF,ALSACUID,ALSACDAT,ALSACTIM:  
                        ALSAUUID,ALSAUDAT,ALSAUTIM,ALSADUID,ALSADDAT,ALSADTIM:  
                        ALSADRES,ALSASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALSAS1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLSASA1;ALSAVISN,ALSADATE,ALSATIME,ALSAPAIN,ALSASYMP:      
                        ALSAPSYC,ALSAFMLY,ALSADELF,ALSACUID,ALSACDAT,ALSACTIM:  
                        ALSAUUID,ALSAUDAT,ALSAUTIM,ALSADUID,ALSADDAT,ALSADTIM:  
                        ALSADRES,ALSASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALSAS1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLSASA1;ALSAVISN,ALSADATE,ALSATIME,ALSAPAIN,ALSASYMP:      
                        ALSAPSYC,ALSAFMLY,ALSADELF,ALSACUID,ALSACDAT,ALSACTIM:  
                        ALSAUUID,ALSAUDAT,ALSAUTIM,ALSADUID,ALSADDAT,ALSADTIM:  
                        ALSADRES,ALSASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALSAS1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLSASA1;ALSAVISN,ALSADATE,ALSATIME,ALSAPAIN,ALSASYMP:      
                        ALSAPSYC,ALSAFMLY,ALSADELF,ALSACUID,ALSACDAT,ALSACTIM:  
                        ALSAUUID,ALSAUDAT,ALSAUTIM,ALSADUID,ALSADDAT,ALSADTIM:  
                        ALSADRES,ALSASPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALSAS1  RESET     KEY24                                                       
          WRITE     ALLSASA1,KEY24;ALSAVISN,ALSADATE,ALSATIME,ALSAPAIN,ALSASYMP:
                        ALSAPSYC,ALSAFMLY,ALSADELF,ALSACUID,ALSACDAT,ALSACTIM:  
                        ALSAUUID,ALSAUDAT,ALSAUTIM,ALSADUID,ALSADDAT,ALSADTIM:  
                        ALSADRES,ALSASPAR                                       
          RETURN
.
DEALSAS1  RESET     KEY24                                                       
          DELETE    ALLSASA1,KEY24                                              
          RETURN
.
RLALSAS1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     ALLSASA1,KEY24;ALSAVISN,ALSADATE,ALSATIME,ALSAPAIN,ALSASYMP:
                        ALSAPSYC,ALSAFMLY,ALSADELF,ALSACUID,ALSACDAT,ALSACTIM:  
                        ALSAUUID,ALSAUDAT,ALSAUTIM,ALSADUID,ALSADDAT,ALSADTIM:  
                        ALSADRES,ALSASPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALSAS1  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLSASA1;ALSAVISN,ALSADATE,ALSATIME,ALSAPAIN,ALSASYMP:      
                        ALSAPSYC,ALSAFMLY,ALSADELF,ALSACUID,ALSACDAT,ALSACTIM:  
                        ALSAUUID,ALSAUDAT,ALSAUTIM,ALSADUID,ALSADDAT,ALSADTIM:  
                        ALSADRES,ALSASPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALSAS1  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLSASA1;ALSAVISN,ALSADATE,ALSATIME,ALSAPAIN,ALSASYMP:      
                        ALSAPSYC,ALSAFMLY,ALSADELF,ALSACUID,ALSACDAT,ALSACTIM:  
                        ALSAUUID,ALSAUDAT,ALSAUTIM,ALSADUID,ALSADDAT,ALSADTIM:  
                        ALSADRES,ALSASPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALSAS1  RESET     KEY24                                                       
          UNLOCK    ALLSASA1                                                    
          RETURN
.
