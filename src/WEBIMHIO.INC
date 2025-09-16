.
. WEBIMHIO    
. --------
. Filename     : webimhaf.dat
.
RSWBIMH1  RESET     KEY38                                                       
          READ      WEBIMHA1,KEY38;;                                            
          RETURN
.
RAWBIMH1  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMHA1,KEY38;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMH1  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMHA1,KEY38;WBIHFBID,WBIHARID,WBIHCLID,WBIHRPTC,WBIHMECN:
                                   WBIHSVCN,WBIHMEID,WBIHSVID,WBIHSVAC,WBIHSVBE:
                                   WBIHSVCA,WBIHSVDS,WBIHSVIT,WBIHSVSF,WBIHSVEC:
                                   WBIHSVET,WBIHTRID,WBIHMSID,WBIHSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIMH1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMHA1;WBIHFBID,WBIHARID,WBIHCLID,WBIHRPTC,WBIHMECN:      
                             WBIHSVCN,WBIHMEID,WBIHSVID,WBIHSVAC,WBIHSVBE:      
                             WBIHSVCA,WBIHSVDS,WBIHSVIT,WBIHSVSF,WBIHSVEC:      
                             WBIHSVET,WBIHTRID,WBIHMSID,WBIHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIMH1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMHA1;WBIHFBID,WBIHARID,WBIHCLID,WBIHRPTC,WBIHMECN:      
                             WBIHSVCN,WBIHMEID,WBIHSVID,WBIHSVAC,WBIHSVBE:      
                             WBIHSVCA,WBIHSVDS,WBIHSVIT,WBIHSVSF,WBIHSVEC:      
                             WBIHSVET,WBIHTRID,WBIHMSID,WBIHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIMH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIMHA1;WBIHFBID,WBIHARID,WBIHCLID,WBIHRPTC,WBIHMECN:      
                             WBIHSVCN,WBIHMEID,WBIHSVID,WBIHSVAC,WBIHSVBE:      
                             WBIHSVCA,WBIHSVDS,WBIHSVIT,WBIHSVSF,WBIHSVEC:      
                             WBIHSVET,WBIHTRID,WBIHMSID,WBIHSPAR                
          RETURN
.
WRWBIMH1  RESET     KEY38                                                       
          WRITE     WEBIMHA1,KEY38;WBIHFBID,WBIHARID,WBIHCLID,WBIHRPTC,WBIHMECN:
                                   WBIHSVCN,WBIHMEID,WBIHSVID,WBIHSVAC,WBIHSVBE:
                                   WBIHSVCA,WBIHSVDS,WBIHSVIT,WBIHSVSF,WBIHSVEC:
                                   WBIHSVET,WBIHTRID,WBIHMSID,WBIHSPAR          
          RETURN
.
DEWBIMH1  RESET     KEY38                                                       
          DELETE    WEBIMHA1,KEY38                                              
          RETURN
.
RSWBIMH2  RESET     KEY62                                                       
          READ      WEBIMHA2,KEY62;;                                            
          RETURN
.
RAWBIMH2  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMHA2,KEY62;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMH2  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMHA2,KEY62;WBIHFBID,WBIHARID,WBIHCLID,WBIHRPTC,WBIHMECN:
                                   WBIHSVCN,WBIHMEID,WBIHSVID,WBIHSVAC,WBIHSVBE:
                                   WBIHSVCA,WBIHSVDS,WBIHSVIT,WBIHSVSF,WBIHSVEC:
                                   WBIHSVET,WBIHTRID,WBIHMSID,WBIHSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIMH2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMHA2;WBIHFBID,WBIHARID,WBIHCLID,WBIHRPTC,WBIHMECN:      
                             WBIHSVCN,WBIHMEID,WBIHSVID,WBIHSVAC,WBIHSVBE:      
                             WBIHSVCA,WBIHSVDS,WBIHSVIT,WBIHSVSF,WBIHSVEC:      
                             WBIHSVET,WBIHTRID,WBIHMSID,WBIHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIMH2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMHA2;WBIHFBID,WBIHARID,WBIHCLID,WBIHRPTC,WBIHMECN:      
                             WBIHSVCN,WBIHMEID,WBIHSVID,WBIHSVAC,WBIHSVBE:      
                             WBIHSVCA,WBIHSVDS,WBIHSVIT,WBIHSVSF,WBIHSVEC:      
                             WBIHSVET,WBIHTRID,WBIHMSID,WBIHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIMH2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIMHA2;WBIHFBID,WBIHARID,WBIHCLID,WBIHRPTC,WBIHMECN:      
                             WBIHSVCN,WBIHMEID,WBIHSVID,WBIHSVAC,WBIHSVBE:      
                             WBIHSVCA,WBIHSVDS,WBIHSVIT,WBIHSVSF,WBIHSVEC:      
                             WBIHSVET,WBIHTRID,WBIHMSID,WBIHSPAR                
          RETURN
.
WRWBIMH2  RESET     KEY62                                                       
          WRITE     WEBIMHA2,KEY62;WBIHFBID,WBIHARID,WBIHCLID,WBIHRPTC,WBIHMECN:
                                   WBIHSVCN,WBIHMEID,WBIHSVID,WBIHSVAC,WBIHSVBE:
                                   WBIHSVCA,WBIHSVDS,WBIHSVIT,WBIHSVSF,WBIHSVEC:
                                   WBIHSVET,WBIHTRID,WBIHMSID,WBIHSPAR          
          RETURN
.
DEWBIMH2  RESET     KEY62                                                       
          DELETE    WEBIMHA2,KEY62                                              
          RETURN
.
RSWBIMH3  RESET     KEY74                                                       
          READ      WEBIMHA3,KEY74;;                                            
          RETURN
.
RAWBIMH3  RESET     KEY74                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMHA3,KEY74;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMH3  RESET     KEY74                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMHA3,KEY74;WBIHFBID,WBIHARID,WBIHCLID,WBIHRPTC,WBIHMECN:
                                   WBIHSVCN,WBIHMEID,WBIHSVID,WBIHSVAC,WBIHSVBE:
                                   WBIHSVCA,WBIHSVDS,WBIHSVIT,WBIHSVSF,WBIHSVEC:
                                   WBIHSVET,WBIHTRID,WBIHMSID,WBIHSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIMH3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMHA3;WBIHFBID,WBIHARID,WBIHCLID,WBIHRPTC,WBIHMECN:      
                             WBIHSVCN,WBIHMEID,WBIHSVID,WBIHSVAC,WBIHSVBE:      
                             WBIHSVCA,WBIHSVDS,WBIHSVIT,WBIHSVSF,WBIHSVEC:      
                             WBIHSVET,WBIHTRID,WBIHMSID,WBIHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIMH3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMHA3;WBIHFBID,WBIHARID,WBIHCLID,WBIHRPTC,WBIHMECN:      
                             WBIHSVCN,WBIHMEID,WBIHSVID,WBIHSVAC,WBIHSVBE:      
                             WBIHSVCA,WBIHSVDS,WBIHSVIT,WBIHSVSF,WBIHSVEC:      
                             WBIHSVET,WBIHTRID,WBIHMSID,WBIHSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIMH3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIMHA3;WBIHFBID,WBIHARID,WBIHCLID,WBIHRPTC,WBIHMECN:      
                             WBIHSVCN,WBIHMEID,WBIHSVID,WBIHSVAC,WBIHSVBE:      
                             WBIHSVCA,WBIHSVDS,WBIHSVIT,WBIHSVSF,WBIHSVEC:      
                             WBIHSVET,WBIHTRID,WBIHMSID,WBIHSPAR                
          RETURN
.
WRWBIMH3  RESET     KEY74                                                       
          WRITE     WEBIMHA3,KEY74;WBIHFBID,WBIHARID,WBIHCLID,WBIHRPTC,WBIHMECN:
                                   WBIHSVCN,WBIHMEID,WBIHSVID,WBIHSVAC,WBIHSVBE:
                                   WBIHSVCA,WBIHSVDS,WBIHSVIT,WBIHSVSF,WBIHSVEC:
                                   WBIHSVET,WBIHTRID,WBIHMSID,WBIHSPAR          
          RETURN
.
DEWBIMH3  RESET     KEY74                                                       
          DELETE    WEBIMHA3,KEY74                                              
          RETURN
.
