.
. SINCCCIO    
. --------
. Filename     : sincccaf.dat
.
RSSICC1   RESET     KEY8                                                        
          READ      SINCCCA1,KEY8;;                                             
          RETURN
.
RASICC1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      SINCCCA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICC1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      SINCCCA1,KEY8;SICCCST,SICCLIN,SICCCOM,SICCSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCCCA1;SICCCST,SICCLIN,SICCCOM,SICCSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCCCA1;SICCCST,SICCLIN,SICCCOM,SICCSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICC1                                                                         
          UPDATE    SINCCCA1;SICCCST,SICCLIN,SICCCOM,SICCSPA                    
          RETURN
.
WRSICC1   RESET     KEY8                                                        
          WRITE     SINCCCA1,KEY8;SICCCST,SICCLIN,SICCCOM,SICCSPA               
          RETURN
.
DESICC1   RESET     KEY8                                                        
          DELETE    SINCCCA1,KEY8                                               
          RETURN
.
