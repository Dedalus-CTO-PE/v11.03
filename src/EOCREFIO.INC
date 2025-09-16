.
. EOCREFIO    
. --------
. Filename     : eocrefaf.dat
.
RSECREF1  RESET     KEY13                                                       
          READ      EOCREFA1,KEY13;;                                            
          RETURN
.
RAECREF1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      EOCREFA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDECREF1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      EOCREFA1,KEY13;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DECRFEPN,ECRFEPNO                                           
          MOVE      DECRFHOS,ECRFHOSP                                           
          MOVE      DECRFREF,ECRFREFN                                           
          RETURN
.
RKECREF1                                                                        
          MOVE      ZERO,OVRCD
          READKS    EOCREFA1;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:      
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DECRFEPN,ECRFEPNO                                           
          MOVE      DECRFHOS,ECRFHOSP                                           
          MOVE      DECRFREF,ECRFREFN                                           
          RETURN
.
RPECREF1                                                                        
          MOVE      ZERO,OVRCD
          READKP    EOCREFA1;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:      
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DECRFEPN,ECRFEPNO                                           
          MOVE      DECRFHOS,ECRFHOSP                                           
          MOVE      DECRFREF,ECRFREFN                                           
          RETURN
.
UPECREF1                                                                        
          MOVE      ECRFEPNO,DECRFEPN                                           
          MOVE      ECRFHOSP,DECRFHOS                                           
          MOVE      ECRFREFN,DECRFREF 
          UPDATE    EOCREFA1;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN: 
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRECREF1  RESET     KEY13                                                       
          MOVE      ECRFEPNO,DECRFEPN                                           
          MOVE      ECRFHOSP,DECRFHOS                                           
          MOVE      ECRFREFN,DECRFREF 
          WRITE     EOCREFA1,KEY13;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          RETURN
.
DEECREF1  RESET     KEY13                                                       
          DELETE    EOCREFA1,KEY13                                              
          RETURN
.
RLECREF1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     EOCREFA1,KEY13;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DECRFEPN,ECRFEPNO                                           
          MOVE      DECRFHOS,ECRFHOSP                                           
          MOVE      DECRFREF,ECRFREFN                                           
          RETURN
.
KLECREF1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EOCREFA1;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:      
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DECRFEPN,ECRFEPNO                                           
          MOVE      DECRFHOS,ECRFHOSP                                           
          MOVE      DECRFREF,ECRFREFN                                           
          RETURN
.
PLECREF1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EOCREFA1;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:      
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DECRFEPN,ECRFEPNO                                           
          MOVE      DECRFHOS,ECRFHOSP                                           
          MOVE      DECRFREF,ECRFREFN                                           
          RETURN
.
UUECREF1  RESET     KEY13                                                       
          UNLOCK    EOCREFA1                                                    
          RETURN
.
RSECREF2  RESET     KEY15                                                       
          READ      EOCREFA2,KEY15;;                                            
          RETURN
.
RAECREF2  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      EOCREFA2,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDECREF2  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      EOCREFA2,KEY15;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DECRFEPN,ECRFEPNO                                           
          MOVE      DECRFHOS,ECRFHOSP                                           
          MOVE      DECRFREF,ECRFREFN                                           
          RETURN
.
RKECREF2                                                                        
          MOVE      ZERO,OVRCD
          READKS    EOCREFA2;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:      
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DECRFEPN,ECRFEPNO                                           
          MOVE      DECRFHOS,ECRFHOSP                                           
          MOVE      DECRFREF,ECRFREFN                                           
          RETURN
.
RPECREF2                                                                        
          MOVE      ZERO,OVRCD
          READKP    EOCREFA2;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:      
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DECRFEPN,ECRFEPNO                                           
          MOVE      DECRFHOS,ECRFHOSP                                           
          MOVE      DECRFREF,ECRFREFN  
          RETURN
.
UPECREF2                                                                        
          MOVE      ECRFEPNO,DECRFEPN                                           
          MOVE      ECRFHOSP,DECRFHOS                                           
          MOVE      ECRFREFN,DECRFREF 
          UPDATE    EOCREFA2;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:      
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRECREF2  RESET     KEY15                                                       
          MOVE      ECRFEPNO,DECRFEPN                                           
          MOVE      ECRFHOSP,DECRFHOS                                           
          MOVE      ECRFREFN,DECRFREF 
          WRITE     EOCREFA2,KEY15;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          RETURN
.
DEECREF2  RESET     KEY15                                                       
          DELETE    EOCREFA2,KEY15                                              
          RETURN
.
RLECREF2  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READL     EOCREFA2,KEY15;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DECRFEPN,ECRFEPNO                                           
          MOVE      DECRFHOS,ECRFHOSP                                           
          MOVE      DECRFREF,ECRFREFN                                           
          RETURN
.
KLECREF2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EOCREFA2;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:      
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DECRFEPN,ECRFEPNO                                           
          MOVE      DECRFHOS,ECRFHOSP                                           
          MOVE      DECRFREF,ECRFREFN                                           
          RETURN
.
PLECREF2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EOCREFA2;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:      
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DECRFEPN,ECRFEPNO                                           
          MOVE      DECRFHOS,ECRFHOSP                                           
          MOVE      DECRFREF,ECRFREFN                                           
          RETURN
.
UUECREF2  RESET     KEY15                                                       
          UNLOCK    EOCREFA2                                                    
          RETURN
.
RSECREF3  RESET     KEY33                                                       
          READ      EOCREFA3,KEY33;;                                            
          RETURN
.
RAECREF3  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      EOCREFA3,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDECREF3  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      EOCREFA3,KEY33;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DECRFEPN,ECRFEPNO                                           
          MOVE      DECRFHOS,ECRFHOSP                                           
          MOVE      DECRFREF,ECRFREFN                                           
          RETURN
.
RKECREF3                                                                        
          MOVE      ZERO,OVRCD
          READKS    EOCREFA3;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:      
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DECRFEPN,ECRFEPNO                                           
          MOVE      DECRFHOS,ECRFHOSP                                           
          MOVE      DECRFREF,ECRFREFN                                           
          RETURN
.
RPECREF3                                                                        
          MOVE      ZERO,OVRCD
          READKP    EOCREFA3;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:      
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DECRFEPN,ECRFEPNO                                           
          MOVE      DECRFHOS,ECRFHOSP                                           
          MOVE      DECRFREF,ECRFREFN                                           
          RETURN
.
UPECREF3                                                                        
          MOVE      ECRFEPNO,DECRFEPN                                           
          MOVE      ECRFHOSP,DECRFHOS                                           
          MOVE      ECRFREFN,DECRFREF 
          UPDATE    EOCREFA3;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:      
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRECREF3  RESET     KEY33                                                       
          MOVE      ECRFEPNO,DECRFEPN                                           
          MOVE      ECRFHOSP,DECRFHOS                                           
          MOVE      ECRFREFN,DECRFREF 
          WRITE     EOCREFA3,KEY33;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          RETURN
.
DEECREF3  RESET     KEY33                                                       
          DELETE    EOCREFA3,KEY33                                              
          RETURN
.
RLECREF3  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READL     EOCREFA3,KEY33;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DECRFEPN,ECRFEPNO                                           
          MOVE      DECRFHOS,ECRFHOSP                                           
          MOVE      DECRFREF,ECRFREFN                                           
          RETURN
.
KLECREF3                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EOCREFA3;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:      
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DECRFEPN,ECRFEPNO                                           
          MOVE      DECRFHOS,ECRFHOSP                                           
          MOVE      DECRFREF,ECRFREFN                                           
          RETURN
.
PLECREF3                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EOCREFA3;ECRFURNO,DECRFEPN,DECRFHOS,DECRFREF,ECRFACCN:      
                        ECRFSTAT,ECRFCDAT,ECRFSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DECRFEPN,ECRFEPNO                                           
          MOVE      DECRFHOS,ECRFHOSP                                           
          MOVE      DECRFREF,ECRFREFN                                           
          RETURN
.
UUECREF3  RESET     KEY33                                                       
          UNLOCK    EOCREFA3                                                    
          RETURN
.
