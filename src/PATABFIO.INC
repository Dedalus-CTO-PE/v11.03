.
. PATABFIO    
. --------
. Filename     : patabfaf.dat
.
RSPTABF1  RESET     KEY27                                                       
          READ      PATABFA1,KEY27;;                                            
          RETURN
.
RAPTABF1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PATABFA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTABF1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PATABFA1,KEY27;PTABADMN,PTABENCT,PTABINVN,PTABADJT,PTABINVC:
                                   PTABABFT,PTABADJV,PTABCDES,PTABIMPR,PTABCDAT:
                                   PTABCTIM,PTABCUID,PTABUDAT,PTABUTIM,PTABUUID:
                                   PTABSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTABF1  MOVE      ZERO,OVRCD                                                  
          READKS    PATABFA1;PTABADMN,PTABENCT,PTABINVN,PTABADJT,PTABINVC:      
                             PTABABFT,PTABADJV,PTABCDES,PTABIMPR,PTABCDAT:      
                             PTABCTIM,PTABCUID,PTABUDAT,PTABUTIM,PTABUUID:      
                             PTABSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTABF1  MOVE      ZERO,OVRCD                                                  
          READKP    PATABFA1;PTABADMN,PTABENCT,PTABINVN,PTABADJT,PTABINVC:      
                             PTABABFT,PTABADJV,PTABCDES,PTABIMPR,PTABCDAT:      
                             PTABCTIM,PTABCUID,PTABUDAT,PTABUTIM,PTABUUID:      
                             PTABSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTABF1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATABFA1;PTABADMN,PTABENCT,PTABINVN,PTABADJT,PTABINVC:      
                             PTABABFT,PTABADJV,PTABCDES,PTABIMPR,PTABCDAT:      
                             PTABCTIM,PTABCUID,PTABUDAT,PTABUTIM,PTABUUID:      
                             PTABSPAR                                           
          RETURN
.
WRPTABF1  RESET     KEY27                                                       
          WRITE     PATABFA1,KEY27;PTABADMN,PTABENCT,PTABINVN,PTABADJT,PTABINVC:
                                   PTABABFT,PTABADJV,PTABCDES,PTABIMPR,PTABCDAT:
                                   PTABCTIM,PTABCUID,PTABUDAT,PTABUTIM,PTABUUID:
                                   PTABSPAR                                     
          RETURN
.
DEPTABF1  RESET     KEY27                                                       
          DELETE    PATABFA1,KEY27                                              
          RETURN
.
RSPTABF2  RESET     KEY27                                                       
          READ      PATABFA2,KEY27;;                                            
          RETURN
.
RAPTABF2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PATABFA2,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTABF2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PATABFA2,KEY27;PTABADMN,PTABENCT,PTABINVN,PTABADJT,PTABINVC:
                                   PTABABFT,PTABADJV,PTABCDES,PTABIMPR,PTABCDAT:
                                   PTABCTIM,PTABCUID,PTABUDAT,PTABUTIM,PTABUUID:
                                   PTABSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTABF2  MOVE      ZERO,OVRCD                                                  
          READKS    PATABFA2;PTABADMN,PTABENCT,PTABINVN,PTABADJT,PTABINVC:      
                             PTABABFT,PTABADJV,PTABCDES,PTABIMPR,PTABCDAT:      
                             PTABCTIM,PTABCUID,PTABUDAT,PTABUTIM,PTABUUID:      
                             PTABSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTABF2  MOVE      ZERO,OVRCD                                                  
          READKP    PATABFA2;PTABADMN,PTABENCT,PTABINVN,PTABADJT,PTABINVC:      
                             PTABABFT,PTABADJV,PTABCDES,PTABIMPR,PTABCDAT:      
                             PTABCTIM,PTABCUID,PTABUDAT,PTABUTIM,PTABUUID:      
                             PTABSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTABF2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATABFA2;PTABADMN,PTABENCT,PTABINVN,PTABADJT,PTABINVC:      
                             PTABABFT,PTABADJV,PTABCDES,PTABIMPR,PTABCDAT:      
                             PTABCTIM,PTABCUID,PTABUDAT,PTABUTIM,PTABUUID:      
                             PTABSPAR                                           
          RETURN
.
WRPTABF2  RESET     KEY27                                                       
          WRITE     PATABFA2,KEY27;PTABADMN,PTABENCT,PTABINVN,PTABADJT,PTABINVC:
                                   PTABABFT,PTABADJV,PTABCDES,PTABIMPR,PTABCDAT:
                                   PTABCTIM,PTABCUID,PTABUDAT,PTABUTIM,PTABUUID:
                                   PTABSPAR                                     
          RETURN
.
DEPTABF2  RESET     KEY27                                                       
          DELETE    PATABFA2,KEY27                                              
          RETURN
.
