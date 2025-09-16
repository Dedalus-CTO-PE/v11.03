.
. ALLGROIO    
. --------
. Filename     : allgroaf.dat
.
RSALGRO1  RESET     KEY8                                                        
          READ      ALLGROA1,KEY8;;                                             
          RETURN
.
RAALGRO1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      ALLGROA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALGRO1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      ALLGROA1,KEY8;ALGRSESN,ALGRNAME,ALGRSEST,ALGRLOCN,ALGRDAYI: 
                        ALGRSDAT,ALGRSTIM,ALGRDURN,ALGRDEPT,ALGRFREQ,ALGRACTV:  
                        ALGRCDAT,ALGRCTIM,ALGRCUID,ALGRUDAT,ALGRUTIM,ALGRUUID:  
                        ALGRCONT,ALGRUDF1,ALGRUDF2,ALGRUDF3,ALGRUDF4,ALGRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALGRO1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLGROA1;ALGRSESN,ALGRNAME,ALGRSEST,ALGRLOCN,ALGRDAYI:      
                        ALGRSDAT,ALGRSTIM,ALGRDURN,ALGRDEPT,ALGRFREQ,ALGRACTV:  
                        ALGRCDAT,ALGRCTIM,ALGRCUID,ALGRUDAT,ALGRUTIM,ALGRUUID:  
                        ALGRCONT,ALGRUDF1,ALGRUDF2,ALGRUDF3,ALGRUDF4,ALGRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALGRO1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLGROA1;ALGRSESN,ALGRNAME,ALGRSEST,ALGRLOCN,ALGRDAYI:      
                        ALGRSDAT,ALGRSTIM,ALGRDURN,ALGRDEPT,ALGRFREQ,ALGRACTV:  
                        ALGRCDAT,ALGRCTIM,ALGRCUID,ALGRUDAT,ALGRUTIM,ALGRUUID:  
                        ALGRCONT,ALGRUDF1,ALGRUDF2,ALGRUDF3,ALGRUDF4,ALGRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALGRO1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLGROA1;ALGRSESN,ALGRNAME,ALGRSEST,ALGRLOCN,ALGRDAYI:      
                        ALGRSDAT,ALGRSTIM,ALGRDURN,ALGRDEPT,ALGRFREQ,ALGRACTV:  
                        ALGRCDAT,ALGRCTIM,ALGRCUID,ALGRUDAT,ALGRUTIM,ALGRUUID:  
                        ALGRCONT,ALGRUDF1,ALGRUDF2,ALGRUDF3,ALGRUDF4,ALGRSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALGRO1  RESET     KEY8                                                        
          WRITE     ALLGROA1,KEY8;ALGRSESN,ALGRNAME,ALGRSEST,ALGRLOCN,ALGRDAYI: 
                        ALGRSDAT,ALGRSTIM,ALGRDURN,ALGRDEPT,ALGRFREQ,ALGRACTV:  
                        ALGRCDAT,ALGRCTIM,ALGRCUID,ALGRUDAT,ALGRUTIM,ALGRUUID:  
                        ALGRCONT,ALGRUDF1,ALGRUDF2,ALGRUDF3,ALGRUDF4,ALGRSPAR   
          RETURN
.
DEALGRO1  RESET     KEY8                                                        
          DELETE    ALLGROA1,KEY8                                               
          RETURN
.
RLALGRO1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     ALLGROA1,KEY8;ALGRSESN,ALGRNAME,ALGRSEST,ALGRLOCN,ALGRDAYI: 
                        ALGRSDAT,ALGRSTIM,ALGRDURN,ALGRDEPT,ALGRFREQ,ALGRACTV:  
                        ALGRCDAT,ALGRCTIM,ALGRCUID,ALGRUDAT,ALGRUTIM,ALGRUUID:  
                        ALGRCONT,ALGRUDF1,ALGRUDF2,ALGRUDF3,ALGRUDF4,ALGRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALGRO1  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLGROA1;ALGRSESN,ALGRNAME,ALGRSEST,ALGRLOCN,ALGRDAYI:      
                        ALGRSDAT,ALGRSTIM,ALGRDURN,ALGRDEPT,ALGRFREQ,ALGRACTV:  
                        ALGRCDAT,ALGRCTIM,ALGRCUID,ALGRUDAT,ALGRUTIM,ALGRUUID:  
                        ALGRCONT,ALGRUDF1,ALGRUDF2,ALGRUDF3,ALGRUDF4,ALGRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALGRO1  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLGROA1;ALGRSESN,ALGRNAME,ALGRSEST,ALGRLOCN,ALGRDAYI:      
                        ALGRSDAT,ALGRSTIM,ALGRDURN,ALGRDEPT,ALGRFREQ,ALGRACTV:  
                        ALGRCDAT,ALGRCTIM,ALGRCUID,ALGRUDAT,ALGRUTIM,ALGRUUID:  
                        ALGRCONT,ALGRUDF1,ALGRUDF2,ALGRUDF3,ALGRUDF4,ALGRSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALGRO1  RESET     KEY8                                                        
          UNLOCK    ALLGROA1                                                    
          RETURN
.
