.
. PMSHPGIO    
. --------
. Filename     : pmshpgaf.dat
.
RSPMHPG1  RESET     KEY23                                                       
          READ      PMSHPGA1,KEY23;;                                            
          RETURN
.
RAPMHPG1  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHPGA1,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHPG1  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHPGA1,KEY23;PMHPATYP,PMHPCLAM,PMHPFUND,PMHPTABT,PMHPEDAT:
                        PMHPMAXI,PMHPWARI,PMHPMAXO,PMHPWARO,PMHPBRKO,PMHPCDAT:  
                        PMHPCTIM,PMHPCUID,PMHPUDAT,PMHPUTIM,PMHPUUID,PMHPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHPG1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSHPGA1;PMHPATYP,PMHPCLAM,PMHPFUND,PMHPTABT,PMHPEDAT:      
                        PMHPMAXI,PMHPWARI,PMHPMAXO,PMHPWARO,PMHPBRKO,PMHPCDAT:  
                        PMHPCTIM,PMHPCUID,PMHPUDAT,PMHPUTIM,PMHPUUID,PMHPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHPG1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSHPGA1;PMHPATYP,PMHPCLAM,PMHPFUND,PMHPTABT,PMHPEDAT:      
                        PMHPMAXI,PMHPWARI,PMHPMAXO,PMHPWARO,PMHPBRKO,PMHPCDAT:  
                        PMHPCTIM,PMHPCUID,PMHPUDAT,PMHPUTIM,PMHPUUID,PMHPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHPG1                                                                        
          UPDATE    PMSHPGA1;PMHPATYP,PMHPCLAM,PMHPFUND,PMHPTABT,PMHPEDAT:      
                        PMHPMAXI,PMHPWARI,PMHPMAXO,PMHPWARO,PMHPBRKO,PMHPCDAT:  
                        PMHPCTIM,PMHPCUID,PMHPUDAT,PMHPUTIM,PMHPUUID,PMHPSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMHPG1  RESET     KEY23                                                       
          WRITE     PMSHPGA1,KEY23;PMHPATYP,PMHPCLAM,PMHPFUND,PMHPTABT,PMHPEDAT:
                        PMHPMAXI,PMHPWARI,PMHPMAXO,PMHPWARO,PMHPBRKO,PMHPCDAT:  
                        PMHPCTIM,PMHPCUID,PMHPUDAT,PMHPUTIM,PMHPUUID,PMHPSPAR   
          RETURN
.
DEPMHPG1  RESET     KEY23                                                       
          DELETE    PMSHPGA1,KEY23                                              
          RETURN
.
RLPMHPG1  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READL     PMSHPGA1,KEY23;PMHPATYP,PMHPCLAM,PMHPFUND,PMHPTABT,PMHPEDAT:
                        PMHPMAXI,PMHPWARI,PMHPMAXO,PMHPWARO,PMHPBRKO,PMHPCDAT:  
                        PMHPCTIM,PMHPCUID,PMHPUDAT,PMHPUTIM,PMHPUUID,PMHPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMHPG1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSHPGA1;PMHPATYP,PMHPCLAM,PMHPFUND,PMHPTABT,PMHPEDAT:      
                        PMHPMAXI,PMHPWARI,PMHPMAXO,PMHPWARO,PMHPBRKO,PMHPCDAT:  
                        PMHPCTIM,PMHPCUID,PMHPUDAT,PMHPUTIM,PMHPUUID,PMHPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMHPG1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSHPGA1;PMHPATYP,PMHPCLAM,PMHPFUND,PMHPTABT,PMHPEDAT:      
                        PMHPMAXI,PMHPWARI,PMHPMAXO,PMHPWARO,PMHPBRKO,PMHPCDAT:  
                        PMHPCTIM,PMHPCUID,PMHPUDAT,PMHPUTIM,PMHPUUID,PMHPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMHPG1  RESET     KEY23                                                       
          UNLOCK    PMSHPGA1                                                    
          RETURN
.
