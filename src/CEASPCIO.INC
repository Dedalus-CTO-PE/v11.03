.
. CEASPCIO    
. --------
. Filename     : ceaspcaf.dat
.
RSCESP1   RESET     KEY3                                                        
          READ      CEASPCA1,KEY3;;                                             
          RETURN
.
RACESP1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      CEASPCA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCESP1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      CEASPCA1,KEY3;CESPSPC,CESPDES,CESPUR1,CESPUR2,CESPUD1:      
                        CESPUD2,CESPUY1,CESPUY2,CESPSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCESP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEASPCA1;CESPSPC,CESPDES,CESPUR1,CESPUR2,CESPUD1:           
                        CESPUD2,CESPUY1,CESPUY2,CESPSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCESP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEASPCA1;CESPSPC,CESPDES,CESPUR1,CESPUR2,CESPUD1:           
                        CESPUD2,CESPUY1,CESPUY2,CESPSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCESP1                                                                         
          UPDATE    CEASPCA1;CESPSPC,CESPDES,CESPUR1,CESPUR2,CESPUD1:           
                        CESPUD2,CESPUY1,CESPUY2,CESPSPA                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCESP1   RESET     KEY3                                                        
          WRITE     CEASPCA1,KEY3;CESPSPC,CESPDES,CESPUR1,CESPUR2,CESPUD1:      
                        CESPUD2,CESPUY1,CESPUY2,CESPSPA                         
          RETURN
.
DECESP1   RESET     KEY3                                                        
          DELETE    CEASPCA1,KEY3                                               
          RETURN
.
RLCESP1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     CEASPCA1,KEY3;CESPSPC,CESPDES,CESPUR1,CESPUR2,CESPUD1:      
                        CESPUD2,CESPUY1,CESPUY2,CESPSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCESP1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CEASPCA1;CESPSPC,CESPDES,CESPUR1,CESPUR2,CESPUD1:           
                        CESPUD2,CESPUY1,CESPUY2,CESPSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCESP1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CEASPCA1;CESPSPC,CESPDES,CESPUR1,CESPUR2,CESPUD1:           
                        CESPUD2,CESPUY1,CESPUY2,CESPSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCESP1   RESET     KEY3                                                        
          UNLOCK    CEASPCA1                                                    
          RETURN
.
