.
. PMSFOCIO    
. --------
. Filename     : pmsfocaf.dat
.
RSPMFOC1  RESET     KEY18                                                       
          READ      PMSFOCA1,KEY18;;                                            
          RETURN
.
RAPMFOC1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFOCA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMFOC1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFOCA1,KEY18;PMFOVISN,PMFOEPNO,PMFOPCDT,PMFOPHOC,PMFORAPC:
                        PMFOCDAT,PMFOCTIM,PMFOCUID,PMFOUDAT,PMFOUTIM,PMFOUUID:  
                        PMFOSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMFOC1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSFOCA1;PMFOVISN,PMFOEPNO,PMFOPCDT,PMFOPHOC,PMFORAPC:      
                        PMFOCDAT,PMFOCTIM,PMFOCUID,PMFOUDAT,PMFOUTIM,PMFOUUID:  
                        PMFOSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMFOC1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSFOCA1;PMFOVISN,PMFOEPNO,PMFOPCDT,PMFOPHOC,PMFORAPC:      
                        PMFOCDAT,PMFOCTIM,PMFOCUID,PMFOUDAT,PMFOUTIM,PMFOUUID:  
                        PMFOSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMFOC1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSFOCA1;PMFOVISN,PMFOEPNO,PMFOPCDT,PMFOPHOC,PMFORAPC:      
                        PMFOCDAT,PMFOCTIM,PMFOCUID,PMFOUDAT,PMFOUTIM,PMFOUUID:  
                        PMFOSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMFOC1  RESET     KEY18                                                       
          WRITE     PMSFOCA1,KEY18;PMFOVISN,PMFOEPNO,PMFOPCDT,PMFOPHOC,PMFORAPC:
                        PMFOCDAT,PMFOCTIM,PMFOCUID,PMFOUDAT,PMFOUTIM,PMFOUUID:  
                        PMFOSPAR                                                
          RETURN
.
DEPMFOC1  RESET     KEY18                                                       
          DELETE    PMSFOCA1,KEY18                                              
          RETURN
.
RLPMFOC1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     PMSFOCA1,KEY18;PMFOVISN,PMFOEPNO,PMFOPCDT,PMFOPHOC,PMFORAPC:
                        PMFOCDAT,PMFOCTIM,PMFOCUID,PMFOUDAT,PMFOUTIM,PMFOUUID:  
                        PMFOSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMFOC1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSFOCA1;PMFOVISN,PMFOEPNO,PMFOPCDT,PMFOPHOC,PMFORAPC:      
                        PMFOCDAT,PMFOCTIM,PMFOCUID,PMFOUDAT,PMFOUTIM,PMFOUUID:  
                        PMFOSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMFOC1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSFOCA1;PMFOVISN,PMFOEPNO,PMFOPCDT,PMFOPHOC,PMFORAPC:      
                        PMFOCDAT,PMFOCTIM,PMFOCUID,PMFOUDAT,PMFOUTIM,PMFOUUID:  
                        PMFOSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMFOC1  RESET     KEY18                                                       
          UNLOCK    PMSFOCA1                                                    
          RETURN
.
