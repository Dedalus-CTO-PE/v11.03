.
. CEAVBMIO    
. --------
. Filename     : ceavbmaf.dat
.
RSCEVB1   RESET     KEY13                                                       
          READ      CEAVBMA1,KEY13;;                                            
          RETURN
.
RACEVB1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CEAVBMA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEVB1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CEAVBMA1,KEY13;CEVBDTY,CEVBSPC,CEVBPSC,CEVBQTY,CEVBSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEVB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEAVBMA1;CEVBDTY,CEVBSPC,CEVBPSC,CEVBQTY,CEVBSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEVB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEAVBMA1;CEVBDTY,CEVBSPC,CEVBPSC,CEVBQTY,CEVBSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEVB1                                                                         
          UPDATE    CEAVBMA1;CEVBDTY,CEVBSPC,CEVBPSC,CEVBQTY,CEVBSPA            
          RETURN
.
WRCEVB1   RESET     KEY13                                                       
          WRITE     CEAVBMA1,KEY13;CEVBDTY,CEVBSPC,CEVBPSC,CEVBQTY,CEVBSPA      
          RETURN
.
DECEVB1   RESET     KEY13                                                       
          DELETE    CEAVBMA1,KEY13                                              
          RETURN
.
