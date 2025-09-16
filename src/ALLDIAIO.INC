.
. ALLDIAIO    
. --------
. Filename     : alldiaaf.dat
.
RSALDIA1  RESET     KEY12                                                       
          READ      ALLDIAA1,KEY12;;                                            
          RETURN
.
RAALDIA1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      ALLDIAA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALDIA1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      ALLDIAA1,KEY12;ALDIDEPT,ALDIDIAG,ALDIDESC,ALDIICD,ALDIACTV: 
                                   ALDICDAT,ALDICTIM,ALDICUID,ALDIUDAT,ALDIUTIM:
                                   ALDIUUID,ALDIMHDP,ALDIMHCP,ALDISDAT,ALDIEDAT:
                                   ALDISPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALDIA1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLDIAA1;ALDIDEPT,ALDIDIAG,ALDIDESC,ALDIICD,ALDIACTV:       
                             ALDICDAT,ALDICTIM,ALDICUID,ALDIUDAT,ALDIUTIM:      
                             ALDIUUID,ALDIMHDP,ALDIMHCP,ALDISDAT,ALDIEDAT:      
                             ALDISPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALDIA1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLDIAA1;ALDIDEPT,ALDIDIAG,ALDIDESC,ALDIICD,ALDIACTV:       
                             ALDICDAT,ALDICTIM,ALDICUID,ALDIUDAT,ALDIUTIM:      
                             ALDIUUID,ALDIMHDP,ALDIMHCP,ALDISDAT,ALDIEDAT:      
                             ALDISPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALDIA1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLDIAA1;ALDIDEPT,ALDIDIAG,ALDIDESC,ALDIICD,ALDIACTV:       
                             ALDICDAT,ALDICTIM,ALDICUID,ALDIUDAT,ALDIUTIM:      
                             ALDIUUID,ALDIMHDP,ALDIMHCP,ALDISDAT,ALDIEDAT:      
                             ALDISPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALDIA1  RESET     KEY12                                                       
          WRITE     ALLDIAA1,KEY12;ALDIDEPT,ALDIDIAG,ALDIDESC,ALDIICD,ALDIACTV: 
                                   ALDICDAT,ALDICTIM,ALDICUID,ALDIUDAT,ALDIUTIM:
                                   ALDIUUID,ALDIMHDP,ALDIMHCP,ALDISDAT,ALDIEDAT:
                                   ALDISPAR                                     
          RETURN
.
DEALDIA1  RESET     KEY12                                                       
          DELETE    ALLDIAA1,KEY12                                              
          RETURN
.
RLALDIA1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     ALLDIAA1,KEY12;ALDIDEPT,ALDIDIAG,ALDIDESC,ALDIICD,ALDIACTV: 
                                   ALDICDAT,ALDICTIM,ALDICUID,ALDIUDAT,ALDIUTIM:
                                   ALDIUUID,ALDIMHDP,ALDIMHCP,ALDISDAT,ALDIEDAT:
                                   ALDISPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALDIA1  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLDIAA1;ALDIDEPT,ALDIDIAG,ALDIDESC,ALDIICD,ALDIACTV:       
                             ALDICDAT,ALDICTIM,ALDICUID,ALDIUDAT,ALDIUTIM:      
                             ALDIUUID,ALDIMHDP,ALDIMHCP,ALDISDAT,ALDIEDAT:      
                             ALDISPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALDIA1  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLDIAA1;ALDIDEPT,ALDIDIAG,ALDIDESC,ALDIICD,ALDIACTV:       
                             ALDICDAT,ALDICTIM,ALDICUID,ALDIUDAT,ALDIUTIM:      
                             ALDIUUID,ALDIMHDP,ALDIMHCP,ALDISDAT,ALDIEDAT:      
                             ALDISPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALDIA1  RESET     KEY12                                                       
          UNLOCK    ALLDIAA1                                                    
          RETURN
.
RSALDIA2  RESET     KEY92                                                       
          READ      ALLDIAA2,KEY92;;                                            
          RETURN
.
RAALDIA2  RESET     KEY92                                                       
          MOVE      ZERO,OVRCD
          READ      ALLDIAA2,KEY92;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALDIA2  RESET     KEY92                                                       
          MOVE      ZERO,OVRCD
          READ      ALLDIAA2,KEY92;ALDIDEPT,ALDIDIAG,ALDIDESC,ALDIICD,ALDIACTV: 
                                   ALDICDAT,ALDICTIM,ALDICUID,ALDIUDAT,ALDIUTIM:
                                   ALDIUUID,ALDIMHDP,ALDIMHCP,ALDISDAT,ALDIEDAT:
                                   ALDISPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALDIA2  MOVE      ZERO,OVRCD                                                  
          READKS    ALLDIAA2;ALDIDEPT,ALDIDIAG,ALDIDESC,ALDIICD,ALDIACTV:       
                             ALDICDAT,ALDICTIM,ALDICUID,ALDIUDAT,ALDIUTIM:      
                             ALDIUUID,ALDIMHDP,ALDIMHCP,ALDISDAT,ALDIEDAT:      
                             ALDISPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALDIA2  MOVE      ZERO,OVRCD                                                  
          READKP    ALLDIAA2;ALDIDEPT,ALDIDIAG,ALDIDESC,ALDIICD,ALDIACTV:       
                             ALDICDAT,ALDICTIM,ALDICUID,ALDIUDAT,ALDIUTIM:      
                             ALDIUUID,ALDIMHDP,ALDIMHCP,ALDISDAT,ALDIEDAT:      
                             ALDISPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALDIA2  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLDIAA2;ALDIDEPT,ALDIDIAG,ALDIDESC,ALDIICD,ALDIACTV:       
                             ALDICDAT,ALDICTIM,ALDICUID,ALDIUDAT,ALDIUTIM:      
                             ALDIUUID,ALDIMHDP,ALDIMHCP,ALDISDAT,ALDIEDAT:      
                             ALDISPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALDIA2  RESET     KEY92                                                       
          WRITE     ALLDIAA2,KEY92;ALDIDEPT,ALDIDIAG,ALDIDESC,ALDIICD,ALDIACTV: 
                                   ALDICDAT,ALDICTIM,ALDICUID,ALDIUDAT,ALDIUTIM:
                                   ALDIUUID,ALDIMHDP,ALDIMHCP,ALDISDAT,ALDIEDAT:
                                   ALDISPAR                                     
          RETURN
.
DEALDIA2  RESET     KEY92                                                       
          DELETE    ALLDIAA2,KEY92                                              
          RETURN
.
RLALDIA2  RESET     KEY92                                                       
          MOVE      ZERO,OVRCD
          READL     ALLDIAA2,KEY92;ALDIDEPT,ALDIDIAG,ALDIDESC,ALDIICD,ALDIACTV: 
                                   ALDICDAT,ALDICTIM,ALDICUID,ALDIUDAT,ALDIUTIM:
                                   ALDIUUID,ALDIMHDP,ALDIMHCP,ALDISDAT,ALDIEDAT:
                                   ALDISPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALDIA2  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLDIAA2;ALDIDEPT,ALDIDIAG,ALDIDESC,ALDIICD,ALDIACTV:       
                             ALDICDAT,ALDICTIM,ALDICUID,ALDIUDAT,ALDIUTIM:      
                             ALDIUUID,ALDIMHDP,ALDIMHCP,ALDISDAT,ALDIEDAT:      
                             ALDISPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALDIA2  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLDIAA2;ALDIDEPT,ALDIDIAG,ALDIDESC,ALDIICD,ALDIACTV:       
                             ALDICDAT,ALDICTIM,ALDICUID,ALDIUDAT,ALDIUTIM:      
                             ALDIUUID,ALDIMHDP,ALDIMHCP,ALDISDAT,ALDIEDAT:      
                             ALDISPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALDIA2  RESET     KEY92                                                       
          UNLOCK    ALLDIAA2                                                    
          RETURN
.
