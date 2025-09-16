.
. WEBRGMIO    
. --------
. Filename     : webrgmaf.dat
.
RSWBRGM1  RESET     KEY5                                                        
          READ      WEBRGMA1,KEY5;;                                             
          RETURN
.
RAWBRGM1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      WEBRGMA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBRGM1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      WEBRGMA1,KEY5;WBRGGRID,WBRGDESC,WBRGSPAR                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBRGM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WEBRGMA1;WBRGGRID,WBRGDESC,WBRGSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBRGM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WEBRGMA1;WBRGGRID,WBRGDESC,WBRGSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBRGM1                                                                        
          UPDATE    WEBRGMA1;WBRGGRID,WBRGDESC,WBRGSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBRGM1  RESET     KEY5                                                        
          WRITE     WEBRGMA1,KEY5;WBRGGRID,WBRGDESC,WBRGSPAR                    
          RETURN
.
DEWBRGM1  RESET     KEY5                                                        
          DELETE    WEBRGMA1,KEY5                                               
          RETURN
.
RLWBRGM1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READL     WEBRGMA1,KEY5;WBRGGRID,WBRGDESC,WBRGSPAR                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBRGM1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WEBRGMA1;WBRGGRID,WBRGDESC,WBRGSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBRGM1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WEBRGMA1;WBRGGRID,WBRGDESC,WBRGSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBRGM1  RESET     KEY5                                                        
          UNLOCK    WEBRGMA1                                                    
          RETURN
.
