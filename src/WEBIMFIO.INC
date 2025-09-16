.
. WEBIMFIO    
. --------
. Filename     : webimfaf.dat
.
RSWBIMF1  RESET     KEY38                                                       
          READ      WEBIMFA1,KEY38;;                                            
          RETURN
.
RAWBIMF1  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMFA1,KEY38;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMF1  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMFA1,KEY38;WBIFFBID,WBIFARID,WBIFCLID,WBIFRPTC,WBIFMECN:
                                   WBIFSVCN,WBIFMEID,WBIFSVID,WBIFSVBE,WBIFSVCA:
                                   WBIFSVDS,WBIFSVEC,WBIFSVIN,WBIFSVSF,WBIFTRID:
                                   WBIFMSID,WBIFSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIMF1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMFA1;WBIFFBID,WBIFARID,WBIFCLID,WBIFRPTC,WBIFMECN:      
                             WBIFSVCN,WBIFMEID,WBIFSVID,WBIFSVBE,WBIFSVCA:      
                             WBIFSVDS,WBIFSVEC,WBIFSVIN,WBIFSVSF,WBIFTRID:      
                             WBIFMSID,WBIFSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIMF1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMFA1;WBIFFBID,WBIFARID,WBIFCLID,WBIFRPTC,WBIFMECN:      
                             WBIFSVCN,WBIFMEID,WBIFSVID,WBIFSVBE,WBIFSVCA:      
                             WBIFSVDS,WBIFSVEC,WBIFSVIN,WBIFSVSF,WBIFTRID:      
                             WBIFMSID,WBIFSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIMF1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIMFA1;WBIFFBID,WBIFARID,WBIFCLID,WBIFRPTC,WBIFMECN:      
                             WBIFSVCN,WBIFMEID,WBIFSVID,WBIFSVBE,WBIFSVCA:      
                             WBIFSVDS,WBIFSVEC,WBIFSVIN,WBIFSVSF,WBIFTRID:      
                             WBIFMSID,WBIFSPAR                                  
          RETURN
.
WRWBIMF1  RESET     KEY38                                                       
          WRITE     WEBIMFA1,KEY38;WBIFFBID,WBIFARID,WBIFCLID,WBIFRPTC,WBIFMECN:
                                   WBIFSVCN,WBIFMEID,WBIFSVID,WBIFSVBE,WBIFSVCA:
                                   WBIFSVDS,WBIFSVEC,WBIFSVIN,WBIFSVSF,WBIFTRID:
                                   WBIFMSID,WBIFSPAR                            
          RETURN
.
DEWBIMF1  RESET     KEY38                                                       
          DELETE    WEBIMFA1,KEY38                                              
          RETURN
.
RSWBIMF2  RESET     KEY62                                                       
          READ      WEBIMFA2,KEY62;;                                            
          RETURN
.
RAWBIMF2  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMFA2,KEY62;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMF2  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMFA2,KEY62;WBIFFBID,WBIFARID,WBIFCLID,WBIFRPTC,WBIFMECN:
                                   WBIFSVCN,WBIFMEID,WBIFSVID,WBIFSVBE,WBIFSVCA:
                                   WBIFSVDS,WBIFSVEC,WBIFSVIN,WBIFSVSF,WBIFTRID:
                                   WBIFMSID,WBIFSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIMF2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMFA2;WBIFFBID,WBIFARID,WBIFCLID,WBIFRPTC,WBIFMECN:      
                             WBIFSVCN,WBIFMEID,WBIFSVID,WBIFSVBE,WBIFSVCA:      
                             WBIFSVDS,WBIFSVEC,WBIFSVIN,WBIFSVSF,WBIFTRID:      
                             WBIFMSID,WBIFSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIMF2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMFA2;WBIFFBID,WBIFARID,WBIFCLID,WBIFRPTC,WBIFMECN:      
                             WBIFSVCN,WBIFMEID,WBIFSVID,WBIFSVBE,WBIFSVCA:      
                             WBIFSVDS,WBIFSVEC,WBIFSVIN,WBIFSVSF,WBIFTRID:      
                             WBIFMSID,WBIFSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIMF2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIMFA2;WBIFFBID,WBIFARID,WBIFCLID,WBIFRPTC,WBIFMECN:      
                             WBIFSVCN,WBIFMEID,WBIFSVID,WBIFSVBE,WBIFSVCA:      
                             WBIFSVDS,WBIFSVEC,WBIFSVIN,WBIFSVSF,WBIFTRID:      
                             WBIFMSID,WBIFSPAR                                  
          RETURN
.
WRWBIMF2  RESET     KEY62                                                       
          WRITE     WEBIMFA2,KEY62;WBIFFBID,WBIFARID,WBIFCLID,WBIFRPTC,WBIFMECN:
                                   WBIFSVCN,WBIFMEID,WBIFSVID,WBIFSVBE,WBIFSVCA:
                                   WBIFSVDS,WBIFSVEC,WBIFSVIN,WBIFSVSF,WBIFTRID:
                                   WBIFMSID,WBIFSPAR                            
          RETURN
.
DEWBIMF2  RESET     KEY62                                                       
          DELETE    WEBIMFA2,KEY62                                              
          RETURN
.
RSWBIMF3  RESET     KEY74                                                       
          READ      WEBIMFA3,KEY74;;                                            
          RETURN
.
RAWBIMF3  RESET     KEY74                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMFA3,KEY74;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMF3  RESET     KEY74                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMFA3,KEY74;WBIFFBID,WBIFARID,WBIFCLID,WBIFRPTC,WBIFMECN:
                                   WBIFSVCN,WBIFMEID,WBIFSVID,WBIFSVBE,WBIFSVCA:
                                   WBIFSVDS,WBIFSVEC,WBIFSVIN,WBIFSVSF,WBIFTRID:
                                   WBIFMSID,WBIFSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIMF3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMFA3;WBIFFBID,WBIFARID,WBIFCLID,WBIFRPTC,WBIFMECN:      
                             WBIFSVCN,WBIFMEID,WBIFSVID,WBIFSVBE,WBIFSVCA:      
                             WBIFSVDS,WBIFSVEC,WBIFSVIN,WBIFSVSF,WBIFTRID:      
                             WBIFMSID,WBIFSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIMF3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMFA3;WBIFFBID,WBIFARID,WBIFCLID,WBIFRPTC,WBIFMECN:      
                             WBIFSVCN,WBIFMEID,WBIFSVID,WBIFSVBE,WBIFSVCA:      
                             WBIFSVDS,WBIFSVEC,WBIFSVIN,WBIFSVSF,WBIFTRID:      
                             WBIFMSID,WBIFSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIMF3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIMFA3;WBIFFBID,WBIFARID,WBIFCLID,WBIFRPTC,WBIFMECN:      
                             WBIFSVCN,WBIFMEID,WBIFSVID,WBIFSVBE,WBIFSVCA:      
                             WBIFSVDS,WBIFSVEC,WBIFSVIN,WBIFSVSF,WBIFTRID:      
                             WBIFMSID,WBIFSPAR                                  
          RETURN
.
WRWBIMF3  RESET     KEY74                                                       
          WRITE     WEBIMFA3,KEY74;WBIFFBID,WBIFARID,WBIFCLID,WBIFRPTC,WBIFMECN:
                                   WBIFSVCN,WBIFMEID,WBIFSVID,WBIFSVBE,WBIFSVCA:
                                   WBIFSVDS,WBIFSVEC,WBIFSVIN,WBIFSVSF,WBIFTRID:
                                   WBIFMSID,WBIFSPAR                            
          RETURN
.
DEWBIMF3  RESET     KEY74                                                       
          DELETE    WEBIMFA3,KEY74                                              
          RETURN
.
