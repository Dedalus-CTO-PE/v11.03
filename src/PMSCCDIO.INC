.
. PMSCCDIO    
. --------
. Filename     : pmsccdaf.dat
.
RSPMCCD1  RESET     KEY19                                                       
          READ      PMSCCDA1,KEY19;;                                            
          RETURN
.
RAPMCCD1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCCDA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCCD1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCCDA1,KEY19;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:
                                   PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:
                                   PMCDDVAC,PMCDSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCCD1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSCCDA1;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:      
                             PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:      
                             PMCDDVAC,PMCDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCCD1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSCCDA1;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:      
                             PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:      
                             PMCDDVAC,PMCDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCCD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSCCDA1;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:      
                             PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:      
                             PMCDDVAC,PMCDSPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCCD1  RESET     KEY19                                                       
          WRITE     PMSCCDA1,KEY19;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:
                                   PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:
                                   PMCDDVAC,PMCDSPAR                            
          RETURN
.
DEPMCCD1  RESET     KEY19                                                       
          DELETE    PMSCCDA1,KEY19                                              
          RETURN
.
RLPMCCD1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READL     PMSCCDA1,KEY19;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:
                                   PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:
                                   PMCDDVAC,PMCDSPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCCD1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSCCDA1;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:      
                             PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:      
                             PMCDDVAC,PMCDSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCCD1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSCCDA1;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:      
                             PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:      
                             PMCDDVAC,PMCDSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCCD1  RESET     KEY19                                                       
          UNLOCK    PMSCCDA1                                                    
          RETURN
.
RSPMCCD2  RESET     KEY19                                                       
          READ      PMSCCDA2,KEY19;;                                            
          RETURN
.
RAPMCCD2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCCDA2,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCCD2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCCDA2,KEY19;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:
                                   PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:
                                   PMCDDVAC,PMCDSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCCD2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSCCDA2;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:      
                             PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:      
                             PMCDDVAC,PMCDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCCD2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSCCDA2;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:      
                             PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:      
                             PMCDDVAC,PMCDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCCD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSCCDA2;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:      
                             PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:      
                             PMCDDVAC,PMCDSPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCCD2  RESET     KEY19                                                       
          WRITE     PMSCCDA2,KEY19;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:
                                   PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:
                                   PMCDDVAC,PMCDSPAR                            
          RETURN
.
DEPMCCD2  RESET     KEY19                                                       
          DELETE    PMSCCDA2,KEY19                                              
          RETURN
.
RLPMCCD2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READL     PMSCCDA2,KEY19;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:
                                   PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:
                                   PMCDDVAC,PMCDSPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCCD2  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSCCDA2;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:      
                             PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:      
                             PMCDDVAC,PMCDSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCCD2  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSCCDA2;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:      
                             PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:      
                             PMCDDVAC,PMCDSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCCD2  RESET     KEY19                                                       
          UNLOCK    PMSCCDA2                                                    
          RETURN
.
RSPMCCD3  RESET     KEY39                                                       
          READ      PMSCCDA3,KEY39;;                                            
          RETURN
.
RAPMCCD3  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCCDA3,KEY39;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCCD3  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCCDA3,KEY39;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:
                                   PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:
                                   PMCDDVAC,PMCDSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCCD3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSCCDA3;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:      
                             PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:      
                             PMCDDVAC,PMCDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCCD3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSCCDA3;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:      
                             PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:      
                             PMCDDVAC,PMCDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCCD3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSCCDA3;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:      
                             PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:      
                             PMCDDVAC,PMCDSPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCCD3  RESET     KEY39                                                       
          WRITE     PMSCCDA3,KEY39;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:
                                   PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:
                                   PMCDDVAC,PMCDSPAR                            
          RETURN
.
DEPMCCD3  RESET     KEY39                                                       
          DELETE    PMSCCDA3,KEY39                                              
          RETURN
.
RLPMCCD3  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READL     PMSCCDA3,KEY39;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:
                                   PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:
                                   PMCDDVAC,PMCDSPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCCD3  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSCCDA3;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:      
                             PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:      
                             PMCDDVAC,PMCDSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCCD3  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSCCDA3;PMCDURNO,PMCDCTYP,PMCDCNUM,PMCDEXDT,PMCDCDAT:      
                             PMCDCTIM,PMCDCUID,PMCDUDAT,PMCDUTIM,PMCDUUID:      
                             PMCDDVAC,PMCDSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCCD3  RESET     KEY39                                                       
          UNLOCK    PMSCCDA3                                                    
          RETURN
.
