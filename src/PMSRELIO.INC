.
. PMSRELIO    
. --------
. Filename     : pmsrelaf.dat
.
RSPMREL1  RESET     KEY10                                                       
          READ      PMSRELA1,KEY10;;                                            
          RETURN
.
RAPMREL1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRELA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMREL1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRELA1,KEY10;PMRLRELS,PMRLDESC,PMRLACTV,PMRLHDPE,PMRLSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMREL1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSRELA1;PMRLRELS,PMRLDESC,PMRLACTV,PMRLHDPE,PMRLSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMREL1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSRELA1;PMRLRELS,PMRLDESC,PMRLACTV,PMRLHDPE,PMRLSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMREL1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSRELA1;PMRLRELS,PMRLDESC,PMRLACTV,PMRLHDPE,PMRLSPAR       
          RETURN
.
WRPMREL1  RESET     KEY10                                                       
          WRITE     PMSRELA1,KEY10;PMRLRELS,PMRLDESC,PMRLACTV,PMRLHDPE,PMRLSPAR 
          RETURN
.
DEPMREL1  RESET     KEY10                                                       
          DELETE    PMSRELA1,KEY10                                              
          RETURN
.
RSPMREL2  RESET     KEY40                                                       
          READ      PMSRELA2,KEY40;;                                            
          RETURN
.
RAPMREL2  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRELA2,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMREL2  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRELA2,KEY40;PMRLRELS,PMRLDESC,PMRLACTV,PMRLHDPE,PMRLSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMREL2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSRELA2;PMRLRELS,PMRLDESC,PMRLACTV,PMRLHDPE,PMRLSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMREL2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSRELA2;PMRLRELS,PMRLDESC,PMRLACTV,PMRLHDPE,PMRLSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMREL2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSRELA2;PMRLRELS,PMRLDESC,PMRLACTV,PMRLHDPE,PMRLSPAR       
          RETURN
.
WRPMREL2  RESET     KEY40                                                       
          WRITE     PMSRELA2,KEY40;PMRLRELS,PMRLDESC,PMRLACTV,PMRLHDPE,PMRLSPAR 
          RETURN
.
DEPMREL2  RESET     KEY40                                                       
          DELETE    PMSRELA2,KEY40                                              
          RETURN
.
