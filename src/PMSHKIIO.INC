.
. PMSHKIIO    
. --------
. Filename     : pmshkiaf.dat
.
RSPMHKI1  RESET     KEY25                                                       
          READ      PMSHKIA1,KEY25;;                                            
          RETURN
.
RAPMHKI1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHKIA1,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHKI1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHKIA1,KEY25;PMHKHCPC,PMHKKKWD,PMHKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHKI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSHKIA1;PMHKHCPC,PMHKKKWD,PMHKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHKI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSHKIA1;PMHKHCPC,PMHKKKWD,PMHKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHKI1                                                                        
          UPDATE    PMSHKIA1;PMHKHCPC,PMHKKKWD,PMHKSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMHKI1  RESET     KEY25                                                       
          WRITE     PMSHKIA1,KEY25;PMHKHCPC,PMHKKKWD,PMHKSPAR                   
          RETURN
.
DEPMHKI1  RESET     KEY25                                                       
          DELETE    PMSHKIA1,KEY25                                              
          RETURN
.
RLPMHKI1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     PMSHKIA1,KEY25;PMHKHCPC,PMHKKKWD,PMHKSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMHKI1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSHKIA1;PMHKHCPC,PMHKKKWD,PMHKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMHKI1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSHKIA1;PMHKHCPC,PMHKKKWD,PMHKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMHKI1  RESET     KEY25                                                       
          UNLOCK    PMSHKIA1                                                    
          RETURN
.
RSPMHKI2  RESET     KEY25                                                       
          READ      PMSHKIA2,KEY25;;                                            
          RETURN
.
RAPMHKI2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHKIA2,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHKI2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHKIA2,KEY25;PMHKHCPC,PMHKKKWD,PMHKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHKI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSHKIA2;PMHKHCPC,PMHKKKWD,PMHKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHKI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSHKIA2;PMHKHCPC,PMHKKKWD,PMHKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHKI2                                                                        
          UPDATE    PMSHKIA2;PMHKHCPC,PMHKKKWD,PMHKSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMHKI2  RESET     KEY25                                                       
          WRITE     PMSHKIA2,KEY25;PMHKHCPC,PMHKKKWD,PMHKSPAR                   
          RETURN
.
DEPMHKI2  RESET     KEY25                                                       
          DELETE    PMSHKIA2,KEY25                                              
          RETURN
.
RLPMHKI2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     PMSHKIA2,KEY25;PMHKHCPC,PMHKKKWD,PMHKSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMHKI2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSHKIA2;PMHKHCPC,PMHKKKWD,PMHKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMHKI2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSHKIA2;PMHKHCPC,PMHKKKWD,PMHKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMHKI2  RESET     KEY25                                                       
          UNLOCK    PMSHKIA2                                                    
          RETURN
.
