.
. SINCIDIO    
. --------
. Filename     : sincidaf.dat
.
RSSIID1   RESET     KEY15                                                       
          READ      SINCIDA1,KEY15;;                                            
          RETURN
.
RASIID1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIDA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIID1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIDA1,KEY15;SIIDCAT,SIIDSUP,SIIDLIN,SIIDCOM,SIIDSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIID1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCIDA1;SIIDCAT,SIIDSUP,SIIDLIN,SIIDCOM,SIIDSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIID1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCIDA1;SIIDCAT,SIIDSUP,SIIDLIN,SIIDCOM,SIIDSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIID1                                                                         
          UPDATE    SINCIDA1;SIIDCAT,SIIDSUP,SIIDLIN,SIIDCOM,SIIDSPA            
          RETURN
.
WRSIID1   RESET     KEY15                                                       
          WRITE     SINCIDA1,KEY15;SIIDCAT,SIIDSUP,SIIDLIN,SIIDCOM,SIIDSPA      
          RETURN
.
DESIID1   RESET     KEY15                                                       
          DELETE    SINCIDA1,KEY15                                              
          RETURN
.
