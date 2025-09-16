.
. SINCIJIO    
. --------
. Filename     : sincijaf.dat
.
RSSIIJ1   RESET     KEY10                                                       
          READ      SINCIJA1,KEY10;;                                            
          RETURN
.
RASIIJ1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIJA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIJ1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIJA1,KEY10;SIIJCAT,SIIJLIN,SIIJCOM,SIIJSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIJ1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCIJA1;SIIJCAT,SIIJLIN,SIIJCOM,SIIJSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIJ1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCIJA1;SIIJCAT,SIIJLIN,SIIJCOM,SIIJSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIJ1                                                                         
          UPDATE    SINCIJA1;SIIJCAT,SIIJLIN,SIIJCOM,SIIJSPA                    
          RETURN
.
WRSIIJ1   RESET     KEY10                                                       
          WRITE     SINCIJA1,KEY10;SIIJCAT,SIIJLIN,SIIJCOM,SIIJSPA              
          RETURN
.
DESIIJ1   RESET     KEY10                                                       
          DELETE    SINCIJA1,KEY10                                              
          RETURN
.
