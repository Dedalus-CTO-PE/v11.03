.
. ALLWLNIO    
. --------
. Filename     : allwlnaf.dat
.
RSALWLN1  RESET     KEY19                                                       
          READ      ALLWLNA1,KEY19;;                                            
          RETURN
.
RAALWLN1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      ALLWLNA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALWLN1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      ALLWLNA1,KEY19;ALWLURNO,ALWLPCOD,ALWLPCNT,ALWLVISN,ALWLSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALWLN1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLWLNA1;ALWLURNO,ALWLPCOD,ALWLPCNT,ALWLVISN,ALWLSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALWLN1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLWLNA1;ALWLURNO,ALWLPCOD,ALWLPCNT,ALWLVISN,ALWLSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALWLN1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLWLNA1;ALWLURNO,ALWLPCOD,ALWLPCNT,ALWLVISN,ALWLSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALWLN1  RESET     KEY19                                                       
          WRITE     ALLWLNA1,KEY19;ALWLURNO,ALWLPCOD,ALWLPCNT,ALWLVISN,ALWLSPAR 
          RETURN
.
DEALWLN1  RESET     KEY19                                                       
          DELETE    ALLWLNA1,KEY19                                              
          RETURN
.
RLALWLN1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READL     ALLWLNA1,KEY19;ALWLURNO,ALWLPCOD,ALWLPCNT,ALWLVISN,ALWLSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALWLN1  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLWLNA1;ALWLURNO,ALWLPCOD,ALWLPCNT,ALWLVISN,ALWLSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALWLN1  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLWLNA1;ALWLURNO,ALWLPCOD,ALWLPCNT,ALWLVISN,ALWLSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALWLN1  RESET     KEY19                                                       
          UNLOCK    ALLWLNA1                                                    
          RETURN
.
RSALWLN2  RESET     KEY27                                                       
          READ      ALLWLNA2,KEY27;;                                            
          RETURN
.
RAALWLN2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      ALLWLNA2,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALWLN2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      ALLWLNA2,KEY27;ALWLURNO,ALWLPCOD,ALWLPCNT,ALWLVISN,ALWLSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALWLN2  MOVE      ZERO,OVRCD                                                  
          READKS    ALLWLNA2;ALWLURNO,ALWLPCOD,ALWLPCNT,ALWLVISN,ALWLSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALWLN2  MOVE      ZERO,OVRCD                                                  
          READKP    ALLWLNA2;ALWLURNO,ALWLPCOD,ALWLPCNT,ALWLVISN,ALWLSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALWLN2  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLWLNA2;ALWLURNO,ALWLPCOD,ALWLPCNT,ALWLVISN,ALWLSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALWLN2  RESET     KEY27                                                       
          WRITE     ALLWLNA2,KEY27;ALWLURNO,ALWLPCOD,ALWLPCNT,ALWLVISN,ALWLSPAR 
          RETURN
.
DEALWLN2  RESET     KEY27                                                       
          DELETE    ALLWLNA2,KEY27                                              
          RETURN
.
RLALWLN2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     ALLWLNA2,KEY27;ALWLURNO,ALWLPCOD,ALWLPCNT,ALWLVISN,ALWLSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALWLN2  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLWLNA2;ALWLURNO,ALWLPCOD,ALWLPCNT,ALWLVISN,ALWLSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALWLN2  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLWLNA2;ALWLURNO,ALWLPCOD,ALWLPCNT,ALWLVISN,ALWLSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALWLN2  RESET     KEY27                                                       
          UNLOCK    ALLWLNA2                                                    
          RETURN
.
