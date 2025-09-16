.
. PATMKIIO    
. --------
. Filename     : patmkiaf.dat
.
RSPTMKI1  RESET     KEY56                                                       
          READ      PATMKIA1,KEY56;;                                            
          RETURN
.
RAPTMKI1  RESET     KEY56                                                       
          MOVE      ZERO,OVRCD
          READ      PATMKIA1,KEY56;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTMKI1  RESET     KEY56                                                       
          MOVE      ZERO,OVRCD
          READ      PATMKIA1,KEY56;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTMKI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATMKIA1;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTMKI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATMKIA1;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTMKI1                                                                        
          UPDATE    PATMKIA1;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTMKI1  RESET     KEY56                                                       
          WRITE     PATMKIA1,KEY56;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR          
          RETURN
.
DEPTMKI1  RESET     KEY56                                                       
          DELETE    PATMKIA1,KEY56                                              
          RETURN
.
RLPTMKI1  RESET     KEY56                                                       
          MOVE      ZERO,OVRCD
          READL     PATMKIA1,KEY56;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTMKI1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATMKIA1;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTMKI1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATMKIA1;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTMKI1  RESET     KEY56                                                       
          UNLOCK    PATMKIA1                                                    
          RETURN
.
RSPTMKI2  RESET     KEY56                                                       
          READ      PATMKIA2,KEY56;;                                            
          RETURN
.
RAPTMKI2  RESET     KEY56                                                       
          MOVE      ZERO,OVRCD
          READ      PATMKIA2,KEY56;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTMKI2  RESET     KEY56                                                       
          MOVE      ZERO,OVRCD
          READ      PATMKIA2,KEY56;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTMKI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATMKIA2;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTMKI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATMKIA2;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTMKI2                                                                        
          UPDATE    PATMKIA2;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTMKI2  RESET     KEY56                                                       
          WRITE     PATMKIA2,KEY56;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR          
          RETURN
.
DEPTMKI2  RESET     KEY56                                                       
          DELETE    PATMKIA2,KEY56                                              
          RETURN
.
RLPTMKI2  RESET     KEY56                                                       
          MOVE      ZERO,OVRCD
          READL     PATMKIA2,KEY56;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTMKI2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATMKIA2;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTMKI2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATMKIA2;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTMKI2  RESET     KEY56                                                       
          UNLOCK    PATMKIA2                                                    
          RETURN
.
RSPTMKI3  RESET     KEY59                                                       
          READ      PATMKIA3,KEY59;;                                            
          RETURN
.
RAPTMKI3  RESET     KEY59                                                       
          MOVE      ZERO,OVRCD
          READ      PATMKIA3,KEY59;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTMKI3  RESET     KEY59                                                       
          MOVE      ZERO,OVRCD
          READ      PATMKIA3,KEY59;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTMKI3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATMKIA3;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTMKI3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATMKIA3;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTMKI3                                                                        
          UPDATE    PATMKIA3;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTMKI3  RESET     KEY59                                                       
          WRITE     PATMKIA3,KEY59;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR          
          RETURN
.
DEPTMKI3  RESET     KEY59                                                       
          DELETE    PATMKIA3,KEY59                                              
          RETURN
.
RLPTMKI3  RESET     KEY59                                                       
          MOVE      ZERO,OVRCD
          READL     PATMKIA3,KEY59;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTMKI3                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATMKIA3;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTMKI3                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATMKIA3;PTMKCODE,PTMKKKWD,PTMKDCLM,PTMKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTMKI3  RESET     KEY59                                                       
          UNLOCK    PATMKIA3                                                    
          RETURN
.
