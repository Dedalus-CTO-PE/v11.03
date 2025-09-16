.
. PMSDIVIO    
. --------
. Filename     : pmsdivaf.dat
.
RSPMDIV1  RESET     KEY14                                                       
          READ      PMSDIVA1,KEY14;;                                            
          RETURN
.
RAPMDIV1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDIVA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMDIV1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDIVA1,KEY14;PMDIHOSP,PMDIDIVN,PMDIUNIT,PMDITEAM,PMDIACTV:
                        PMDICUID,PMDICDAT,PMDICTIM,PMDIUUID,PMDIUDAT,PMDIUTIM:  
                        PMDISPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMDIV1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSDIVA1;PMDIHOSP,PMDIDIVN,PMDIUNIT,PMDITEAM,PMDIACTV:      
                        PMDICUID,PMDICDAT,PMDICTIM,PMDIUUID,PMDIUDAT,PMDIUTIM:  
                        PMDISPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMDIV1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSDIVA1;PMDIHOSP,PMDIDIVN,PMDIUNIT,PMDITEAM,PMDIACTV:      
                        PMDICUID,PMDICDAT,PMDICTIM,PMDIUUID,PMDIUDAT,PMDIUTIM:  
                        PMDISPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMDIV1                                                                        
          UPDATE    PMSDIVA1;PMDIHOSP,PMDIDIVN,PMDIUNIT,PMDITEAM,PMDIACTV:      
                        PMDICUID,PMDICDAT,PMDICTIM,PMDIUUID,PMDIUDAT,PMDIUTIM:  
                        PMDISPAR                                                
          RETURN
.
WRPMDIV1  RESET     KEY14                                                       
          WRITE     PMSDIVA1,KEY14;PMDIHOSP,PMDIDIVN,PMDIUNIT,PMDITEAM,PMDIACTV:
                        PMDICUID,PMDICDAT,PMDICTIM,PMDIUUID,PMDIUDAT,PMDIUTIM:  
                        PMDISPAR                                                
          RETURN
.
DEPMDIV1  RESET     KEY14                                                       
          DELETE    PMSDIVA1,KEY14                                              
          RETURN
.
RSPMDIV2  RESET     KEY14                                                       
          READ      PMSDIVA2,KEY14;;                                            
          RETURN
.
RAPMDIV2  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDIVA2,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMDIV2  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDIVA2,KEY14;PMDIHOSP,PMDIDIVN,PMDIUNIT,PMDITEAM,PMDIACTV:
                        PMDICUID,PMDICDAT,PMDICTIM,PMDIUUID,PMDIUDAT,PMDIUTIM:  
                        PMDISPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMDIV2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSDIVA2;PMDIHOSP,PMDIDIVN,PMDIUNIT,PMDITEAM,PMDIACTV:      
                        PMDICUID,PMDICDAT,PMDICTIM,PMDIUUID,PMDIUDAT,PMDIUTIM:  
                        PMDISPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMDIV2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSDIVA2;PMDIHOSP,PMDIDIVN,PMDIUNIT,PMDITEAM,PMDIACTV:      
                        PMDICUID,PMDICDAT,PMDICTIM,PMDIUUID,PMDIUDAT,PMDIUTIM:  
                        PMDISPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMDIV2                                                                        
          UPDATE    PMSDIVA2;PMDIHOSP,PMDIDIVN,PMDIUNIT,PMDITEAM,PMDIACTV:      
                        PMDICUID,PMDICDAT,PMDICTIM,PMDIUUID,PMDIUDAT,PMDIUTIM:  
                        PMDISPAR                                                
          RETURN
.
WRPMDIV2  RESET     KEY14                                                       
          WRITE     PMSDIVA2,KEY14;PMDIHOSP,PMDIDIVN,PMDIUNIT,PMDITEAM,PMDIACTV:
                        PMDICUID,PMDICDAT,PMDICTIM,PMDIUUID,PMDIUDAT,PMDIUTIM:  
                        PMDISPAR                                                
          RETURN
.
DEPMDIV2  RESET     KEY14                                                       
          DELETE    PMSDIVA2,KEY14                                              
          RETURN
.
