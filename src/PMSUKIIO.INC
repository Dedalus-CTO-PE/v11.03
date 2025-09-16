.
. PMSUKIIO    
. --------
. Filename     : pmsukiaf.dat
.
RSPMUKI1  RESET     KEY83                                                       
          READ      PMSUKIA1,KEY83;;                                            
          RETURN
.
RAPMUKI1  RESET     KEY83                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUKIA1,KEY83;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMUKI1  RESET     KEY83                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUKIA1,KEY83;PMUKVSID,PMUKCODE,PMUKKKWD,PMUKSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMUKI1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSUKIA1;PMUKVSID,PMUKCODE,PMUKKKWD,PMUKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMUKI1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSUKIA1;PMUKVSID,PMUKCODE,PMUKKKWD,PMUKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMUKI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSUKIA1;PMUKVSID,PMUKCODE,PMUKKKWD,PMUKSPAR                
          RETURN
.
WRPMUKI1  RESET     KEY83                                                       
          WRITE     PMSUKIA1,KEY83;PMUKVSID,PMUKCODE,PMUKKKWD,PMUKSPAR          
          RETURN
.
DEPMUKI1  RESET     KEY83                                                       
          DELETE    PMSUKIA1,KEY83                                              
          RETURN
.
RSPMUKI2  RESET     KEY83                                                       
          READ      PMSUKIA2,KEY83;;                                            
          RETURN
.
RAPMUKI2  RESET     KEY83                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUKIA2,KEY83;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMUKI2  RESET     KEY83                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUKIA2,KEY83;PMUKVSID,PMUKCODE,PMUKKKWD,PMUKSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMUKI2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSUKIA2;PMUKVSID,PMUKCODE,PMUKKKWD,PMUKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMUKI2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSUKIA2;PMUKVSID,PMUKCODE,PMUKKKWD,PMUKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMUKI2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSUKIA2;PMUKVSID,PMUKCODE,PMUKKKWD,PMUKSPAR                
          RETURN
.
WRPMUKI2  RESET     KEY83                                                       
          WRITE     PMSUKIA2,KEY83;PMUKVSID,PMUKCODE,PMUKKKWD,PMUKSPAR          
          RETURN
.
DEPMUKI2  RESET     KEY83                                                       
          DELETE    PMSUKIA2,KEY83                                              
          RETURN
.
