.
. CASTEFIO    
. --------
. Filename     : castefaf.dat
.
RSCATE1   RESET     KEY3                                                        
          READ      CASTEFA1,KEY3;;                                             
          RETURN
.
RACATE1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      CASTEFA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCATE1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      CASTEFA1,KEY3;CATETOE,CATEDES,CATESPA                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCATE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CASTEFA1;CATETOE,CATEDES,CATESPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCATE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CASTEFA1;CATETOE,CATEDES,CATESPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCATE1                                                                         
          UPDATE    CASTEFA1;CATETOE,CATEDES,CATESPA                            
          RETURN
.
WRCATE1   RESET     KEY3                                                        
          WRITE     CASTEFA1,KEY3;CATETOE,CATEDES,CATESPA                       
          RETURN
.
DECATE1   RESET     KEY3                                                        
          DELETE    CASTEFA1,KEY3                                               
          RETURN
.
