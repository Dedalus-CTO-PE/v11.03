.
. CCSWSEIO    
. --------
. Filename     : ccswseaf.dat
.
RSCCWS1   RESET     KEY14                                                       
          READ      CCSWSEA1,KEY14;;                                            
          RETURN
.
RACCWS1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CCSWSEA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCWS1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CCSWSEA1,KEY14;CCWSEID,CCWSWPC,CCWSSLV,CCWSSCD,CCWSTEM:     
                        CCWSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCWS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSWSEA1;CCWSEID,CCWSWPC,CCWSSLV,CCWSSCD,CCWSTEM:           
                        CCWSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCWS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSWSEA1;CCWSEID,CCWSWPC,CCWSSLV,CCWSSCD,CCWSTEM:           
                        CCWSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCWS1                                                                         
          UPDATE    CCSWSEA1;CCWSEID,CCWSWPC,CCWSSLV,CCWSSCD,CCWSTEM:           
                        CCWSSPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCCWS1   RESET     KEY14                                                       
          WRITE     CCSWSEA1,KEY14;CCWSEID,CCWSWPC,CCWSSLV,CCWSSCD,CCWSTEM:     
                        CCWSSPA                                                 
          RETURN
.
DECCWS1   RESET     KEY14                                                       
          DELETE    CCSWSEA1,KEY14                                              
          RETURN
.
RLCCWS1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     CCSWSEA1,KEY14;CCWSEID,CCWSWPC,CCWSSLV,CCWSSCD,CCWSTEM:     
                        CCWSSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCCWS1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CCSWSEA1;CCWSEID,CCWSWPC,CCWSSLV,CCWSSCD,CCWSTEM:           
                        CCWSSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCCWS1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CCSWSEA1;CCWSEID,CCWSWPC,CCWSSLV,CCWSSCD,CCWSTEM:           
                        CCWSSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCCWS1   RESET     KEY14                                                       
          UNLOCK    CCSWSEA1                                                    
          RETURN
.
RSCCWS2   RESET     KEY14                                                       
          READ      CCSWSEA2,KEY14;;                                            
          RETURN
.
RACCWS2   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CCSWSEA2,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCWS2   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      CCSWSEA2,KEY14;CCWSEID,CCWSWPC,CCWSSLV,CCWSSCD,CCWSTEM:     
                        CCWSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCWS2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSWSEA2;CCWSEID,CCWSWPC,CCWSSLV,CCWSSCD,CCWSTEM:           
                        CCWSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCWS2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSWSEA2;CCWSEID,CCWSWPC,CCWSSLV,CCWSSCD,CCWSTEM:           
                        CCWSSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCWS2                                                                         
          UPDATE    CCSWSEA2;CCWSEID,CCWSWPC,CCWSSLV,CCWSSCD,CCWSTEM:           
                        CCWSSPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCCWS2   RESET     KEY14                                                       
          WRITE     CCSWSEA2,KEY14;CCWSEID,CCWSWPC,CCWSSLV,CCWSSCD,CCWSTEM:     
                        CCWSSPA                                                 
          RETURN
.
DECCWS2   RESET     KEY14                                                       
          DELETE    CCSWSEA2,KEY14                                              
          RETURN
.
RLCCWS2   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     CCSWSEA2,KEY14;CCWSEID,CCWSWPC,CCWSSLV,CCWSSCD,CCWSTEM:     
                        CCWSSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCCWS2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CCSWSEA2;CCWSEID,CCWSWPC,CCWSSLV,CCWSSCD,CCWSTEM:           
                        CCWSSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCCWS2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CCSWSEA2;CCWSEID,CCWSWPC,CCWSSLV,CCWSSCD,CCWSTEM:           
                        CCWSSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCCWS2   RESET     KEY14                                                       
          UNLOCK    CCSWSEA2                                                    
          RETURN
.
