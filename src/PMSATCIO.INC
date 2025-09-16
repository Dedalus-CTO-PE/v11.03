.
. PMSATCIO    
. --------
. Filename     : pmsatcaf.dat
.
RSPMATC1  RESET     KEY19                                                       
          READ      PMSATCA1,KEY19;;                                            
          RETURN
.
RAPMATC1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSATCA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMATC1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSATCA1,KEY19;PMATREQN,PMATTYPE,PMATCNTR,PMATLINE,PMATDATA:
                        PMATSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMATC1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSATCA1;PMATREQN,PMATTYPE,PMATCNTR,PMATLINE,PMATDATA:      
                        PMATSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMATC1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSATCA1;PMATREQN,PMATTYPE,PMATCNTR,PMATLINE,PMATDATA:      
                        PMATSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMATC1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSATCA1;PMATREQN,PMATTYPE,PMATCNTR,PMATLINE,PMATDATA:      
                        PMATSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMATC1  RESET     KEY19                                                       
          WRITE     PMSATCA1,KEY19;PMATREQN,PMATTYPE,PMATCNTR,PMATLINE,PMATDATA:
                        PMATSPAR                                                
          RETURN
.
DEPMATC1  RESET     KEY19                                                       
          DELETE    PMSATCA1,KEY19                                              
          RETURN
.
RLPMATC1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READL     PMSATCA1,KEY19;PMATREQN,PMATTYPE,PMATCNTR,PMATLINE,PMATDATA:
                        PMATSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMATC1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSATCA1;PMATREQN,PMATTYPE,PMATCNTR,PMATLINE,PMATDATA:      
                        PMATSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMATC1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSATCA1;PMATREQN,PMATTYPE,PMATCNTR,PMATLINE,PMATDATA:      
                        PMATSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMATC1  RESET     KEY19                                                       
          UNLOCK    PMSATCA1                                                    
          RETURN
.
