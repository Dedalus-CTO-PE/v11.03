.
. SINCIBIO    
. --------
. Filename     : sincibaf.dat
.
RSSIIB1   RESET     KEY10                                                       
          READ      SINCIBA1,KEY10;;                                            
          RETURN
.
RASIIB1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIBA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIB1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIBA1,KEY10;SIIBCAT,SIIBLIN,SIIBCOM,SIIBSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCIBA1;SIIBCAT,SIIBLIN,SIIBCOM,SIIBSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCIBA1;SIIBCAT,SIIBLIN,SIIBCOM,SIIBSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIB1                                                                         
          UPDATE    SINCIBA1;SIIBCAT,SIIBLIN,SIIBCOM,SIIBSPA                    
          RETURN
.
WRSIIB1   RESET     KEY10                                                       
          WRITE     SINCIBA1,KEY10;SIIBCAT,SIIBLIN,SIIBCOM,SIIBSPA              
          RETURN
.
DESIIB1   RESET     KEY10                                                       
          DELETE    SINCIBA1,KEY10                                              
          RETURN
.
