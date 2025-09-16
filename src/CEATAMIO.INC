.
. CEATAMIO    
. --------
. Filename     : ceatamaf.dat
.
RSCETA1   RESET     KEY13                                                       
          READ      CEATAMA1,KEY13;;                                            
          RETURN
.
RACETA1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CEATAMA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCETA1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CEATAMA1,KEY13;CETABAND,CETASPC,CETAPSC,CETAPQTY,CETASQTY:  
                        CETASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCETA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEATAMA1;CETABAND,CETASPC,CETAPSC,CETAPQTY,CETASQTY:        
                        CETASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCETA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEATAMA1;CETABAND,CETASPC,CETAPSC,CETAPQTY,CETASQTY:        
                        CETASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCETA1                                                                         
          UPDATE    CEATAMA1;CETABAND,CETASPC,CETAPSC,CETAPQTY,CETASQTY:        
                        CETASPA                                                 
          RETURN
.
WRCETA1   RESET     KEY13                                                       
          WRITE     CEATAMA1,KEY13;CETABAND,CETASPC,CETAPSC,CETAPQTY,CETASQTY:  
                        CETASPA                                                 
          RETURN
.
DECETA1   RESET     KEY13                                                       
          DELETE    CEATAMA1,KEY13                                              
          RETURN
.
