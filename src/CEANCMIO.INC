.
. CEANCMIO    
. --------
. Filename     : ceancmaf.dat
.
RSCENC1   RESET     KEY13                                                       
          READ      CEANCMA1,KEY13;;                                            
          RETURN
.
RACENC1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CEANCMA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCENC1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CEANCMA1,KEY13;CENCBTY,CENCSPC,CENCPSC,CENCQTY,CENCSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCENC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEANCMA1;CENCBTY,CENCSPC,CENCPSC,CENCQTY,CENCSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCENC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEANCMA1;CENCBTY,CENCSPC,CENCPSC,CENCQTY,CENCSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCENC1                                                                         
          UPDATE    CEANCMA1;CENCBTY,CENCSPC,CENCPSC,CENCQTY,CENCSPA            
          RETURN
.
WRCENC1   RESET     KEY13                                                       
          WRITE     CEANCMA1,KEY13;CENCBTY,CENCSPC,CENCPSC,CENCQTY,CENCSPA      
          RETURN
.
DECENC1   RESET     KEY13                                                       
          DELETE    CEANCMA1,KEY13                                              
          RETURN
.
