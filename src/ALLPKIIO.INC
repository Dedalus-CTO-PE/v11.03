.
. ALLPKIIO    
. --------
. Filename     : allpkiaf.dat
.
RSALPKI1  RESET     KEY52                                                       
          READ      ALLPKIA1,KEY52;;                                            
          RETURN
.
RAALPKI1  RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      ALLPKIA1,KEY52;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALPKI1  RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      ALLPKIA1,KEY52;ALPKDEPT,ALPKPROB,ALPKKKWD,ALPKSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALPKI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLPKIA1;ALPKDEPT,ALPKPROB,ALPKKKWD,ALPKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALPKI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLPKIA1;ALPKDEPT,ALPKPROB,ALPKKKWD,ALPKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALPKI1                                                                        
          UPDATE    ALLPKIA1;ALPKDEPT,ALPKPROB,ALPKKKWD,ALPKSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALPKI1  RESET     KEY52                                                       
          WRITE     ALLPKIA1,KEY52;ALPKDEPT,ALPKPROB,ALPKKKWD,ALPKSPAR          
          RETURN
.
DEALPKI1  RESET     KEY52                                                       
          DELETE    ALLPKIA1,KEY52                                              
          RETURN
.
RLALPKI1  RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READL     ALLPKIA1,KEY52;ALPKDEPT,ALPKPROB,ALPKKKWD,ALPKSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALPKI1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLPKIA1;ALPKDEPT,ALPKPROB,ALPKKKWD,ALPKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALPKI1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLPKIA1;ALPKDEPT,ALPKPROB,ALPKKKWD,ALPKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALPKI1  RESET     KEY52                                                       
          UNLOCK    ALLPKIA1                                                    
          RETURN
.
RSALPKI2  RESET     KEY52                                                       
          READ      ALLPKIA2,KEY52;;                                            
          RETURN
.
RAALPKI2  RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      ALLPKIA2,KEY52;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALPKI2  RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      ALLPKIA2,KEY52;ALPKDEPT,ALPKPROB,ALPKKKWD,ALPKSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALPKI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLPKIA2;ALPKDEPT,ALPKPROB,ALPKKKWD,ALPKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALPKI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLPKIA2;ALPKDEPT,ALPKPROB,ALPKKKWD,ALPKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALPKI2                                                                        
          UPDATE    ALLPKIA2;ALPKDEPT,ALPKPROB,ALPKKKWD,ALPKSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALPKI2  RESET     KEY52                                                       
          WRITE     ALLPKIA2,KEY52;ALPKDEPT,ALPKPROB,ALPKKKWD,ALPKSPAR          
          RETURN
.
DEALPKI2  RESET     KEY52                                                       
          DELETE    ALLPKIA2,KEY52                                              
          RETURN
.
RLALPKI2  RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READL     ALLPKIA2,KEY52;ALPKDEPT,ALPKPROB,ALPKKKWD,ALPKSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALPKI2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLPKIA2;ALPKDEPT,ALPKPROB,ALPKKKWD,ALPKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALPKI2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLPKIA2;ALPKDEPT,ALPKPROB,ALPKKKWD,ALPKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALPKI2  RESET     KEY52                                                       
          UNLOCK    ALLPKIA2                                                    
          RETURN
.
