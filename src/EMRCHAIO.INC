.
. EMRCHAIO    
. --------
. Filename     : emrchaaf.dat
.
RSEMCHA1  RESET     KEY24                                                       
          READ      EMRCHAA1,KEY24;;                                            
          RETURN
.
RAEMCHA1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      EMRCHAA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMCHA1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      EMRCHAA1,KEY24;EMCHVISN,EMCHDATE,EMCHTIME,EMCHUSID,EMCHUPTY:
                                   EMCHREAS,EMCHOVAL,EMCHCVAL,EMCHSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMCHA1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRCHAA1;EMCHVISN,EMCHDATE,EMCHTIME,EMCHUSID,EMCHUPTY:      
                             EMCHREAS,EMCHOVAL,EMCHCVAL,EMCHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMCHA1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRCHAA1;EMCHVISN,EMCHDATE,EMCHTIME,EMCHUSID,EMCHUPTY:      
                             EMCHREAS,EMCHOVAL,EMCHCVAL,EMCHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMCHA1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRCHAA1;EMCHVISN,EMCHDATE,EMCHTIME,EMCHUSID,EMCHUPTY:      
                             EMCHREAS,EMCHOVAL,EMCHCVAL,EMCHSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMCHA1  RESET     KEY24                                                       
          WRITE     EMRCHAA1,KEY24;EMCHVISN,EMCHDATE,EMCHTIME,EMCHUSID,EMCHUPTY:
                                   EMCHREAS,EMCHOVAL,EMCHCVAL,EMCHSPAR          
          RETURN
.
DEEMCHA1  RESET     KEY24                                                       
          DELETE    EMRCHAA1,KEY24                                              
          RETURN
.
RLEMCHA1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     EMRCHAA1,KEY24;EMCHVISN,EMCHDATE,EMCHTIME,EMCHUSID,EMCHUPTY:
                                   EMCHREAS,EMCHOVAL,EMCHCVAL,EMCHSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMCHA1  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRCHAA1;EMCHVISN,EMCHDATE,EMCHTIME,EMCHUSID,EMCHUPTY:      
                             EMCHREAS,EMCHOVAL,EMCHCVAL,EMCHSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMCHA1  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRCHAA1;EMCHVISN,EMCHDATE,EMCHTIME,EMCHUSID,EMCHUPTY:      
                             EMCHREAS,EMCHOVAL,EMCHCVAL,EMCHSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMCHA1  RESET     KEY24                                                       
          UNLOCK    EMRCHAA1                                                    
          RETURN
.
RSEMCHA2  RESET     KEY24                                                       
          READ      EMRCHAA2,KEY24;;                                            
          RETURN
.
RAEMCHA2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      EMRCHAA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMCHA2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      EMRCHAA2,KEY24;EMCHVISN,EMCHDATE,EMCHTIME,EMCHUSID,EMCHUPTY:
                                   EMCHREAS,EMCHOVAL,EMCHCVAL,EMCHSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMCHA2  MOVE      ZERO,OVRCD                                                  
          READKS    EMRCHAA2;EMCHVISN,EMCHDATE,EMCHTIME,EMCHUSID,EMCHUPTY:      
                             EMCHREAS,EMCHOVAL,EMCHCVAL,EMCHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMCHA2  MOVE      ZERO,OVRCD                                                  
          READKP    EMRCHAA2;EMCHVISN,EMCHDATE,EMCHTIME,EMCHUSID,EMCHUPTY:      
                             EMCHREAS,EMCHOVAL,EMCHCVAL,EMCHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMCHA2  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRCHAA2;EMCHVISN,EMCHDATE,EMCHTIME,EMCHUSID,EMCHUPTY:      
                             EMCHREAS,EMCHOVAL,EMCHCVAL,EMCHSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMCHA2  RESET     KEY24                                                       
          WRITE     EMRCHAA2,KEY24;EMCHVISN,EMCHDATE,EMCHTIME,EMCHUSID,EMCHUPTY:
                                   EMCHREAS,EMCHOVAL,EMCHCVAL,EMCHSPAR          
          RETURN
.
DEEMCHA2  RESET     KEY24                                                       
          DELETE    EMRCHAA2,KEY24                                              
          RETURN
.
RLEMCHA2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     EMRCHAA2,KEY24;EMCHVISN,EMCHDATE,EMCHTIME,EMCHUSID,EMCHUPTY:
                                   EMCHREAS,EMCHOVAL,EMCHCVAL,EMCHSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMCHA2  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRCHAA2;EMCHVISN,EMCHDATE,EMCHTIME,EMCHUSID,EMCHUPTY:      
                             EMCHREAS,EMCHOVAL,EMCHCVAL,EMCHSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMCHA2  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRCHAA2;EMCHVISN,EMCHDATE,EMCHTIME,EMCHUSID,EMCHUPTY:      
                             EMCHREAS,EMCHOVAL,EMCHCVAL,EMCHSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMCHA2  RESET     KEY24                                                       
          UNLOCK    EMRCHAA2                                                    
          RETURN
.
