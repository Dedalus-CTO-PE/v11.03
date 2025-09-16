.
. ALLITMIO    
. --------
. Filename     : allitmaf.dat
.
RSALITM1  RESET     KEY18                                                       
          READ      ALLITMA1,KEY18;;                                            
          RETURN
.
RAALITM1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      ALLITMA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALITM1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      ALLITMA1,KEY18;ALITVISN,ALITENCN,ALITITMC,ALITITMN,ALITSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALITM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLITMA1;ALITVISN,ALITENCN,ALITITMC,ALITITMN,ALITSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALITM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLITMA1;ALITVISN,ALITENCN,ALITITMC,ALITITMN,ALITSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALITM1                                                                        
          UPDATE    ALLITMA1;ALITVISN,ALITENCN,ALITITMC,ALITITMN,ALITSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALITM1  RESET     KEY18                                                       
          WRITE     ALLITMA1,KEY18;ALITVISN,ALITENCN,ALITITMC,ALITITMN,ALITSPAR 
          RETURN
.
DEALITM1  RESET     KEY18                                                       
          DELETE    ALLITMA1,KEY18                                              
          RETURN
.
RLALITM1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     ALLITMA1,KEY18;ALITVISN,ALITENCN,ALITITMC,ALITITMN,ALITSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALITM1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLITMA1;ALITVISN,ALITENCN,ALITITMC,ALITITMN,ALITSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALITM1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLITMA1;ALITVISN,ALITENCN,ALITITMC,ALITITMN,ALITSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALITM1  RESET     KEY18                                                       
          UNLOCK    ALLITMA1                                                    
          RETURN
.
