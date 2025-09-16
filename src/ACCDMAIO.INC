.
. ACCDMAIO    
. --------
. Filename     : accdmaaf.dat
.
RSACDMA1  RESET     KEY16                                                       
          READ      ACCDMAA1,KEY16;;                                            
          RETURN
.
RAACDMA1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ACCDMAA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDACDMA1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ACCDMAA1,KEY16;ACDMHOSP,ACDMCCLM,ACDMSYST,ACDMCTYP,ACDMILOS:
                                   ACDMDTYP,ACDMIACT,ACDMDELT,ACDMCUSR,ACDMCDTE:
                                   ACDMCTIM,ACDMUUSR,ACDMUDTE,ACDMUTIM,ACDMDUSR:
                                   ACDMDDTE,ACDMDTIM,ACDMSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKACDMA1  MOVE      ZERO,OVRCD                                                  
          READKS    ACCDMAA1;ACDMHOSP,ACDMCCLM,ACDMSYST,ACDMCTYP,ACDMILOS:      
                             ACDMDTYP,ACDMIACT,ACDMDELT,ACDMCUSR,ACDMCDTE:      
                             ACDMCTIM,ACDMUUSR,ACDMUDTE,ACDMUTIM,ACDMDUSR:      
                             ACDMDDTE,ACDMDTIM,ACDMSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPACDMA1  MOVE      ZERO,OVRCD                                                  
          READKP    ACCDMAA1;ACDMHOSP,ACDMCCLM,ACDMSYST,ACDMCTYP,ACDMILOS:      
                             ACDMDTYP,ACDMIACT,ACDMDELT,ACDMCUSR,ACDMCDTE:      
                             ACDMCTIM,ACDMUUSR,ACDMUDTE,ACDMUTIM,ACDMDUSR:      
                             ACDMDDTE,ACDMDTIM,ACDMSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPACDMA1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ACCDMAA1;ACDMHOSP,ACDMCCLM,ACDMSYST,ACDMCTYP,ACDMILOS:      
                             ACDMDTYP,ACDMIACT,ACDMDELT,ACDMCUSR,ACDMCDTE:      
                             ACDMCTIM,ACDMUUSR,ACDMUDTE,ACDMUTIM,ACDMDUSR:      
                             ACDMDDTE,ACDMDTIM,ACDMSPAR                         
          RETURN
.
WRACDMA1  RESET     KEY16                                                       
          WRITE     ACCDMAA1,KEY16;ACDMHOSP,ACDMCCLM,ACDMSYST,ACDMCTYP,ACDMILOS:
                                   ACDMDTYP,ACDMIACT,ACDMDELT,ACDMCUSR,ACDMCDTE:
                                   ACDMCTIM,ACDMUUSR,ACDMUDTE,ACDMUTIM,ACDMDUSR:
                                   ACDMDDTE,ACDMDTIM,ACDMSPAR                   
          RETURN
.
DEACDMA1  RESET     KEY16                                                       
          DELETE    ACCDMAA1,KEY16                                              
          RETURN
.
RSACDMA2  RESET     KEY16                                                       
          READ      ACCDMAA2,KEY16;;                                            
          RETURN
.
RAACDMA2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ACCDMAA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDACDMA2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ACCDMAA2,KEY16;ACDMHOSP,ACDMCCLM,ACDMSYST,ACDMCTYP,ACDMILOS:
                                   ACDMDTYP,ACDMIACT,ACDMDELT,ACDMCUSR,ACDMCDTE:
                                   ACDMCTIM,ACDMUUSR,ACDMUDTE,ACDMUTIM,ACDMDUSR:
                                   ACDMDDTE,ACDMDTIM,ACDMSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKACDMA2  MOVE      ZERO,OVRCD                                                  
          READKS    ACCDMAA2;ACDMHOSP,ACDMCCLM,ACDMSYST,ACDMCTYP,ACDMILOS:      
                             ACDMDTYP,ACDMIACT,ACDMDELT,ACDMCUSR,ACDMCDTE:      
                             ACDMCTIM,ACDMUUSR,ACDMUDTE,ACDMUTIM,ACDMDUSR:      
                             ACDMDDTE,ACDMDTIM,ACDMSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPACDMA2  MOVE      ZERO,OVRCD                                                  
          READKP    ACCDMAA2;ACDMHOSP,ACDMCCLM,ACDMSYST,ACDMCTYP,ACDMILOS:      
                             ACDMDTYP,ACDMIACT,ACDMDELT,ACDMCUSR,ACDMCDTE:      
                             ACDMCTIM,ACDMUUSR,ACDMUDTE,ACDMUTIM,ACDMDUSR:      
                             ACDMDDTE,ACDMDTIM,ACDMSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPACDMA2  MOVE      ZERO,OVRCD                                                  
          UPDATE    ACCDMAA2;ACDMHOSP,ACDMCCLM,ACDMSYST,ACDMCTYP,ACDMILOS:      
                             ACDMDTYP,ACDMIACT,ACDMDELT,ACDMCUSR,ACDMCDTE:      
                             ACDMCTIM,ACDMUUSR,ACDMUDTE,ACDMUTIM,ACDMDUSR:      
                             ACDMDDTE,ACDMDTIM,ACDMSPAR                         
          RETURN
.
WRACDMA2  RESET     KEY16                                                       
          WRITE     ACCDMAA2,KEY16;ACDMHOSP,ACDMCCLM,ACDMSYST,ACDMCTYP,ACDMILOS:
                                   ACDMDTYP,ACDMIACT,ACDMDELT,ACDMCUSR,ACDMCDTE:
                                   ACDMCTIM,ACDMUUSR,ACDMUDTE,ACDMUTIM,ACDMDUSR:
                                   ACDMDDTE,ACDMDTIM,ACDMSPAR                   
          RETURN
.
DEACDMA2  RESET     KEY16                                                       
          DELETE    ACCDMAA2,KEY16                                              
          RETURN
.
