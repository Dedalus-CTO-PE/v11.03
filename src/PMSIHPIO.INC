.
. PMSIHPIO    
. --------
. Filename     : pmsihpaf.dat
.
RSPMIHP1  RESET     KEY32                                                       
          READ      PMSIHPA1,KEY32;;                                            
          RETURN
.
RAPMIHP1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHPA1,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIHP1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIHPA1,KEY32;PMIPHCPC,PMIPHPII,PMIPADAT,PMIPATIM,PMIPVSTA:
                        PMIPASTA,PMIPCDAT,PMIPCTIM,PMIPCUID,PMIPUDAT,PMIPUTIM:  
                        PMIPUUID,PMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIHP1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIHPA1;PMIPHCPC,PMIPHPII,PMIPADAT,PMIPATIM,PMIPVSTA:      
                        PMIPASTA,PMIPCDAT,PMIPCTIM,PMIPCUID,PMIPUDAT,PMIPUTIM:  
                        PMIPUUID,PMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIHP1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIHPA1;PMIPHCPC,PMIPHPII,PMIPADAT,PMIPATIM,PMIPVSTA:      
                        PMIPASTA,PMIPCDAT,PMIPCTIM,PMIPCUID,PMIPUDAT,PMIPUTIM:  
                        PMIPUUID,PMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIHP1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIHPA1;PMIPHCPC,PMIPHPII,PMIPADAT,PMIPATIM,PMIPVSTA:      
                        PMIPASTA,PMIPCDAT,PMIPCTIM,PMIPCUID,PMIPUDAT,PMIPUTIM:  
                        PMIPUUID,PMIPSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIHP1  RESET     KEY32                                                       
          WRITE     PMSIHPA1,KEY32;PMIPHCPC,PMIPHPII,PMIPADAT,PMIPATIM,PMIPVSTA:
                        PMIPASTA,PMIPCDAT,PMIPCTIM,PMIPCUID,PMIPUDAT,PMIPUTIM:  
                        PMIPUUID,PMIPSPAR                                       
          RETURN
.
DEPMIHP1  RESET     KEY32                                                       
          DELETE    PMSIHPA1,KEY32                                              
          RETURN
.
RLPMIHP1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READL     PMSIHPA1,KEY32;PMIPHCPC,PMIPHPII,PMIPADAT,PMIPATIM,PMIPVSTA:
                        PMIPASTA,PMIPCDAT,PMIPCTIM,PMIPCUID,PMIPUDAT,PMIPUTIM:  
                        PMIPUUID,PMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIHP1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIHPA1;PMIPHCPC,PMIPHPII,PMIPADAT,PMIPATIM,PMIPVSTA:      
                        PMIPASTA,PMIPCDAT,PMIPCTIM,PMIPCUID,PMIPUDAT,PMIPUTIM:  
                        PMIPUUID,PMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIHP1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIHPA1;PMIPHCPC,PMIPHPII,PMIPADAT,PMIPATIM,PMIPVSTA:      
                        PMIPASTA,PMIPCDAT,PMIPCTIM,PMIPCUID,PMIPUDAT,PMIPUTIM:  
                        PMIPUUID,PMIPSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIHP1  RESET     KEY32                                                       
          UNLOCK    PMSIHPA1                                                    
          RETURN
.
