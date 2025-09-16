.
. CEAMEPIO    
. --------
. Filename     : ceamepaf.dat
.
RSCEME1   RESET     KEY23                                                       
          READ      CEAMEPA1,KEY23;;                                            
          RETURN
.
RACEME1   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      CEAMEPA1,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEME1   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      CEAMEPA1,KEY23;CEMESTY,CEMEKEY,CEMESPC,CEMEPSC,CEMEDOS:     
                        CEMETYQ,CEMEQTY,CEMESPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEME1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEAMEPA1;CEMESTY,CEMEKEY,CEMESPC,CEMEPSC,CEMEDOS:           
                        CEMETYQ,CEMEQTY,CEMESPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEME1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEAMEPA1;CEMESTY,CEMEKEY,CEMESPC,CEMEPSC,CEMEDOS:           
                        CEMETYQ,CEMEQTY,CEMESPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEME1                                                                         
          UPDATE    CEAMEPA1;CEMESTY,CEMEKEY,CEMESPC,CEMEPSC,CEMEDOS:           
                        CEMETYQ,CEMEQTY,CEMESPA                                 
          RETURN
.
WRCEME1   RESET     KEY23                                                       
          WRITE     CEAMEPA1,KEY23;CEMESTY,CEMEKEY,CEMESPC,CEMEPSC,CEMEDOS:     
                        CEMETYQ,CEMEQTY,CEMESPA                                 
          RETURN
.
DECEME1   RESET     KEY23                                                       
          DELETE    CEAMEPA1,KEY23                                              
          RETURN
.
