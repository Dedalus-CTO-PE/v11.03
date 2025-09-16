.
. WEBLIDIO    
. --------
. Filename     : weblidaf.dat
.
RSWBLI1   RESET     KEY8                                                        
          READ      WEBLIDA1,KEY8;;                                             
          RETURN
.
RAWBLI1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBLIDA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBLI1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBLIDA1,KEY8;WBLILKID,WBLIDESC,WBLISPAR                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBLI1                                                                         
          MOVE      ZERO,OVRCD
          READKS    WEBLIDA1;WBLILKID,WBLIDESC,WBLISPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBLI1                                                                         
          MOVE      ZERO,OVRCD
          READKP    WEBLIDA1;WBLILKID,WBLIDESC,WBLISPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBLI1                                                                         
          UPDATE    WEBLIDA1;WBLILKID,WBLIDESC,WBLISPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBLI1   RESET     KEY8                                                        
          WRITE     WEBLIDA1,KEY8;WBLILKID,WBLIDESC,WBLISPAR                    
          RETURN
.
DEWBLI1   RESET     KEY8                                                        
          DELETE    WEBLIDA1,KEY8                                               
          RETURN
.
RLWBLI1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     WEBLIDA1,KEY8;WBLILKID,WBLIDESC,WBLISPAR                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBLI1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   WEBLIDA1;WBLILKID,WBLIDESC,WBLISPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBLI1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   WEBLIDA1;WBLILKID,WBLIDESC,WBLISPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBLI1   RESET     KEY8                                                        
          UNLOCK    WEBLIDA1                                                    
          RETURN
.
