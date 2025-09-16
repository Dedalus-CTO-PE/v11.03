.
. COMPARIO    
. --------
. Filename     : comparaf.dat
.
RSCMPAR1  RESET     KEY11                                                       
          READ      COMPARA1,KEY11;;                                            
          RETURN
.
RACMPAR1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      COMPARA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMPAR1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      COMPARA1,KEY11;CMPAHOSP,CMPAPARM,CMPADESC,CMPAVALU,CMPATYPE:
                                   CMPAACTV,CMPACDAT,CMPACTIM,CMPACUID,CMPAUDAT:
                                   CMPAUTIM,CMPAUUID,CMPASYST,CMPAVCON,CMPASPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMPAR1  MOVE      ZERO,OVRCD                                                  
          READKS    COMPARA1;CMPAHOSP,CMPAPARM,CMPADESC,CMPAVALU,CMPATYPE:      
                             CMPAACTV,CMPACDAT,CMPACTIM,CMPACUID,CMPAUDAT:      
                             CMPAUTIM,CMPAUUID,CMPASYST,CMPAVCON,CMPASPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMPAR1  MOVE      ZERO,OVRCD                                                  
          READKP    COMPARA1;CMPAHOSP,CMPAPARM,CMPADESC,CMPAVALU,CMPATYPE:      
                             CMPAACTV,CMPACDAT,CMPACTIM,CMPACUID,CMPAUDAT:      
                             CMPAUTIM,CMPAUUID,CMPASYST,CMPAVCON,CMPASPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMPAR1  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMPARA1;CMPAHOSP,CMPAPARM,CMPADESC,CMPAVALU,CMPATYPE:      
                             CMPAACTV,CMPACDAT,CMPACTIM,CMPACUID,CMPAUDAT:      
                             CMPAUTIM,CMPAUUID,CMPASYST,CMPAVCON,CMPASPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCMPAR1  RESET     KEY11                                                       
          WRITE     COMPARA1,KEY11;CMPAHOSP,CMPAPARM,CMPADESC,CMPAVALU,CMPATYPE:
                                   CMPAACTV,CMPACDAT,CMPACTIM,CMPACUID,CMPAUDAT:
                                   CMPAUTIM,CMPAUUID,CMPASYST,CMPAVCON,CMPASPAR 
          RETURN
.
DECMPAR1  RESET     KEY11                                                       
          DELETE    COMPARA1,KEY11                                              
          RETURN
.
RLCMPAR1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     COMPARA1,KEY11;CMPAHOSP,CMPAPARM,CMPADESC,CMPAVALU,CMPATYPE:
                                   CMPAACTV,CMPACDAT,CMPACTIM,CMPACUID,CMPAUDAT:
                                   CMPAUTIM,CMPAUUID,CMPASYST,CMPAVCON,CMPASPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCMPAR1  MOVE      ZERO,OVRCD                                                  
          READLKS   COMPARA1;CMPAHOSP,CMPAPARM,CMPADESC,CMPAVALU,CMPATYPE:      
                             CMPAACTV,CMPACDAT,CMPACTIM,CMPACUID,CMPAUDAT:      
                             CMPAUTIM,CMPAUUID,CMPASYST,CMPAVCON,CMPASPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCMPAR1  MOVE      ZERO,OVRCD                                                  
          READLKP   COMPARA1;CMPAHOSP,CMPAPARM,CMPADESC,CMPAVALU,CMPATYPE:      
                             CMPAACTV,CMPACDAT,CMPACTIM,CMPACUID,CMPAUDAT:      
                             CMPAUTIM,CMPAUUID,CMPASYST,CMPAVCON,CMPASPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCMPAR1  RESET     KEY11                                                       
          UNLOCK    COMPARA1                                                    
          RETURN
.
RSCMPAR2  RESET     KEY14                                                       
          READ      COMPARA2,KEY14;;                                            
          RETURN
.
RACMPAR2  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      COMPARA2,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMPAR2  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      COMPARA2,KEY14;CMPAHOSP,CMPAPARM,CMPADESC,CMPAVALU,CMPATYPE:
                                   CMPAACTV,CMPACDAT,CMPACTIM,CMPACUID,CMPAUDAT:
                                   CMPAUTIM,CMPAUUID,CMPASYST,CMPAVCON,CMPASPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMPAR2  MOVE      ZERO,OVRCD                                                  
          READKS    COMPARA2;CMPAHOSP,CMPAPARM,CMPADESC,CMPAVALU,CMPATYPE:      
                             CMPAACTV,CMPACDAT,CMPACTIM,CMPACUID,CMPAUDAT:      
                             CMPAUTIM,CMPAUUID,CMPASYST,CMPAVCON,CMPASPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMPAR2  MOVE      ZERO,OVRCD                                                  
          READKP    COMPARA2;CMPAHOSP,CMPAPARM,CMPADESC,CMPAVALU,CMPATYPE:      
                             CMPAACTV,CMPACDAT,CMPACTIM,CMPACUID,CMPAUDAT:      
                             CMPAUTIM,CMPAUUID,CMPASYST,CMPAVCON,CMPASPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMPAR2  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMPARA2;CMPAHOSP,CMPAPARM,CMPADESC,CMPAVALU,CMPATYPE:      
                             CMPAACTV,CMPACDAT,CMPACTIM,CMPACUID,CMPAUDAT:      
                             CMPAUTIM,CMPAUUID,CMPASYST,CMPAVCON,CMPASPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCMPAR2  RESET     KEY14                                                       
          WRITE     COMPARA2,KEY14;CMPAHOSP,CMPAPARM,CMPADESC,CMPAVALU,CMPATYPE:
                                   CMPAACTV,CMPACDAT,CMPACTIM,CMPACUID,CMPAUDAT:
                                   CMPAUTIM,CMPAUUID,CMPASYST,CMPAVCON,CMPASPAR 
          RETURN
.
DECMPAR2  RESET     KEY14                                                       
          DELETE    COMPARA2,KEY14                                              
          RETURN
.
RLCMPAR2  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     COMPARA2,KEY14;CMPAHOSP,CMPAPARM,CMPADESC,CMPAVALU,CMPATYPE:
                                   CMPAACTV,CMPACDAT,CMPACTIM,CMPACUID,CMPAUDAT:
                                   CMPAUTIM,CMPAUUID,CMPASYST,CMPAVCON,CMPASPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCMPAR2  MOVE      ZERO,OVRCD                                                  
          READLKS   COMPARA2;CMPAHOSP,CMPAPARM,CMPADESC,CMPAVALU,CMPATYPE:      
                             CMPAACTV,CMPACDAT,CMPACTIM,CMPACUID,CMPAUDAT:      
                             CMPAUTIM,CMPAUUID,CMPASYST,CMPAVCON,CMPASPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCMPAR2  MOVE      ZERO,OVRCD                                                  
          READLKP   COMPARA2;CMPAHOSP,CMPAPARM,CMPADESC,CMPAVALU,CMPATYPE:      
                             CMPAACTV,CMPACDAT,CMPACTIM,CMPACUID,CMPAUDAT:      
                             CMPAUTIM,CMPAUUID,CMPASYST,CMPAVCON,CMPASPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCMPAR2  RESET     KEY14                                                       
          UNLOCK    COMPARA2                                                    
          RETURN
.
