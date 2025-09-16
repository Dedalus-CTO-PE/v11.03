.
. SINWRKIO    
. --------
. Filename     : sinwrkaf.dat
.
RSSIWK1   RESET     KEY20                                                       
          READ      SINWRKA1,KEY20;;                                            
          RETURN
.
RASIWK1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SINWRKA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIWK1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SINWRKA1,KEY20;SIWKWAR,SIWKRACK,SIWKCAT,SIWKCNT,SIWKSOH:    
                        SIWKSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIWK1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINWRKA1;SIWKWAR,SIWKRACK,SIWKCAT,SIWKCNT,SIWKSOH:          
                        SIWKSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIWK1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINWRKA1;SIWKWAR,SIWKRACK,SIWKCAT,SIWKCNT,SIWKSOH:          
                        SIWKSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIWK1                                                                         
          UPDATE    SINWRKA1;SIWKWAR,SIWKRACK,SIWKCAT,SIWKCNT,SIWKSOH:          
                        SIWKSPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIWK1   RESET     KEY20                                                       
          WRITE     SINWRKA1,KEY20;SIWKWAR,SIWKRACK,SIWKCAT,SIWKCNT,SIWKSOH:    
                        SIWKSPA                                                 
          RETURN
.
DESIWK1   RESET     KEY20                                                       
          DELETE    SINWRKA1,KEY20                                              
          RETURN
.
RLSIWK1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     SINWRKA1,KEY20;SIWKWAR,SIWKRACK,SIWKCAT,SIWKCNT,SIWKSOH:    
                        SIWKSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIWK1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINWRKA1;SIWKWAR,SIWKRACK,SIWKCAT,SIWKCNT,SIWKSOH:          
                        SIWKSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIWK1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINWRKA1;SIWKWAR,SIWKRACK,SIWKCAT,SIWKCNT,SIWKSOH:          
                        SIWKSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIWK1   RESET     KEY20                                                       
          UNLOCK    SINWRKA1                                                    
          RETURN
.
RSSIWK2   RESET     KEY20                                                       
          READ      SINWRKA2,KEY20;;                                            
          RETURN
.
RASIWK2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SINWRKA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIWK2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SINWRKA2,KEY20;SIWKWAR,SIWKRACK,SIWKCAT,SIWKCNT,SIWKSOH:    
                        SIWKSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIWK2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINWRKA2;SIWKWAR,SIWKRACK,SIWKCAT,SIWKCNT,SIWKSOH:          
                        SIWKSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIWK2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINWRKA2;SIWKWAR,SIWKRACK,SIWKCAT,SIWKCNT,SIWKSOH:          
                        SIWKSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIWK2                                                                         
          UPDATE    SINWRKA2;SIWKWAR,SIWKRACK,SIWKCAT,SIWKCNT,SIWKSOH:          
                        SIWKSPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIWK2   RESET     KEY20                                                       
          WRITE     SINWRKA2,KEY20;SIWKWAR,SIWKRACK,SIWKCAT,SIWKCNT,SIWKSOH:    
                        SIWKSPA                                                 
          RETURN
.
DESIWK2   RESET     KEY20                                                       
          DELETE    SINWRKA2,KEY20                                              
          RETURN
.
RLSIWK2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     SINWRKA2,KEY20;SIWKWAR,SIWKRACK,SIWKCAT,SIWKCNT,SIWKSOH:    
                        SIWKSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIWK2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINWRKA2;SIWKWAR,SIWKRACK,SIWKCAT,SIWKCNT,SIWKSOH:          
                        SIWKSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIWK2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINWRKA2;SIWKWAR,SIWKRACK,SIWKCAT,SIWKCNT,SIWKSOH:          
                        SIWKSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIWK2   RESET     KEY20                                                       
          UNLOCK    SINWRKA2                                                    
          RETURN
.
