.
. WEBBBBIO    
. --------
. Filename     : webbbbaf.dat
.
RSWBBBB1  RESET     KEY8                                                        
          READ      WEBBBBA1,KEY8;;                                             
          RETURN
.
RAWBBBB1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBBBBA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBB1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBBBBA1,KEY8;WBBBBTHN,WBBBBTHL,WBBBTRIB,WBBBDTBC,WBBBTMBC: 
                                  WBBBOPER,WBBBEFNM,WBBBLOCN,WBBBSNID,WBBBSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBBB1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBBA1;WBBBBTHN,WBBBBTHL,WBBBTRIB,WBBBDTBC,WBBBTMBC:      
                             WBBBOPER,WBBBEFNM,WBBBLOCN,WBBBSNID,WBBBSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBBB1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBBA1;WBBBBTHN,WBBBBTHL,WBBBTRIB,WBBBDTBC,WBBBTMBC:      
                             WBBBOPER,WBBBEFNM,WBBBLOCN,WBBBSNID,WBBBSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBBB1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBBBA1;WBBBBTHN,WBBBBTHL,WBBBTRIB,WBBBDTBC,WBBBTMBC:      
                             WBBBOPER,WBBBEFNM,WBBBLOCN,WBBBSNID,WBBBSPAR       
          RETURN
.
WRWBBBB1  RESET     KEY8                                                        
          WRITE     WEBBBBA1,KEY8;WBBBBTHN,WBBBBTHL,WBBBTRIB,WBBBDTBC,WBBBTMBC: 
                                  WBBBOPER,WBBBEFNM,WBBBLOCN,WBBBSNID,WBBBSPAR  
          RETURN
.
DEWBBBB1  RESET     KEY8                                                        
          DELETE    WEBBBBA1,KEY8                                               
          RETURN
.
RSWBBBB2  RESET     KEY16                                                       
          READ      WEBBBBA2,KEY16;;                                            
          RETURN
.
RAWBBBB2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBBA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBB2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBBA2,KEY16;WBBBBTHN,WBBBBTHL,WBBBTRIB,WBBBDTBC,WBBBTMBC:
                                   WBBBOPER,WBBBEFNM,WBBBLOCN,WBBBSNID,WBBBSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBBB2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBBA2;WBBBBTHN,WBBBBTHL,WBBBTRIB,WBBBDTBC,WBBBTMBC:      
                             WBBBOPER,WBBBEFNM,WBBBLOCN,WBBBSNID,WBBBSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBBB2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBBA2;WBBBBTHN,WBBBBTHL,WBBBTRIB,WBBBDTBC,WBBBTMBC:      
                             WBBBOPER,WBBBEFNM,WBBBLOCN,WBBBSNID,WBBBSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBBB2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBBBA2;WBBBBTHN,WBBBBTHL,WBBBTRIB,WBBBDTBC,WBBBTMBC:      
                             WBBBOPER,WBBBEFNM,WBBBLOCN,WBBBSNID,WBBBSPAR       
          RETURN
.
WRWBBBB2  RESET     KEY16                                                       
          WRITE     WEBBBBA2,KEY16;WBBBBTHN,WBBBBTHL,WBBBTRIB,WBBBDTBC,WBBBTMBC:
                                   WBBBOPER,WBBBEFNM,WBBBLOCN,WBBBSNID,WBBBSPAR 
          RETURN
.
DEWBBBB2  RESET     KEY16                                                       
          DELETE    WEBBBBA2,KEY16                                              
          RETURN
.
