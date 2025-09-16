.
. ALLEIDIO    
. --------
. Filename     : alleidaf.dat
.
RSALEID1  RESET     KEY8                                                        
          READ      ALLEIDA1,KEY8;;                                             
          RETURN
.
RAALEID1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      ALLEIDA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALEID1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      ALLEIDA1,KEY8;ALEIVISN,ALEIOAPP,ALEISERV,ALEIROTH,ALEIRCON: 
                        ALEISPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALEID1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLEIDA1;ALEIVISN,ALEIOAPP,ALEISERV,ALEIROTH,ALEIRCON:      
                        ALEISPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALEID1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLEIDA1;ALEIVISN,ALEIOAPP,ALEISERV,ALEIROTH,ALEIRCON:      
                        ALEISPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALEID1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLEIDA1;ALEIVISN,ALEIOAPP,ALEISERV,ALEIROTH,ALEIRCON:      
                        ALEISPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALEID1  RESET     KEY8                                                        
          WRITE     ALLEIDA1,KEY8;ALEIVISN,ALEIOAPP,ALEISERV,ALEIROTH,ALEIRCON: 
                        ALEISPAR                                                
          RETURN
.
DEALEID1  RESET     KEY8                                                        
          DELETE    ALLEIDA1,KEY8                                               
          RETURN
.
RLALEID1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     ALLEIDA1,KEY8;ALEIVISN,ALEIOAPP,ALEISERV,ALEIROTH,ALEIRCON: 
                        ALEISPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALEID1  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLEIDA1;ALEIVISN,ALEIOAPP,ALEISERV,ALEIROTH,ALEIRCON:      
                        ALEISPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALEID1  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLEIDA1;ALEIVISN,ALEIOAPP,ALEISERV,ALEIROTH,ALEIRCON:      
                        ALEISPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALEID1  RESET     KEY8                                                        
          UNLOCK    ALLEIDA1                                                    
          RETURN
.
