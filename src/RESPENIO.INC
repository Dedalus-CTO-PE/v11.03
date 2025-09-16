.
. RESPENIO    
. --------
. Filename     : respenaf.dat
.
RSREPE1   RESET     KEY32                                                       
          READ      RESPENA1,KEY32;;                                            
          RETURN
.
RAREPE1   RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      RESPENA1,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREPE1   RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      RESPENA1,KEY32;REPEKEY,REPEEML,REPEALL,REPEABN,REPEURG:     
                        REPESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREPE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESPENA1;REPEKEY,REPEEML,REPEALL,REPEABN,REPEURG:           
                        REPESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREPE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESPENA1;REPEKEY,REPEEML,REPEALL,REPEABN,REPEURG:           
                        REPESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREPE1                                                                         
          UPDATE    RESPENA1;REPEKEY,REPEEML,REPEALL,REPEABN,REPEURG:           
                        REPESPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRREPE1   RESET     KEY32                                                       
          WRITE     RESPENA1,KEY32;REPEKEY,REPEEML,REPEALL,REPEABN,REPEURG:     
                        REPESPA                                                 
          RETURN
.
DEREPE1   RESET     KEY32                                                       
          DELETE    RESPENA1,KEY32                                              
          RETURN
.
RLREPE1   RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READL     RESPENA1,KEY32;REPEKEY,REPEEML,REPEALL,REPEABN,REPEURG:     
                        REPESPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLREPE1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESPENA1;REPEKEY,REPEEML,REPEALL,REPEABN,REPEURG:           
                        REPESPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLREPE1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESPENA1;REPEKEY,REPEEML,REPEALL,REPEABN,REPEURG:           
                        REPESPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUREPE1   RESET     KEY32                                                       
          UNLOCK    RESPENA1                                                    
          RETURN
.
