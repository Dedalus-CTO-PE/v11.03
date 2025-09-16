.
. SINCIGIO    
. --------
. Filename     : sincigaf.dat
.
RSSIIG1   RESET     KEY15                                                       
          READ      SINCIGA1,KEY15;;                                            
          RETURN
.
RASIIG1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIGA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIG1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIGA1,KEY15;SIIGCAT,SIIGWAR,SIIGLIN,SIIGCOM,SIIGSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIG1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCIGA1;SIIGCAT,SIIGWAR,SIIGLIN,SIIGCOM,SIIGSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIG1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCIGA1;SIIGCAT,SIIGWAR,SIIGLIN,SIIGCOM,SIIGSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIG1                                                                         
          UPDATE    SINCIGA1;SIIGCAT,SIIGWAR,SIIGLIN,SIIGCOM,SIIGSPA            
          RETURN
.
WRSIIG1   RESET     KEY15                                                       
          WRITE     SINCIGA1,KEY15;SIIGCAT,SIIGWAR,SIIGLIN,SIIGCOM,SIIGSPA      
          RETURN
.
DESIIG1   RESET     KEY15                                                       
          DELETE    SINCIGA1,KEY15                                              
          RETURN
.
