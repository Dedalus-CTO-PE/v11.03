.
. COMERHIO    
. --------
. Filename     : comerhaf.dat
.
RSCMERH1  RESET     KEY20                                                       
          READ      COMERHA1,KEY20;;                                            
          RETURN
.
RACMERH1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      COMERHA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMERH1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      COMERHA1,KEY20;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMERH1  MOVE      ZERO,OVRCD                                                  
          READKS    COMERHA1;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMERH1  MOVE      ZERO,OVRCD                                                  
          READKP    COMERHA1;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMERH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMERHA1;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCMERH1  RESET     KEY20                                                       
          WRITE     COMERHA1,KEY20;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          RETURN
.
DECMERH1  RESET     KEY20                                                       
          DELETE    COMERHA1,KEY20                                              
          RETURN
.
RLCMERH1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     COMERHA1,KEY20;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCMERH1  MOVE      ZERO,OVRCD                                                  
          READLKS   COMERHA1;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCMERH1  MOVE      ZERO,OVRCD                                                  
          READLKP   COMERHA1;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCMERH1  RESET     KEY20                                                       
          UNLOCK    COMERHA1                                                    
          RETURN
.
RSCMERH2  RESET     KEY33                                                       
          READ      COMERHA2,KEY33;;                                            
          RETURN
.
RACMERH2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      COMERHA2,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMERH2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      COMERHA2,KEY33;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMERH2  MOVE      ZERO,OVRCD                                                  
          READKS    COMERHA2;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMERH2  MOVE      ZERO,OVRCD                                                  
          READKP    COMERHA2;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMERH2  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMERHA2;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCMERH2  RESET     KEY33                                                       
          WRITE     COMERHA2,KEY33;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          RETURN
.
DECMERH2  RESET     KEY33                                                       
          DELETE    COMERHA2,KEY33                                              
          RETURN
.
RLCMERH2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READL     COMERHA2,KEY33;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCMERH2  MOVE      ZERO,OVRCD                                                  
          READLKS   COMERHA2;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCMERH2  MOVE      ZERO,OVRCD                                                  
          READLKP   COMERHA2;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCMERH2  RESET     KEY33                                                       
          UNLOCK    COMERHA2                                                    
          RETURN
.
RSCMERH3  RESET     KEY38                                                       
          READ      COMERHA3,KEY38;;                                            
          RETURN
.
RACMERH3  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      COMERHA3,KEY38;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMERH3  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      COMERHA3,KEY38;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMERH3  MOVE      ZERO,OVRCD                                                  
          READKS    COMERHA3;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMERH3  MOVE      ZERO,OVRCD                                                  
          READKP    COMERHA3;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMERH3  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMERHA3;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCMERH3  RESET     KEY38                                                       
          WRITE     COMERHA3,KEY38;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          RETURN
.
DECMERH3  RESET     KEY38                                                       
          DELETE    COMERHA3,KEY38                                              
          RETURN
.
RLCMERH3  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READL     COMERHA3,KEY38;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCMERH3  MOVE      ZERO,OVRCD                                                  
          READLKS   COMERHA3;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCMERH3  MOVE      ZERO,OVRCD                                                  
          READLKP   COMERHA3;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCMERH3  RESET     KEY38                                                       
          UNLOCK    COMERHA3                                                    
          RETURN
.
RSCMERH4  RESET     KEY33                                                       
          READ      COMERHA4,KEY33;;                                            
          RETURN
.
RACMERH4  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      COMERHA4,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMERH4  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      COMERHA4,KEY33;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMERH4  MOVE      ZERO,OVRCD                                                  
          READKS    COMERHA4;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMERH4  MOVE      ZERO,OVRCD                                                  
          READKP    COMERHA4;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMERH4  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMERHA4;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCMERH4  RESET     KEY33                                                       
          WRITE     COMERHA4,KEY33;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          RETURN
.
DECMERH4  RESET     KEY33                                                       
          DELETE    COMERHA4,KEY33                                              
          RETURN
.
RLCMERH4  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READL     COMERHA4,KEY33;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCMERH4  MOVE      ZERO,OVRCD                                                  
          READLKS   COMERHA4;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCMERH4  MOVE      ZERO,OVRCD                                                  
          READLKP   COMERHA4;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCMERH4  RESET     KEY33                                                       
          UNLOCK    COMERHA4                                                    
          RETURN
.
RSCMERH5  RESET     KEY28                                                       
          READ      COMERHA5,KEY28;;                                            
          RETURN
.
RACMERH5  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      COMERHA5,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMERH5  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      COMERHA5,KEY28;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMERH5  MOVE      ZERO,OVRCD                                                  
          READKS    COMERHA5;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMERH5  MOVE      ZERO,OVRCD                                                  
          READKP    COMERHA5;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMERH5  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMERHA5;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCMERH5  RESET     KEY28                                                       
          WRITE     COMERHA5,KEY28;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          RETURN
.
DECMERH5  RESET     KEY28                                                       
          DELETE    COMERHA5,KEY28                                              
          RETURN
.
RLCMERH5  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     COMERHA5,KEY28;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCMERH5  MOVE      ZERO,OVRCD                                                  
          READLKS   COMERHA5;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCMERH5  MOVE      ZERO,OVRCD                                                  
          READLKP   COMERHA5;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCMERH5  RESET     KEY28                                                       
          UNLOCK    COMERHA5                                                    
          RETURN
.
RSCMERH6  RESET     KEY40                                                       
          READ      COMERHA6,KEY40;;                                            
          RETURN
.
RACMERH6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      COMERHA6,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMERH6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      COMERHA6,KEY40;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMERH6  MOVE      ZERO,OVRCD                                                  
          READKS    COMERHA6;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMERH6  MOVE      ZERO,OVRCD                                                  
          READKP    COMERHA6;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMERH6  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMERHA6;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCMERH6  RESET     KEY40                                                       
          WRITE     COMERHA6,KEY40;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          RETURN
.
DECMERH6  RESET     KEY40                                                       
          DELETE    COMERHA6,KEY40                                              
          RETURN
.
RLCMERH6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READL     COMERHA6,KEY40;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCMERH6  MOVE      ZERO,OVRCD                                                  
          READLKS   COMERHA6;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCMERH6  MOVE      ZERO,OVRCD                                                  
          READLKP   COMERHA6;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCMERH6  RESET     KEY40                                                       
          UNLOCK    COMERHA6                                                    
          RETURN
.
RSCMERH7  RESET     KEY33                                                       
          READ      COMERHA7,KEY33;;                                            
          RETURN
.
RACMERH7  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      COMERHA7,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMERH7  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      COMERHA7,KEY33;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMERH7  MOVE      ZERO,OVRCD                                                  
          READKS    COMERHA7;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMERH7  MOVE      ZERO,OVRCD                                                  
          READKP    COMERHA7;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMERH7  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMERHA7;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCMERH7  RESET     KEY33                                                       
          WRITE     COMERHA7,KEY33;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          RETURN
.
DECMERH7  RESET     KEY33                                                       
          DELETE    COMERHA7,KEY33                                              
          RETURN
.
RLCMERH7  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READL     COMERHA7,KEY33;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:
                                   CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:
                                   CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:
                                   CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCMERH7  MOVE      ZERO,OVRCD                                                  
          READLKS   COMERHA7;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCMERH7  MOVE      ZERO,OVRCD                                                  
          READLKP   COMERHA7;CMRHUNIQ,CMRHDATE,CMRHTIME,CMRHSTAT,CMRHEDAT:      
                             CMRHURNO,CMRHVISN,CMRHPCOD,CMRHPCNT,CMRHHOSP:      
                             CMRHBTYP,CMRHADOC,CMRHEREF,CMRHLHRD,CMRHLHDT:      
                             CMRHUDAT,CMRHUTIM,CMRHUUID,CMRHSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCMERH7  RESET     KEY33                                                       
          UNLOCK    COMERHA7                                                    
          RETURN
.
