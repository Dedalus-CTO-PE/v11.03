.
. ALLPCTIO    
. --------
. Filename     : allpctaf.dat
.
RSALPCT1  RESET     KEY26                                                       
          READ      ALLPCTA1,KEY26;;                                            
          RETURN
.
RAALPCT1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      ALLPCTA1,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALPCT1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      ALLPCTA1,KEY26;ALPCURNO,ALPCTYPE,ALPCCODE,ALPCSITE,ALPCADFL:
                        ALPCCDAT,ALPCCTIM,ALPCCUID,ALPCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALPCT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLPCTA1;ALPCURNO,ALPCTYPE,ALPCCODE,ALPCSITE,ALPCADFL:      
                        ALPCCDAT,ALPCCTIM,ALPCCUID,ALPCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALPCT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLPCTA1;ALPCURNO,ALPCTYPE,ALPCCODE,ALPCSITE,ALPCADFL:      
                        ALPCCDAT,ALPCCTIM,ALPCCUID,ALPCSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALPCT1                                                                        
          UPDATE    ALLPCTA1;ALPCURNO,ALPCTYPE,ALPCCODE,ALPCSITE,ALPCADFL:      
                        ALPCCDAT,ALPCCTIM,ALPCCUID,ALPCSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALPCT1  RESET     KEY26                                                       
          WRITE     ALLPCTA1,KEY26;ALPCURNO,ALPCTYPE,ALPCCODE,ALPCSITE,ALPCADFL:
                        ALPCCDAT,ALPCCTIM,ALPCCUID,ALPCSPAR                     
          RETURN
.
DEALPCT1  RESET     KEY26                                                       
          DELETE    ALLPCTA1,KEY26                                              
          RETURN
.
RLALPCT1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READL     ALLPCTA1,KEY26;ALPCURNO,ALPCTYPE,ALPCCODE,ALPCSITE,ALPCADFL:
                        ALPCCDAT,ALPCCTIM,ALPCCUID,ALPCSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALPCT1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLPCTA1;ALPCURNO,ALPCTYPE,ALPCCODE,ALPCSITE,ALPCADFL:      
                        ALPCCDAT,ALPCCTIM,ALPCCUID,ALPCSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALPCT1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLPCTA1;ALPCURNO,ALPCTYPE,ALPCCODE,ALPCSITE,ALPCADFL:      
                        ALPCCDAT,ALPCCTIM,ALPCCUID,ALPCSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALPCT1  RESET     KEY26                                                       
          UNLOCK    ALLPCTA1                                                    
          RETURN
.
