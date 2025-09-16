.
. PMSNDBIO    
. --------
. Filename     : pmsndbaf.dat
.
RSPMNDB1  RESET     KEY53                                                       
          READ      PMSNDBA1,KEY53;;                                            
          RETURN
.
RAPMNDB1  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNDBA1,KEY53;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMNDB1  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNDBA1,KEY53;PMNBDNAM,PMNBDDSC,PMNBGDAT,PMNBDPTH,PMNBHOSP:
                                   PMNBEDAT,PMNBNPUR,PMNBNSUR,PMNBNMUR,PMNBCUID:
                                   PMNBCDAT,PMNBCTIM,PMNBUUID,PMNBUDAT,PMNBUTIM:
                                   PMNBSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMNDB1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSNDBA1;PMNBDNAM,PMNBDDSC,PMNBGDAT,PMNBDPTH,PMNBHOSP:      
                             PMNBEDAT,PMNBNPUR,PMNBNSUR,PMNBNMUR,PMNBCUID:      
                             PMNBCDAT,PMNBCTIM,PMNBUUID,PMNBUDAT,PMNBUTIM:      
                             PMNBSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMNDB1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSNDBA1;PMNBDNAM,PMNBDDSC,PMNBGDAT,PMNBDPTH,PMNBHOSP:      
                             PMNBEDAT,PMNBNPUR,PMNBNSUR,PMNBNMUR,PMNBCUID:      
                             PMNBCDAT,PMNBCTIM,PMNBUUID,PMNBUDAT,PMNBUTIM:      
                             PMNBSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMNDB1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSNDBA1;PMNBDNAM,PMNBDDSC,PMNBGDAT,PMNBDPTH,PMNBHOSP:      
                             PMNBEDAT,PMNBNPUR,PMNBNSUR,PMNBNMUR,PMNBCUID:      
                             PMNBCDAT,PMNBCTIM,PMNBUUID,PMNBUDAT,PMNBUTIM:      
                             PMNBSPAR                                           
          RETURN
.
WRPMNDB1  RESET     KEY53                                                       
          WRITE     PMSNDBA1,KEY53;PMNBDNAM,PMNBDDSC,PMNBGDAT,PMNBDPTH,PMNBHOSP:
                                   PMNBEDAT,PMNBNPUR,PMNBNSUR,PMNBNMUR,PMNBCUID:
                                   PMNBCDAT,PMNBCTIM,PMNBUUID,PMNBUDAT,PMNBUTIM:
                                   PMNBSPAR                                     
          RETURN
.
DEPMNDB1  RESET     KEY53                                                       
          DELETE    PMSNDBA1,KEY53                                              
          RETURN
.
RSPMNDB2  RESET     KEY53                                                       
          READ      PMSNDBA2,KEY53;;                                            
          RETURN
.
RAPMNDB2  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNDBA2,KEY53;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMNDB2  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      PMSNDBA2,KEY53;PMNBDNAM,PMNBDDSC,PMNBGDAT,PMNBDPTH,PMNBHOSP:
                                   PMNBEDAT,PMNBNPUR,PMNBNSUR,PMNBNMUR,PMNBCUID:
                                   PMNBCDAT,PMNBCTIM,PMNBUUID,PMNBUDAT,PMNBUTIM:
                                   PMNBSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMNDB2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSNDBA2;PMNBDNAM,PMNBDDSC,PMNBGDAT,PMNBDPTH,PMNBHOSP:      
                             PMNBEDAT,PMNBNPUR,PMNBNSUR,PMNBNMUR,PMNBCUID:      
                             PMNBCDAT,PMNBCTIM,PMNBUUID,PMNBUDAT,PMNBUTIM:      
                             PMNBSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMNDB2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSNDBA2;PMNBDNAM,PMNBDDSC,PMNBGDAT,PMNBDPTH,PMNBHOSP:      
                             PMNBEDAT,PMNBNPUR,PMNBNSUR,PMNBNMUR,PMNBCUID:      
                             PMNBCDAT,PMNBCTIM,PMNBUUID,PMNBUDAT,PMNBUTIM:      
                             PMNBSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMNDB2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSNDBA2;PMNBDNAM,PMNBDDSC,PMNBGDAT,PMNBDPTH,PMNBHOSP:      
                             PMNBEDAT,PMNBNPUR,PMNBNSUR,PMNBNMUR,PMNBCUID:      
                             PMNBCDAT,PMNBCTIM,PMNBUUID,PMNBUDAT,PMNBUTIM:      
                             PMNBSPAR                                           
          RETURN
.
WRPMNDB2  RESET     KEY53                                                       
          WRITE     PMSNDBA2,KEY53;PMNBDNAM,PMNBDDSC,PMNBGDAT,PMNBDPTH,PMNBHOSP:
                                   PMNBEDAT,PMNBNPUR,PMNBNSUR,PMNBNMUR,PMNBCUID:
                                   PMNBCDAT,PMNBCTIM,PMNBUUID,PMNBUDAT,PMNBUTIM:
                                   PMNBSPAR                                     
          RETURN
.
DEPMNDB2  RESET     KEY53                                                       
          DELETE    PMSNDBA2,KEY53                                              
          RETURN
.
