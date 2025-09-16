.
. EMRDELIO    
. --------
. Filename     : emrdelaf.dat
.
RSEMDEL1  RESET     KEY29                                                       
          READ      EMRDELA1,KEY29;;                                            
          RETURN
.
RAEMDEL1  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      EMRDELA1,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMDEL1  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      EMRDELA1,KEY29;EMDEVISN,EMDEDATE,EMDETIME,EMDETYPE,EMDECNTR:
                        EMDEREAS,EMDEDELT,EMDECUID,EMDECDAT,EMDECTIM,EMDEUUID:  
                        EMDEUDAT,EMDEUTIM,EMDEDR02,EMDEDR03,EMDEDR04,EMDEDR05:  
                        EMDEDR06,EMDEDR07,EMDEDR08,EMDEDR09,EMDEDR10,EMDECOMM:  
                        EMDESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMDEL1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRDELA1;EMDEVISN,EMDEDATE,EMDETIME,EMDETYPE,EMDECNTR:      
                        EMDEREAS,EMDEDELT,EMDECUID,EMDECDAT,EMDECTIM,EMDEUUID:  
                        EMDEUDAT,EMDEUTIM,EMDEDR02,EMDEDR03,EMDEDR04,EMDEDR05:  
                        EMDEDR06,EMDEDR07,EMDEDR08,EMDEDR09,EMDEDR10,EMDECOMM:  
                        EMDESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMDEL1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRDELA1;EMDEVISN,EMDEDATE,EMDETIME,EMDETYPE,EMDECNTR:      
                        EMDEREAS,EMDEDELT,EMDECUID,EMDECDAT,EMDECTIM,EMDEUUID:  
                        EMDEUDAT,EMDEUTIM,EMDEDR02,EMDEDR03,EMDEDR04,EMDEDR05:  
                        EMDEDR06,EMDEDR07,EMDEDR08,EMDEDR09,EMDEDR10,EMDECOMM:  
                        EMDESPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMDEL1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRDELA1;EMDEVISN,EMDEDATE,EMDETIME,EMDETYPE,EMDECNTR:      
                        EMDEREAS,EMDEDELT,EMDECUID,EMDECDAT,EMDECTIM,EMDEUUID:  
                        EMDEUDAT,EMDEUTIM,EMDEDR02,EMDEDR03,EMDEDR04,EMDEDR05:  
                        EMDEDR06,EMDEDR07,EMDEDR08,EMDEDR09,EMDEDR10,EMDECOMM:  
                        EMDESPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMDEL1  RESET     KEY29                                                       
          WRITE     EMRDELA1,KEY29;EMDEVISN,EMDEDATE,EMDETIME,EMDETYPE,EMDECNTR:
                        EMDEREAS,EMDEDELT,EMDECUID,EMDECDAT,EMDECTIM,EMDEUUID:  
                        EMDEUDAT,EMDEUTIM,EMDEDR02,EMDEDR03,EMDEDR04,EMDEDR05:  
                        EMDEDR06,EMDEDR07,EMDEDR08,EMDEDR09,EMDEDR10,EMDECOMM:  
                        EMDESPAR                                                
          RETURN
.
DEEMDEL1  RESET     KEY29                                                       
          DELETE    EMRDELA1,KEY29                                              
          RETURN
.
RLEMDEL1  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READL     EMRDELA1,KEY29;EMDEVISN,EMDEDATE,EMDETIME,EMDETYPE,EMDECNTR:
                        EMDEREAS,EMDEDELT,EMDECUID,EMDECDAT,EMDECTIM,EMDEUUID:  
                        EMDEUDAT,EMDEUTIM,EMDEDR02,EMDEDR03,EMDEDR04,EMDEDR05:  
                        EMDEDR06,EMDEDR07,EMDEDR08,EMDEDR09,EMDEDR10,EMDECOMM:  
                        EMDESPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMDEL1  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRDELA1;EMDEVISN,EMDEDATE,EMDETIME,EMDETYPE,EMDECNTR:      
                        EMDEREAS,EMDEDELT,EMDECUID,EMDECDAT,EMDECTIM,EMDEUUID:  
                        EMDEUDAT,EMDEUTIM,EMDEDR02,EMDEDR03,EMDEDR04,EMDEDR05:  
                        EMDEDR06,EMDEDR07,EMDEDR08,EMDEDR09,EMDEDR10,EMDECOMM:  
                        EMDESPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMDEL1  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRDELA1;EMDEVISN,EMDEDATE,EMDETIME,EMDETYPE,EMDECNTR:      
                        EMDEREAS,EMDEDELT,EMDECUID,EMDECDAT,EMDECTIM,EMDEUUID:  
                        EMDEUDAT,EMDEUTIM,EMDEDR02,EMDEDR03,EMDEDR04,EMDEDR05:  
                        EMDEDR06,EMDEDR07,EMDEDR08,EMDEDR09,EMDEDR10,EMDECOMM:  
                        EMDESPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMDEL1  RESET     KEY29                                                       
          UNLOCK    EMRDELA1                                                    
          RETURN
.
