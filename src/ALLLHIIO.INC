.
. ALLLHIIO    
. --------
. Filename     : alllhiaf.dat
.
RSALLHI1  RESET     KEY35                                                       
          READ      ALLLHIA1,KEY35;;                                            
          RETURN
.
RAALLHI1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLHIA1,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALLHI1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLHIA1,KEY35;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:
                        ALLHUSER,ALLHSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALLHI1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLLHIA1;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:      
                        ALLHUSER,ALLHSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALLHI1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLLHIA1;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:      
                        ALLHUSER,ALLHSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALLHI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLLHIA1;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:      
                        ALLHUSER,ALLHSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALLHI1  RESET     KEY35                                                       
          WRITE     ALLLHIA1,KEY35;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:
                        ALLHUSER,ALLHSPAR                                       
          RETURN
.
DEALLHI1  RESET     KEY35                                                       
          DELETE    ALLLHIA1,KEY35                                              
          RETURN
.
RLALLHI1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READL     ALLLHIA1,KEY35;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:
                        ALLHUSER,ALLHSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALLHI1  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLLHIA1;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:      
                        ALLHUSER,ALLHSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALLHI1  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLLHIA1;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:      
                        ALLHUSER,ALLHSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALLHI1  RESET     KEY35                                                       
          UNLOCK    ALLLHIA1                                                    
          RETURN
.
RSALLHI2  RESET     KEY35                                                       
          READ      ALLLHIA2,KEY35;;                                            
          RETURN
.
RAALLHI2  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLHIA2,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALLHI2  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLHIA2,KEY35;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:
                        ALLHUSER,ALLHSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALLHI2  MOVE      ZERO,OVRCD                                                  
          READKS    ALLLHIA2;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:      
                        ALLHUSER,ALLHSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALLHI2  MOVE      ZERO,OVRCD                                                  
          READKP    ALLLHIA2;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:      
                        ALLHUSER,ALLHSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALLHI2  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLLHIA2;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:      
                        ALLHUSER,ALLHSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALLHI2  RESET     KEY35                                                       
          WRITE     ALLLHIA2,KEY35;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:
                        ALLHUSER,ALLHSPAR                                       
          RETURN
.
DEALLHI2  RESET     KEY35                                                       
          DELETE    ALLLHIA2,KEY35                                              
          RETURN
.
RLALLHI2  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READL     ALLLHIA2,KEY35;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:
                        ALLHUSER,ALLHSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALLHI2  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLLHIA2;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:      
                        ALLHUSER,ALLHSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALLHI2  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLLHIA2;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:      
                        ALLHUSER,ALLHSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALLHI2  RESET     KEY35                                                       
          UNLOCK    ALLLHIA2                                                    
          RETURN
.
RSALLHI3  RESET     KEY35                                                       
          READ      ALLLHIA3,KEY35;;                                            
          RETURN
.
RAALLHI3  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLHIA3,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALLHI3  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLHIA3,KEY35;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:
                        ALLHUSER,ALLHSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALLHI3  MOVE      ZERO,OVRCD                                                  
          READKS    ALLLHIA3;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:      
                        ALLHUSER,ALLHSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALLHI3  MOVE      ZERO,OVRCD                                                  
          READKP    ALLLHIA3;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:      
                        ALLHUSER,ALLHSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALLHI3  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLLHIA3;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:      
                        ALLHUSER,ALLHSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALLHI3  RESET     KEY35                                                       
          WRITE     ALLLHIA3,KEY35;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:
                        ALLHUSER,ALLHSPAR                                       
          RETURN
.
DEALLHI3  RESET     KEY35                                                       
          DELETE    ALLLHIA3,KEY35                                              
          RETURN
.
RLALLHI3  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READL     ALLLHIA3,KEY35;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:
                        ALLHUSER,ALLHSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALLHI3  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLLHIA3;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:      
                        ALLHUSER,ALLHSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALLHI3  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLLHIA3;ALLHURNO,ALLHDATE,ALLHTIME,ALLHLTNO,ALLHREFN:      
                        ALLHUSER,ALLHSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALLHI3  RESET     KEY35                                                       
          UNLOCK    ALLLHIA3                                                    
          RETURN
.
