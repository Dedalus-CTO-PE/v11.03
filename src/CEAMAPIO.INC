.
. CEAMAPIO    
. --------
. Filename     : ceamapaf.dat
.
RSCEMA1   RESET     KEY13                                                       
          READ      CEAMAPA1,KEY13;;                                            
          RETURN
.
RACEMA1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CEAMAPA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEMA1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CEAMAPA1,KEY13;CEMAMGP,CEMASPC,CEMAPSC,CEMADQTY,CEMATQTY:   
                        CEMASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEMA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEAMAPA1;CEMAMGP,CEMASPC,CEMAPSC,CEMADQTY,CEMATQTY:         
                        CEMASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEMA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEAMAPA1;CEMAMGP,CEMASPC,CEMAPSC,CEMADQTY,CEMATQTY:         
                        CEMASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEMA1                                                                         
          UPDATE    CEAMAPA1;CEMAMGP,CEMASPC,CEMAPSC,CEMADQTY,CEMATQTY:         
                        CEMASPA                                                 
          RETURN
.
WRCEMA1   RESET     KEY13                                                       
          WRITE     CEAMAPA1,KEY13;CEMAMGP,CEMASPC,CEMAPSC,CEMADQTY,CEMATQTY:   
                        CEMASPA                                                 
          RETURN
.
DECEMA1   RESET     KEY13                                                       
          DELETE    CEAMAPA1,KEY13                                              
          RETURN
.
