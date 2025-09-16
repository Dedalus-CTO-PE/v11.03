.
. PMSAELIO    
. --------
. Filename     : pmsaelaf.dat
.
RSPMAEL1  RESET     KEY20                                                       
          READ      PMSAELA1,KEY20;;                                            
          RETURN
.
RAPMAEL1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAELA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMAEL1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAELA1,KEY20;PMAEVISN,PMAEQUOT,PMAESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMAEL1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSAELA1;PMAEVISN,PMAEQUOT,PMAESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMAEL1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSAELA1;PMAEVISN,PMAEQUOT,PMAESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMAEL1                                                                        
          UPDATE    PMSAELA1;PMAEVISN,PMAEQUOT,PMAESPAR                         
          RETURN
.
WRPMAEL1  RESET     KEY20                                                       
          WRITE     PMSAELA1,KEY20;PMAEVISN,PMAEQUOT,PMAESPAR                   
          RETURN
.
DEPMAEL1  RESET     KEY20                                                       
          DELETE    PMSAELA1,KEY20                                              
          RETURN
.
RSPMAEL2  RESET     KEY20                                                       
          READ      PMSAELA2,KEY20;;                                            
          RETURN
.
RAPMAEL2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAELA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMAEL2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAELA2,KEY20;PMAEVISN,PMAEQUOT,PMAESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMAEL2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSAELA2;PMAEVISN,PMAEQUOT,PMAESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMAEL2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSAELA2;PMAEVISN,PMAEQUOT,PMAESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMAEL2                                                                        
          UPDATE    PMSAELA2;PMAEVISN,PMAEQUOT,PMAESPAR                         
          RETURN
.
WRPMAEL2  RESET     KEY20                                                       
          WRITE     PMSAELA2,KEY20;PMAEVISN,PMAEQUOT,PMAESPAR                   
          RETURN
.
DEPMAEL2  RESET     KEY20                                                       
          DELETE    PMSAELA2,KEY20                                              
          RETURN
.
