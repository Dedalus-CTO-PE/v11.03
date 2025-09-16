.
. PMSABFIO    
. --------
. Filename     : pmsabfaf.dat
.
RSPMABF1  RESET     KEY19                                                       
          READ      PMSABFA1,KEY19;;                                            
          RETURN
.
RAPMABF1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSABFA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMABF1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSABFA1,KEY19;PMABADMN,PMABINVN,PMABADJT,PMABINVC,PMABABFT:
                                   PMABEPSN,PMABADRG,PMABDRGD,PMABADJV,PMABCDES:
                                   PMABIMPR,PMABCDAT,PMABCTIM,PMABCUID,PMABUDAT:
                                   PMABUTIM,PMABUUID,PMABSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMABF1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSABFA1;PMABADMN,PMABINVN,PMABADJT,PMABINVC,PMABABFT:      
                             PMABEPSN,PMABADRG,PMABDRGD,PMABADJV,PMABCDES:      
                             PMABIMPR,PMABCDAT,PMABCTIM,PMABCUID,PMABUDAT:      
                             PMABUTIM,PMABUUID,PMABSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMABF1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSABFA1;PMABADMN,PMABINVN,PMABADJT,PMABINVC,PMABABFT:      
                             PMABEPSN,PMABADRG,PMABDRGD,PMABADJV,PMABCDES:      
                             PMABIMPR,PMABCDAT,PMABCTIM,PMABCUID,PMABUDAT:      
                             PMABUTIM,PMABUUID,PMABSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMABF1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSABFA1;PMABADMN,PMABINVN,PMABADJT,PMABINVC,PMABABFT:      
                             PMABEPSN,PMABADRG,PMABDRGD,PMABADJV,PMABCDES:      
                             PMABIMPR,PMABCDAT,PMABCTIM,PMABCUID,PMABUDAT:      
                             PMABUTIM,PMABUUID,PMABSPAR                         
          RETURN
.
WRPMABF1  RESET     KEY19                                                       
          WRITE     PMSABFA1,KEY19;PMABADMN,PMABINVN,PMABADJT,PMABINVC,PMABABFT:
                                   PMABEPSN,PMABADRG,PMABDRGD,PMABADJV,PMABCDES:
                                   PMABIMPR,PMABCDAT,PMABCTIM,PMABCUID,PMABUDAT:
                                   PMABUTIM,PMABUUID,PMABSPAR                   
          RETURN
.
DEPMABF1  RESET     KEY19                                                       
          DELETE    PMSABFA1,KEY19                                              
          RETURN
.
RSPMABF2  RESET     KEY19                                                       
          READ      PMSABFA2,KEY19;;                                            
          RETURN
.
RAPMABF2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSABFA2,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMABF2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSABFA2,KEY19;PMABADMN,PMABINVN,PMABADJT,PMABINVC,PMABABFT:
                                   PMABEPSN,PMABADRG,PMABDRGD,PMABADJV,PMABCDES:
                                   PMABIMPR,PMABCDAT,PMABCTIM,PMABCUID,PMABUDAT:
                                   PMABUTIM,PMABUUID,PMABSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMABF2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSABFA2;PMABADMN,PMABINVN,PMABADJT,PMABINVC,PMABABFT:      
                             PMABEPSN,PMABADRG,PMABDRGD,PMABADJV,PMABCDES:      
                             PMABIMPR,PMABCDAT,PMABCTIM,PMABCUID,PMABUDAT:      
                             PMABUTIM,PMABUUID,PMABSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMABF2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSABFA2;PMABADMN,PMABINVN,PMABADJT,PMABINVC,PMABABFT:      
                             PMABEPSN,PMABADRG,PMABDRGD,PMABADJV,PMABCDES:      
                             PMABIMPR,PMABCDAT,PMABCTIM,PMABCUID,PMABUDAT:      
                             PMABUTIM,PMABUUID,PMABSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMABF2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSABFA2;PMABADMN,PMABINVN,PMABADJT,PMABINVC,PMABABFT:      
                             PMABEPSN,PMABADRG,PMABDRGD,PMABADJV,PMABCDES:      
                             PMABIMPR,PMABCDAT,PMABCTIM,PMABCUID,PMABUDAT:      
                             PMABUTIM,PMABUUID,PMABSPAR                         
          RETURN
.
WRPMABF2  RESET     KEY19                                                       
          WRITE     PMSABFA2,KEY19;PMABADMN,PMABINVN,PMABADJT,PMABINVC,PMABABFT:
                                   PMABEPSN,PMABADRG,PMABDRGD,PMABADJV,PMABCDES:
                                   PMABIMPR,PMABCDAT,PMABCTIM,PMABCUID,PMABUDAT:
                                   PMABUTIM,PMABUUID,PMABSPAR                   
          RETURN
.
DEPMABF2  RESET     KEY19                                                       
          DELETE    PMSABFA2,KEY19                                              
          RETURN
.
RSPMABF3  RESET     KEY19                                                       
          READ      PMSABFA3,KEY19;;                                            
          RETURN
.
RAPMABF3  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSABFA3,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMABF3  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSABFA3,KEY19;PMABADMN,PMABINVN,PMABADJT,PMABINVC,PMABABFT:
                                   PMABEPSN,PMABADRG,PMABDRGD,PMABADJV,PMABCDES:
                                   PMABIMPR,PMABCDAT,PMABCTIM,PMABCUID,PMABUDAT:
                                   PMABUTIM,PMABUUID,PMABSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMABF3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSABFA3;PMABADMN,PMABINVN,PMABADJT,PMABINVC,PMABABFT:      
                             PMABEPSN,PMABADRG,PMABDRGD,PMABADJV,PMABCDES:      
                             PMABIMPR,PMABCDAT,PMABCTIM,PMABCUID,PMABUDAT:      
                             PMABUTIM,PMABUUID,PMABSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMABF3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSABFA3;PMABADMN,PMABINVN,PMABADJT,PMABINVC,PMABABFT:      
                             PMABEPSN,PMABADRG,PMABDRGD,PMABADJV,PMABCDES:      
                             PMABIMPR,PMABCDAT,PMABCTIM,PMABCUID,PMABUDAT:      
                             PMABUTIM,PMABUUID,PMABSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMABF3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSABFA3;PMABADMN,PMABINVN,PMABADJT,PMABINVC,PMABABFT:      
                             PMABEPSN,PMABADRG,PMABDRGD,PMABADJV,PMABCDES:      
                             PMABIMPR,PMABCDAT,PMABCTIM,PMABCUID,PMABUDAT:      
                             PMABUTIM,PMABUUID,PMABSPAR                         
          RETURN
.
WRPMABF3  RESET     KEY19                                                       
          WRITE     PMSABFA3,KEY19;PMABADMN,PMABINVN,PMABADJT,PMABINVC,PMABABFT:
                                   PMABEPSN,PMABADRG,PMABDRGD,PMABADJV,PMABCDES:
                                   PMABIMPR,PMABCDAT,PMABCTIM,PMABCUID,PMABUDAT:
                                   PMABUTIM,PMABUUID,PMABSPAR                   
          RETURN
.
DEPMABF3  RESET     KEY19                                                       
          DELETE    PMSABFA3,KEY19                                              
          RETURN
.
