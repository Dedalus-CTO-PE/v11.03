.
. CEANBMIO    
. --------
. Filename     : ceanbmaf.dat
.
RSCENB1   RESET     KEY6                                                        
          READ      CEANBMA1,KEY6;;                                             
          RETURN
.
RACENB1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      CEANBMA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCENB1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      CEANBMA1,KEY6;CENBATY,CENBWRD,CENBFC1,CENBFC2,CENBFC3:      
                        CENBFC4,CENBFC5,CENBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCENB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEANBMA1;CENBATY,CENBWRD,CENBFC1,CENBFC2,CENBFC3:           
                        CENBFC4,CENBFC5,CENBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCENB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEANBMA1;CENBATY,CENBWRD,CENBFC1,CENBFC2,CENBFC3:           
                        CENBFC4,CENBFC5,CENBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCENB1                                                                         
          UPDATE    CEANBMA1;CENBATY,CENBWRD,CENBFC1,CENBFC2,CENBFC3:           
                        CENBFC4,CENBFC5,CENBSPA                                 
          RETURN
.
WRCENB1   RESET     KEY6                                                        
          WRITE     CEANBMA1,KEY6;CENBATY,CENBWRD,CENBFC1,CENBFC2,CENBFC3:      
                        CENBFC4,CENBFC5,CENBSPA                                 
          RETURN
.
DECENB1   RESET     KEY6                                                        
          DELETE    CEANBMA1,KEY6                                               
          RETURN
.
RSCENB2   RESET     KEY6                                                        
          READ      CEANBMA2,KEY6;;                                             
          RETURN
.
RACENB2   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      CEANBMA2,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCENB2   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      CEANBMA2,KEY6;CENBATY,CENBWRD,CENBFC1,CENBFC2,CENBFC3:      
                        CENBFC4,CENBFC5,CENBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCENB2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEANBMA2;CENBATY,CENBWRD,CENBFC1,CENBFC2,CENBFC3:           
                        CENBFC4,CENBFC5,CENBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCENB2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEANBMA2;CENBATY,CENBWRD,CENBFC1,CENBFC2,CENBFC3:           
                        CENBFC4,CENBFC5,CENBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCENB2                                                                         
          UPDATE    CEANBMA2;CENBATY,CENBWRD,CENBFC1,CENBFC2,CENBFC3:           
                        CENBFC4,CENBFC5,CENBSPA                                 
          RETURN
.
WRCENB2   RESET     KEY6                                                        
          WRITE     CEANBMA2,KEY6;CENBATY,CENBWRD,CENBFC1,CENBFC2,CENBFC3:      
                        CENBFC4,CENBFC5,CENBSPA                                 
          RETURN
.
DECENB2   RESET     KEY6                                                        
          DELETE    CEANBMA2,KEY6                                               
          RETURN
.
