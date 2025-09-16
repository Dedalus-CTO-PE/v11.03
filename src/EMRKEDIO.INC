.
. EMRKEDIO    
. --------
. Filename     : emrkedaf.dat
.
RSEMKED1  RESET     KEY24                                                       
          READ      EMRKEDA1,KEY24;;                                            
          RETURN
.
RAEMKED1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      EMRKEDA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMKED1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      EMRKEDA1,KEY24;EMEDITM,EMEDKWD,EMEDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMKED1                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRKEDA1;EMEDITM,EMEDKWD,EMEDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMKED1                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRKEDA1;EMEDITM,EMEDKWD,EMEDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMKED1                                                                        
          UPDATE    EMRKEDA1;EMEDITM,EMEDKWD,EMEDSPA                            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMKED1  RESET     KEY24                                                       
          WRITE     EMRKEDA1,KEY24;EMEDITM,EMEDKWD,EMEDSPA                      
          RETURN
.
DEEMKED1  RESET     KEY24                                                       
          DELETE    EMRKEDA1,KEY24                                              
          RETURN
.
RLEMKED1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     EMRKEDA1,KEY24;EMEDITM,EMEDKWD,EMEDSPA                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMKED1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRKEDA1;EMEDITM,EMEDKWD,EMEDSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMKED1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRKEDA1;EMEDITM,EMEDKWD,EMEDSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMKED1  RESET     KEY24                                                       
          UNLOCK    EMRKEDA1                                                    
          RETURN
.
RSEMKED2  RESET     KEY24                                                       
          READ      EMRKEDA2,KEY24;;                                            
          RETURN
.
RAEMKED2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      EMRKEDA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMKED2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      EMRKEDA2,KEY24;EMEDITM,EMEDKWD,EMEDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMKED2                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRKEDA2;EMEDITM,EMEDKWD,EMEDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMKED2                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRKEDA2;EMEDITM,EMEDKWD,EMEDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMKED2                                                                        
          UPDATE    EMRKEDA2;EMEDITM,EMEDKWD,EMEDSPA                            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMKED2  RESET     KEY24                                                       
          WRITE     EMRKEDA2,KEY24;EMEDITM,EMEDKWD,EMEDSPA                      
          RETURN
.
DEEMKED2  RESET     KEY24                                                       
          DELETE    EMRKEDA2,KEY24                                              
          RETURN
.
RLEMKED2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     EMRKEDA2,KEY24;EMEDITM,EMEDKWD,EMEDSPA                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMKED2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRKEDA2;EMEDITM,EMEDKWD,EMEDSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMKED2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRKEDA2;EMEDITM,EMEDKWD,EMEDSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMKED2  RESET     KEY24                                                       
          UNLOCK    EMRKEDA2                                                    
          RETURN
.
