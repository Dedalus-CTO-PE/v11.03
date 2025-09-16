.
. PMSSINIO    
. --------
. Filename     : pmssinaf.dat
.
RSPMSIN1  RESET     KEY30                                                       
          READ      PMSSINA1,KEY30;;                                            
          RETURN
.
RAPMSIN1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSINA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMSIN1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSINA1,KEY30;PMSICODE,PMSIFUND,PMSITBLT,PMSICSCD,PMSIBKCD:
                                   PMSIAMNT,PMSICNID,PMSISPAR                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMSIN1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSSINA1;PMSICODE,PMSIFUND,PMSITBLT,PMSICSCD,PMSIBKCD:      
                             PMSIAMNT,PMSICNID,PMSISPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMSIN1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSSINA1;PMSICODE,PMSIFUND,PMSITBLT,PMSICSCD,PMSIBKCD:      
                             PMSIAMNT,PMSICNID,PMSISPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMSIN1                                                                        
          UPDATE    PMSSINA1;PMSICODE,PMSIFUND,PMSITBLT,PMSICSCD,PMSIBKCD:      
                             PMSIAMNT,PMSICNID,PMSISPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMSIN1  RESET     KEY30
          UNPACK    KEY30,PMSICNID,PMSICODE,PMSIFUND,PMSITBLT,PMSICSCD,PMSIBKCD
          WRITE     PMSSINA1,KEY30;PMSICODE,PMSIFUND,PMSITBLT,PMSICSCD,PMSIBKCD:
                                   PMSIAMNT,PMSICNID,PMSISPAR                      
          RETURN
.
DEPMSIN1  RESET     KEY30                                                       
          DELETE    PMSSINA1,KEY30                                              
          RETURN
.
RLPMSIN1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READL     PMSSINA1,KEY30;PMSICODE,PMSIFUND,PMSITBLT,PMSICSCD,PMSIBKCD:
                                   PMSIAMNT,PMSICNID,PMSISPAR                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMSIN1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSSINA1;PMSICODE,PMSIFUND,PMSITBLT,PMSICSCD,PMSIBKCD:      
                             PMSIAMNT,PMSICNID,PMSISPAR                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMSIN1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSSINA1;PMSICODE,PMSIFUND,PMSITBLT,PMSICSCD,PMSIBKCD:      
                             PMSIAMNT,PMSICNID,PMSISPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMSIN1  RESET     KEY30                                                       
          UNLOCK    PMSSINA1                                                    
          RETURN
.
