.
. ALLDKIIO    
. --------
. Filename     : alldkiaf.dat
.
RSALDKI1  RESET     KEY27                                                       
          READ      ALLDKIA1,KEY27;;                                            
          RETURN
.
RAALDKI1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      ALLDKIA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALDKI1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      ALLDKIA1,KEY27;ALDKDEPT,ALDKDIAG,ALDKKKWD,ALDKSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALDKI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLDKIA1;ALDKDEPT,ALDKDIAG,ALDKKKWD,ALDKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALDKI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLDKIA1;ALDKDEPT,ALDKDIAG,ALDKKKWD,ALDKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALDKI1                                                                        
          UPDATE    ALLDKIA1;ALDKDEPT,ALDKDIAG,ALDKKKWD,ALDKSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALDKI1  RESET     KEY27                                                       
          WRITE     ALLDKIA1,KEY27;ALDKDEPT,ALDKDIAG,ALDKKKWD,ALDKSPAR          
          RETURN
.
DEALDKI1  RESET     KEY27                                                       
          DELETE    ALLDKIA1,KEY27                                              
          RETURN
.
RLALDKI1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     ALLDKIA1,KEY27;ALDKDEPT,ALDKDIAG,ALDKKKWD,ALDKSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALDKI1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLDKIA1;ALDKDEPT,ALDKDIAG,ALDKKKWD,ALDKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALDKI1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLDKIA1;ALDKDEPT,ALDKDIAG,ALDKKKWD,ALDKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALDKI1  RESET     KEY27                                                       
          UNLOCK    ALLDKIA1                                                    
          RETURN
.
RSALDKI2  RESET     KEY27                                                       
          READ      ALLDKIA2,KEY27;;                                            
          RETURN
.
RAALDKI2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      ALLDKIA2,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALDKI2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      ALLDKIA2,KEY27;ALDKDEPT,ALDKDIAG,ALDKKKWD,ALDKSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALDKI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLDKIA2;ALDKDEPT,ALDKDIAG,ALDKKKWD,ALDKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALDKI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLDKIA2;ALDKDEPT,ALDKDIAG,ALDKKKWD,ALDKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALDKI2                                                                        
          UPDATE    ALLDKIA2;ALDKDEPT,ALDKDIAG,ALDKKKWD,ALDKSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALDKI2  RESET     KEY27                                                       
          WRITE     ALLDKIA2,KEY27;ALDKDEPT,ALDKDIAG,ALDKKKWD,ALDKSPAR          
          RETURN
.
DEALDKI2  RESET     KEY27                                                       
          DELETE    ALLDKIA2,KEY27                                              
          RETURN
.
RLALDKI2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     ALLDKIA2,KEY27;ALDKDEPT,ALDKDIAG,ALDKKKWD,ALDKSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALDKI2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLDKIA2;ALDKDEPT,ALDKDIAG,ALDKKKWD,ALDKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALDKI2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLDKIA2;ALDKDEPT,ALDKDIAG,ALDKKKWD,ALDKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALDKI2  RESET     KEY27                                                       
          UNLOCK    ALLDKIA2                                                    
          RETURN
.
