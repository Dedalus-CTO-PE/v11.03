.
. PATIK1IO    
. --------
. Filename     : patik1af.dat
.
RSPTIK11  RESET     KEY24                                                       
          READ      PATIK1A1,KEY24;;                                            
          RETURN
.
RAPTIK11  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATIK1A1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTIK11  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATIK1A1,KEY24;PTIKITM,PTIKKWD,PTIKSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTIK11                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATIK1A1;PTIKITM,PTIKKWD,PTIKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTIK11                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATIK1A1;PTIKITM,PTIKKWD,PTIKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTIK11                                                                        
          UPDATE    PATIK1A1;PTIKITM,PTIKKWD,PTIKSPA                            
          RETURN
.
WRPTIK11  RESET     KEY24                                                       
          WRITE     PATIK1A1,KEY24;PTIKITM,PTIKKWD,PTIKSPA                      
          RETURN
.
DEPTIK11  RESET     KEY24                                                       
          DELETE    PATIK1A1,KEY24                                              
          RETURN
.
RSPTIK12  RESET     KEY24                                                       
          READ      PATIK1A2,KEY24;;                                            
          RETURN
.
RAPTIK12  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATIK1A2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTIK12  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATIK1A2,KEY24;PTIKITM,PTIKKWD,PTIKSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTIK12                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATIK1A2;PTIKITM,PTIKKWD,PTIKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTIK12                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATIK1A2;PTIKITM,PTIKKWD,PTIKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTIK12                                                                        
          UPDATE    PATIK1A2;PTIKITM,PTIKKWD,PTIKSPA                            
          RETURN
.
WRPTIK12  RESET     KEY24                                                       
          WRITE     PATIK1A2,KEY24;PTIKITM,PTIKKWD,PTIKSPA                      
          RETURN
.
DEPTIK12  RESET     KEY24                                                       
          DELETE    PATIK1A2,KEY24                                              
          RETURN
.
