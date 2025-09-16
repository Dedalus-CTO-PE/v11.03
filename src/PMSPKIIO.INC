.
. PMSPKIIO    
. --------
. Filename     : pmspkiaf.dat
.
RSPMPKI1  RESET     KEY27                                                       
          READ      PMSPKIA1,KEY27;;                                            
          RETURN
.
RAPMPKI1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPKIA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPKI1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPKIA1,KEY27;PMPKHCGC,PMPKKKWD,PMPKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPKI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSPKIA1;PMPKHCGC,PMPKKKWD,PMPKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPKI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSPKIA1;PMPKHCGC,PMPKKKWD,PMPKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPKI1                                                                        
          UPDATE    PMSPKIA1;PMPKHCGC,PMPKKKWD,PMPKSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMPKI1  RESET     KEY27                                                       
          WRITE     PMSPKIA1,KEY27;PMPKHCGC,PMPKKKWD,PMPKSPAR                   
          RETURN
.
DEPMPKI1  RESET     KEY27                                                       
          DELETE    PMSPKIA1,KEY27                                              
          RETURN
.
RLPMPKI1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     PMSPKIA1,KEY27;PMPKHCGC,PMPKKKWD,PMPKSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMPKI1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSPKIA1;PMPKHCGC,PMPKKKWD,PMPKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMPKI1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSPKIA1;PMPKHCGC,PMPKKKWD,PMPKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMPKI1  RESET     KEY27                                                       
          UNLOCK    PMSPKIA1                                                    
          RETURN
.
RSPMPKI2  RESET     KEY27                                                       
          READ      PMSPKIA2,KEY27;;                                            
          RETURN
.
RAPMPKI2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPKIA2,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPKI2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPKIA2,KEY27;PMPKHCGC,PMPKKKWD,PMPKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPKI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSPKIA2;PMPKHCGC,PMPKKKWD,PMPKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPKI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSPKIA2;PMPKHCGC,PMPKKKWD,PMPKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPKI2                                                                        
          UPDATE    PMSPKIA2;PMPKHCGC,PMPKKKWD,PMPKSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMPKI2  RESET     KEY27                                                       
          WRITE     PMSPKIA2,KEY27;PMPKHCGC,PMPKKKWD,PMPKSPAR                   
          RETURN
.
DEPMPKI2  RESET     KEY27                                                       
          DELETE    PMSPKIA2,KEY27                                              
          RETURN
.
RLPMPKI2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     PMSPKIA2,KEY27;PMPKHCGC,PMPKKKWD,PMPKSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMPKI2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSPKIA2;PMPKHCGC,PMPKKKWD,PMPKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMPKI2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSPKIA2;PMPKHCGC,PMPKKKWD,PMPKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMPKI2  RESET     KEY27                                                       
          UNLOCK    PMSPKIA2                                                    
          RETURN
.
