.
. NZPTFEIO    
. --------
. Filename     : nzptfeaf.dat
.
RSNZTFE1  RESET     KEY33                                                       
          READ      NZPTFEA1,KEY33;;                                            
          RETURN
.
RANZTFE1  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      NZPTFEA1,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZTFE1  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      NZPTFEA1,KEY33;NZTFHOSP,NZTFSEST,NZTFCLAM,NZTFFUND,NZTFFTAB:
                        NZTFEDAT,NZTFISEQ,NZTFACTV,NZTFMUNI,NZTFUNTP,NZTFMINU:  
                        NZTFMAXU,NZTFCDAT,NZTFCTIM,NZTFCUID,NZTFUDAT,NZTFUTIM:  
                        NZTFUUID,NZTFSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZTFE1                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPTFEA1;NZTFHOSP,NZTFSEST,NZTFCLAM,NZTFFUND,NZTFFTAB:      
                        NZTFEDAT,NZTFISEQ,NZTFACTV,NZTFMUNI,NZTFUNTP,NZTFMINU:  
                        NZTFMAXU,NZTFCDAT,NZTFCTIM,NZTFCUID,NZTFUDAT,NZTFUTIM:  
                        NZTFUUID,NZTFSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZTFE1                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPTFEA1;NZTFHOSP,NZTFSEST,NZTFCLAM,NZTFFUND,NZTFFTAB:      
                        NZTFEDAT,NZTFISEQ,NZTFACTV,NZTFMUNI,NZTFUNTP,NZTFMINU:  
                        NZTFMAXU,NZTFCDAT,NZTFCTIM,NZTFCUID,NZTFUDAT,NZTFUTIM:  
                        NZTFUUID,NZTFSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZTFE1                                                                        
          UPDATE    NZPTFEA1;NZTFHOSP,NZTFSEST,NZTFCLAM,NZTFFUND,NZTFFTAB:      
                        NZTFEDAT,NZTFISEQ,NZTFACTV,NZTFMUNI,NZTFUNTP,NZTFMINU:  
                        NZTFMAXU,NZTFCDAT,NZTFCTIM,NZTFCUID,NZTFUDAT,NZTFUTIM:  
                        NZTFUUID,NZTFSPAR                                       
          RETURN
.
WRNZTFE1  RESET     KEY33                                                       
          WRITE     NZPTFEA1,KEY33;NZTFHOSP,NZTFSEST,NZTFCLAM,NZTFFUND,NZTFFTAB:
                        NZTFEDAT,NZTFISEQ,NZTFACTV,NZTFMUNI,NZTFUNTP,NZTFMINU:  
                        NZTFMAXU,NZTFCDAT,NZTFCTIM,NZTFCUID,NZTFUDAT,NZTFUTIM:  
                        NZTFUUID,NZTFSPAR                                       
          RETURN
.
DENZTFE1  RESET     KEY33                                                       
          DELETE    NZPTFEA1,KEY33                                              
          RETURN
.
RSNZTFE2  RESET     KEY33                                                       
          READ      NZPTFEA2,KEY33;;                                            
          RETURN
.
RANZTFE2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      NZPTFEA2,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZTFE2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      NZPTFEA2,KEY33;NZTFHOSP,NZTFSEST,NZTFCLAM,NZTFFUND,NZTFFTAB:
                        NZTFEDAT,NZTFISEQ,NZTFACTV,NZTFMUNI,NZTFUNTP,NZTFMINU:  
                        NZTFMAXU,NZTFCDAT,NZTFCTIM,NZTFCUID,NZTFUDAT,NZTFUTIM:  
                        NZTFUUID,NZTFSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZTFE2                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPTFEA2;NZTFHOSP,NZTFSEST,NZTFCLAM,NZTFFUND,NZTFFTAB:      
                        NZTFEDAT,NZTFISEQ,NZTFACTV,NZTFMUNI,NZTFUNTP,NZTFMINU:  
                        NZTFMAXU,NZTFCDAT,NZTFCTIM,NZTFCUID,NZTFUDAT,NZTFUTIM:  
                        NZTFUUID,NZTFSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZTFE2                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPTFEA2;NZTFHOSP,NZTFSEST,NZTFCLAM,NZTFFUND,NZTFFTAB:      
                        NZTFEDAT,NZTFISEQ,NZTFACTV,NZTFMUNI,NZTFUNTP,NZTFMINU:  
                        NZTFMAXU,NZTFCDAT,NZTFCTIM,NZTFCUID,NZTFUDAT,NZTFUTIM:  
                        NZTFUUID,NZTFSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZTFE2                                                                        
          UPDATE    NZPTFEA2;NZTFHOSP,NZTFSEST,NZTFCLAM,NZTFFUND,NZTFFTAB:      
                        NZTFEDAT,NZTFISEQ,NZTFACTV,NZTFMUNI,NZTFUNTP,NZTFMINU:  
                        NZTFMAXU,NZTFCDAT,NZTFCTIM,NZTFCUID,NZTFUDAT,NZTFUTIM:  
                        NZTFUUID,NZTFSPAR                                       
          RETURN
.
WRNZTFE2  RESET     KEY33                                                       
          WRITE     NZPTFEA2,KEY33;NZTFHOSP,NZTFSEST,NZTFCLAM,NZTFFUND,NZTFFTAB:
                        NZTFEDAT,NZTFISEQ,NZTFACTV,NZTFMUNI,NZTFUNTP,NZTFMINU:  
                        NZTFMAXU,NZTFCDAT,NZTFCTIM,NZTFCUID,NZTFUDAT,NZTFUTIM:  
                        NZTFUUID,NZTFSPAR                                       
          RETURN
.
DENZTFE2  RESET     KEY33                                                       
          DELETE    NZPTFEA2,KEY33                                              
          RETURN
.
