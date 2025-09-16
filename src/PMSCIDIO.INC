.
. PMSCIDIO    
. --------
. Filename     : pmscidaf.dat
.
RSPMCID1  RESET     KEY6                                                        
          READ      PMSCIDA1,KEY6;;                                             
          RETURN
.
RAPMCID1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      PMSCIDA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCID1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      PMSCIDA1,KEY6;PMCICNTR,PMCIFDAT,PMCITDAT,PMCIDESC,PMCIDELE: 
                                  PMCICUID,PMCICDAT,PMCICTIM,PMCIUUID,PMCIUDAT: 
                                  PMCIUTIM,PMCIPINV,PMCICLDT,PMCISPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCID1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSCIDA1;PMCICNTR,PMCIFDAT,PMCITDAT,PMCIDESC,PMCIDELE:      
                             PMCICUID,PMCICDAT,PMCICTIM,PMCIUUID,PMCIUDAT:      
                             PMCIUTIM,PMCIPINV,PMCICLDT,PMCISPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCID1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSCIDA1;PMCICNTR,PMCIFDAT,PMCITDAT,PMCIDESC,PMCIDELE:      
                             PMCICUID,PMCICDAT,PMCICTIM,PMCIUUID,PMCIUDAT:      
                             PMCIUTIM,PMCIPINV,PMCICLDT,PMCISPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCID1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSCIDA1;PMCICNTR,PMCIFDAT,PMCITDAT,PMCIDESC,PMCIDELE:      
                             PMCICUID,PMCICDAT,PMCICTIM,PMCIUUID,PMCIUDAT:      
                             PMCIUTIM,PMCIPINV,PMCICLDT,PMCISPAR                
          RETURN
.
WRPMCID1  RESET     KEY6                                                        
          WRITE     PMSCIDA1,KEY6;PMCICNTR,PMCIFDAT,PMCITDAT,PMCIDESC,PMCIDELE: 
                                  PMCICUID,PMCICDAT,PMCICTIM,PMCIUUID,PMCIUDAT: 
                                  PMCIUTIM,PMCIPINV,PMCICLDT,PMCISPAR           
          RETURN
.
DEPMCID1  RESET     KEY6                                                        
          DELETE    PMSCIDA1,KEY6                                               
          RETURN
.
