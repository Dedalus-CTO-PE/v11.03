.
. PMSTCOIO    
. --------
. Filename     : pmstcoaf.dat
.
RSPMTCO1  RESET     KEY16                                                       
          READ      PMSTCOA1,KEY16;;                                            
          RETURN
.
RAPMTCO1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSTCOA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMTCO1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSTCOA1,KEY16;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMTCO1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSTCOA1;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:      
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMTCO1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSTCOA1;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:      
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMTCO1                                                                        
          UPDATE    PMSTCOA1;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:      
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMTCO1  RESET     KEY16                                                       
          WRITE     PMSTCOA1,KEY16;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          RETURN
.
DEPMTCO1  RESET     KEY16                                                       
          DELETE    PMSTCOA1,KEY16                                              
          RETURN
.
RLPMTCO1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     PMSTCOA1,KEY16;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMTCO1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSTCOA1;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:      
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMTCO1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSTCOA1;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:      
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMTCO1  RESET     KEY16                                                       
          UNLOCK    PMSTCOA1                                                    
          RETURN
.
RSPMTCO2  RESET     KEY16                                                       
          READ      PMSTCOA2,KEY16;;                                            
          RETURN
.
RAPMTCO2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSTCOA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMTCO2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSTCOA2,KEY16;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMTCO2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSTCOA2;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:      
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMTCO2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSTCOA2;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:      
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMTCO2                                                                        
          UPDATE    PMSTCOA2;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:      
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMTCO2  RESET     KEY16                                                       
          WRITE     PMSTCOA2,KEY16;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          RETURN
.
DEPMTCO2  RESET     KEY16                                                       
          DELETE    PMSTCOA2,KEY16                                              
          RETURN
.
RLPMTCO2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     PMSTCOA2,KEY16;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMTCO2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSTCOA2;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:      
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMTCO2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSTCOA2;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:      
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMTCO2  RESET     KEY16                                                       
          UNLOCK    PMSTCOA2                                                    
          RETURN
.
RSPMTCO3  RESET     KEY16                                                       
          READ      PMSTCOA3,KEY16;;                                            
          RETURN
.
RAPMTCO3  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSTCOA3,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMTCO3  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSTCOA3,KEY16;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMTCO3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSTCOA3;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:      
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMTCO3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSTCOA3;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:      
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMTCO3                                                                        
          UPDATE    PMSTCOA3;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:      
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMTCO3  RESET     KEY16                                                       
          WRITE     PMSTCOA3,KEY16;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          RETURN
.
DEPMTCO3  RESET     KEY16                                                       
          DELETE    PMSTCOA3,KEY16                                              
          RETURN
.
RLPMTCO3  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     PMSTCOA3,KEY16;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMTCO3                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSTCOA3;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:      
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMTCO3                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSTCOA3;PMTCCODE,PMTCTCOM,PMTCLNUM,PMTCCOMM,PMTCUDAT:      
                        PMTCUTIM,PMTCUUID,PMTCSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMTCO3  RESET     KEY16                                                       
          UNLOCK    PMSTCOA3                                                    
          RETURN
.
