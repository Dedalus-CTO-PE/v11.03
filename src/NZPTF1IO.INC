.
. NZPTFEIO    
. --------
. Filename     : nzptfeaf.dat
.
RSNZTF11  RESET     KEY33                                                       
          READ      NZPTF1A1,KEY33;;                                            
          RETURN
.
RANZTF11  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      NZPTF1A1,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZTF11  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      NZPTF1A1,KEY33;NZTFHOSP,NZTFSEST,NZTFCLAM,NZTFFUND,NZTFFTAB:
                        NZTFEDAT,NZTFISEQ,NZTFACTV,NZTFMUNI,NZTFUNTP,NZTFMINU:  
                        NZTFMAXU,NZTFCDAT,NZTFCTIM,NZTFCUID,NZTFUDAT,NZTFUTIM:  
                        NZTFUUID,NZTFSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZTF11                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPTF1A1;NZTFHOSP,NZTFSEST,NZTFCLAM,NZTFFUND,NZTFFTAB:      
                        NZTFEDAT,NZTFISEQ,NZTFACTV,NZTFMUNI,NZTFUNTP,NZTFMINU:  
                        NZTFMAXU,NZTFCDAT,NZTFCTIM,NZTFCUID,NZTFUDAT,NZTFUTIM:  
                        NZTFUUID,NZTFSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZTF11                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPTF1A1;NZTFHOSP,NZTFSEST,NZTFCLAM,NZTFFUND,NZTFFTAB:      
                        NZTFEDAT,NZTFISEQ,NZTFACTV,NZTFMUNI,NZTFUNTP,NZTFMINU:  
                        NZTFMAXU,NZTFCDAT,NZTFCTIM,NZTFCUID,NZTFUDAT,NZTFUTIM:  
                        NZTFUUID,NZTFSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZTF11                                                                        
          UPDATE    NZPTF1A1;NZTFHOSP,NZTFSEST,NZTFCLAM,NZTFFUND,NZTFFTAB:      
                        NZTFEDAT,NZTFISEQ,NZTFACTV,NZTFMUNI,NZTFUNTP,NZTFMINU:  
                        NZTFMAXU,NZTFCDAT,NZTFCTIM,NZTFCUID,NZTFUDAT,NZTFUTIM:  
                        NZTFUUID,NZTFSPAR                                       
          RETURN
.
WRNZTF11  RESET     KEY33                                                       
          WRITE     NZPTF1A1,KEY33;NZTFHOSP,NZTFSEST,NZTFCLAM,NZTFFUND,NZTFFTAB:
                        NZTFEDAT,NZTFISEQ,NZTFACTV,NZTFMUNI,NZTFUNTP,NZTFMINU:  
                        NZTFMAXU,NZTFCDAT,NZTFCTIM,NZTFCUID,NZTFUDAT,NZTFUTIM:  
                        NZTFUUID,NZTFSPAR                                       
          RETURN
.
DENZTF11  RESET     KEY33                                                       
          DELETE    NZPTF1A1,KEY33                                              
          RETURN
.
RSNZTF12  RESET     KEY33                                                       
          READ      NZPTF1A2,KEY33;;                                            
          RETURN
.
RANZTF12  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      NZPTF1A2,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZTF12  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      NZPTF1A2,KEY33;NZTFHOSP,NZTFSEST,NZTFCLAM,NZTFFUND,NZTFFTAB:
                        NZTFEDAT,NZTFISEQ,NZTFACTV,NZTFMUNI,NZTFUNTP,NZTFMINU:  
                        NZTFMAXU,NZTFCDAT,NZTFCTIM,NZTFCUID,NZTFUDAT,NZTFUTIM:  
                        NZTFUUID,NZTFSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZTF12                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPTF1A2;NZTFHOSP,NZTFSEST,NZTFCLAM,NZTFFUND,NZTFFTAB:      
                        NZTFEDAT,NZTFISEQ,NZTFACTV,NZTFMUNI,NZTFUNTP,NZTFMINU:  
                        NZTFMAXU,NZTFCDAT,NZTFCTIM,NZTFCUID,NZTFUDAT,NZTFUTIM:  
                        NZTFUUID,NZTFSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZTF12                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPTF1A2;NZTFHOSP,NZTFSEST,NZTFCLAM,NZTFFUND,NZTFFTAB:      
                        NZTFEDAT,NZTFISEQ,NZTFACTV,NZTFMUNI,NZTFUNTP,NZTFMINU:  
                        NZTFMAXU,NZTFCDAT,NZTFCTIM,NZTFCUID,NZTFUDAT,NZTFUTIM:  
                        NZTFUUID,NZTFSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZTF12                                                                        
          UPDATE    NZPTF1A2;NZTFHOSP,NZTFSEST,NZTFCLAM,NZTFFUND,NZTFFTAB:      
                        NZTFEDAT,NZTFISEQ,NZTFACTV,NZTFMUNI,NZTFUNTP,NZTFMINU:  
                        NZTFMAXU,NZTFCDAT,NZTFCTIM,NZTFCUID,NZTFUDAT,NZTFUTIM:  
                        NZTFUUID,NZTFSPAR                                       
          RETURN
.
WRNZTF12  RESET     KEY33                                                       
          WRITE     NZPTF1A2,KEY33;NZTFHOSP,NZTFSEST,NZTFCLAM,NZTFFUND,NZTFFTAB:
                        NZTFEDAT,NZTFISEQ,NZTFACTV,NZTFMUNI,NZTFUNTP,NZTFMINU:  
                        NZTFMAXU,NZTFCDAT,NZTFCTIM,NZTFCUID,NZTFUDAT,NZTFUTIM:  
                        NZTFUUID,NZTFSPAR                                       
          RETURN
.
DENZTF12  RESET     KEY33                                                       
          DELETE    NZPTF1A2,KEY33                                              
          RETURN
.
