.
. PATKCMIO    
. --------
. Filename     : patkcmaf.dat
.
RSPTKCM1  RESET     KEY24                                                       
          READ      PATKCMA1,KEY24;;                                            
          RETURN
.
RAPTKCM1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATKCMA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTKCM1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATKCMA1,KEY24;PTCMITM,PTCMKWD,PTCMSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTKCM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATKCMA1;PTCMITM,PTCMKWD,PTCMSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTKCM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATKCMA1;PTCMITM,PTCMKWD,PTCMSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTKCM1                                                                        
          UPDATE    PATKCMA1;PTCMITM,PTCMKWD,PTCMSPA                            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTKCM1  RESET     KEY24                                                       
          WRITE     PATKCMA1,KEY24;PTCMITM,PTCMKWD,PTCMSPA                      
          RETURN
.
DEPTKCM1  RESET     KEY24                                                       
          DELETE    PATKCMA1,KEY24                                              
          RETURN
.
RLPTKCM1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     PATKCMA1,KEY24;PTCMITM,PTCMKWD,PTCMSPA                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTKCM1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATKCMA1;PTCMITM,PTCMKWD,PTCMSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTKCM1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATKCMA1;PTCMITM,PTCMKWD,PTCMSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTKCM1  RESET     KEY24                                                       
          UNLOCK    PATKCMA1                                                    
          RETURN
.
RSPTKCM2  RESET     KEY24                                                       
          READ      PATKCMA2,KEY24;;                                            
          RETURN
.
RAPTKCM2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATKCMA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTKCM2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATKCMA2,KEY24;PTCMITM,PTCMKWD,PTCMSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTKCM2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATKCMA2;PTCMITM,PTCMKWD,PTCMSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTKCM2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATKCMA2;PTCMITM,PTCMKWD,PTCMSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTKCM2                                                                        
          UPDATE    PATKCMA2;PTCMITM,PTCMKWD,PTCMSPA                            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTKCM2  RESET     KEY24                                                       
          WRITE     PATKCMA2,KEY24;PTCMITM,PTCMKWD,PTCMSPA                      
          RETURN
.
DEPTKCM2  RESET     KEY24                                                       
          DELETE    PATKCMA2,KEY24                                              
          RETURN
.
RLPTKCM2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     PATKCMA2,KEY24;PTCMITM,PTCMKWD,PTCMSPA                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTKCM2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATKCMA2;PTCMITM,PTCMKWD,PTCMSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTKCM2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATKCMA2;PTCMITM,PTCMKWD,PTCMSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTKCM2  RESET     KEY24                                                       
          UNLOCK    PATKCMA2                                                    
          RETURN
.
