.
. CSMSKYIO    
. --------
. Filename     : csmskyaf.dat
.
RSCSSK1   RESET     KEY20                                                       
          READ      CSMSKYA1,KEY20;;                                            
          RETURN
.
RACSSK1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CSMSKYA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCSSK1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CSMSKYA1,KEY20;CSSKKWD,CSSKCRD,CSSKSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCSSK1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CSMSKYA1;CSSKKWD,CSSKCRD,CSSKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCSSK1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CSMSKYA1;CSSKKWD,CSSKCRD,CSSKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCSSK1                                                                         
          UPDATE    CSMSKYA1;CSSKKWD,CSSKCRD,CSSKSPA                            
          RETURN
.
WRCSSK1   RESET     KEY20                                                       
          WRITE     CSMSKYA1,KEY20;CSSKKWD,CSSKCRD,CSSKSPA                      
          RETURN
.
DECSSK1   RESET     KEY20                                                       
          DELETE    CSMSKYA1,KEY20                                              
          RETURN
.
RSCSSK2   RESET     KEY20                                                       
          READ      CSMSKYA2,KEY20;;                                            
          RETURN
.
RACSSK2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CSMSKYA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCSSK2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CSMSKYA2,KEY20;CSSKKWD,CSSKCRD,CSSKSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCSSK2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CSMSKYA2;CSSKKWD,CSSKCRD,CSSKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCSSK2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CSMSKYA2;CSSKKWD,CSSKCRD,CSSKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCSSK2                                                                         
          UPDATE    CSMSKYA2;CSSKKWD,CSSKCRD,CSSKSPA                            
          RETURN
.
WRCSSK2   RESET     KEY20                                                       
          WRITE     CSMSKYA2,KEY20;CSSKKWD,CSSKCRD,CSSKSPA                      
          RETURN
.
DECSSK2   RESET     KEY20                                                       
          DELETE    CSMSKYA2,KEY20                                              
          RETURN
.
