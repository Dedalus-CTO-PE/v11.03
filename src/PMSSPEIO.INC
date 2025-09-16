.
. PMSSPEIO    
. --------
. Filename     : pmsspeaf.dat
.
RSPMSPE1  RESET     KEY21                                                       
          READ      PMSSPEA1,KEY21;;                                            
          RETURN
.
RAPMSPE1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSPEA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMSPE1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PMSSPEA1,KEY21;PMSEHCPC,PMSESPEC,PMSESDAT,PMSEEDAT,PMSECDAT:
                        PMSECTIM,PMSECUID,PMSEUDAT,PMSEUTIM,PMSEUUID,PMSESPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMSPE1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSSPEA1;PMSEHCPC,PMSESPEC,PMSESDAT,PMSEEDAT,PMSECDAT:      
                        PMSECTIM,PMSECUID,PMSEUDAT,PMSEUTIM,PMSEUUID,PMSESPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMSPE1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSSPEA1;PMSEHCPC,PMSESPEC,PMSESDAT,PMSEEDAT,PMSECDAT:      
                        PMSECTIM,PMSECUID,PMSEUDAT,PMSEUTIM,PMSEUUID,PMSESPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMSPE1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSSPEA1;PMSEHCPC,PMSESPEC,PMSESDAT,PMSEEDAT,PMSECDAT:      
                        PMSECTIM,PMSECUID,PMSEUDAT,PMSEUTIM,PMSEUUID,PMSESPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMSPE1  RESET     KEY21                                                       
          WRITE     PMSSPEA1,KEY21;PMSEHCPC,PMSESPEC,PMSESDAT,PMSEEDAT,PMSECDAT:
                        PMSECTIM,PMSECUID,PMSEUDAT,PMSEUTIM,PMSEUUID,PMSESPAR   
          RETURN
.
DEPMSPE1  RESET     KEY21                                                       
          DELETE    PMSSPEA1,KEY21                                              
          RETURN
.
RLPMSPE1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     PMSSPEA1,KEY21;PMSEHCPC,PMSESPEC,PMSESDAT,PMSEEDAT,PMSECDAT:
                        PMSECTIM,PMSECUID,PMSEUDAT,PMSEUTIM,PMSEUUID,PMSESPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMSPE1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSSPEA1;PMSEHCPC,PMSESPEC,PMSESDAT,PMSEEDAT,PMSECDAT:      
                        PMSECTIM,PMSECUID,PMSEUDAT,PMSEUTIM,PMSEUUID,PMSESPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMSPE1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSSPEA1;PMSEHCPC,PMSESPEC,PMSESDAT,PMSEEDAT,PMSECDAT:      
                        PMSECTIM,PMSECUID,PMSEUDAT,PMSEUTIM,PMSEUUID,PMSESPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMSPE1  RESET     KEY21                                                       
          UNLOCK    PMSSPEA1                                                    
          RETURN
.
