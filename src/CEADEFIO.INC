.
. CEADEFIO    
. --------
. Filename     : ceadefaf.dat
.
RSCEDE1   RESET     KEY11                                                       
          READ      CEADEFA1,KEY11;;                                            
          RETURN
.
RACEDE1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      CEADEFA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEDE1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      CEADEFA1,KEY11;CEDEDTY,CEDESPC,CEDEPSC,CEDEQTY1,CEDEQTY2:   
                        CEDESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEDE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEADEFA1;CEDEDTY,CEDESPC,CEDEPSC,CEDEQTY1,CEDEQTY2:         
                        CEDESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEDE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEADEFA1;CEDEDTY,CEDESPC,CEDEPSC,CEDEQTY1,CEDEQTY2:         
                        CEDESPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEDE1                                                                         
          UPDATE    CEADEFA1;CEDEDTY,CEDESPC,CEDEPSC,CEDEQTY1,CEDEQTY2:         
                        CEDESPA                                                 
          RETURN
.
WRCEDE1   RESET     KEY11                                                       
          WRITE     CEADEFA1,KEY11;CEDEDTY,CEDESPC,CEDEPSC,CEDEQTY1,CEDEQTY2:   
                        CEDESPA                                                 
          RETURN
.
DECEDE1   RESET     KEY11                                                       
          DELETE    CEADEFA1,KEY11                                              
          RETURN
.
