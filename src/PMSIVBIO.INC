.
. PMSIVBIO    
. --------
. Filename     : pmsivbaf.dat
.
RSPMIVB1  RESET     KEY8                                                        
          READ      PMSIVBA1,KEY8;;                                             
          RETURN
.
RAPMIVB1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSIVBA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIVB1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSIVBA1,KEY8;PMIVADMN,PMIVUNIQ,PMIVINVN,PMIVSTAT,PMIVCUID: 
                        PMIVCDAT,PMIVCTIM,PMIVUUID,PMIVUDAT,PMIVUTIM,PMIVSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIVB1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIVBA1;PMIVADMN,PMIVUNIQ,PMIVINVN,PMIVSTAT,PMIVCUID:      
                        PMIVCDAT,PMIVCTIM,PMIVUUID,PMIVUDAT,PMIVUTIM,PMIVSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIVB1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIVBA1;PMIVADMN,PMIVUNIQ,PMIVINVN,PMIVSTAT,PMIVCUID:      
                        PMIVCDAT,PMIVCTIM,PMIVUUID,PMIVUDAT,PMIVUTIM,PMIVSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIVB1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIVBA1;PMIVADMN,PMIVUNIQ,PMIVINVN,PMIVSTAT,PMIVCUID:      
                        PMIVCDAT,PMIVCTIM,PMIVUUID,PMIVUDAT,PMIVUTIM,PMIVSPAR   
          RETURN
.
WRPMIVB1  RESET     KEY8                                                        
          WRITE     PMSIVBA1,KEY8;PMIVADMN,PMIVUNIQ,PMIVINVN,PMIVSTAT,PMIVCUID: 
                        PMIVCDAT,PMIVCTIM,PMIVUUID,PMIVUDAT,PMIVUTIM,PMIVSPAR   
          RETURN
.
DEPMIVB1  RESET     KEY8                                                        
          DELETE    PMSIVBA1,KEY8                                               
          RETURN
.
RSPMIVB2  RESET     KEY26                                                       
          READ      PMSIVBA2,KEY26;;                                            
          RETURN
.
RAPMIVB2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIVBA2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIVB2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIVBA2,KEY26;PMIVADMN,PMIVUNIQ,PMIVINVN,PMIVSTAT,PMIVCUID:
                        PMIVCDAT,PMIVCTIM,PMIVUUID,PMIVUDAT,PMIVUTIM,PMIVSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIVB2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIVBA2;PMIVADMN,PMIVUNIQ,PMIVINVN,PMIVSTAT,PMIVCUID:      
                        PMIVCDAT,PMIVCTIM,PMIVUUID,PMIVUDAT,PMIVUTIM,PMIVSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIVB2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIVBA2;PMIVADMN,PMIVUNIQ,PMIVINVN,PMIVSTAT,PMIVCUID:      
                        PMIVCDAT,PMIVCTIM,PMIVUUID,PMIVUDAT,PMIVUTIM,PMIVSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIVB2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIVBA2;PMIVADMN,PMIVUNIQ,PMIVINVN,PMIVSTAT,PMIVCUID:      
                        PMIVCDAT,PMIVCTIM,PMIVUUID,PMIVUDAT,PMIVUTIM,PMIVSPAR   
          RETURN
.
WRPMIVB2  RESET     KEY26                                                       
          WRITE     PMSIVBA2,KEY26;PMIVADMN,PMIVUNIQ,PMIVINVN,PMIVSTAT,PMIVCUID:
                        PMIVCDAT,PMIVCTIM,PMIVUUID,PMIVUDAT,PMIVUTIM,PMIVSPAR   
          RETURN
.
DEPMIVB2  RESET     KEY26                                                       
          DELETE    PMSIVBA2,KEY26                                              
          RETURN
.
RSPMIVB3  RESET     KEY26                                                       
          READ      PMSIVBA3,KEY26;;                                            
          RETURN
.
RAPMIVB3  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIVBA3,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIVB3  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIVBA3,KEY26;PMIVADMN,PMIVUNIQ,PMIVINVN,PMIVSTAT,PMIVCUID:
                        PMIVCDAT,PMIVCTIM,PMIVUUID,PMIVUDAT,PMIVUTIM,PMIVSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIVB3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIVBA3;PMIVADMN,PMIVUNIQ,PMIVINVN,PMIVSTAT,PMIVCUID:      
                        PMIVCDAT,PMIVCTIM,PMIVUUID,PMIVUDAT,PMIVUTIM,PMIVSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIVB3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIVBA3;PMIVADMN,PMIVUNIQ,PMIVINVN,PMIVSTAT,PMIVCUID:      
                        PMIVCDAT,PMIVCTIM,PMIVUUID,PMIVUDAT,PMIVUTIM,PMIVSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIVB3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIVBA3;PMIVADMN,PMIVUNIQ,PMIVINVN,PMIVSTAT,PMIVCUID:      
                        PMIVCDAT,PMIVCTIM,PMIVUUID,PMIVUDAT,PMIVUTIM,PMIVSPAR   
          RETURN
.
WRPMIVB3  RESET     KEY26                                                       
          WRITE     PMSIVBA3,KEY26;PMIVADMN,PMIVUNIQ,PMIVINVN,PMIVSTAT,PMIVCUID:
                        PMIVCDAT,PMIVCTIM,PMIVUUID,PMIVUDAT,PMIVUTIM,PMIVSPAR   
          RETURN
.
DEPMIVB3  RESET     KEY26                                                       
          DELETE    PMSIVBA3,KEY26                                              
          RETURN
.
