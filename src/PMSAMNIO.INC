.
. PMSAMNIO    
. --------
. Filename     : pmsamnaf.dat
.
RSPMAMN1  RESET     KEY15                                                       
          READ      PMSAMNA1,KEY15;;                                            
          RETURN
.
RAPMAMN1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAMNA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMAMN1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAMNA1,KEY15;PMAMREQN,PMAMURNO,PMAMVISN,PMAMCATG,PMAMCODE:
                        PMAMCOMM,PMAMCDAT,PMAMCTIM,PMAMCUID,PMAMSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMAMN1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSAMNA1;PMAMREQN,PMAMURNO,PMAMVISN,PMAMCATG,PMAMCODE:      
                        PMAMCOMM,PMAMCDAT,PMAMCTIM,PMAMCUID,PMAMSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMAMN1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSAMNA1;PMAMREQN,PMAMURNO,PMAMVISN,PMAMCATG,PMAMCODE:      
                        PMAMCOMM,PMAMCDAT,PMAMCTIM,PMAMCUID,PMAMSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMAMN1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSAMNA1;PMAMREQN,PMAMURNO,PMAMVISN,PMAMCATG,PMAMCODE:      
                        PMAMCOMM,PMAMCDAT,PMAMCTIM,PMAMCUID,PMAMSPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMAMN1  RESET     KEY15                                                       
          WRITE     PMSAMNA1,KEY15;PMAMREQN,PMAMURNO,PMAMVISN,PMAMCATG,PMAMCODE:
                        PMAMCOMM,PMAMCDAT,PMAMCTIM,PMAMCUID,PMAMSPAR            
          RETURN
.
DEPMAMN1  RESET     KEY15                                                       
          DELETE    PMSAMNA1,KEY15                                              
          RETURN
.
RLPMAMN1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READL     PMSAMNA1,KEY15;PMAMREQN,PMAMURNO,PMAMVISN,PMAMCATG,PMAMCODE:
                        PMAMCOMM,PMAMCDAT,PMAMCTIM,PMAMCUID,PMAMSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMAMN1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSAMNA1;PMAMREQN,PMAMURNO,PMAMVISN,PMAMCATG,PMAMCODE:      
                        PMAMCOMM,PMAMCDAT,PMAMCTIM,PMAMCUID,PMAMSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMAMN1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSAMNA1;PMAMREQN,PMAMURNO,PMAMVISN,PMAMCATG,PMAMCODE:      
                        PMAMCOMM,PMAMCDAT,PMAMCTIM,PMAMCUID,PMAMSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMAMN1  RESET     KEY15                                                       
          UNLOCK    PMSAMNA1                                                    
          RETURN
.
