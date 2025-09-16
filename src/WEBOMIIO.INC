.
. WEBOMIIO    
. --------
. Filename     : webomiaf.dat
.
RSWBOMI1  RESET     KEY29                                                       
          READ      WEBOMIA1,KEY29;;                                            
          RETURN
.
RAWBOMI1  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMIA1,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOMI1  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMIA1,KEY29;WBOIARID,WBOIRPTC,WBOIMECT,WBOISVCT,WBOISVID:
                                   WBOISVBE,WBOISVCH,WBOISVDS,WBOISVEC,WBOISVIT:
                                   WBOISVSC,WBOICTID,WBOIMSID,WBOISPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOMI1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOMIA1;WBOIARID,WBOIRPTC,WBOIMECT,WBOISVCT,WBOISVID:      
                             WBOISVBE,WBOISVCH,WBOISVDS,WBOISVEC,WBOISVIT:      
                             WBOISVSC,WBOICTID,WBOIMSID,WBOISPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOMI1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOMIA1;WBOIARID,WBOIRPTC,WBOIMECT,WBOISVCT,WBOISVID:      
                             WBOISVBE,WBOISVCH,WBOISVDS,WBOISVEC,WBOISVIT:      
                             WBOISVSC,WBOICTID,WBOIMSID,WBOISPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOMI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOMIA1;WBOIARID,WBOIRPTC,WBOIMECT,WBOISVCT,WBOISVID:      
                             WBOISVBE,WBOISVCH,WBOISVDS,WBOISVEC,WBOISVIT:      
                             WBOISVSC,WBOICTID,WBOIMSID,WBOISPAR                
          RETURN
.
WRWBOMI1  RESET     KEY29                                                       
          WRITE     WEBOMIA1,KEY29;WBOIARID,WBOIRPTC,WBOIMECT,WBOISVCT,WBOISVID:
                                   WBOISVBE,WBOISVCH,WBOISVDS,WBOISVEC,WBOISVIT:
                                   WBOISVSC,WBOICTID,WBOIMSID,WBOISPAR          
          RETURN
.
DEWBOMI1  RESET     KEY29                                                       
          DELETE    WEBOMIA1,KEY29                                              
          RETURN
.
RSWBOMI2  RESET     KEY53                                                       
          READ      WEBOMIA2,KEY53;;                                            
          RETURN
.
RAWBOMI2  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMIA2,KEY53;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOMI2  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMIA2,KEY53;WBOIARID,WBOIRPTC,WBOIMECT,WBOISVCT,WBOISVID:
                                   WBOISVBE,WBOISVCH,WBOISVDS,WBOISVEC,WBOISVIT:
                                   WBOISVSC,WBOICTID,WBOIMSID,WBOISPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOMI2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOMIA2;WBOIARID,WBOIRPTC,WBOIMECT,WBOISVCT,WBOISVID:      
                             WBOISVBE,WBOISVCH,WBOISVDS,WBOISVEC,WBOISVIT:      
                             WBOISVSC,WBOICTID,WBOIMSID,WBOISPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOMI2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOMIA2;WBOIARID,WBOIRPTC,WBOIMECT,WBOISVCT,WBOISVID:      
                             WBOISVBE,WBOISVCH,WBOISVDS,WBOISVEC,WBOISVIT:      
                             WBOISVSC,WBOICTID,WBOIMSID,WBOISPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOMI2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOMIA2;WBOIARID,WBOIRPTC,WBOIMECT,WBOISVCT,WBOISVID:      
                             WBOISVBE,WBOISVCH,WBOISVDS,WBOISVEC,WBOISVIT:      
                             WBOISVSC,WBOICTID,WBOIMSID,WBOISPAR                
          RETURN
.
WRWBOMI2  RESET     KEY53                                                       
          WRITE     WEBOMIA2,KEY53;WBOIARID,WBOIRPTC,WBOIMECT,WBOISVCT,WBOISVID:
                                   WBOISVBE,WBOISVCH,WBOISVDS,WBOISVEC,WBOISVIT:
                                   WBOISVSC,WBOICTID,WBOIMSID,WBOISPAR          
          RETURN
.
DEWBOMI2  RESET     KEY53                                                       
          DELETE    WEBOMIA2,KEY53                                              
          RETURN
.
RSWBOMI3  RESET     KEY65                                                       
          READ      WEBOMIA3,KEY65;;                                            
          RETURN
.
RAWBOMI3  RESET     KEY65                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMIA3,KEY65;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOMI3  RESET     KEY65                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMIA3,KEY65;WBOIARID,WBOIRPTC,WBOIMECT,WBOISVCT,WBOISVID:
                                   WBOISVBE,WBOISVCH,WBOISVDS,WBOISVEC,WBOISVIT:
                                   WBOISVSC,WBOICTID,WBOIMSID,WBOISPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOMI3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOMIA3;WBOIARID,WBOIRPTC,WBOIMECT,WBOISVCT,WBOISVID:      
                             WBOISVBE,WBOISVCH,WBOISVDS,WBOISVEC,WBOISVIT:      
                             WBOISVSC,WBOICTID,WBOIMSID,WBOISPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOMI3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOMIA3;WBOIARID,WBOIRPTC,WBOIMECT,WBOISVCT,WBOISVID:      
                             WBOISVBE,WBOISVCH,WBOISVDS,WBOISVEC,WBOISVIT:      
                             WBOISVSC,WBOICTID,WBOIMSID,WBOISPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOMI3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOMIA3;WBOIARID,WBOIRPTC,WBOIMECT,WBOISVCT,WBOISVID:      
                             WBOISVBE,WBOISVCH,WBOISVDS,WBOISVEC,WBOISVIT:      
                             WBOISVSC,WBOICTID,WBOIMSID,WBOISPAR                
          RETURN
.
WRWBOMI3  RESET     KEY65                                                       
          WRITE     WEBOMIA3,KEY65;WBOIARID,WBOIRPTC,WBOIMECT,WBOISVCT,WBOISVID:
                                   WBOISVBE,WBOISVCH,WBOISVDS,WBOISVEC,WBOISVIT:
                                   WBOISVSC,WBOICTID,WBOIMSID,WBOISPAR          
          RETURN
.
DEWBOMI3  RESET     KEY65                                                       
          DELETE    WEBOMIA3,KEY65                                              
          RETURN
.
