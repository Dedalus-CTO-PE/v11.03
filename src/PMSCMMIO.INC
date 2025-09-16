.
. PMSCMMIO    
. --------
. Filename     : pmscmmaf.dat
.
RSPMCMM1  RESET     KEY3                                                        
          READ      PMSCMMA1,KEY3;;                                             
          RETURN
.
RAPMCMM1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      PMSCMMA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCMM1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      PMSCMMA1,KEY3;PMCMCRCD,PMCMCACC,PMCMSPAR                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCMM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSCMMA1;PMCMCRCD,PMCMCACC,PMCMSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCMM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSCMMA1;PMCMCRCD,PMCMCACC,PMCMSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCMM1                                                                        
          UPDATE    PMSCMMA1;PMCMCRCD,PMCMCACC,PMCMSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMCMM1  RESET     KEY3                                                        
          WRITE     PMSCMMA1,KEY3;PMCMCRCD,PMCMCACC,PMCMSPAR                    
          RETURN
.
DEPMCMM1  RESET     KEY3                                                        
          DELETE    PMSCMMA1,KEY3                                               
          RETURN
.
RLPMCMM1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     PMSCMMA1,KEY3;PMCMCRCD,PMCMCACC,PMCMSPAR                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMCMM1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSCMMA1;PMCMCRCD,PMCMCACC,PMCMSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMCMM1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSCMMA1;PMCMCRCD,PMCMCACC,PMCMSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMCMM1  RESET     KEY3                                                        
          UNLOCK    PMSCMMA1                                                    
          RETURN
.
