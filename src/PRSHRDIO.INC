.
. PRSHRDIO    
. --------
. Filename     : prshrdaf.dat
.
RSP2HRD1  RESET     KEY10                                                       
          READ      PRSHRDA1,KEY10;;                                            
          RETURN
.
RAP2HRD1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PRSHRDA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDP2HRD1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PRSHRDA1,KEY10;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKP2HRD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRSHRDA1;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:      
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPP2HRD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRSHRDA1;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:      
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPP2HRD1                                                                        
          UPDATE    PRSHRDA1;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:      
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRP2HRD1  RESET     KEY10                                                       
          WRITE     PRSHRDA1,KEY10;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:
                        P2HRHOSP,P2HRSPAR                                       
          RETURN
.
DEP2HRD1  RESET     KEY10                                                       
          DELETE    PRSHRDA1,KEY10                                              
          RETURN
.
RLP2HRD1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     PRSHRDA1,KEY10;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLP2HRD1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PRSHRDA1;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:      
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLP2HRD1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PRSHRDA1;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:      
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUP2HRD1  RESET     KEY10                                                       
          UNLOCK    PRSHRDA1                                                    
          RETURN
.
RSP2HRD2  RESET     KEY26                                                       
          READ      PRSHRDA2,KEY26;;                                            
          RETURN
.
RAP2HRD2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PRSHRDA2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDP2HRD2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PRSHRDA2,KEY26;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKP2HRD2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRSHRDA2;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:      
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPP2HRD2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRSHRDA2;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:      
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPP2HRD2                                                                        
          UPDATE    PRSHRDA2;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:      
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRP2HRD2  RESET     KEY26                                                       
          WRITE     PRSHRDA2,KEY26;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:
                        P2HRHOSP,P2HRSPAR                                       
          RETURN
.
DEP2HRD2  RESET     KEY26                                                       
          DELETE    PRSHRDA2,KEY26                                              
          RETURN
.
RLP2HRD2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READL     PRSHRDA2,KEY26;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLP2HRD2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PRSHRDA2;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:      
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLP2HRD2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PRSHRDA2;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:      
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUP2HRD2  RESET     KEY26                                                       
          UNLOCK    PRSHRDA2                                                    
          RETURN
.
RSP2HRD3  RESET     KEY29                                                       
          READ      PRSHRDA3,KEY29;;                                            
          RETURN
.
RAP2HRD3  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PRSHRDA3,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDP2HRD3  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PRSHRDA3,KEY29;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKP2HRD3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRSHRDA3;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:      
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPP2HRD3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRSHRDA3;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:      
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPP2HRD3                                                                        
          UPDATE    PRSHRDA3;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:      
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRP2HRD3  RESET     KEY29                                                       
          WRITE     PRSHRDA3,KEY29;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:
                        P2HRHOSP,P2HRSPAR                                       
          RETURN
.
DEP2HRD3  RESET     KEY29                                                       
          DELETE    PRSHRDA3,KEY29                                              
          RETURN
.
RLP2HRD3  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READL     PRSHRDA3,KEY29;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLP2HRD3                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PRSHRDA3;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:      
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLP2HRD3                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PRSHRDA3;P2HRURUN,P2HRFDAT,P2HRTDAT,P2HRCDAT,P2HRRDAT:      
                        P2HRHOSP,P2HRSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUP2HRD3  RESET     KEY29                                                       
          UNLOCK    PRSHRDA3                                                    
          RETURN
.
