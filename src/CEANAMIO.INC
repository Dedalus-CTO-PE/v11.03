.
. CEANAMIO    
. --------
. Filename     : ceanamaf.dat
.
RSCENA1   RESET     KEY13                                                       
          READ      CEANAMA1,KEY13;;                                            
          RETURN
.
RACENA1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CEANAMA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCENA1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CEANAMA1,KEY13;CENAWRD,CENASPC,CENAPSC,CENAHQTY,CENADQTY:   
                        CENASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCENA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEANAMA1;CENAWRD,CENASPC,CENAPSC,CENAHQTY,CENADQTY:         
                        CENASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCENA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEANAMA1;CENAWRD,CENASPC,CENAPSC,CENAHQTY,CENADQTY:         
                        CENASPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCENA1                                                                         
          UPDATE    CEANAMA1;CENAWRD,CENASPC,CENAPSC,CENAHQTY,CENADQTY:         
                        CENASPA                                                 
          RETURN
.
WRCENA1   RESET     KEY13                                                       
          WRITE     CEANAMA1,KEY13;CENAWRD,CENASPC,CENAPSC,CENAHQTY,CENADQTY:   
                        CENASPA                                                 
          RETURN
.
DECENA1   RESET     KEY13                                                       
          DELETE    CEANAMA1,KEY13                                              
          RETURN
.
