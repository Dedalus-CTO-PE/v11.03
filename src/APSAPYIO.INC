.
. APSAPYIO    
. --------
. Filename     : apsapyaf.dat
.
RSAPAP1   RESET     KEY52                                                       
          READ      APSAPYA1,KEY52;;                                            
          RETURN
.
RAAPAP1   RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      APSAPYA1,KEY52;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPAP1   RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      APSAPYA1,KEY52;APAPCRD,APAPREF,APAPTYP,APAPDOC,APAPORD:     
                        APAPLIN,APAPBCH,APAPPAY,APAPGST,APAPTPY,APAPCHQ:        
                        APAPDAT,APAPPYC,APAPPYD,APAPPYB,APAPDOF,APAPDUE:        
                        APAPPIN,APAPMDI,APAPSKY,APAPPOR,APAPGMT,APAPPAYG:       
                        APAPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPAP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSAPYA1;APAPCRD,APAPREF,APAPTYP,APAPDOC,APAPORD:           
                        APAPLIN,APAPBCH,APAPPAY,APAPGST,APAPTPY,APAPCHQ:        
                        APAPDAT,APAPPYC,APAPPYD,APAPPYB,APAPDOF,APAPDUE:        
                        APAPPIN,APAPMDI,APAPSKY,APAPPOR,APAPGMT,APAPPAYG:       
                        APAPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPAP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSAPYA1;APAPCRD,APAPREF,APAPTYP,APAPDOC,APAPORD:           
                        APAPLIN,APAPBCH,APAPPAY,APAPGST,APAPTPY,APAPCHQ:        
                        APAPDAT,APAPPYC,APAPPYD,APAPPYB,APAPDOF,APAPDUE:        
                        APAPPIN,APAPMDI,APAPSKY,APAPPOR,APAPGMT,APAPPAYG:       
                        APAPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPAP1                                                                         
          UPDATE    APSAPYA1;APAPCRD,APAPREF,APAPTYP,APAPDOC,APAPORD:           
                        APAPLIN,APAPBCH,APAPPAY,APAPGST,APAPTPY,APAPCHQ:        
                        APAPDAT,APAPPYC,APAPPYD,APAPPYB,APAPDOF,APAPDUE:        
                        APAPPIN,APAPMDI,APAPSKY,APAPPOR,APAPGMT,APAPPAYG:       
                        APAPSPA                                                 
          RETURN
.
WRAPAP1   RESET     KEY52                                                       
          WRITE     APSAPYA1,KEY52;APAPCRD,APAPREF,APAPTYP,APAPDOC,APAPORD:     
                        APAPLIN,APAPBCH,APAPPAY,APAPGST,APAPTPY,APAPCHQ:        
                        APAPDAT,APAPPYC,APAPPYD,APAPPYB,APAPDOF,APAPDUE:        
                        APAPPIN,APAPMDI,APAPSKY,APAPPOR,APAPGMT,APAPPAYG:       
                        APAPSPA                                                 
          RETURN
.
DEAPAP1   RESET     KEY52                                                       
          DELETE    APSAPYA1,KEY52                                              
          RETURN
.
RSAPAP2   RESET     KEY52                                                       
          READ      APSAPYA2,KEY52;;                                            
          RETURN
.
RAAPAP2   RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      APSAPYA2,KEY52;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPAP2   RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      APSAPYA2,KEY52;APAPCRD,APAPREF,APAPTYP,APAPDOC,APAPORD:     
                        APAPLIN,APAPBCH,APAPPAY,APAPGST,APAPTPY,APAPCHQ:        
                        APAPDAT,APAPPYC,APAPPYD,APAPPYB,APAPDOF,APAPDUE:        
                        APAPPIN,APAPMDI,APAPSKY,APAPPOR,APAPGMT,APAPPAYG:       
                        APAPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPAP2                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSAPYA2;APAPCRD,APAPREF,APAPTYP,APAPDOC,APAPORD:           
                        APAPLIN,APAPBCH,APAPPAY,APAPGST,APAPTPY,APAPCHQ:        
                        APAPDAT,APAPPYC,APAPPYD,APAPPYB,APAPDOF,APAPDUE:        
                        APAPPIN,APAPMDI,APAPSKY,APAPPOR,APAPGMT,APAPPAYG:       
                        APAPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPAP2                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSAPYA2;APAPCRD,APAPREF,APAPTYP,APAPDOC,APAPORD:           
                        APAPLIN,APAPBCH,APAPPAY,APAPGST,APAPTPY,APAPCHQ:        
                        APAPDAT,APAPPYC,APAPPYD,APAPPYB,APAPDOF,APAPDUE:        
                        APAPPIN,APAPMDI,APAPSKY,APAPPOR,APAPGMT,APAPPAYG:       
                        APAPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPAP2                                                                         
          UPDATE    APSAPYA2;APAPCRD,APAPREF,APAPTYP,APAPDOC,APAPORD:           
                        APAPLIN,APAPBCH,APAPPAY,APAPGST,APAPTPY,APAPCHQ:        
                        APAPDAT,APAPPYC,APAPPYD,APAPPYB,APAPDOF,APAPDUE:        
                        APAPPIN,APAPMDI,APAPSKY,APAPPOR,APAPGMT,APAPPAYG:       
                        APAPSPA                                                 
          RETURN
.
WRAPAP2   RESET     KEY52                                                       
          WRITE     APSAPYA2,KEY52;APAPCRD,APAPREF,APAPTYP,APAPDOC,APAPORD:     
                        APAPLIN,APAPBCH,APAPPAY,APAPGST,APAPTPY,APAPCHQ:        
                        APAPDAT,APAPPYC,APAPPYD,APAPPYB,APAPDOF,APAPDUE:        
                        APAPPIN,APAPMDI,APAPSKY,APAPPOR,APAPGMT,APAPPAYG:       
                        APAPSPA                                                 
          RETURN
.
DEAPAP2   RESET     KEY52                                                       
          DELETE    APSAPYA2,KEY52                                              
          RETURN
.
RSAPAP3   RESET     KEY55                                                       
          READ      APSAPYA3,KEY55;;                                            
          RETURN
.
RAAPAP3   RESET     KEY55                                                       
          MOVE      ZERO,OVRCD
          READ      APSAPYA3,KEY55;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPAP3   RESET     KEY55                                                       
          MOVE      ZERO,OVRCD
          READ      APSAPYA3,KEY55;APAPCRD,APAPREF,APAPTYP,APAPDOC,APAPORD:     
                        APAPLIN,APAPBCH,APAPPAY,APAPGST,APAPTPY,APAPCHQ:        
                        APAPDAT,APAPPYC,APAPPYD,APAPPYB,APAPDOF,APAPDUE:        
                        APAPPIN,APAPMDI,APAPSKY,APAPPOR,APAPGMT,APAPPAYG:       
                        APAPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPAP3                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSAPYA3;APAPCRD,APAPREF,APAPTYP,APAPDOC,APAPORD:           
                        APAPLIN,APAPBCH,APAPPAY,APAPGST,APAPTPY,APAPCHQ:        
                        APAPDAT,APAPPYC,APAPPYD,APAPPYB,APAPDOF,APAPDUE:        
                        APAPPIN,APAPMDI,APAPSKY,APAPPOR,APAPGMT,APAPPAYG:       
                        APAPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPAP3                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSAPYA3;APAPCRD,APAPREF,APAPTYP,APAPDOC,APAPORD:           
                        APAPLIN,APAPBCH,APAPPAY,APAPGST,APAPTPY,APAPCHQ:        
                        APAPDAT,APAPPYC,APAPPYD,APAPPYB,APAPDOF,APAPDUE:        
                        APAPPIN,APAPMDI,APAPSKY,APAPPOR,APAPGMT,APAPPAYG:       
                        APAPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPAP3                                                                         
          UPDATE    APSAPYA3;APAPCRD,APAPREF,APAPTYP,APAPDOC,APAPORD:           
                        APAPLIN,APAPBCH,APAPPAY,APAPGST,APAPTPY,APAPCHQ:        
                        APAPDAT,APAPPYC,APAPPYD,APAPPYB,APAPDOF,APAPDUE:        
                        APAPPIN,APAPMDI,APAPSKY,APAPPOR,APAPGMT,APAPPAYG:       
                        APAPSPA                                                 
          RETURN
.
WRAPAP3   RESET     KEY55                                                       
          WRITE     APSAPYA3,KEY55;APAPCRD,APAPREF,APAPTYP,APAPDOC,APAPORD:     
                        APAPLIN,APAPBCH,APAPPAY,APAPGST,APAPTPY,APAPCHQ:        
                        APAPDAT,APAPPYC,APAPPYD,APAPPYB,APAPDOF,APAPDUE:        
                        APAPPIN,APAPMDI,APAPSKY,APAPPOR,APAPGMT,APAPPAYG:       
                        APAPSPA                                                 
          RETURN
.
DEAPAP3   RESET     KEY55                                                       
          DELETE    APSAPYA3,KEY55                                              
          RETURN
.
RSAPAP4   RESET     KEY58                                                       
          READ      APSAPYA4,KEY58;;                                            
          RETURN
.
RAAPAP4   RESET     KEY58                                                       
          MOVE      ZERO,OVRCD
          READ      APSAPYA4,KEY58;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPAP4   RESET     KEY58                                                       
          MOVE      ZERO,OVRCD
          READ      APSAPYA4,KEY58;APAPCRD,APAPREF,APAPTYP,APAPDOC,APAPORD:     
                        APAPLIN,APAPBCH,APAPPAY,APAPGST,APAPTPY,APAPCHQ:        
                        APAPDAT,APAPPYC,APAPPYD,APAPPYB,APAPDOF,APAPDUE:        
                        APAPPIN,APAPMDI,APAPSKY,APAPPOR,APAPGMT,APAPPAYG:       
                        APAPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPAP4                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSAPYA4;APAPCRD,APAPREF,APAPTYP,APAPDOC,APAPORD:           
                        APAPLIN,APAPBCH,APAPPAY,APAPGST,APAPTPY,APAPCHQ:        
                        APAPDAT,APAPPYC,APAPPYD,APAPPYB,APAPDOF,APAPDUE:        
                        APAPPIN,APAPMDI,APAPSKY,APAPPOR,APAPGMT,APAPPAYG:       
                        APAPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPAP4                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSAPYA4;APAPCRD,APAPREF,APAPTYP,APAPDOC,APAPORD:           
                        APAPLIN,APAPBCH,APAPPAY,APAPGST,APAPTPY,APAPCHQ:        
                        APAPDAT,APAPPYC,APAPPYD,APAPPYB,APAPDOF,APAPDUE:        
                        APAPPIN,APAPMDI,APAPSKY,APAPPOR,APAPGMT,APAPPAYG:       
                        APAPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPAP4                                                                         
          UPDATE    APSAPYA4;APAPCRD,APAPREF,APAPTYP,APAPDOC,APAPORD:           
                        APAPLIN,APAPBCH,APAPPAY,APAPGST,APAPTPY,APAPCHQ:        
                        APAPDAT,APAPPYC,APAPPYD,APAPPYB,APAPDOF,APAPDUE:        
                        APAPPIN,APAPMDI,APAPSKY,APAPPOR,APAPGMT,APAPPAYG:       
                        APAPSPA                                                 
          RETURN
.
WRAPAP4   RESET     KEY58                                                       
          WRITE     APSAPYA4,KEY58;APAPCRD,APAPREF,APAPTYP,APAPDOC,APAPORD:     
                        APAPLIN,APAPBCH,APAPPAY,APAPGST,APAPTPY,APAPCHQ:        
                        APAPDAT,APAPPYC,APAPPYD,APAPPYB,APAPDOF,APAPDUE:        
                        APAPPIN,APAPMDI,APAPSKY,APAPPOR,APAPGMT,APAPPAYG:       
                        APAPSPA                                                 
          RETURN
.
DEAPAP4   RESET     KEY58                                                       
          DELETE    APSAPYA4,KEY58                                              
          RETURN
.
