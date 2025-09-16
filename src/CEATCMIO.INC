.
. CEATCMIO    
. --------
. Filename     : ceatcmaf.dat
.
RSCETC1   RESET     KEY13                                                       
          READ      CEATCMA1,KEY13;;                                            
          RETURN
.
RACETC1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CEATCMA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCETC1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CEATCMA1,KEY13;CETCNT,CETCSPC,CETCPSC,CETCSTM,CETCETM:      
                        CETCSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCETC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEATCMA1;CETCNT,CETCSPC,CETCPSC,CETCSTM,CETCETM:            
                        CETCSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCETC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEATCMA1;CETCNT,CETCSPC,CETCPSC,CETCSTM,CETCETM:            
                        CETCSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCETC1                                                                         
          UPDATE    CEATCMA1;CETCNT,CETCSPC,CETCPSC,CETCSTM,CETCETM:            
                        CETCSPA                                                 
          RETURN
.
WRCETC1   RESET     KEY13                                                       
          WRITE     CEATCMA1,KEY13;CETCNT,CETCSPC,CETCPSC,CETCSTM,CETCETM:      
                        CETCSPA                                                 
          RETURN
.
DECETC1   RESET     KEY13                                                       
          DELETE    CEATCMA1,KEY13                                              
          RETURN
.
