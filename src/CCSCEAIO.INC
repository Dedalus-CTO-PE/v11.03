.
. CCSCEAIO    
. --------
. Filename     : ccsceaaf.dat
.
RSCCEA1   RESET     KEY4                                                        
          READ      CCSCEAA1,KEY4;;                                             
          RETURN
.
RACCEA1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSCEAA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCEA1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSCEAA1,KEY4;CCEAEID,CCEADES,CCEAHCD,CCEAFDD,CCEATDD:      
                        CCEAFAD,CCEATAD,CCEAINC,CCEAVIS,CCEADAY,CCEAFCM:        
                        CCEAFYR,CCEATCM,CCEATYR,CCEARUA,CCEALV1,CCEALV2:        
                        CCEALV3,CCEAUST,CCEAIMOD,CCEACMOD,CCEAITHE,CCEACTHE:    
                        CCEASCM1,CCEASCM2,CCEASTAT,CCEASPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCEA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCEAA1;CCEAEID,CCEADES,CCEAHCD,CCEAFDD,CCEATDD:           
                        CCEAFAD,CCEATAD,CCEAINC,CCEAVIS,CCEADAY,CCEAFCM:        
                        CCEAFYR,CCEATCM,CCEATYR,CCEARUA,CCEALV1,CCEALV2:        
                        CCEALV3,CCEAUST,CCEAIMOD,CCEACMOD,CCEAITHE,CCEACTHE:    
                        CCEASCM1,CCEASCM2,CCEASTAT,CCEASPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCEA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCEAA1;CCEAEID,CCEADES,CCEAHCD,CCEAFDD,CCEATDD:           
                        CCEAFAD,CCEATAD,CCEAINC,CCEAVIS,CCEADAY,CCEAFCM:        
                        CCEAFYR,CCEATCM,CCEATYR,CCEARUA,CCEALV1,CCEALV2:        
                        CCEALV3,CCEAUST,CCEAIMOD,CCEACMOD,CCEAITHE,CCEACTHE:    
                        CCEASCM1,CCEASCM2,CCEASTAT,CCEASPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCEA1                                                                         
          UPDATE    CCSCEAA1;CCEAEID,CCEADES,CCEAHCD,CCEAFDD,CCEATDD:           
                        CCEAFAD,CCEATAD,CCEAINC,CCEAVIS,CCEADAY,CCEAFCM:        
                        CCEAFYR,CCEATCM,CCEATYR,CCEARUA,CCEALV1,CCEALV2:        
                        CCEALV3,CCEAUST,CCEAIMOD,CCEACMOD,CCEAITHE,CCEACTHE:    
                        CCEASCM1,CCEASCM2,CCEASTAT,CCEASPA                      
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCCEA1   RESET     KEY4                                                        
          WRITE     CCSCEAA1,KEY4;CCEAEID,CCEADES,CCEAHCD,CCEAFDD,CCEATDD:      
                        CCEAFAD,CCEATAD,CCEAINC,CCEAVIS,CCEADAY,CCEAFCM:        
                        CCEAFYR,CCEATCM,CCEATYR,CCEARUA,CCEALV1,CCEALV2:        
                        CCEALV3,CCEAUST,CCEAIMOD,CCEACMOD,CCEAITHE,CCEACTHE:    
                        CCEASCM1,CCEASCM2,CCEASTAT,CCEASPA                      
          RETURN
.
DECCEA1   RESET     KEY4                                                        
          DELETE    CCSCEAA1,KEY4                                               
          RETURN
.
RLCCEA1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READL     CCSCEAA1,KEY4;CCEAEID,CCEADES,CCEAHCD,CCEAFDD,CCEATDD:      
                        CCEAFAD,CCEATAD,CCEAINC,CCEAVIS,CCEADAY,CCEAFCM:        
                        CCEAFYR,CCEATCM,CCEATYR,CCEARUA,CCEALV1,CCEALV2:        
                        CCEALV3,CCEAUST,CCEAIMOD,CCEACMOD,CCEAITHE,CCEACTHE:    
                        CCEASCM1,CCEASCM2,CCEASTAT,CCEASPA                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCCEA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CCSCEAA1;CCEAEID,CCEADES,CCEAHCD,CCEAFDD,CCEATDD:           
                        CCEAFAD,CCEATAD,CCEAINC,CCEAVIS,CCEADAY,CCEAFCM:        
                        CCEAFYR,CCEATCM,CCEATYR,CCEARUA,CCEALV1,CCEALV2:        
                        CCEALV3,CCEAUST,CCEAIMOD,CCEACMOD,CCEAITHE,CCEACTHE:    
                        CCEASCM1,CCEASCM2,CCEASTAT,CCEASPA                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCCEA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CCSCEAA1;CCEAEID,CCEADES,CCEAHCD,CCEAFDD,CCEATDD:           
                        CCEAFAD,CCEATAD,CCEAINC,CCEAVIS,CCEADAY,CCEAFCM:        
                        CCEAFYR,CCEATCM,CCEATYR,CCEARUA,CCEALV1,CCEALV2:        
                        CCEALV3,CCEAUST,CCEAIMOD,CCEACMOD,CCEAITHE,CCEACTHE:    
                        CCEASCM1,CCEASCM2,CCEASTAT,CCEASPA                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCCEA1   RESET     KEY4                                                        
          UNLOCK    CCSCEAA1                                                    
          RETURN
.
