.
. PATPKIIO    
. --------
. Filename     : patpkiaf.dat
.
RSPTPKI1  RESET     KEY53                                                       
          READ      PATPKIA1,KEY53;;                                            
          RETURN
.
RAPTPKI1  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      PATPKIA1,KEY53;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTPKI1  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      PATPKIA1,KEY53;PTPKCODE,PTPKKKWD,PTPKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTPKI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATPKIA1;PTPKCODE,PTPKKKWD,PTPKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTPKI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATPKIA1;PTPKCODE,PTPKKKWD,PTPKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTPKI1                                                                        
          UPDATE    PATPKIA1;PTPKCODE,PTPKKKWD,PTPKSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTPKI1  RESET     KEY53                                                       
          WRITE     PATPKIA1,KEY53;PTPKCODE,PTPKKKWD,PTPKSPAR                   
          RETURN
.
DEPTPKI1  RESET     KEY53                                                       
          DELETE    PATPKIA1,KEY53                                              
          RETURN
.
RLPTPKI1  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READL     PATPKIA1,KEY53;PTPKCODE,PTPKKKWD,PTPKSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTPKI1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATPKIA1;PTPKCODE,PTPKKKWD,PTPKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTPKI1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATPKIA1;PTPKCODE,PTPKKKWD,PTPKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTPKI1  RESET     KEY53                                                       
          UNLOCK    PATPKIA1                                                    
          RETURN
.
RSPTPKI2  RESET     KEY53                                                       
          READ      PATPKIA2,KEY53;;                                            
          RETURN
.
RAPTPKI2  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      PATPKIA2,KEY53;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTPKI2  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      PATPKIA2,KEY53;PTPKCODE,PTPKKKWD,PTPKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTPKI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATPKIA2;PTPKCODE,PTPKKKWD,PTPKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTPKI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATPKIA2;PTPKCODE,PTPKKKWD,PTPKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTPKI2                                                                        
          UPDATE    PATPKIA2;PTPKCODE,PTPKKKWD,PTPKSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTPKI2  RESET     KEY53                                                       
          WRITE     PATPKIA2,KEY53;PTPKCODE,PTPKKKWD,PTPKSPAR                   
          RETURN
.
DEPTPKI2  RESET     KEY53                                                       
          DELETE    PATPKIA2,KEY53                                              
          RETURN
.
RLPTPKI2  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READL     PATPKIA2,KEY53;PTPKCODE,PTPKKKWD,PTPKSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTPKI2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATPKIA2;PTPKCODE,PTPKKKWD,PTPKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTPKI2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATPKIA2;PTPKCODE,PTPKKKWD,PTPKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTPKI2  RESET     KEY59                                                       
          UNLOCK    PATPKIA2                                                    
          RETURN
.
