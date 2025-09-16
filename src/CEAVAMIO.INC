.
. CEAVAMIO    
. --------
. Filename     : ceavamaf.dat
.
RSCEVA1   RESET     KEY16                                                       
          READ      CEAVAMA1,KEY16;;                                            
          RETURN
.
RACEVA1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      CEAVAMA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEVA1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      CEAVAMA1,KEY16;CEVADOC,CEVASPC,CEVAPSC,CEVAQTY,CEVASPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEVA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEAVAMA1;CEVADOC,CEVASPC,CEVAPSC,CEVAQTY,CEVASPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEVA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEAVAMA1;CEVADOC,CEVASPC,CEVAPSC,CEVAQTY,CEVASPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEVA1                                                                         
          UPDATE    CEAVAMA1;CEVADOC,CEVASPC,CEVAPSC,CEVAQTY,CEVASPA            
          RETURN
.
WRCEVA1   RESET     KEY16                                                       
          WRITE     CEAVAMA1,KEY16;CEVADOC,CEVASPC,CEVAPSC,CEVAQTY,CEVASPA      
          RETURN
.
DECEVA1   RESET     KEY16                                                       
          DELETE    CEAVAMA1,KEY16                                              
          RETURN
.
