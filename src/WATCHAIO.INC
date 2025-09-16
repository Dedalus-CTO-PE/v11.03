.
. WATCHAIO    
. --------
. Filename     : watchaaf.dat
.
RSWTCHA1  RESET     KEY35                                                       
          READ      WATCHAA1,KEY35;;                                            
          RETURN
.
RAWTCHA1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WATCHAA1,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTCHA1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WATCHAA1,KEY35;WTCHURNO,WTCHPROC,WTCHPCNT,WTCHDATE,WTCHTIME:
                        WTCHUSID,WTCHUPTY,WTCHREAS,WTCHOVAL,WTCHCVAL,WTCHSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTCHA1  MOVE      ZERO,OVRCD                                                  
          READKS    WATCHAA1;WTCHURNO,WTCHPROC,WTCHPCNT,WTCHDATE,WTCHTIME:      
                        WTCHUSID,WTCHUPTY,WTCHREAS,WTCHOVAL,WTCHCVAL,WTCHSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTCHA1  MOVE      ZERO,OVRCD                                                  
          READKP    WATCHAA1;WTCHURNO,WTCHPROC,WTCHPCNT,WTCHDATE,WTCHTIME:      
                        WTCHUSID,WTCHUPTY,WTCHREAS,WTCHOVAL,WTCHCVAL,WTCHSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTCHA1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WATCHAA1;WTCHURNO,WTCHPROC,WTCHPCNT,WTCHDATE,WTCHTIME:      
                        WTCHUSID,WTCHUPTY,WTCHREAS,WTCHOVAL,WTCHCVAL,WTCHSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTCHA1  RESET     KEY35                                                       
          WRITE     WATCHAA1,KEY35;WTCHURNO,WTCHPROC,WTCHPCNT,WTCHDATE,WTCHTIME:
                        WTCHUSID,WTCHUPTY,WTCHREAS,WTCHOVAL,WTCHCVAL,WTCHSPAR   
          RETURN
.
DEWTCHA1  RESET     KEY35                                                       
          DELETE    WATCHAA1,KEY35                                              
          RETURN
.
RLWTCHA1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READL     WATCHAA1,KEY35;WTCHURNO,WTCHPROC,WTCHPCNT,WTCHDATE,WTCHTIME:
                        WTCHUSID,WTCHUPTY,WTCHREAS,WTCHOVAL,WTCHCVAL,WTCHSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTCHA1  MOVE      ZERO,OVRCD                                                  
          READLKS   WATCHAA1;WTCHURNO,WTCHPROC,WTCHPCNT,WTCHDATE,WTCHTIME:      
                        WTCHUSID,WTCHUPTY,WTCHREAS,WTCHOVAL,WTCHCVAL,WTCHSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTCHA1  MOVE      ZERO,OVRCD                                                  
          READLKP   WATCHAA1;WTCHURNO,WTCHPROC,WTCHPCNT,WTCHDATE,WTCHTIME:      
                        WTCHUSID,WTCHUPTY,WTCHREAS,WTCHOVAL,WTCHCVAL,WTCHSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTCHA1  RESET     KEY35                                                       
          UNLOCK    WATCHAA1                                                    
          RETURN
.
RSWTCHA2  RESET     KEY37                                                       
          READ      WATCHAA2,KEY37;;                                            
          RETURN
.
RAWTCHA2  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      WATCHAA2,KEY37;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTCHA2  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      WATCHAA2,KEY37;WTCHURNO,WTCHPROC,WTCHPCNT,WTCHDATE,WTCHTIME:
                        WTCHUSID,WTCHUPTY,WTCHREAS,WTCHOVAL,WTCHCVAL,WTCHSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTCHA2  MOVE      ZERO,OVRCD                                                  
          READKS    WATCHAA2;WTCHURNO,WTCHPROC,WTCHPCNT,WTCHDATE,WTCHTIME:      
                        WTCHUSID,WTCHUPTY,WTCHREAS,WTCHOVAL,WTCHCVAL,WTCHSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTCHA2  MOVE      ZERO,OVRCD                                                  
          READKP    WATCHAA2;WTCHURNO,WTCHPROC,WTCHPCNT,WTCHDATE,WTCHTIME:      
                        WTCHUSID,WTCHUPTY,WTCHREAS,WTCHOVAL,WTCHCVAL,WTCHSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTCHA2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WATCHAA2;WTCHURNO,WTCHPROC,WTCHPCNT,WTCHDATE,WTCHTIME:      
                        WTCHUSID,WTCHUPTY,WTCHREAS,WTCHOVAL,WTCHCVAL,WTCHSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTCHA2  RESET     KEY37                                                       
          WRITE     WATCHAA2,KEY37;WTCHURNO,WTCHPROC,WTCHPCNT,WTCHDATE,WTCHTIME:
                        WTCHUSID,WTCHUPTY,WTCHREAS,WTCHOVAL,WTCHCVAL,WTCHSPAR   
          RETURN
.
DEWTCHA2  RESET     KEY37                                                       
          DELETE    WATCHAA2,KEY37                                              
          RETURN
.
RLWTCHA2  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READL     WATCHAA2,KEY37;WTCHURNO,WTCHPROC,WTCHPCNT,WTCHDATE,WTCHTIME:
                        WTCHUSID,WTCHUPTY,WTCHREAS,WTCHOVAL,WTCHCVAL,WTCHSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTCHA2  MOVE      ZERO,OVRCD                                                  
          READLKS   WATCHAA2;WTCHURNO,WTCHPROC,WTCHPCNT,WTCHDATE,WTCHTIME:      
                        WTCHUSID,WTCHUPTY,WTCHREAS,WTCHOVAL,WTCHCVAL,WTCHSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTCHA2  MOVE      ZERO,OVRCD                                                  
          READLKP   WATCHAA2;WTCHURNO,WTCHPROC,WTCHPCNT,WTCHDATE,WTCHTIME:      
                        WTCHUSID,WTCHUPTY,WTCHREAS,WTCHOVAL,WTCHCVAL,WTCHSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTCHA2  RESET     KEY37                                                       
          UNLOCK    WATCHAA2                                                    
          RETURN
.
