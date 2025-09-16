.
. ALLLETIO    
. --------
. Filename     : allletaf.dat
.
RSALLET1  RESET     KEY6                                                        
          READ      ALLLETR1,KEY6;;                                             
          RETURN
.
RAALLET1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      ALLLETR1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALLET1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      ALLLETR1,KEY6;DALLTLTN,DALLTLIN,ALLTTEXT,ALLTLVAR,ALLTPBOT: 
                        ALLTPTOP,ALLTPPAG,ALLTPTAB,ALLTMMFN,ALLTTYPE,ALLTACTV:
                        ALLTSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DALLTLTN,ALLTLTNO                                           
          MOVE      DALLTLIN,ALLTLINO                                           
          RETURN
.
RKALLET1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLLETR1;DALLTLTN,DALLTLIN,ALLTTEXT,ALLTLVAR,ALLTPBOT:      
                        ALLTPTOP,ALLTPPAG,ALLTPTAB,ALLTMMFN,ALLTTYPE,ALLTACTV:
                        ALLTSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DALLTLTN,ALLTLTNO                                           
          MOVE      DALLTLIN,ALLTLINO                                           
          RETURN
.
RPALLET1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLLETR1;DALLTLTN,DALLTLIN,ALLTTEXT,ALLTLVAR,ALLTPBOT:      
                        ALLTPTOP,ALLTPPAG,ALLTPTAB,ALLTMMFN,ALLTTYPE,ALLTACTV:
                        ALLTSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DALLTLTN,ALLTLTNO                                           
          MOVE      DALLTLIN,ALLTLINO                                           
          RETURN
.
UPALLET1                                                                        
          MOVE      ALLTLTNO,DALLTLTN                                           
          MOVE      ALLTLINO,DALLTLIN                                           
          UPDATE    ALLLETR1;DALLTLTN,DALLTLIN,ALLTTEXT,ALLTLVAR,ALLTPBOT:      
                        ALLTPTOP,ALLTPPAG,ALLTPTAB,ALLTMMFN,ALLTTYPE,ALLTACTV:
                        ALLTSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALLET1  RESET     KEY6                                                        
          MOVE      ALLTLTNO,DALLTLTN                                           
          MOVE      ALLTLINO,DALLTLIN                                           
          WRITE     ALLLETR1,KEY6;DALLTLTN,DALLTLIN,ALLTTEXT,ALLTLVAR,ALLTPBOT: 
                        ALLTPTOP,ALLTPPAG,ALLTPTAB,ALLTMMFN,ALLTTYPE,ALLTACTV:
                        ALLTSPAR   
          RETURN
.
DEALLET1  RESET     KEY6                                                        
          DELETE    ALLLETR1,KEY6                                               
          RETURN
.
RLALLET1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READL     ALLLETR1,KEY6;DALLTLTN,DALLTLIN,ALLTTEXT,ALLTLVAR,ALLTPBOT: 
                        ALLTPTOP,ALLTPPAG,ALLTPTAB,ALLTMMFN,ALLTTYPE,ALLTACTV:
                        ALLTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DALLTLTN,ALLTLTNO                                           
          MOVE      DALLTLIN,ALLTLINO                                           
          RETURN
.
KLALLET1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLLETR1;DALLTLTN,DALLTLIN,ALLTTEXT,ALLTLVAR,ALLTPBOT:      
                        ALLTPTOP,ALLTPPAG,ALLTPTAB,ALLTMMFN,ALLTTYPE,ALLTACTV:
                        ALLTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DALLTLTN,ALLTLTNO                                           
          MOVE      DALLTLIN,ALLTLINO                                           
          RETURN
.
PLALLET1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLLETR1;DALLTLTN,DALLTLIN,ALLTTEXT,ALLTLVAR,ALLTPBOT:      
                        ALLTPTOP,ALLTPPAG,ALLTPTAB,ALLTMMFN,ALLTTYPE,ALLTACTV:
                        ALLTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DALLTLTN,ALLTLTNO                                           
          MOVE      DALLTLIN,ALLTLINO                                           
          RETURN
.
ULALLET1
UUALLET1  RESET     KEY6                                                        
          UNLOCK    ALLLETR1                                                    
          RETURN
.
RSALLET2  RESET     KEY6                                                        
          READ      ALLLETR2,KEY6;;                                             
          RETURN
.
RAALLET2  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      ALLLETR2,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALLET2  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      ALLLETR2,KEY6;DALLTLTN,DALLTLIN,ALLTTEXT,ALLTLVAR,ALLTPBOT: 
                        ALLTPTOP,ALLTPPAG,ALLTPTAB,ALLTMMFN,ALLTTYPE,ALLTACTV:
                        ALLTSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DALLTLTN,ALLTLTNO                                           
          MOVE      DALLTLIN,ALLTLINO                                           
          RETURN
.
RKALLET2                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLLETR2;DALLTLTN,DALLTLIN,ALLTTEXT,ALLTLVAR,ALLTPBOT:      
                        ALLTPTOP,ALLTPPAG,ALLTPTAB,ALLTMMFN,ALLTTYPE,ALLTACTV:
                        ALLTSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DALLTLTN,ALLTLTNO                                           
          MOVE      DALLTLIN,ALLTLINO                                           
          RETURN
.
RPALLET2                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLLETR2;DALLTLTN,DALLTLIN,ALLTTEXT,ALLTLVAR,ALLTPBOT:      
                        ALLTPTOP,ALLTPPAG,ALLTPTAB,ALLTMMFN,ALLTTYPE,ALLTACTV:
                        ALLTSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DALLTLTN,ALLTLTNO                                           
          MOVE      DALLTLIN,ALLTLINO                                           
          RETURN
.
UPALLET2                                                                        
          MOVE      ALLTLTNO,DALLTLTN                                           
          MOVE      ALLTLINO,DALLTLIN                                           
          UPDATE    ALLLETR2;DALLTLTN,DALLTLIN,ALLTTEXT,ALLTLVAR,ALLTPBOT:      
                        ALLTPTOP,ALLTPPAG,ALLTPTAB,ALLTMMFN,ALLTTYPE,ALLTACTV:
                        ALLTSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALLET2  RESET     KEY6                                                        
          MOVE      ALLTLTNO,DALLTLTN                                           
          MOVE      ALLTLINO,DALLTLIN                                           
          WRITE     ALLLETR2,KEY6;DALLTLTN,DALLTLIN,ALLTTEXT,ALLTLVAR,ALLTPBOT: 
                        ALLTPTOP,ALLTPPAG,ALLTPTAB,ALLTMMFN,ALLTTYPE,ALLTACTV:
                        ALLTSPAR   
          RETURN
.
DEALLET2  RESET     KEY6                                                        
          DELETE    ALLLETR2,KEY6                                               
          RETURN
.
RLALLET2  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READL     ALLLETR2,KEY6;DALLTLTN,DALLTLIN,ALLTTEXT,ALLTLVAR,ALLTPBOT: 
                        ALLTPTOP,ALLTPPAG,ALLTPTAB,ALLTMMFN,ALLTTYPE,ALLTACTV:
                        ALLTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DALLTLTN,ALLTLTNO                                           
          MOVE      DALLTLIN,ALLTLINO                                           
          RETURN
.
KLALLET2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLLETR2;DALLTLTN,DALLTLIN,ALLTTEXT,ALLTLVAR,ALLTPBOT:      
                        ALLTPTOP,ALLTPPAG,ALLTPTAB,ALLTMMFN,ALLTTYPE,ALLTACTV:
                        ALLTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DALLTLTN,ALLTLTNO                                           
          MOVE      DALLTLIN,ALLTLINO                                           
          RETURN
.
PLALLET2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLLETR2;DALLTLTN,DALLTLIN,ALLTTEXT,ALLTLVAR,ALLTPBOT:      
                        ALLTPTOP,ALLTPPAG,ALLTPTAB,ALLTMMFN,ALLTTYPE,ALLTACTV:
                        ALLTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DALLTLTN,ALLTLTNO                                           
          MOVE      DALLTLIN,ALLTLINO                                           
          RETURN
.
UUALLET2  RESET     KEY6                                                        
          UNLOCK    ALLLETR2                                                    
          RETURN
.
