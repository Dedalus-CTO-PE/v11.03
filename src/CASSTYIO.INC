.
. CASSTYIO    
. --------
. Filename     : casstyaf.dat
.
RSCAST1   RESET     KEY6                                                        
          READ      CASSTYA1,KEY6;;                                             
          RETURN
.
RACAST1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      CASSTYA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCAST1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      CASSTYA1,KEY6;CASTTOE,CASTSTY,CASTDES,CASTLEN,CASTJR:       
                        CASTZF,CASTDE,CASTDAT,CASTSPA                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCAST1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CASSTYA1;CASTTOE,CASTSTY,CASTDES,CASTLEN,CASTJR:            
                        CASTZF,CASTDE,CASTDAT,CASTSPA                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCAST1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CASSTYA1;CASTTOE,CASTSTY,CASTDES,CASTLEN,CASTJR:            
                        CASTZF,CASTDE,CASTDAT,CASTSPA                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCAST1                                                                         
          UPDATE    CASSTYA1;CASTTOE,CASTSTY,CASTDES,CASTLEN,CASTJR:            
                        CASTZF,CASTDE,CASTDAT,CASTSPA                           
          RETURN
.
WRCAST1   RESET     KEY6                                                        
          WRITE     CASSTYA1,KEY6;CASTTOE,CASTSTY,CASTDES,CASTLEN,CASTJR:       
                        CASTZF,CASTDE,CASTDAT,CASTSPA                           
          RETURN
.
DECAST1   RESET     KEY6                                                        
          DELETE    CASSTYA1,KEY6                                               
          RETURN
.
