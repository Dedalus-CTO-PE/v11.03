.
. PMSXMLIO    
. --------
. Filename     : pmsxmlaf.dat
.
RSPMXML1  RESET     KEY83                                                       
          READ      PMSXMLA1,KEY83;;                                            
          RETURN
.
RAPMXML1  RESET     KEY83                                                       
          MOVE      ZERO,OVRCD
          READ      PMSXMLA1,KEY83;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMXML1  RESET     KEY83                                                       
          MOVE      ZERO,OVRCD
          READ      PMSXMLA1,KEY83;PMXMTYPE,PMXMXTAG,PMXMXCGI,PMXMSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMXML1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSXMLA1;PMXMTYPE,PMXMXTAG,PMXMXCGI,PMXMSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMXML1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSXMLA1;PMXMTYPE,PMXMXTAG,PMXMXCGI,PMXMSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMXML1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSXMLA1;PMXMTYPE,PMXMXTAG,PMXMXCGI,PMXMSPAR                
          RETURN
.
WRPMXML1  RESET     KEY83                                                       
          WRITE     PMSXMLA1,KEY83;PMXMTYPE,PMXMXTAG,PMXMXCGI,PMXMSPAR          
          RETURN
.
DEPMXML1  RESET     KEY83                                                       
          DELETE    PMSXMLA1,KEY83                                              
          RETURN
.
RSPMXML2  RESET     KEY91                                                       
          READ      PMSXMLA2,KEY91;;                                            
          RETURN
.
RAPMXML2  RESET     KEY91                                                       
          MOVE      ZERO,OVRCD
          READ      PMSXMLA2,KEY91;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMXML2  RESET     KEY91                                                       
          MOVE      ZERO,OVRCD
          READ      PMSXMLA2,KEY91;PMXMTYPE,PMXMXTAG,PMXMXCGI,PMXMSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMXML2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSXMLA2;PMXMTYPE,PMXMXTAG,PMXMXCGI,PMXMSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMXML2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSXMLA2;PMXMTYPE,PMXMXTAG,PMXMXCGI,PMXMSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMXML2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSXMLA2;PMXMTYPE,PMXMXTAG,PMXMXCGI,PMXMSPAR                
          RETURN
.
WRPMXML2  RESET     KEY91                                                       
          WRITE     PMSXMLA2,KEY91;PMXMTYPE,PMXMXTAG,PMXMXCGI,PMXMSPAR          
          RETURN
.
DEPMXML2  RESET     KEY91                                                       
          DELETE    PMSXMLA2,KEY91                                              
          RETURN
.
