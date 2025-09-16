.
. CEAMBPIO    
. --------
. Filename     : ceambpaf.dat
.
RSCEMB1   RESET     KEY19                                                       
          READ      CEAMBPA1,KEY19;;                                            
          RETURN
.
RACEMB1   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      CEAMBPA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEMB1   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      CEAMBPA1,KEY19;CEMBMCC,CEMBSPC,CEMBPSC,CEMBDQTY,CEMBTQTY:   
                        CEMBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEMB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEAMBPA1;CEMBMCC,CEMBSPC,CEMBPSC,CEMBDQTY,CEMBTQTY:         
                        CEMBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEMB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEAMBPA1;CEMBMCC,CEMBSPC,CEMBPSC,CEMBDQTY,CEMBTQTY:         
                        CEMBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEMB1                                                                         
          UPDATE    CEAMBPA1;CEMBMCC,CEMBSPC,CEMBPSC,CEMBDQTY,CEMBTQTY:         
                        CEMBSPA                                                 
          RETURN
.
WRCEMB1   RESET     KEY19                                                       
          WRITE     CEAMBPA1,KEY19;CEMBMCC,CEMBSPC,CEMBPSC,CEMBDQTY,CEMBTQTY:   
                        CEMBSPA                                                 
          RETURN
.
DECEMB1   RESET     KEY19                                                       
          DELETE    CEAMBPA1,KEY19                                              
          RETURN
.
