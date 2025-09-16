.
. CEATBMIO    
. --------
. Filename     : ceatbmaf.dat
.
RSCETB1   RESET     KEY19                                                       
          READ      CEATBMA1,KEY19;;                                            
          RETURN
.
RACETB1   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      CEATBMA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCETB1   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      CEATBMA1,KEY19;CETBMBS,CETBSPC,CETBPSC,CETBPQTY,CETBSQTY:   
                        CETBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCETB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEATBMA1;CETBMBS,CETBSPC,CETBPSC,CETBPQTY,CETBSQTY:         
                        CETBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCETB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEATBMA1;CETBMBS,CETBSPC,CETBPSC,CETBPQTY,CETBSQTY:         
                        CETBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCETB1                                                                         
          UPDATE    CEATBMA1;CETBMBS,CETBSPC,CETBPSC,CETBPQTY,CETBSQTY:         
                        CETBSPA                                                 
          RETURN
.
WRCETB1   RESET     KEY19                                                       
          WRITE     CEATBMA1,KEY19;CETBMBS,CETBSPC,CETBPSC,CETBPQTY,CETBSQTY:   
                        CETBSPA                                                 
          RETURN
.
DECETB1   RESET     KEY19                                                       
          DELETE    CEATBMA1,KEY19                                              
          RETURN
.
