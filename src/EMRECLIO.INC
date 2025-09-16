.
. EMRECLIO    
. --------
. Filename     : emreclaf.dat
.
RSEMECL1  RESET     KEY22                                                       
          READ      EMRECLA1,KEY22;;                                            
          RETURN
.
RAEMECL1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECLA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMECL1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECLA1,KEY22;EMELUNIQ,EMELTYPE,EMELNOTE,EMELLINE,EMELCMNT:
                                   EMELSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMECL1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRECLA1;EMELUNIQ,EMELTYPE,EMELNOTE,EMELLINE,EMELCMNT:      
                             EMELSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMECL1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRECLA1;EMELUNIQ,EMELTYPE,EMELNOTE,EMELLINE,EMELCMNT:      
                             EMELSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMECL1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRECLA1;EMELUNIQ,EMELTYPE,EMELNOTE,EMELLINE,EMELCMNT:      
                             EMELSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMECL1  RESET     KEY22                                                       
          WRITE     EMRECLA1,KEY22;EMELUNIQ,EMELTYPE,EMELNOTE,EMELLINE,EMELCMNT:
                                   EMELSPAR                                     
          RETURN
.
DEEMECL1  RESET     KEY22                                                       
          DELETE    EMRECLA1,KEY22                                              
          RETURN
.
RLEMECL1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READL     EMRECLA1,KEY22;EMELUNIQ,EMELTYPE,EMELNOTE,EMELLINE,EMELCMNT:
                                   EMELSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMECL1  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRECLA1;EMELUNIQ,EMELTYPE,EMELNOTE,EMELLINE,EMELCMNT:      
                             EMELSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMECL1  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRECLA1;EMELUNIQ,EMELTYPE,EMELNOTE,EMELLINE,EMELCMNT:      
                             EMELSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMECL1  RESET     KEY22                                                       
          UNLOCK    EMRECLA1                                                    
          RETURN
.
