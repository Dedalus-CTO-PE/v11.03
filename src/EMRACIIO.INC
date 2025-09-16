.
. EMRACIIO    
. --------
. Filename     : emraciaf.dat
.
RSEMACI1  RESET     KEY38                                                       
          READ      EMRACIA1,KEY38;;                                            
          RETURN
.
RAEMACI1  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      EMRACIA1,KEY38;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMACI1  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      EMRACIA1,KEY38;EMRASUBV,EMRAFDAT,EMRATDAT,EMRASUBD,EMRACODE:
                                   EMRACINT,EMRACITS,EMRADATC,EMRATIMC,EMRAUSRC:
                                   EMRADATU,EMRATIMU,EMRAUSRU,EMRAAFLG,EMRASPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMACI1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRACIA1;EMRASUBV,EMRAFDAT,EMRATDAT,EMRASUBD,EMRACODE:      
                             EMRACINT,EMRACITS,EMRADATC,EMRATIMC,EMRAUSRC:      
                             EMRADATU,EMRATIMU,EMRAUSRU,EMRAAFLG,EMRASPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMACI1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRACIA1;EMRASUBV,EMRAFDAT,EMRATDAT,EMRASUBD,EMRACODE:      
                             EMRACINT,EMRACITS,EMRADATC,EMRATIMC,EMRAUSRC:      
                             EMRADATU,EMRATIMU,EMRAUSRU,EMRAAFLG,EMRASPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMACI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRACIA1;EMRASUBV,EMRAFDAT,EMRATDAT,EMRASUBD,EMRACODE:      
                             EMRACINT,EMRACITS,EMRADATC,EMRATIMC,EMRAUSRC:      
                             EMRADATU,EMRATIMU,EMRAUSRU,EMRAAFLG,EMRASPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMACI1  RESET     KEY38                                                       
          WRITE     EMRACIA1,KEY38;EMRASUBV,EMRAFDAT,EMRATDAT,EMRASUBD,EMRACODE:
                                   EMRACINT,EMRACITS,EMRADATC,EMRATIMC,EMRAUSRC:
                                   EMRADATU,EMRATIMU,EMRAUSRU,EMRAAFLG,EMRASPAR 
          RETURN
.
DEEMACI1  RESET     KEY38                                                       
          DELETE    EMRACIA1,KEY38                                              
          RETURN
.
RLEMACI1  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READL     EMRACIA1,KEY38;EMRASUBV,EMRAFDAT,EMRATDAT,EMRASUBD,EMRACODE:
                                   EMRACINT,EMRACITS,EMRADATC,EMRATIMC,EMRAUSRC:
                                   EMRADATU,EMRATIMU,EMRAUSRU,EMRAAFLG,EMRASPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMACI1  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRACIA1;EMRASUBV,EMRAFDAT,EMRATDAT,EMRASUBD,EMRACODE:      
                             EMRACINT,EMRACITS,EMRADATC,EMRATIMC,EMRAUSRC:      
                             EMRADATU,EMRATIMU,EMRAUSRU,EMRAAFLG,EMRASPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMACI1  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRACIA1;EMRASUBV,EMRAFDAT,EMRATDAT,EMRASUBD,EMRACODE:      
                             EMRACINT,EMRACITS,EMRADATC,EMRATIMC,EMRAUSRC:      
                             EMRADATU,EMRATIMU,EMRAUSRU,EMRAAFLG,EMRASPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMACI1  RESET     KEY38                                                       
          UNLOCK    EMRACIA1                                                    
          RETURN
.
