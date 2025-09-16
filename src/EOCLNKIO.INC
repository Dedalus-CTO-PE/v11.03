.
. EOCLNKIO    
. --------
. Filename     : eoclnkaf.dat
.
RSECLNK1  RESET     KEY23                                                       
          READ      EOCLNKA1,KEY23;;                                            
          RETURN
.
RAECLNK1  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      EOCLNKA1,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDECLNK1  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      EOCLNKA1,KEY23;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR 
          GOTO      OVERCOND IF OVER
          MOVE      DECLNEPN,ECLNEPNO                                           
          MOVE      DECLNHOS,ECLNHOSP                                           
          MOVE      DECLNVIS,ECLNVISI                                           
          RETURN
.
RKECLNK1                                                                        
          MOVE      ZERO,OVRCD
          READKS    EOCLNKA1;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DECLNEPN,ECLNEPNO                                           
          MOVE      DECLNHOS,ECLNHOSP                                           
          MOVE      DECLNVIS,ECLNVISI                                           
          RETURN
.
RPECLNK1                                                                        
          MOVE      ZERO,OVRCD
          READKP    EOCLNKA1;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DECLNEPN,ECLNEPNO                                           
          MOVE      DECLNHOS,ECLNHOSP                                           
          MOVE      DECLNVIS,ECLNVISI                                           
          RETURN
.
UPECLNK1                                                                        
          MOVE      ECLNEPNO,DECLNEPN                                           
          MOVE      ECLNHOSP,DECLNHOS                                           
          MOVE      ECLNVISI,DECLNVIS                                           
          UPDATE    EOCLNKA1;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRECLNK1  RESET     KEY23                                                       
          MOVE      ECLNEPNO,DECLNEPN                                           
          MOVE      ECLNHOSP,DECLNHOS                                           
          MOVE      ECLNVISI,DECLNVIS                                           
          WRITE     EOCLNKA1,KEY23;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR 
          RETURN
.
DEECLNK1  RESET     KEY23                                                       
          DELETE    EOCLNKA1,KEY23                                              
          RETURN
.
RLECLNK1  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READL     EOCLNKA1,KEY23;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DECLNEPN,ECLNEPNO                                           
          MOVE      DECLNHOS,ECLNHOSP                                           
          MOVE      DECLNVIS,ECLNVISI                                           
          RETURN
.
KLECLNK1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EOCLNKA1;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DECLNEPN,ECLNEPNO                                           
          MOVE      DECLNHOS,ECLNHOSP                                           
          MOVE      DECLNVIS,ECLNVISI                                           
          RETURN
.
PLECLNK1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EOCLNKA1;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DECLNEPN,ECLNEPNO                                           
          MOVE      DECLNHOS,ECLNHOSP                                           
          MOVE      DECLNVIS,ECLNVISI                                           
          RETURN
.
UUECLNK1  RESET     KEY23                                                       
          UNLOCK    EOCLNKA1                                                    
          RETURN
.
RSECLNK2  RESET     KEY10                                                       
          READ      EOCLNKA2,KEY10;;                                            
          RETURN
.
RAECLNK2  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      EOCLNKA2,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDECLNK2  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      EOCLNKA2,KEY10;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR 
          GOTO      OVERCOND IF OVER
          MOVE      DECLNEPN,ECLNEPNO                                           
          MOVE      DECLNHOS,ECLNHOSP                                           
          MOVE      DECLNVIS,ECLNVISI                                           
          RETURN
.
RKECLNK2                                                                        
          MOVE      ZERO,OVRCD
          READKS    EOCLNKA2;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DECLNEPN,ECLNEPNO                                           
          MOVE      DECLNHOS,ECLNHOSP                                           
          MOVE      DECLNVIS,ECLNVISI                                           
          RETURN
.
RPECLNK2                                                                        
          MOVE      ZERO,OVRCD
          READKP    EOCLNKA2;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DECLNEPN,ECLNEPNO                                           
          MOVE      DECLNHOS,ECLNHOSP                                           
          MOVE      DECLNVIS,ECLNVISI                                           
          RETURN
.
UPECLNK2                                                                        
          MOVE      ECLNEPNO,DECLNEPN                                           
          MOVE      ECLNHOSP,DECLNHOS                                           
          MOVE      ECLNVISI,DECLNVIS                                           
          UPDATE    EOCLNKA2;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRECLNK2  RESET     KEY10                                                       
          MOVE      ECLNEPNO,DECLNEPN                                           
          MOVE      ECLNHOSP,DECLNHOS                                           
          MOVE      ECLNVISI,DECLNVIS                                           
          WRITE     EOCLNKA2,KEY10;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR 
          RETURN
.
DEECLNK2  RESET     KEY10                                                       
          DELETE    EOCLNKA2,KEY10                                              
          RETURN
.
RLECLNK2  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     EOCLNKA2,KEY10;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DECLNEPN,ECLNEPNO                                           
          MOVE      DECLNHOS,ECLNHOSP                                           
          MOVE      DECLNVIS,ECLNVISI                                           
          RETURN
.
KLECLNK2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EOCLNKA2;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DECLNEPN,ECLNEPNO                                           
          MOVE      DECLNHOS,ECLNHOSP                                           
          MOVE      DECLNVIS,ECLNVISI                                           
          RETURN
.
PLECLNK2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EOCLNKA2;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DECLNEPN,ECLNEPNO                                           
          MOVE      DECLNHOS,ECLNHOSP                                           
          MOVE      DECLNVIS,ECLNVISI                                           
          RETURN
.
UUECLNK2  RESET     KEY10                                                       
          UNLOCK    EOCLNKA2                                                    
          RETURN
.
RSECLNK3  RESET     KEY23                                                      
          READ      EOCLNKA3,KEY23;;                                            
          RETURN
.
RAECLNK3  RESET     KEY23                                                      
          MOVE      ZERO,OVRCD
          READ      EOCLNKA3,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDECLNK3  RESET     KEY23                                                      
          MOVE      ZERO,OVRCD
          READ      EOCLNKA3,KEY23;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR 
          GOTO      OVERCOND IF OVER
          MOVE      DECLNEPN,ECLNEPNO                                           
          MOVE      DECLNHOS,ECLNHOSP                                           
          MOVE      DECLNVIS,ECLNVISI                                           
          RETURN
.
RKECLNK3                                                                        
          MOVE      ZERO,OVRCD
          READKS    EOCLNKA3;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DECLNEPN,ECLNEPNO                                           
          MOVE      DECLNHOS,ECLNHOSP                                           
          MOVE      DECLNVIS,ECLNVISI                                           
          RETURN
.
RPECLNK3                                                                        
          MOVE      ZERO,OVRCD
          READKP    EOCLNKA3;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DECLNEPN,ECLNEPNO                                           
          MOVE      DECLNHOS,ECLNHOSP                                           
          MOVE      DECLNVIS,ECLNVISI                                           
          RETURN
.
UPECLNK3                                                                        
          MOVE      ECLNEPNO,DECLNEPN                                           
          MOVE      ECLNHOSP,DECLNHOS                                           
          MOVE      ECLNVISI,DECLNVIS                                           
          UPDATE    EOCLNKA3;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRECLNK3  RESET     KEY23                                                       
          MOVE      ECLNEPNO,DECLNEPN                                           
          MOVE      ECLNHOSP,DECLNHOS                                           
          MOVE      ECLNVISI,DECLNVIS                                           
          WRITE     EOCLNKA3,KEY23;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR 
          RETURN
.
DEECLNK3  RESET     KEY23                                                      
          DELETE    EOCLNKA3,KEY23                                             
          RETURN
.
RLECLNK3  RESET     KEY23                                                      
          MOVE      ZERO,OVRCD
          READL     EOCLNKA3,KEY23;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DECLNEPN,ECLNEPNO                                           
          MOVE      DECLNHOS,ECLNHOSP                                           
          MOVE      DECLNVIS,ECLNVISI                                           
          RETURN
.
KLECLNK3                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EOCLNKA3;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DECLNEPN,ECLNEPNO                                           
          MOVE      DECLNHOS,ECLNHOSP                                           
          MOVE      DECLNVIS,ECLNVISI                                           
          RETURN
.
PLECLNK3                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EOCLNKA3;ECLNURNO,DECLNEPN,DECLNHOS,DECLNVIS,ECLNSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DECLNEPN,ECLNEPNO                                           
          MOVE      DECLNHOS,ECLNHOSP                                           
          MOVE      DECLNVIS,ECLNVISI                                           
          RETURN
.
UUECLNK3  RESET     KEY23                                                      
          UNLOCK    EOCLNKA3                                                    
          RETURN
.
