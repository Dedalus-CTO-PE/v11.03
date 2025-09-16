.
. CCSDNOIO    
. --------
. Filename     : ccsdnoaf.dat
.
RSCCDN1   RESET     KEY13                                                       
          READ      CCSDNOA1,KEY13;;                                            
          RETURN
.
RACCDN1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDNOA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCDN1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDNOA1,KEY13;CCDNHCD,CCDNDPT,CCDNLIN,CCDNDAT,CCDNSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCDN1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSDNOA1;CCDNHCD,CCDNDPT,CCDNLIN,CCDNDAT,CCDNSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCDN1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSDNOA1;CCDNHCD,CCDNDPT,CCDNLIN,CCDNDAT,CCDNSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCDN1                                                                         
          UPDATE    CCSDNOA1;CCDNHCD,CCDNDPT,CCDNLIN,CCDNDAT,CCDNSPA            
          RETURN
.
WRCCDN1   RESET     KEY13                                                       
          WRITE     CCSDNOA1,KEY13;CCDNHCD,CCDNDPT,CCDNLIN,CCDNDAT,CCDNSPA      
          RETURN
.
DECCDN1   RESET     KEY13                                                       
          DELETE    CCSDNOA1,KEY13                                              
          RETURN
.
