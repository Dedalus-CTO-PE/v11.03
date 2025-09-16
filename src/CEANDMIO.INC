.
. CEANDMIO    
. --------
. Filename     : ceandmaf.dat
.
RSCEND1   RESET     KEY4                                                        
          READ      CEANDMA1,KEY4;;                                             
          RETURN
.
RACEND1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CEANDMA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEND1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CEANDMA1,KEY4;CENDDRGC,CENDFC1,CENDFC2,CENDFC3,CENDFC4:     
                        CENDFC5,CENDSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEND1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEANDMA1;CENDDRGC,CENDFC1,CENDFC2,CENDFC3,CENDFC4:          
                        CENDFC5,CENDSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEND1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEANDMA1;CENDDRGC,CENDFC1,CENDFC2,CENDFC3,CENDFC4:          
                        CENDFC5,CENDSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEND1                                                                         
          UPDATE    CEANDMA1;CENDDRGC,CENDFC1,CENDFC2,CENDFC3,CENDFC4:          
                        CENDFC5,CENDSPA                                         
          RETURN
.
WRCEND1   RESET     KEY4                                                        
          WRITE     CEANDMA1,KEY4;CENDDRGC,CENDFC1,CENDFC2,CENDFC3,CENDFC4:     
                        CENDFC5,CENDSPA                                         
          RETURN
.
DECEND1   RESET     KEY4                                                        
          DELETE    CEANDMA1,KEY4                                               
          RETURN
.
