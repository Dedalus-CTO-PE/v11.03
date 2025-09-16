.
. WATPKIIO    
. --------
. Filename     : watpkiaf.dat
.
RSWTPKI1  RESET     KEY59                                                       
          READ      WATPKIA1,KEY59;;                                            
          RETURN
.
RAWTPKI1  RESET     KEY59                                                       
          MOVE      ZERO,OVRCD
          READ      WATPKIA1,KEY59;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTPKI1  RESET     KEY59                                                       
          MOVE      ZERO,OVRCD
          READ      WATPKIA1,KEY59;WTPKCODE,WTPKKKWD,WTPKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTPKI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATPKIA1;WTPKCODE,WTPKKKWD,WTPKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTPKI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATPKIA1;WTPKCODE,WTPKKKWD,WTPKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTPKI1                                                                        
          UPDATE    WATPKIA1;WTPKCODE,WTPKKKWD,WTPKSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTPKI1  RESET     KEY59                                                       
          WRITE     WATPKIA1,KEY59;WTPKCODE,WTPKKKWD,WTPKSPAR                   
          RETURN
.
DEWTPKI1  RESET     KEY59                                                       
          DELETE    WATPKIA1,KEY59                                              
          RETURN
.
RLWTPKI1  RESET     KEY59                                                       
          MOVE      ZERO,OVRCD
          READL     WATPKIA1,KEY59;WTPKCODE,WTPKKKWD,WTPKSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTPKI1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATPKIA1;WTPKCODE,WTPKKKWD,WTPKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTPKI1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATPKIA1;WTPKCODE,WTPKKKWD,WTPKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTPKI1  RESET     KEY59                                                       
          UNLOCK    WATPKIA1                                                    
          RETURN
.
RSWTPKI2  RESET     KEY59                                                       
          READ      WATPKIA2,KEY59;;                                            
          RETURN
.
RAWTPKI2  RESET     KEY59                                                       
          MOVE      ZERO,OVRCD
          READ      WATPKIA2,KEY59;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTPKI2  RESET     KEY59                                                       
          MOVE      ZERO,OVRCD
          READ      WATPKIA2,KEY59;WTPKCODE,WTPKKKWD,WTPKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTPKI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATPKIA2;WTPKCODE,WTPKKKWD,WTPKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTPKI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATPKIA2;WTPKCODE,WTPKKKWD,WTPKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTPKI2                                                                        
          UPDATE    WATPKIA2;WTPKCODE,WTPKKKWD,WTPKSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTPKI2  RESET     KEY59                                                       
          WRITE     WATPKIA2,KEY59;WTPKCODE,WTPKKKWD,WTPKSPAR                   
          RETURN
.
DEWTPKI2  RESET     KEY59                                                       
          DELETE    WATPKIA2,KEY59                                              
          RETURN
.
RLWTPKI2  RESET     KEY59                                                       
          MOVE      ZERO,OVRCD
          READL     WATPKIA2,KEY59;WTPKCODE,WTPKKKWD,WTPKSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTPKI2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATPKIA2;WTPKCODE,WTPKKKWD,WTPKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTPKI2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATPKIA2;WTPKCODE,WTPKKKWD,WTPKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTPKI2  RESET     KEY59                                                       
          UNLOCK    WATPKIA2                                                    
          RETURN
.
