.
. COMERDIO    
. --------
. Filename     : comerdaf.dat
.
RSCMERD1  RESET     KEY28                                                       
          READ      COMERDA1,KEY28;;                                            
          RETURN
.
RACMERD1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      COMERDA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMERD1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      COMERDA1,KEY28;CMRDUNIQ,CMRDPRID,CMRDWBID,CMRDNVAL,CMRDDVAL:
                                   CMRDVALU,CMRDSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMERD1  MOVE      ZERO,OVRCD                                                  
          READKS    COMERDA1;CMRDUNIQ,CMRDPRID,CMRDWBID,CMRDNVAL,CMRDDVAL:      
                             CMRDVALU,CMRDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMERD1  MOVE      ZERO,OVRCD                                                  
          READKP    COMERDA1;CMRDUNIQ,CMRDPRID,CMRDWBID,CMRDNVAL,CMRDDVAL:      
                             CMRDVALU,CMRDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMERD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMERDA1;CMRDUNIQ,CMRDPRID,CMRDWBID,CMRDNVAL,CMRDDVAL:      
                             CMRDVALU,CMRDSPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCMERD1  RESET     KEY28                                                       
          WRITE     COMERDA1,KEY28;CMRDUNIQ,CMRDPRID,CMRDWBID,CMRDNVAL,CMRDDVAL:
                                   CMRDVALU,CMRDSPAR                            
          RETURN
.
DECMERD1  RESET     KEY28                                                       
          DELETE    COMERDA1,KEY28                                              
          RETURN
.
RLCMERD1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     COMERDA1,KEY28;CMRDUNIQ,CMRDPRID,CMRDWBID,CMRDNVAL,CMRDDVAL:
                                   CMRDVALU,CMRDSPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCMERD1  MOVE      ZERO,OVRCD                                                  
          READLKS   COMERDA1;CMRDUNIQ,CMRDPRID,CMRDWBID,CMRDNVAL,CMRDDVAL:      
                             CMRDVALU,CMRDSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCMERD1  MOVE      ZERO,OVRCD                                                  
          READLKP   COMERDA1;CMRDUNIQ,CMRDPRID,CMRDWBID,CMRDNVAL,CMRDDVAL:      
                             CMRDVALU,CMRDSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCMERD1  RESET     KEY28                                                       
          UNLOCK    COMERDA1                                                    
          RETURN
.
