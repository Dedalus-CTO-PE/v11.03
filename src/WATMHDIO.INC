.
. WATMHDIO    
. --------
. Filename     : watmhdaf.dat
.
RSWTMHD1  RESET     KEY28                                                       
          READ      WATMHDA1,KEY28;;                                            
          RETURN
.
RAWTMHD1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      WATMHDA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTMHD1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      WATMHDA1,KEY28;WTMHURNO,WTMHPROC,WTMHPCNT,WTMHTYPE,WTMHNOTE:
                        WTMHDATE,WTMHTIME,WTMHUSER,WTMHOCCG,WTMHDELT,WTMHDDAT:  
                        WTMHDTIM,WTMHDUSE,WTMHDOCC,WTMHSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTMHD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATMHDA1;WTMHURNO,WTMHPROC,WTMHPCNT,WTMHTYPE,WTMHNOTE:      
                        WTMHDATE,WTMHTIME,WTMHUSER,WTMHOCCG,WTMHDELT,WTMHDDAT:  
                        WTMHDTIM,WTMHDUSE,WTMHDOCC,WTMHSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTMHD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATMHDA1;WTMHURNO,WTMHPROC,WTMHPCNT,WTMHTYPE,WTMHNOTE:      
                        WTMHDATE,WTMHTIME,WTMHUSER,WTMHOCCG,WTMHDELT,WTMHDDAT:  
                        WTMHDTIM,WTMHDUSE,WTMHDOCC,WTMHSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTMHD1                                                                        
          UPDATE    WATMHDA1;WTMHURNO,WTMHPROC,WTMHPCNT,WTMHTYPE,WTMHNOTE:      
                        WTMHDATE,WTMHTIME,WTMHUSER,WTMHOCCG,WTMHDELT,WTMHDDAT:  
                        WTMHDTIM,WTMHDUSE,WTMHDOCC,WTMHSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTMHD1  RESET     KEY28                                                       
          WRITE     WATMHDA1,KEY28;WTMHURNO,WTMHPROC,WTMHPCNT,WTMHTYPE,WTMHNOTE:
                        WTMHDATE,WTMHTIME,WTMHUSER,WTMHOCCG,WTMHDELT,WTMHDDAT:  
                        WTMHDTIM,WTMHDUSE,WTMHDOCC,WTMHSPAR                     
          RETURN
.
DEWTMHD1  RESET     KEY28                                                       
          DELETE    WATMHDA1,KEY28                                              
          RETURN
.
RLWTMHD1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     WATMHDA1,KEY28;WTMHURNO,WTMHPROC,WTMHPCNT,WTMHTYPE,WTMHNOTE:
                        WTMHDATE,WTMHTIME,WTMHUSER,WTMHOCCG,WTMHDELT,WTMHDDAT:  
                        WTMHDTIM,WTMHDUSE,WTMHDOCC,WTMHSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTMHD1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATMHDA1;WTMHURNO,WTMHPROC,WTMHPCNT,WTMHTYPE,WTMHNOTE:      
                        WTMHDATE,WTMHTIME,WTMHUSER,WTMHOCCG,WTMHDELT,WTMHDDAT:  
                        WTMHDTIM,WTMHDUSE,WTMHDOCC,WTMHSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTMHD1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATMHDA1;WTMHURNO,WTMHPROC,WTMHPCNT,WTMHTYPE,WTMHNOTE:      
                        WTMHDATE,WTMHTIME,WTMHUSER,WTMHOCCG,WTMHDELT,WTMHDDAT:  
                        WTMHDTIM,WTMHDUSE,WTMHDOCC,WTMHSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTMHD1  RESET     KEY28                                                       
          UNLOCK    WATMHDA1                                                    
          RETURN
.
