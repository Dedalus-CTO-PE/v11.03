.
. PATIKIIO    
. --------
. Filename     : patikiaf.dat
.
RSPTIK1   RESET     KEY24                                                       
          READ      PATIKIA1,KEY24;;                                            
          RETURN
.
RAPTIK1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATIKIA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTIK1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATIKIA1,KEY24;PTIKITM,PTIKKWD,PTIKSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTIK1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATIKIA1;PTIKITM,PTIKKWD,PTIKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTIK1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATIKIA1;PTIKITM,PTIKKWD,PTIKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTIK1                                                                         
          UPDATE    PATIKIA1;PTIKITM,PTIKKWD,PTIKSPA                            
          RETURN
.
WRPTIK1   RESET     KEY24                                                       
          WRITE     PATIKIA1,KEY24;PTIKITM,PTIKKWD,PTIKSPA                      
          RETURN
.
DEPTIK1   RESET     KEY24                                                       
          DELETE    PATIKIA1,KEY24                                              
          RETURN
.
RSPTIK2   RESET     KEY24                                                       
          READ      PATIKIA2,KEY24;;                                            
          RETURN
.
RAPTIK2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATIKIA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTIK2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATIKIA2,KEY24;PTIKITM,PTIKKWD,PTIKSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTIK2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATIKIA2;PTIKITM,PTIKKWD,PTIKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTIK2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATIKIA2;PTIKITM,PTIKKWD,PTIKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTIK2                                                                         
          UPDATE    PATIKIA2;PTIKITM,PTIKKWD,PTIKSPA                            
          RETURN
.
WRPTIK2   RESET     KEY24                                                       
          WRITE     PATIKIA2,KEY24;PTIKITM,PTIKKWD,PTIKSPA                      
          RETURN
.
DEPTIK2   RESET     KEY24                                                       
          DELETE    PATIKIA2,KEY24                                              
          RETURN
.
