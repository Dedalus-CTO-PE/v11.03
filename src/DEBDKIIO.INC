.
. DEBDKIIO    
. --------
. Filename     : debdkiaf.dat
.
RSDBDK1   RESET     KEY23                                                       
          READ      DEBDKIA1,KEY23;;                                            
          RETURN
.
RADBDK1   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      DEBDKIA1,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBDK1   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      DEBDKIA1,KEY23;DBDKDEB,DBDKKWD,DBDKSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBDK1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBDKIA1;DBDKDEB,DBDKKWD,DBDKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBDK1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBDKIA1;DBDKDEB,DBDKKWD,DBDKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBDK1                                                                         
          UPDATE    DEBDKIA1;DBDKDEB,DBDKKWD,DBDKSPA                            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBDK1   RESET     KEY23                                                       
          WRITE     DEBDKIA1,KEY23;DBDKDEB,DBDKKWD,DBDKSPA                      
          RETURN
.
DEDBDK1   RESET     KEY23                                                       
          DELETE    DEBDKIA1,KEY23                                              
          RETURN
.
RLDBDK1   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READL     DEBDKIA1,KEY23;DBDKDEB,DBDKKWD,DBDKSPA                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBDK1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBDKIA1;DBDKDEB,DBDKKWD,DBDKSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBDK1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBDKIA1;DBDKDEB,DBDKKWD,DBDKSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBDK1   RESET     KEY23                                                       
          UNLOCK    DEBDKIA1                                                    
          RETURN
.
RSDBDK2   RESET     KEY23                                                       
          READ      DEBDKIA2,KEY23;;                                            
          RETURN
.
RADBDK2   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      DEBDKIA2,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBDK2   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      DEBDKIA2,KEY23;DBDKDEB,DBDKKWD,DBDKSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBDK2                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBDKIA2;DBDKDEB,DBDKKWD,DBDKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBDK2                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBDKIA2;DBDKDEB,DBDKKWD,DBDKSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBDK2                                                                         
          UPDATE    DEBDKIA2;DBDKDEB,DBDKKWD,DBDKSPA                            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBDK2   RESET     KEY23                                                       
          WRITE     DEBDKIA2,KEY23;DBDKDEB,DBDKKWD,DBDKSPA                      
          RETURN
.
DEDBDK2   RESET     KEY23                                                       
          DELETE    DEBDKIA2,KEY23                                              
          RETURN
.
RLDBDK2   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READL     DEBDKIA2,KEY23;DBDKDEB,DBDKKWD,DBDKSPA                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBDK2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBDKIA2;DBDKDEB,DBDKKWD,DBDKSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBDK2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBDKIA2;DBDKDEB,DBDKKWD,DBDKSPA                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBDK2   RESET     KEY23                                                       
          UNLOCK    DEBDKIA2                                                    
          RETURN
.
