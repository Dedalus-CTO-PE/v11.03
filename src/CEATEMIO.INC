.
. CEATEMIO    
. --------
. Filename     : ceatemaf.dat
.
RSCETE1   RESET     KEY16                                                       
          READ      CEATEMA1,KEY16;;                                            
          RETURN
.
RACETE1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      CEATEMA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCETE1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      CEATEMA1,KEY16;CETEIMP,CETESPC,CETEPSC,CETEQTY,CETESPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCETE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEATEMA1;CETEIMP,CETESPC,CETEPSC,CETEQTY,CETESPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCETE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEATEMA1;CETEIMP,CETESPC,CETEPSC,CETEQTY,CETESPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCETE1                                                                         
          UPDATE    CEATEMA1;CETEIMP,CETESPC,CETEPSC,CETEQTY,CETESPA            
          RETURN
.
WRCETE1   RESET     KEY16                                                       
          WRITE     CEATEMA1,KEY16;CETEIMP,CETESPC,CETEPSC,CETEQTY,CETESPA      
          RETURN
.
DECETE1   RESET     KEY16                                                       
          DELETE    CEATEMA1,KEY16                                              
          RETURN
.
