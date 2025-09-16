.
. EMRTHSIO    
. --------
. Filename     : emrthsaf.dat
.
RSEMTHS1  RESET     KEY11                                                       
          READ      EMRTHSA1,KEY11;;                                            
          RETURN
.
RAEMTHS1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      EMRTHSA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMTHS1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      EMRTHSA1,KEY11;EMTSVISN,EMTSCNTR,EMTSSITE,EMTSHOSP,EMTSLOCN:
                                   EMTSSTAT,EMTSCDAT,EMTSCTIM,EMTSCUID,EMTSUDAT:
                                   EMTSUTIM,EMTSUUID,EMTSSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMTHS1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRTHSA1;EMTSVISN,EMTSCNTR,EMTSSITE,EMTSHOSP,EMTSLOCN:      
                             EMTSSTAT,EMTSCDAT,EMTSCTIM,EMTSCUID,EMTSUDAT:      
                             EMTSUTIM,EMTSUUID,EMTSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMTHS1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRTHSA1;EMTSVISN,EMTSCNTR,EMTSSITE,EMTSHOSP,EMTSLOCN:      
                             EMTSSTAT,EMTSCDAT,EMTSCTIM,EMTSCUID,EMTSUDAT:      
                             EMTSUTIM,EMTSUUID,EMTSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMTHS1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRTHSA1;EMTSVISN,EMTSCNTR,EMTSSITE,EMTSHOSP,EMTSLOCN:      
                             EMTSSTAT,EMTSCDAT,EMTSCTIM,EMTSCUID,EMTSUDAT:      
                             EMTSUTIM,EMTSUUID,EMTSSPAR                         
          RETURN
.
WREMTHS1  RESET     KEY11                                                       
          WRITE     EMRTHSA1,KEY11;EMTSVISN,EMTSCNTR,EMTSSITE,EMTSHOSP,EMTSLOCN:
                                   EMTSSTAT,EMTSCDAT,EMTSCTIM,EMTSCUID,EMTSUDAT:
                                   EMTSUTIM,EMTSUUID,EMTSSPAR                   
          RETURN
.
DEEMTHS1  RESET     KEY11                                                       
          DELETE    EMRTHSA1,KEY11                                              
          RETURN
.
RSEMTHS2  RESET     KEY14                                                       
          READ      EMRTHSA2,KEY14;;                                            
          RETURN
.
RAEMTHS2  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      EMRTHSA2,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMTHS2  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      EMRTHSA2,KEY14;EMTSVISN,EMTSCNTR,EMTSSITE,EMTSHOSP,EMTSLOCN:
                                   EMTSSTAT,EMTSCDAT,EMTSCTIM,EMTSCUID,EMTSUDAT:
                                   EMTSUTIM,EMTSUUID,EMTSSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMTHS2  MOVE      ZERO,OVRCD                                                  
          READKS    EMRTHSA2;EMTSVISN,EMTSCNTR,EMTSSITE,EMTSHOSP,EMTSLOCN:      
                             EMTSSTAT,EMTSCDAT,EMTSCTIM,EMTSCUID,EMTSUDAT:      
                             EMTSUTIM,EMTSUUID,EMTSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMTHS2  MOVE      ZERO,OVRCD                                                  
          READKP    EMRTHSA2;EMTSVISN,EMTSCNTR,EMTSSITE,EMTSHOSP,EMTSLOCN:      
                             EMTSSTAT,EMTSCDAT,EMTSCTIM,EMTSCUID,EMTSUDAT:      
                             EMTSUTIM,EMTSUUID,EMTSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMTHS2  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRTHSA2;EMTSVISN,EMTSCNTR,EMTSSITE,EMTSHOSP,EMTSLOCN:      
                             EMTSSTAT,EMTSCDAT,EMTSCTIM,EMTSCUID,EMTSUDAT:      
                             EMTSUTIM,EMTSUUID,EMTSSPAR                         
          RETURN
.
WREMTHS2  RESET     KEY14                                                       
          WRITE     EMRTHSA2,KEY14;EMTSVISN,EMTSCNTR,EMTSSITE,EMTSHOSP,EMTSLOCN:
                                   EMTSSTAT,EMTSCDAT,EMTSCTIM,EMTSCUID,EMTSUDAT:
                                   EMTSUTIM,EMTSUUID,EMTSSPAR                   
          RETURN
.
DEEMTHS2  RESET     KEY14                                                       
          DELETE    EMRTHSA2,KEY14                                              
          RETURN
.
RSEMTHS3  RESET     KEY17                                                       
          READ      EMRTHSA3,KEY17;;                                            
          RETURN
.
RAEMTHS3  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      EMRTHSA3,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMTHS3  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      EMRTHSA3,KEY17;EMTSVISN,EMTSCNTR,EMTSSITE,EMTSHOSP,EMTSLOCN:
                                   EMTSSTAT,EMTSCDAT,EMTSCTIM,EMTSCUID,EMTSUDAT:
                                   EMTSUTIM,EMTSUUID,EMTSSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMTHS3  MOVE      ZERO,OVRCD                                                  
          READKS    EMRTHSA3;EMTSVISN,EMTSCNTR,EMTSSITE,EMTSHOSP,EMTSLOCN:      
                             EMTSSTAT,EMTSCDAT,EMTSCTIM,EMTSCUID,EMTSUDAT:      
                             EMTSUTIM,EMTSUUID,EMTSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMTHS3  MOVE      ZERO,OVRCD                                                  
          READKP    EMRTHSA3;EMTSVISN,EMTSCNTR,EMTSSITE,EMTSHOSP,EMTSLOCN:      
                             EMTSSTAT,EMTSCDAT,EMTSCTIM,EMTSCUID,EMTSUDAT:      
                             EMTSUTIM,EMTSUUID,EMTSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMTHS3  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRTHSA3;EMTSVISN,EMTSCNTR,EMTSSITE,EMTSHOSP,EMTSLOCN:      
                             EMTSSTAT,EMTSCDAT,EMTSCTIM,EMTSCUID,EMTSUDAT:      
                             EMTSUTIM,EMTSUUID,EMTSSPAR                         
          RETURN
.
WREMTHS3  RESET     KEY17                                                       
          WRITE     EMRTHSA3,KEY17;EMTSVISN,EMTSCNTR,EMTSSITE,EMTSHOSP,EMTSLOCN:
                                   EMTSSTAT,EMTSCDAT,EMTSCTIM,EMTSCUID,EMTSUDAT:
                                   EMTSUTIM,EMTSUUID,EMTSSPAR                   
          RETURN
.
DEEMTHS3  RESET     KEY17                                                       
          DELETE    EMRTHSA3,KEY17                                              
          RETURN
.
RSEMTHS4  RESET     KEY12                                                       
          READ      EMRTHSA4,KEY12;;                                            
          RETURN
.
RAEMTHS4  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      EMRTHSA4,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMTHS4  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      EMRTHSA4,KEY12;EMTSVISN,EMTSCNTR,EMTSSITE,EMTSHOSP,EMTSLOCN:
                                   EMTSSTAT,EMTSCDAT,EMTSCTIM,EMTSCUID,EMTSUDAT:
                                   EMTSUTIM,EMTSUUID,EMTSSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMTHS4  MOVE      ZERO,OVRCD                                                  
          READKS    EMRTHSA4;EMTSVISN,EMTSCNTR,EMTSSITE,EMTSHOSP,EMTSLOCN:      
                             EMTSSTAT,EMTSCDAT,EMTSCTIM,EMTSCUID,EMTSUDAT:      
                             EMTSUTIM,EMTSUUID,EMTSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMTHS4  MOVE      ZERO,OVRCD                                                  
          READKP    EMRTHSA4;EMTSVISN,EMTSCNTR,EMTSSITE,EMTSHOSP,EMTSLOCN:      
                             EMTSSTAT,EMTSCDAT,EMTSCTIM,EMTSCUID,EMTSUDAT:      
                             EMTSUTIM,EMTSUUID,EMTSSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMTHS4  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRTHSA4;EMTSVISN,EMTSCNTR,EMTSSITE,EMTSHOSP,EMTSLOCN:      
                             EMTSSTAT,EMTSCDAT,EMTSCTIM,EMTSCUID,EMTSUDAT:      
                             EMTSUTIM,EMTSUUID,EMTSSPAR                         
          RETURN
.
WREMTHS4  RESET     KEY12                                                       
          WRITE     EMRTHSA4,KEY12;EMTSVISN,EMTSCNTR,EMTSSITE,EMTSHOSP,EMTSLOCN:
                                   EMTSSTAT,EMTSCDAT,EMTSCTIM,EMTSCUID,EMTSUDAT:
                                   EMTSUTIM,EMTSUUID,EMTSSPAR                   
          RETURN
.
DEEMTHS4  RESET     KEY12                                                       
          DELETE    EMRTHSA4,KEY12                                              
          RETURN
.
