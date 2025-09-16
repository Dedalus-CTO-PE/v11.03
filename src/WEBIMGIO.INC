.
. WEBIMGIO    
. --------
. Filename     : webimgaf.dat
.
RSWBIMG1  RESET     KEY34                                                       
          READ      WEBIMGA1,KEY34;;                                            
          RETURN
.
RAWBIMG1  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMGA1,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMG1  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMGA1,KEY34;WBIGFBID,WBIGARID,WBIGCLID,WBIGRPTC,WBIGMECN:
                                   WBIGMEID,WBIGTRID,WBIGMSID,WBIGSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIMG1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMGA1;WBIGFBID,WBIGARID,WBIGCLID,WBIGRPTC,WBIGMECN:      
                             WBIGMEID,WBIGTRID,WBIGMSID,WBIGSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIMG1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMGA1;WBIGFBID,WBIGARID,WBIGCLID,WBIGRPTC,WBIGMECN:      
                             WBIGMEID,WBIGTRID,WBIGMSID,WBIGSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIMG1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIMGA1;WBIGFBID,WBIGARID,WBIGCLID,WBIGRPTC,WBIGMECN:      
                             WBIGMEID,WBIGTRID,WBIGMSID,WBIGSPAR                
          RETURN
.
WRWBIMG1  RESET     KEY34                                                       
          WRITE     WEBIMGA1,KEY34;WBIGFBID,WBIGARID,WBIGCLID,WBIGRPTC,WBIGMECN:
                                   WBIGMEID,WBIGTRID,WBIGMSID,WBIGSPAR          
          RETURN
.
DEWBIMG1  RESET     KEY34                                                       
          DELETE    WEBIMGA1,KEY34                                              
          RETURN
.
RSWBIMG2  RESET     KEY58                                                       
          READ      WEBIMGA2,KEY58;;                                            
          RETURN
.
RAWBIMG2  RESET     KEY58                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMGA2,KEY58;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMG2  RESET     KEY58                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMGA2,KEY58;WBIGFBID,WBIGARID,WBIGCLID,WBIGRPTC,WBIGMECN:
                                   WBIGMEID,WBIGTRID,WBIGMSID,WBIGSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIMG2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMGA2;WBIGFBID,WBIGARID,WBIGCLID,WBIGRPTC,WBIGMECN:      
                             WBIGMEID,WBIGTRID,WBIGMSID,WBIGSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIMG2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMGA2;WBIGFBID,WBIGARID,WBIGCLID,WBIGRPTC,WBIGMECN:      
                             WBIGMEID,WBIGTRID,WBIGMSID,WBIGSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIMG2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIMGA2;WBIGFBID,WBIGARID,WBIGCLID,WBIGRPTC,WBIGMECN:      
                             WBIGMEID,WBIGTRID,WBIGMSID,WBIGSPAR                
          RETURN
.
WRWBIMG2  RESET     KEY58                                                       
          WRITE     WEBIMGA2,KEY58;WBIGFBID,WBIGARID,WBIGCLID,WBIGRPTC,WBIGMECN:
                                   WBIGMEID,WBIGTRID,WBIGMSID,WBIGSPAR          
          RETURN
.
DEWBIMG2  RESET     KEY58                                                       
          DELETE    WEBIMGA2,KEY58                                              
          RETURN
.
RSWBIMG3  RESET     KEY70                                                       
          READ      WEBIMGA3,KEY70;;                                            
          RETURN
.
RAWBIMG3  RESET     KEY70                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMGA3,KEY70;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMG3  RESET     KEY70                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMGA3,KEY70;WBIGFBID,WBIGARID,WBIGCLID,WBIGRPTC,WBIGMECN:
                                   WBIGMEID,WBIGTRID,WBIGMSID,WBIGSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIMG3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMGA3;WBIGFBID,WBIGARID,WBIGCLID,WBIGRPTC,WBIGMECN:      
                             WBIGMEID,WBIGTRID,WBIGMSID,WBIGSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIMG3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMGA3;WBIGFBID,WBIGARID,WBIGCLID,WBIGRPTC,WBIGMECN:      
                             WBIGMEID,WBIGTRID,WBIGMSID,WBIGSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIMG3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIMGA3;WBIGFBID,WBIGARID,WBIGCLID,WBIGRPTC,WBIGMECN:      
                             WBIGMEID,WBIGTRID,WBIGMSID,WBIGSPAR                
          RETURN
.
WRWBIMG3  RESET     KEY70                                                       
          WRITE     WEBIMGA3,KEY70;WBIGFBID,WBIGARID,WBIGCLID,WBIGRPTC,WBIGMECN:
                                   WBIGMEID,WBIGTRID,WBIGMSID,WBIGSPAR          
          RETURN
.
DEWBIMG3  RESET     KEY70                                                       
          DELETE    WEBIMGA3,KEY70                                              
          RETURN
.
