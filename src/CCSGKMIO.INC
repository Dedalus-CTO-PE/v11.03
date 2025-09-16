.
. CCSGKMIO    
. --------
. Filename     : ccsgkmaf.dat
.
RSCCGK1   RESET     KEY20                                                       
          READ      CCSGKMA1,KEY20;;                                            
          RETURN
.
RACCGK1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CCSGKMA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCGK1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CCSGKMA1,KEY20;CCGKKEY,CCGKDES,CCGKSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCGK1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSGKMA1;CCGKKEY,CCGKDES,CCGKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCGK1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSGKMA1;CCGKKEY,CCGKDES,CCGKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCGK1                                                                         
          UPDATE    CCSGKMA1;CCGKKEY,CCGKDES,CCGKSPA                            
          RETURN
.
WRCCGK1   RESET     KEY20                                                       
          WRITE     CCSGKMA1,KEY20;CCGKKEY,CCGKDES,CCGKSPA                      
          RETURN
.
DECCGK1   RESET     KEY20                                                       
          DELETE    CCSGKMA1,KEY20                                              
          RETURN
.
RSCCGK2   RESET     KEY55                                                       
          READ      CCSGKMA2,KEY55;;                                            
          RETURN
.
RACCGK2   RESET     KEY55                                                       
          MOVE      ZERO,OVRCD
          READ      CCSGKMA2,KEY55;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCGK2   RESET     KEY55                                                       
          MOVE      ZERO,OVRCD
          READ      CCSGKMA2,KEY55;CCGKKEY,CCGKDES,CCGKSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCGK2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSGKMA2;CCGKKEY,CCGKDES,CCGKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCGK2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSGKMA2;CCGKKEY,CCGKDES,CCGKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCGK2                                                                         
          UPDATE    CCSGKMA2;CCGKKEY,CCGKDES,CCGKSPA                            
          RETURN
.
WRCCGK2   RESET     KEY55                                                       
          WRITE     CCSGKMA2,KEY55;CCGKKEY,CCGKDES,CCGKSPA                      
          RETURN
.
DECCGK2   RESET     KEY55                                                       
          DELETE    CCSGKMA2,KEY55                                              
          RETURN
.
