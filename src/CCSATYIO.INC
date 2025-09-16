.
. CCSATYIO    
. --------
. Filename     : ccsatyaf.dat
.
RSCCAT1   RESET     KEY4                                                        
          READ      CCSATYA1,KEY4;;                                             
          RETURN
.
RACCAT1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSATYA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCAT1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSATYA1,KEY4;CCATATY,CCATDES,CCATTQY,CCATSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCAT1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSATYA1;CCATATY,CCATDES,CCATTQY,CCATSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCAT1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSATYA1;CCATATY,CCATDES,CCATTQY,CCATSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCAT1                                                                         
          UPDATE    CCSATYA1;CCATATY,CCATDES,CCATTQY,CCATSPA                    
          RETURN
.
WRCCAT1   RESET     KEY4                                                        
          WRITE     CCSATYA1,KEY4;CCATATY,CCATDES,CCATTQY,CCATSPA               
          RETURN
.
DECCAT1   RESET     KEY4                                                        
          DELETE    CCSATYA1,KEY4                                               
          RETURN
.
RSCCAT2   RESET     KEY39                                                       
          READ      CCSATYA2,KEY39;;                                            
          RETURN
.
RACCAT2   RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      CCSATYA2,KEY39;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCAT2   RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      CCSATYA2,KEY39;CCATATY,CCATDES,CCATTQY,CCATSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCAT2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSATYA2;CCATATY,CCATDES,CCATTQY,CCATSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCAT2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSATYA2;CCATATY,CCATDES,CCATTQY,CCATSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCAT2                                                                         
          UPDATE    CCSATYA2;CCATATY,CCATDES,CCATTQY,CCATSPA                    
          RETURN
.
WRCCAT2   RESET     KEY39                                                       
          WRITE     CCSATYA2,KEY39;CCATATY,CCATDES,CCATTQY,CCATSPA              
          RETURN
.
DECCAT2   RESET     KEY39                                                       
          DELETE    CCSATYA2,KEY39                                              
          RETURN
.
