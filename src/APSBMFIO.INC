.
. APSBMFIO    
. --------
. Filename     : apsbmfaf.dat
.
RSAPBM1   RESET     KEY5                                                        
          READ      APSBMFA1,KEY5;;                                             
          RETURN
.
RAAPBM1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      APSBMFA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPBM1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      APSBMFA1,KEY5;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:      
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPBM1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSBMFA1;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:           
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPBM1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSBMFA1;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:           
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPBM1                                                                         
          UPDATE    APSBMFA1;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:           
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAPBM1   RESET     KEY5                                                        
          WRITE     APSBMFA1,KEY5;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:      
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          RETURN
.
DEAPBM1   RESET     KEY5                                                        
          DELETE    APSBMFA1,KEY5                                               
          RETURN
.
RLAPBM1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READL     APSBMFA1,KEY5;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:      
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAPBM1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   APSBMFA1;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:           
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAPBM1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   APSBMFA1;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:           
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAPBM1   RESET     KEY5                                                        
          UNLOCK    APSBMFA1                                                    
          RETURN
.
RSAPBM2   RESET     KEY7                                                        
          READ      APSBMFA2,KEY7;;                                             
          RETURN
.
RAAPBM2   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      APSBMFA2,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPBM2   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      APSBMFA2,KEY7;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:      
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPBM2                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSBMFA2;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:           
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPBM2                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSBMFA2;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:           
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPBM2                                                                         
          UPDATE    APSBMFA2;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:           
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAPBM2   RESET     KEY7                                                        
          WRITE     APSBMFA2,KEY7;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:      
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          RETURN
.
DEAPBM2   RESET     KEY7                                                        
          DELETE    APSBMFA2,KEY7                                               
          RETURN
.
RLAPBM2   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READL     APSBMFA2,KEY7;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:      
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAPBM2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   APSBMFA2;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:           
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAPBM2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   APSBMFA2;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:           
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAPBM2   RESET     KEY7                                                        
          UNLOCK    APSBMFA2                                                    
          RETURN
.
RSAPBM3   RESET     KEY13                                                       
          READ      APSBMFA3,KEY13;;                                            
          RETURN
.
RAAPBM3   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      APSBMFA3,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPBM3   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      APSBMFA3,KEY13;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:     
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPBM3                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSBMFA3;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:           
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPBM3                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSBMFA3;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:           
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPBM3                                                                         
          UPDATE    APSBMFA3;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:           
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAPBM3   RESET     KEY13                                                       
          WRITE     APSBMFA3,KEY13;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:     
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          RETURN
.
DEAPBM3   RESET     KEY13                                                       
          DELETE    APSBMFA3,KEY13                                              
          RETURN
.
RLAPBM3   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     APSBMFA3,KEY13;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:     
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAPBM3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   APSBMFA3;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:           
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAPBM3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   APSBMFA3;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:           
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAPBM3   RESET     KEY13                                                       
          UNLOCK    APSBMFA3                                                    
          RETURN
.
RSAPBM4   RESET     KEY15                                                       
          READ      APSBMFA4,KEY15;;                                            
          RETURN
.
RAAPBM4   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      APSBMFA4,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPBM4   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      APSBMFA4,KEY15;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:     
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPBM4                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSBMFA4;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:           
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPBM4                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSBMFA4;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:           
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPBM4                                                                         
          UPDATE    APSBMFA4;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:           
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAPBM4   RESET     KEY15                                                       
          WRITE     APSBMFA4,KEY15;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:     
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          RETURN
.
DEAPBM4   RESET     KEY15                                                       
          DELETE    APSBMFA4,KEY15                                              
          RETURN
.
RLAPBM4   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READL     APSBMFA4,KEY15;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:     
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAPBM4                                                                         
          MOVE      ZERO,OVRCD
          READLKS   APSBMFA4;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:           
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAPBM4                                                                         
          MOVE      ZERO,OVRCD
          READLKP   APSBMFA4;APBMBCH,APBMLED,APBMDIS,APBMRES,APBMTOT:           
                        APBMTYP,APBMOPR,APBMDAT,APBMADT,APBMUDT,APBMCHQ:        
                        APBMSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAPBM4   RESET     KEY15                                                       
          UNLOCK    APSBMFA4                                                    
          RETURN
.
