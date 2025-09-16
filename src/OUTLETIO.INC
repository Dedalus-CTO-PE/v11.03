.
. OUTLETIO    
. --------
. Filename     : outletaf.dat
.
RSOTLET1  RESET     KEY6                                                        
          READ      OUTLETR1,KEY6;;                                             
          RETURN
.
RAOTLET1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      OUTLETR1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTLET1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      OUTLETR1,KEY6;DOTLTLTN,DOTLTLIN,OTLTTEXT,OTLTLVAR,OTLTPBOT: 
                        OTLTPTOP,OTLTPPAG,OTLTPTAB,OTLTMMFN,OTLTTYPE,OTLTACTV:
                        OTLTCOMM,OTLTCONF,OTLTSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DOTLTLTN,OTLTLTNO                                           
          MOVE      DOTLTLIN,OTLTLINO                                           
          RETURN
.
RKOTLET1  MOVE      ZERO,OVRCD
          READKS    OUTLETR1;DOTLTLTN,DOTLTLIN,OTLTTEXT,OTLTLVAR,OTLTPBOT:      
                        OTLTPTOP,OTLTPPAG,OTLTPTAB,OTLTMMFN,OTLTTYPE,OTLTACTV:
                        OTLTCOMM,OTLTCONF,OTLTSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DOTLTLTN,OTLTLTNO                                           
          MOVE      DOTLTLIN,OTLTLINO                                           
          RETURN
.
RPOTLET1  MOVE      ZERO,OVRCD
          READKP    OUTLETR1;DOTLTLTN,DOTLTLIN,OTLTTEXT,OTLTLVAR,OTLTPBOT:      
                        OTLTPTOP,OTLTPPAG,OTLTPTAB,OTLTMMFN,OTLTTYPE,OTLTACTV:
                        OTLTCOMM,OTLTCONF,OTLTSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DOTLTLTN,OTLTLTNO                                           
          MOVE      DOTLTLIN,OTLTLINO                                           
          RETURN
.
UPOTLET1  MOVE      OTLTLTNO,DOTLTLTN                                           
          MOVE      OTLTLINO,DOTLTLIN                                           
          UPDATE    OUTLETR1;DOTLTLTN,DOTLTLIN,OTLTTEXT,OTLTLVAR,OTLTPBOT:      
                        OTLTPTOP,OTLTPPAG,OTLTPTAB,OTLTMMFN,OTLTTYPE,OTLTACTV:
                        OTLTCOMM,OTLTCONF,OTLTSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTLET1  RESET     KEY6                                                        
          MOVE      OTLTLTNO,DOTLTLTN                                           
          MOVE      OTLTLINO,DOTLTLIN                                           
          WRITE     OUTLETR1,KEY6;DOTLTLTN,DOTLTLIN,OTLTTEXT,OTLTLVAR,OTLTPBOT: 
                        OTLTPTOP,OTLTPPAG,OTLTPTAB,OTLTMMFN,OTLTTYPE,OTLTACTV:
                        OTLTCOMM,OTLTCONF,OTLTSPAR   
          RETURN
.
DEOTLET1  RESET     KEY6                                                        
          DELETE    OUTLETR1,KEY6                                               
          RETURN
.
RLOTLET1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READL     OUTLETR1,KEY6;DOTLTLTN,DOTLTLIN,OTLTTEXT,OTLTLVAR,OTLTPBOT: 
                        OTLTPTOP,OTLTPPAG,OTLTPTAB,OTLTMMFN,OTLTTYPE,OTLTACTV:
                        OTLTCOMM,OTLTCONF,OTLTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOTLTLTN,OTLTLTNO                                           
          MOVE      DOTLTLIN,OTLTLINO                                           
          RETURN
.
KLOTLET1  MOVE      ZERO,OVRCD
          READLKS   OUTLETR1;DOTLTLTN,DOTLTLIN,OTLTTEXT,OTLTLVAR,OTLTPBOT:      
                        OTLTPTOP,OTLTPPAG,OTLTPTAB,OTLTMMFN,OTLTTYPE,OTLTACTV:
                        OTLTCOMM,OTLTCONF,OTLTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOTLTLTN,OTLTLTNO                                           
          MOVE      DOTLTLIN,OTLTLINO                                           
          RETURN
.
PLOTLET1  MOVE      ZERO,OVRCD
          READLKP   OUTLETR1;DOTLTLTN,DOTLTLIN,OTLTTEXT,OTLTLVAR,OTLTPBOT:      
                        OTLTPTOP,OTLTPPAG,OTLTPTAB,OTLTMMFN,OTLTTYPE,OTLTACTV:
                        OTLTCOMM,OTLTCONF,OTLTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOTLTLTN,OTLTLTNO                                           
          MOVE      DOTLTLIN,OTLTLINO                                           
          RETURN
.
ULOTLET1
UUOTLET1  RESET     KEY6                                                        
          UNLOCK    OUTLETR1                                                    
          RETURN
.
RSOTLET2  RESET     KEY6                                                        
          READ      OUTLETR2,KEY6;;                                             
          RETURN
.
RAOTLET2  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      OUTLETR2,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTLET2  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      OUTLETR2,KEY6;DOTLTLTN,DOTLTLIN,OTLTTEXT,OTLTLVAR,OTLTPBOT: 
                        OTLTPTOP,OTLTPPAG,OTLTPTAB,OTLTMMFN,OTLTTYPE,OTLTACTV:
                        OTLTCOMM,OTLTCONF,OTLTSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DOTLTLTN,OTLTLTNO                                           
          MOVE      DOTLTLIN,OTLTLINO                                           
          RETURN
.
RKOTLET2  MOVE      ZERO,OVRCD
          READKS    OUTLETR2;DOTLTLTN,DOTLTLIN,OTLTTEXT,OTLTLVAR,OTLTPBOT:      
                        OTLTPTOP,OTLTPPAG,OTLTPTAB,OTLTMMFN,OTLTTYPE,OTLTACTV:
                        OTLTCOMM,OTLTCONF,OTLTSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DOTLTLTN,OTLTLTNO                                           
          MOVE      DOTLTLIN,OTLTLINO                                           
          RETURN
.
RPOTLET2  MOVE      ZERO,OVRCD
          READKP    OUTLETR2;DOTLTLTN,DOTLTLIN,OTLTTEXT,OTLTLVAR,OTLTPBOT:      
                        OTLTPTOP,OTLTPPAG,OTLTPTAB,OTLTMMFN,OTLTTYPE,OTLTACTV:
                        OTLTCOMM,OTLTCONF,OTLTSPAR   
          GOTO      OVERCOND IF OVER
          MOVE      DOTLTLTN,OTLTLTNO                                           
          MOVE      DOTLTLIN,OTLTLINO                                           
          RETURN
.
UPOTLET2  MOVE      OTLTLTNO,DOTLTLTN                                           
          MOVE      OTLTLINO,DOTLTLIN                                           
          UPDATE    OUTLETR2;DOTLTLTN,DOTLTLIN,OTLTTEXT,OTLTLVAR,OTLTPBOT:      
                        OTLTPTOP,OTLTPPAG,OTLTPTAB,OTLTMMFN,OTLTTYPE,OTLTACTV:
                        OTLTCOMM,OTLTCONF,OTLTSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTLET2  RESET     KEY6                                                        
          MOVE      OTLTLTNO,DOTLTLTN                                           
          MOVE      OTLTLINO,DOTLTLIN                                           
          WRITE     OUTLETR2,KEY6;DOTLTLTN,DOTLTLIN,OTLTTEXT,OTLTLVAR,OTLTPBOT: 
                        OTLTPTOP,OTLTPPAG,OTLTPTAB,OTLTMMFN,OTLTTYPE,OTLTACTV:
                        OTLTCOMM,OTLTCONF,OTLTSPAR   
          RETURN
.
DEOTLET2  RESET     KEY6                                                        
          DELETE    OUTLETR2,KEY6                                               
          RETURN
.
RLOTLET2  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READL     OUTLETR2,KEY6;DOTLTLTN,DOTLTLIN,OTLTTEXT,OTLTLVAR,OTLTPBOT: 
                        OTLTPTOP,OTLTPPAG,OTLTPTAB,OTLTMMFN,OTLTTYPE,OTLTACTV:
                        OTLTCOMM,OTLTCONF,OTLTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOTLTLTN,OTLTLTNO                                           
          MOVE      DOTLTLIN,OTLTLINO                                           
          RETURN
.
KLOTLET2  MOVE      ZERO,OVRCD
          READLKS   OUTLETR2;DOTLTLTN,DOTLTLIN,OTLTTEXT,OTLTLVAR,OTLTPBOT:      
                        OTLTPTOP,OTLTPPAG,OTLTPTAB,OTLTMMFN,OTLTTYPE,OTLTACTV:
                        OTLTCOMM,OTLTCONF,OTLTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOTLTLTN,OTLTLTNO                                           
          MOVE      DOTLTLIN,OTLTLINO                                           
          RETURN
.
PLOTLET2  MOVE      ZERO,OVRCD
          READLKP   OUTLETR2;DOTLTLTN,DOTLTLIN,OTLTTEXT,OTLTLVAR,OTLTPBOT:      
                        OTLTPTOP,OTLTPPAG,OTLTPTAB,OTLTMMFN,OTLTTYPE,OTLTACTV:
                        OTLTCOMM,OTLTCONF,OTLTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOTLTLTN,OTLTLTNO                                           
          MOVE      DOTLTLIN,OTLTLINO                                           
          RETURN
.
UUOTLET2  RESET     KEY6                                                        
          UNLOCK    OUTLETR2                                                    
          RETURN
.
