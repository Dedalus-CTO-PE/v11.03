.
. PMSCKIIO    
. --------
. Filename     : pmsckiaf.dat
.
RSPMCKI1  RESET     KEY21                                                       
          READ      PMSCKIA1,KEY21;;                                            
          RETURN
.
RAPMCKI1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCKIA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCKI1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCKIA1,KEY21;PMCKCNTR,PMCKKKWD,PMCKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCKI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSCKIA1;PMCKCNTR,PMCKKKWD,PMCKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCKI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSCKIA1;PMCKCNTR,PMCKKKWD,PMCKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCKI1                                                                        
          UPDATE    PMSCKIA1;PMCKCNTR,PMCKKKWD,PMCKSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCKI1  RESET     KEY21                                                       
          WRITE     PMSCKIA1,KEY21;PMCKCNTR,PMCKKKWD,PMCKSPAR                   
          RETURN
.
DEPMCKI1  RESET     KEY21                                                       
          DELETE    PMSCKIA1,KEY21                                              
          RETURN
.
RLPMCKI1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     PMSCKIA1,KEY21;PMCKCNTR,PMCKKKWD,PMCKSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCKI1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSCKIA1;PMCKCNTR,PMCKKKWD,PMCKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCKI1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSCKIA1;PMCKCNTR,PMCKKKWD,PMCKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCKI1  RESET     KEY21                                                       
          UNLOCK    PMSCKIA1                                                    
          RETURN
.
RSPMCKI2  RESET     KEY21                                                       
          READ      PMSCKIA2,KEY21;;                                            
          RETURN
.
RAPMCKI2  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCKIA2,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCKI2  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCKIA2,KEY21;PMCKCNTR,PMCKKKWD,PMCKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCKI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSCKIA2;PMCKCNTR,PMCKKKWD,PMCKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCKI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSCKIA2;PMCKCNTR,PMCKKKWD,PMCKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCKI2                                                                        
          UPDATE    PMSCKIA2;PMCKCNTR,PMCKKKWD,PMCKSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCKI2  RESET     KEY21                                                       
          WRITE     PMSCKIA2,KEY21;PMCKCNTR,PMCKKKWD,PMCKSPAR                   
          RETURN
.
DEPMCKI2  RESET     KEY21                                                       
          DELETE    PMSCKIA2,KEY21                                              
          RETURN
.
RLPMCKI2  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     PMSCKIA2,KEY21;PMCKCNTR,PMCKKKWD,PMCKSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCKI2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSCKIA2;PMCKCNTR,PMCKKKWD,PMCKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCKI2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSCKIA2;PMCKCNTR,PMCKKKWD,PMCKSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCKI2  RESET     KEY21                                                       
          UNLOCK    PMSCKIA2                                                    
          RETURN
.
