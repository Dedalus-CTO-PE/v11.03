.
. SINSECIO    
. --------
. Filename     : sinsecaf.dat
.
RSSISE1   RESET     KEY13                                                       
          READ      SINSECA1,KEY13;;                                            
          RETURN
.
RASISE1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      SINSECA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSISE1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      SINSECA1,KEY13;SISECON,SISELIN,SISECOM,SISESPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSISE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINSECA1;SISECON,SISELIN,SISECOM,SISESPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSISE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINSECA1;SISECON,SISELIN,SISECOM,SISESPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSISE1                                                                         
          UPDATE    SINSECA1;SISECON,SISELIN,SISECOM,SISESPA                    
          RETURN
.
WRSISE1   RESET     KEY13                                                       
          WRITE     SINSECA1,KEY13;SISECON,SISELIN,SISECOM,SISESPA              
          RETURN
.
DESISE1   RESET     KEY13                                                       
          DELETE    SINSECA1,KEY13                                              
          RETURN
.
