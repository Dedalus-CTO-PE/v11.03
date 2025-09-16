.
. CSMCEQIO    
. --------
. Filename     : csmceqaf.dat
.
RSCSCE1   RESET     KEY15                                                       
          READ      CSMCEQA1,KEY15;;                                            
          RETURN
.
RACSCE1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      CSMCEQA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCSCE1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      CSMCEQA1,KEY15;CSCECAT,CSCEDBS,CSCEWAR,CSCEDDES,CSCEWDES:   
                        CSCESTK,CSCESOH,CSCESPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCSCE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CSMCEQA1;CSCECAT,CSCEDBS,CSCEWAR,CSCEDDES,CSCEWDES:         
                        CSCESTK,CSCESOH,CSCESPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCSCE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CSMCEQA1;CSCECAT,CSCEDBS,CSCEWAR,CSCEDDES,CSCEWDES:         
                        CSCESTK,CSCESOH,CSCESPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCSCE1                                                                         
          UPDATE    CSMCEQA1;CSCECAT,CSCEDBS,CSCEWAR,CSCEDDES,CSCEWDES:         
                        CSCESTK,CSCESOH,CSCESPA                                 
          RETURN
.
WRCSCE1   RESET     KEY15                                                       
          WRITE     CSMCEQA1,KEY15;CSCECAT,CSCEDBS,CSCEWAR,CSCEDDES,CSCEWDES:   
                        CSCESTK,CSCESOH,CSCESPA                                 
          RETURN
.
DECSCE1   RESET     KEY15                                                       
          DELETE    CSMCEQA1,KEY15                                              
          RETURN
.
