.
. WEBOMGIO    
. --------
. Filename     : webomgaf.dat
.
RSWBOMG1  RESET     KEY23                                                       
          READ      WEBOMGA1,KEY23;;                                            
          RETURN
.
RAWBOMG1  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMGA1,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOMG1  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMGA1,KEY23;WBOGARID,WBOGRPTC,WBOGCTID,WBOGSTAT,WBOGMECD:
                                   WBOGMETX,WBOGMEMN,WBOGMEMR,WBOGMEGN,WBOGFLID:
                                   WBOGLDDT,WBOGCDTE,WBOGCTIM,WBOGCUID,WBOGUDTE:
                                   WBOGUTIM,WBOGUUID,WBOGMSID,WBOGSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOMG1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOMGA1;WBOGARID,WBOGRPTC,WBOGCTID,WBOGSTAT,WBOGMECD:      
                             WBOGMETX,WBOGMEMN,WBOGMEMR,WBOGMEGN,WBOGFLID:      
                             WBOGLDDT,WBOGCDTE,WBOGCTIM,WBOGCUID,WBOGUDTE:      
                             WBOGUTIM,WBOGUUID,WBOGMSID,WBOGSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOMG1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOMGA1;WBOGARID,WBOGRPTC,WBOGCTID,WBOGSTAT,WBOGMECD:      
                             WBOGMETX,WBOGMEMN,WBOGMEMR,WBOGMEGN,WBOGFLID:      
                             WBOGLDDT,WBOGCDTE,WBOGCTIM,WBOGCUID,WBOGUDTE:      
                             WBOGUTIM,WBOGUUID,WBOGMSID,WBOGSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOMG1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOMGA1;WBOGARID,WBOGRPTC,WBOGCTID,WBOGSTAT,WBOGMECD:      
                             WBOGMETX,WBOGMEMN,WBOGMEMR,WBOGMEGN,WBOGFLID:      
                             WBOGLDDT,WBOGCDTE,WBOGCTIM,WBOGCUID,WBOGUDTE:      
                             WBOGUTIM,WBOGUUID,WBOGMSID,WBOGSPAR                
          RETURN
.
WRWBOMG1  RESET     KEY23                                                       
          WRITE     WEBOMGA1,KEY23;WBOGARID,WBOGRPTC,WBOGCTID,WBOGSTAT,WBOGMECD:
                                   WBOGMETX,WBOGMEMN,WBOGMEMR,WBOGMEGN,WBOGFLID:
                                   WBOGLDDT,WBOGCDTE,WBOGCTIM,WBOGCUID,WBOGUDTE:
                                   WBOGUTIM,WBOGUUID,WBOGMSID,WBOGSPAR          
          RETURN
.
DEWBOMG1  RESET     KEY23                                                       
          DELETE    WEBOMGA1,KEY23                                              
          RETURN
.
RSWBOMG2  RESET     KEY47                                                       
          READ      WEBOMGA2,KEY47;;                                            
          RETURN
.
RAWBOMG2  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMGA2,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOMG2  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMGA2,KEY47;WBOGARID,WBOGRPTC,WBOGCTID,WBOGSTAT,WBOGMECD:
                                   WBOGMETX,WBOGMEMN,WBOGMEMR,WBOGMEGN,WBOGFLID:
                                   WBOGLDDT,WBOGCDTE,WBOGCTIM,WBOGCUID,WBOGUDTE:
                                   WBOGUTIM,WBOGUUID,WBOGMSID,WBOGSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOMG2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOMGA2;WBOGARID,WBOGRPTC,WBOGCTID,WBOGSTAT,WBOGMECD:      
                             WBOGMETX,WBOGMEMN,WBOGMEMR,WBOGMEGN,WBOGFLID:      
                             WBOGLDDT,WBOGCDTE,WBOGCTIM,WBOGCUID,WBOGUDTE:      
                             WBOGUTIM,WBOGUUID,WBOGMSID,WBOGSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOMG2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOMGA2;WBOGARID,WBOGRPTC,WBOGCTID,WBOGSTAT,WBOGMECD:      
                             WBOGMETX,WBOGMEMN,WBOGMEMR,WBOGMEGN,WBOGFLID:      
                             WBOGLDDT,WBOGCDTE,WBOGCTIM,WBOGCUID,WBOGUDTE:      
                             WBOGUTIM,WBOGUUID,WBOGMSID,WBOGSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOMG2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOMGA2;WBOGARID,WBOGRPTC,WBOGCTID,WBOGSTAT,WBOGMECD:      
                             WBOGMETX,WBOGMEMN,WBOGMEMR,WBOGMEGN,WBOGFLID:      
                             WBOGLDDT,WBOGCDTE,WBOGCTIM,WBOGCUID,WBOGUDTE:      
                             WBOGUTIM,WBOGUUID,WBOGMSID,WBOGSPAR                
          RETURN
.
WRWBOMG2  RESET     KEY47                                                       
          WRITE     WEBOMGA2,KEY47;WBOGARID,WBOGRPTC,WBOGCTID,WBOGSTAT,WBOGMECD:
                                   WBOGMETX,WBOGMEMN,WBOGMEMR,WBOGMEGN,WBOGFLID:
                                   WBOGLDDT,WBOGCDTE,WBOGCTIM,WBOGCUID,WBOGUDTE:
                                   WBOGUTIM,WBOGUUID,WBOGMSID,WBOGSPAR          
          RETURN
.
DEWBOMG2  RESET     KEY47                                                       
          DELETE    WEBOMGA2,KEY47                                              
          RETURN
.
RSWBOMG3  RESET     KEY59                                                       
          READ      WEBOMGA3,KEY59;;                                            
          RETURN
.
RAWBOMG3  RESET     KEY59                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMGA3,KEY59;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOMG3  RESET     KEY59                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMGA3,KEY59;WBOGARID,WBOGRPTC,WBOGCTID,WBOGSTAT,WBOGMECD:
                                   WBOGMETX,WBOGMEMN,WBOGMEMR,WBOGMEGN,WBOGFLID:
                                   WBOGLDDT,WBOGCDTE,WBOGCTIM,WBOGCUID,WBOGUDTE:
                                   WBOGUTIM,WBOGUUID,WBOGMSID,WBOGSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOMG3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOMGA3;WBOGARID,WBOGRPTC,WBOGCTID,WBOGSTAT,WBOGMECD:      
                             WBOGMETX,WBOGMEMN,WBOGMEMR,WBOGMEGN,WBOGFLID:      
                             WBOGLDDT,WBOGCDTE,WBOGCTIM,WBOGCUID,WBOGUDTE:      
                             WBOGUTIM,WBOGUUID,WBOGMSID,WBOGSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOMG3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOMGA3;WBOGARID,WBOGRPTC,WBOGCTID,WBOGSTAT,WBOGMECD:      
                             WBOGMETX,WBOGMEMN,WBOGMEMR,WBOGMEGN,WBOGFLID:      
                             WBOGLDDT,WBOGCDTE,WBOGCTIM,WBOGCUID,WBOGUDTE:      
                             WBOGUTIM,WBOGUUID,WBOGMSID,WBOGSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOMG3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOMGA3;WBOGARID,WBOGRPTC,WBOGCTID,WBOGSTAT,WBOGMECD:      
                             WBOGMETX,WBOGMEMN,WBOGMEMR,WBOGMEGN,WBOGFLID:      
                             WBOGLDDT,WBOGCDTE,WBOGCTIM,WBOGCUID,WBOGUDTE:      
                             WBOGUTIM,WBOGUUID,WBOGMSID,WBOGSPAR                
          RETURN
.
WRWBOMG3  RESET     KEY59                                                       
          WRITE     WEBOMGA3,KEY59;WBOGARID,WBOGRPTC,WBOGCTID,WBOGSTAT,WBOGMECD:
                                   WBOGMETX,WBOGMEMN,WBOGMEMR,WBOGMEGN,WBOGFLID:
                                   WBOGLDDT,WBOGCDTE,WBOGCTIM,WBOGCUID,WBOGUDTE:
                                   WBOGUTIM,WBOGUUID,WBOGMSID,WBOGSPAR          
          RETURN
.
DEWBOMG3  RESET     KEY59                                                       
          DELETE    WEBOMGA3,KEY59                                              
          RETURN
.
