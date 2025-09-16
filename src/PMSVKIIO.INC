.
. PMSVKIIO    
. --------
. Filename     : pmsvkiaf.dat
.
RSPMVKI1  RESET     KEY35                                                       
          READ      PMSVKIA1,KEY35;;                                            
          RETURN
.
RAPMVKI1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      PMSVKIA1,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMVKI1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      PMSVKIA1,KEY35;PMVKCODE,PMVKKKWD,PMVKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMVKI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSVKIA1;PMVKCODE,PMVKKKWD,PMVKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMVKI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSVKIA1;PMVKCODE,PMVKKKWD,PMVKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMVKI1                                                                        
          UPDATE    PMSVKIA1;PMVKCODE,PMVKKKWD,PMVKSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMVKI1  RESET     KEY35                                                       
          WRITE     PMSVKIA1,KEY35;PMVKCODE,PMVKKKWD,PMVKSPAR                   
          RETURN
.
DEPMVKI1  RESET     KEY35                                                       
          DELETE    PMSVKIA1,KEY35                                              
          RETURN
.
RLPMVKI1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READL     PMSVKIA1,KEY35;PMVKCODE,PMVKKKWD,PMVKSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMVKI1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSVKIA1;PMVKCODE,PMVKKKWD,PMVKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMVKI1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSVKIA1;PMVKCODE,PMVKKKWD,PMVKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMVKI1  RESET     KEY35                                                       
          UNLOCK    PMSVKIA1                                                    
          RETURN
.
RSPMVKI2  RESET     KEY35                                                       
          READ      PMSVKIA2,KEY35;;                                            
          RETURN
.
RAPMVKI2  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      PMSVKIA2,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMVKI2  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      PMSVKIA2,KEY35;PMVKCODE,PMVKKKWD,PMVKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMVKI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSVKIA2;PMVKCODE,PMVKKKWD,PMVKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMVKI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSVKIA2;PMVKCODE,PMVKKKWD,PMVKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMVKI2                                                                        
          UPDATE    PMSVKIA2;PMVKCODE,PMVKKKWD,PMVKSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMVKI2  RESET     KEY35                                                       
          WRITE     PMSVKIA2,KEY35;PMVKCODE,PMVKKKWD,PMVKSPAR                   
          RETURN
.
DEPMVKI2  RESET     KEY35                                                       
          DELETE    PMSVKIA2,KEY35                                              
          RETURN
.
RLPMVKI2  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READL     PMSVKIA2,KEY35;PMVKCODE,PMVKKKWD,PMVKSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMVKI2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSVKIA2;PMVKCODE,PMVKKKWD,PMVKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMVKI2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSVKIA2;PMVKCODE,PMVKKKWD,PMVKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMVKI2  RESET     KEY35                                                       
          UNLOCK    PMSVKIA2                                                    
          RETURN
.
