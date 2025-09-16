.
. APSCEAIO    
. --------
. Filename     : apsceaaf.dat
.
RSAPEA1   RESET     KEY8                                                        
          READ      APSCEAA1,KEY8;;                                             
          RETURN
.
RAAPEA1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      APSCEAA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPEA1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      APSCEAA1,KEY8;APEAISC,APEAORD,APEACRD,APEADAT,APEASPA       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPEA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSCEAA1;APEAISC,APEAORD,APEACRD,APEADAT,APEASPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPEA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSCEAA1;APEAISC,APEAORD,APEACRD,APEADAT,APEASPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPEA1                                                                         
          UPDATE    APSCEAA1;APEAISC,APEAORD,APEACRD,APEADAT,APEASPA            
          RETURN
.
WRAPEA1   RESET     KEY8                                                        
          WRITE     APSCEAA1,KEY8;APEAISC,APEAORD,APEACRD,APEADAT,APEASPA       
          RETURN
.
DEAPEA1   RESET     KEY8                                                        
          DELETE    APSCEAA1,KEY8                                               
          RETURN
.
RSAPEA2   RESET     KEY21                                                       
          READ      APSCEAA2,KEY21;;                                            
          RETURN
.
RAAPEA2   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      APSCEAA2,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPEA2   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      APSCEAA2,KEY21;APEAISC,APEAORD,APEACRD,APEADAT,APEASPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPEA2                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSCEAA2;APEAISC,APEAORD,APEACRD,APEADAT,APEASPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPEA2                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSCEAA2;APEAISC,APEAORD,APEACRD,APEADAT,APEASPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPEA2                                                                         
          UPDATE    APSCEAA2;APEAISC,APEAORD,APEACRD,APEADAT,APEASPA            
          RETURN
.
WRAPEA2   RESET     KEY21                                                       
          WRITE     APSCEAA2,KEY21;APEAISC,APEAORD,APEACRD,APEADAT,APEASPA      
          RETURN
.
DEAPEA2   RESET     KEY21                                                       
          DELETE    APSCEAA2,KEY21                                              
          RETURN
.
