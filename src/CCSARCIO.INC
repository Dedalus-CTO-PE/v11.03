.
. CCSARCIO    
. --------
. Filename     : ccsarcaf.dat
.
RSCCAR1   RESET     KEY4                                                        
          READ      CCSARCA1,KEY4;;                                             
          RETURN
.
RACCAR1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSARCA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCAR1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSARCA1,KEY4;CCARARC,CCARDES,CCARCMP,CCARDIR,CCARSPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCAR1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSARCA1;CCARARC,CCARDES,CCARCMP,CCARDIR,CCARSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCAR1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSARCA1;CCARARC,CCARDES,CCARCMP,CCARDIR,CCARSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCAR1                                                                         
          UPDATE    CCSARCA1;CCARARC,CCARDES,CCARCMP,CCARDIR,CCARSPA            
          RETURN
.
WRCCAR1   RESET     KEY4                                                        
          WRITE     CCSARCA1,KEY4;CCARARC,CCARDES,CCARCMP,CCARDIR,CCARSPA       
          RETURN
.
DECCAR1   RESET     KEY4                                                        
          DELETE    CCSARCA1,KEY4                                               
          RETURN
.
