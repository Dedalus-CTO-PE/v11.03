.
. FMSBASIO    
. --------
. Filename     : fmsbasaf.dat
.
RSFMBS1   RESET     KEY10                                                       
          READ      FMSBASA1,KEY10;;                                            
          RETURN
.
RAFMBS1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      FMSBASA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMBS1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      FMSBASA1,KEY10;FMBSBAT,FMBSUNIQ,FMBSLEDG,FMBSBASC,FMBSPDAT: 
                        FMBSSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMBS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSBASA1;FMBSBAT,FMBSUNIQ,FMBSLEDG,FMBSBASC,FMBSPDAT:       
                        FMBSSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMBS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSBASA1;FMBSBAT,FMBSUNIQ,FMBSLEDG,FMBSBASC,FMBSPDAT:       
                        FMBSSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMBS1                                                                         
          UPDATE    FMSBASA1;FMBSBAT,FMBSUNIQ,FMBSLEDG,FMBSBASC,FMBSPDAT:       
                        FMBSSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRFMBS1   RESET     KEY10                                                       
          WRITE     FMSBASA1,KEY10;FMBSBAT,FMBSUNIQ,FMBSLEDG,FMBSBASC,FMBSPDAT: 
                        FMBSSPAR                                                
          RETURN
.
DEFMBS1   RESET     KEY10                                                       
          DELETE    FMSBASA1,KEY10                                              
          RETURN
.
RLFMBS1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     FMSBASA1,KEY10;FMBSBAT,FMBSUNIQ,FMBSLEDG,FMBSBASC,FMBSPDAT: 
                        FMBSSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLFMBS1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   FMSBASA1;FMBSBAT,FMBSUNIQ,FMBSLEDG,FMBSBASC,FMBSPDAT:       
                        FMBSSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLFMBS1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   FMSBASA1;FMBSBAT,FMBSUNIQ,FMBSLEDG,FMBSBASC,FMBSPDAT:       
                        FMBSSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUFMBS1   RESET     KEY10                                                       
          UNLOCK    FMSBASA1                                                    
          RETURN
.
RSFMBS2   RESET     KEY23                                                       
          READ      FMSBASA2,KEY23;;                                            
          RETURN
.
RAFMBS2   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      FMSBASA2,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMBS2   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      FMSBASA2,KEY23;FMBSBAT,FMBSUNIQ,FMBSLEDG,FMBSBASC,FMBSPDAT: 
                        FMBSSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMBS2                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSBASA2;FMBSBAT,FMBSUNIQ,FMBSLEDG,FMBSBASC,FMBSPDAT:       
                        FMBSSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMBS2                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSBASA2;FMBSBAT,FMBSUNIQ,FMBSLEDG,FMBSBASC,FMBSPDAT:       
                        FMBSSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMBS2                                                                         
          UPDATE    FMSBASA2;FMBSBAT,FMBSUNIQ,FMBSLEDG,FMBSBASC,FMBSPDAT:       
                        FMBSSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRFMBS2   RESET     KEY23                                                       
          WRITE     FMSBASA2,KEY23;FMBSBAT,FMBSUNIQ,FMBSLEDG,FMBSBASC,FMBSPDAT: 
                        FMBSSPAR                                                
          RETURN
.
DEFMBS2   RESET     KEY23                                                       
          DELETE    FMSBASA2,KEY23                                              
          RETURN
.
RLFMBS2   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READL     FMSBASA2,KEY23;FMBSBAT,FMBSUNIQ,FMBSLEDG,FMBSBASC,FMBSPDAT: 
                        FMBSSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLFMBS2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   FMSBASA2;FMBSBAT,FMBSUNIQ,FMBSLEDG,FMBSBASC,FMBSPDAT:       
                        FMBSSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLFMBS2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   FMSBASA2;FMBSBAT,FMBSUNIQ,FMBSLEDG,FMBSBASC,FMBSPDAT:       
                        FMBSSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUFMBS2   RESET     KEY23                                                       
          UNLOCK    FMSBASA2                                                    
          RETURN
.
