.
. PMSDSLIO    
. --------
. Filename     : pmsdslaf.dat
.
RSPMDSL1  RESET     KEY14                                                       
          READ      PMSDSLA1,KEY14;;                                            
          RETURN
.
RAPMDSL1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDSLA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMDSL1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDSLA1,KEY14;PMDLSELI,PMDLHCPC,PMDLDLST,PMDLSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMDSL1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSDSLA1;PMDLSELI,PMDLHCPC,PMDLDLST,PMDLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMDSL1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSDSLA1;PMDLSELI,PMDLHCPC,PMDLDLST,PMDLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMDSL1                                                                        
          UPDATE    PMSDSLA1;PMDLSELI,PMDLHCPC,PMDLDLST,PMDLSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMDSL1  RESET     KEY14                                                       
          WRITE     PMSDSLA1,KEY14;PMDLSELI,PMDLHCPC,PMDLDLST,PMDLSPAR          
          RETURN
.
DEPMDSL1  RESET     KEY14                                                       
          DELETE    PMSDSLA1,KEY14                                              
          RETURN
.
RLPMDSL1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     PMSDSLA1,KEY14;PMDLSELI,PMDLHCPC,PMDLDLST,PMDLSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMDSL1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSDSLA1;PMDLSELI,PMDLHCPC,PMDLDLST,PMDLSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMDSL1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSDSLA1;PMDLSELI,PMDLHCPC,PMDLDLST,PMDLSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMDSL1  RESET     KEY14                                                       
          UNLOCK    PMSDSLA1                                                    
          RETURN
.
