.
. PMSCLTIO    
. --------
. Filename     : pmscltaf.dat
.
RSPMCLT1  RESET     KEY9                                                        
          READ      PMSCLTA1,KEY9;;                                             
          RETURN
.
RAPMCLT1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      PMSCLTA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCLT1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      PMSCLTA1,KEY9;PMCLWMOD,PMCLINUM,PMCLSNAM,PMCLGNAM,PMCLCDOB: 
                                  PMCLMCNO,PMCLCMRF,PMCLADD1,PMCLADD2,PMCLADD3: 
                                  PMCLADD4,PMCLPOST,PMCLBNAM,PMCLBACN,PMCLBBSB: 
                                  PMCLSPAR                                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCLT1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSCLTA1;PMCLWMOD,PMCLINUM,PMCLSNAM,PMCLGNAM,PMCLCDOB:      
                             PMCLMCNO,PMCLCMRF,PMCLADD1,PMCLADD2,PMCLADD3:      
                             PMCLADD4,PMCLPOST,PMCLBNAM,PMCLBACN,PMCLBBSB:      
                             PMCLSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCLT1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSCLTA1;PMCLWMOD,PMCLINUM,PMCLSNAM,PMCLGNAM,PMCLCDOB:      
                             PMCLMCNO,PMCLCMRF,PMCLADD1,PMCLADD2,PMCLADD3:      
                             PMCLADD4,PMCLPOST,PMCLBNAM,PMCLBACN,PMCLBBSB:      
                             PMCLSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCLT1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSCLTA1;PMCLWMOD,PMCLINUM,PMCLSNAM,PMCLGNAM,PMCLCDOB:      
                             PMCLMCNO,PMCLCMRF,PMCLADD1,PMCLADD2,PMCLADD3:      
                             PMCLADD4,PMCLPOST,PMCLBNAM,PMCLBACN,PMCLBBSB:      
                             PMCLSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCLT1  RESET     KEY9                                                        
          WRITE     PMSCLTA1,KEY9;PMCLWMOD,PMCLINUM,PMCLSNAM,PMCLGNAM,PMCLCDOB: 
                                  PMCLMCNO,PMCLCMRF,PMCLADD1,PMCLADD2,PMCLADD3: 
                                  PMCLADD4,PMCLPOST,PMCLBNAM,PMCLBACN,PMCLBBSB: 
                                  PMCLSPAR                                      
          RETURN
.
DEPMCLT1  RESET     KEY9                                                        
          DELETE    PMSCLTA1,KEY9                                               
          RETURN
.
RLPMCLT1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READL     PMSCLTA1,KEY9;PMCLWMOD,PMCLINUM,PMCLSNAM,PMCLGNAM,PMCLCDOB: 
                                  PMCLMCNO,PMCLCMRF,PMCLADD1,PMCLADD2,PMCLADD3: 
                                  PMCLADD4,PMCLPOST,PMCLBNAM,PMCLBACN,PMCLBBSB: 
                                  PMCLSPAR                                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCLT1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSCLTA1;PMCLWMOD,PMCLINUM,PMCLSNAM,PMCLGNAM,PMCLCDOB:      
                             PMCLMCNO,PMCLCMRF,PMCLADD1,PMCLADD2,PMCLADD3:      
                             PMCLADD4,PMCLPOST,PMCLBNAM,PMCLBACN,PMCLBBSB:      
                             PMCLSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCLT1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSCLTA1;PMCLWMOD,PMCLINUM,PMCLSNAM,PMCLGNAM,PMCLCDOB:      
                             PMCLMCNO,PMCLCMRF,PMCLADD1,PMCLADD2,PMCLADD3:      
                             PMCLADD4,PMCLPOST,PMCLBNAM,PMCLBACN,PMCLBBSB:      
                             PMCLSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCLT1  RESET     KEY9                                                        
          UNLOCK    PMSCLTA1                                                    
          RETURN
.
