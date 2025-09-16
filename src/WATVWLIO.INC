.
. WATVWLIO    
. --------
. Filename     : watvwlaf.dat
.
RSWTVWL1  RESET     KEY9                                                        
          READ      WATVWLA1,KEY9;;                                             
          RETURN
.
RAWTVWL1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      WATVWLA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTVWL1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      WATVWLA1,KEY9;WTVWCONS,WTVWLTYP,WTVWDESC,WTVWWTEL,WTVWWTDC: 
                        WTVWSTAT,WTVWTELE,WTVWSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTVWL1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATVWLA1;WTVWCONS,WTVWLTYP,WTVWDESC,WTVWWTEL,WTVWWTDC:      
                        WTVWSTAT,WTVWTELE,WTVWSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTVWL1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATVWLA1;WTVWCONS,WTVWLTYP,WTVWDESC,WTVWWTEL,WTVWWTDC:      
                        WTVWSTAT,WTVWTELE,WTVWSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTVWL1                                                                        
          UPDATE    WATVWLA1;WTVWCONS,WTVWLTYP,WTVWDESC,WTVWWTEL,WTVWWTDC:      
                        WTVWSTAT,WTVWTELE,WTVWSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTVWL1  RESET     KEY9                                                        
          WRITE     WATVWLA1,KEY9;WTVWCONS,WTVWLTYP,WTVWDESC,WTVWWTEL,WTVWWTDC: 
                        WTVWSTAT,WTVWTELE,WTVWSPAR                              
          RETURN
.
DEWTVWL1  RESET     KEY9                                                        
          DELETE    WATVWLA1,KEY9                                               
          RETURN
.
RLWTVWL1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READL     WATVWLA1,KEY9;WTVWCONS,WTVWLTYP,WTVWDESC,WTVWWTEL,WTVWWTDC: 
                        WTVWSTAT,WTVWTELE,WTVWSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTVWL1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATVWLA1;WTVWCONS,WTVWLTYP,WTVWDESC,WTVWWTEL,WTVWWTDC:      
                        WTVWSTAT,WTVWTELE,WTVWSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTVWL1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATVWLA1;WTVWCONS,WTVWLTYP,WTVWDESC,WTVWWTEL,WTVWWTDC:      
                        WTVWSTAT,WTVWTELE,WTVWSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTVWL1  RESET     KEY9                                                        
          UNLOCK    WATVWLA1                                                    
          RETURN
.
RSWTVWL2  RESET     KEY9                                                        
          READ      WATVWLA2,KEY9;;                                             
          RETURN
.
RAWTVWL2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      WATVWLA2,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTVWL2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      WATVWLA2,KEY9;WTVWCONS,WTVWLTYP,WTVWDESC,WTVWWTEL,WTVWWTDC: 
                        WTVWSTAT,WTVWTELE,WTVWSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTVWL2                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATVWLA2;WTVWCONS,WTVWLTYP,WTVWDESC,WTVWWTEL,WTVWWTDC:      
                        WTVWSTAT,WTVWTELE,WTVWSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTVWL2                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATVWLA2;WTVWCONS,WTVWLTYP,WTVWDESC,WTVWWTEL,WTVWWTDC:      
                        WTVWSTAT,WTVWTELE,WTVWSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTVWL2                                                                        
          UPDATE    WATVWLA2;WTVWCONS,WTVWLTYP,WTVWDESC,WTVWWTEL,WTVWWTDC:      
                        WTVWSTAT,WTVWTELE,WTVWSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTVWL2  RESET     KEY9                                                        
          WRITE     WATVWLA2,KEY9;WTVWCONS,WTVWLTYP,WTVWDESC,WTVWWTEL,WTVWWTDC: 
                        WTVWSTAT,WTVWTELE,WTVWSPAR                              
          RETURN
.
DEWTVWL2  RESET     KEY9                                                        
          DELETE    WATVWLA2,KEY9                                               
          RETURN
.
RLWTVWL2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READL     WATVWLA2,KEY9;WTVWCONS,WTVWLTYP,WTVWDESC,WTVWWTEL,WTVWWTDC: 
                        WTVWSTAT,WTVWTELE,WTVWSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTVWL2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATVWLA2;WTVWCONS,WTVWLTYP,WTVWDESC,WTVWWTEL,WTVWWTDC:      
                        WTVWSTAT,WTVWTELE,WTVWSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTVWL2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATVWLA2;WTVWCONS,WTVWLTYP,WTVWDESC,WTVWWTEL,WTVWWTDC:      
                        WTVWSTAT,WTVWTELE,WTVWSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTVWL2  RESET     KEY9                                                        
          UNLOCK    WATVWLA2                                                    
          RETURN
.
