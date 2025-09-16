.
. ALLLPCIO    
. --------
. Filename     : alllpcaf.dat
.
RSALLPC1  RESET     KEY5                                                        
          READ      ALLLPCA1,KEY5;;                                             
          RETURN
.
RAALLPC1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      ALLLPCA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALLPC1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      ALLLPCA1,KEY5;ALLPSCHE,ALLPURNO,ALLPVISN,ALLPPRNT,ALLPCOPY: 
                        ALLPSTAT,ALLPLETT,ALLPPTYP,ALLPOUNO,ALLPOUST,ALLPWEBU:  
                        ALLPRDAT,ALLPRTIM,ALLPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALLPC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLLPCA1;ALLPSCHE,ALLPURNO,ALLPVISN,ALLPPRNT,ALLPCOPY:      
                        ALLPSTAT,ALLPLETT,ALLPPTYP,ALLPOUNO,ALLPOUST,ALLPWEBU:  
                        ALLPRDAT,ALLPRTIM,ALLPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALLPC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLLPCA1;ALLPSCHE,ALLPURNO,ALLPVISN,ALLPPRNT,ALLPCOPY:      
                        ALLPSTAT,ALLPLETT,ALLPPTYP,ALLPOUNO,ALLPOUST,ALLPWEBU:  
                        ALLPRDAT,ALLPRTIM,ALLPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALLPC1                                                                        
          UPDATE    ALLLPCA1;ALLPSCHE,ALLPURNO,ALLPVISN,ALLPPRNT,ALLPCOPY:      
                        ALLPSTAT,ALLPLETT,ALLPPTYP,ALLPOUNO,ALLPOUST,ALLPWEBU:  
                        ALLPRDAT,ALLPRTIM,ALLPSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALLPC1  RESET     KEY5                                                        
          WRITE     ALLLPCA1,KEY5;ALLPSCHE,ALLPURNO,ALLPVISN,ALLPPRNT,ALLPCOPY: 
                        ALLPSTAT,ALLPLETT,ALLPPTYP,ALLPOUNO,ALLPOUST,ALLPWEBU:  
                        ALLPRDAT,ALLPRTIM,ALLPSPAR                              
          RETURN
.
DEALLPC1  RESET     KEY5                                                        
          DELETE    ALLLPCA1,KEY5                                               
          RETURN
.
RLALLPC1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READL     ALLLPCA1,KEY5;ALLPSCHE,ALLPURNO,ALLPVISN,ALLPPRNT,ALLPCOPY: 
                        ALLPSTAT,ALLPLETT,ALLPPTYP,ALLPOUNO,ALLPOUST,ALLPWEBU:  
                        ALLPRDAT,ALLPRTIM,ALLPSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALLPC1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLLPCA1;ALLPSCHE,ALLPURNO,ALLPVISN,ALLPPRNT,ALLPCOPY:      
                        ALLPSTAT,ALLPLETT,ALLPPTYP,ALLPOUNO,ALLPOUST,ALLPWEBU:  
                        ALLPRDAT,ALLPRTIM,ALLPSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALLPC1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLLPCA1;ALLPSCHE,ALLPURNO,ALLPVISN,ALLPPRNT,ALLPCOPY:      
                        ALLPSTAT,ALLPLETT,ALLPPTYP,ALLPOUNO,ALLPOUST,ALLPWEBU:  
                        ALLPRDAT,ALLPRTIM,ALLPSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALLPC1  RESET     KEY5                                                        
          UNLOCK    ALLLPCA1                                                    
          RETURN
.
