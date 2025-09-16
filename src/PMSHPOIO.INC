.
. PMSHPOIO    
. --------
. Filename     : pmshpoaf.dat
.
RSPMHPO1  RESET     KEY26                                                       
          READ      PMSHPOA1,KEY26;;                                            
          RETURN
.
RAPMHPO1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHPOA1,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHPO1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHPOA1,KEY26;PMHOATYP,PMHOCLAM,PMHOFUND,PMHOTABT,PMHOEDAT:
                        PMHOVTYP,PMHOMAXO,PMHOWARO,PMHOCDAT,PMHOCTIM,PMHOCUID:  
                        PMHOUDAT,PMHOUTIM,PMHOUUID,PMHOSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHPO1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSHPOA1;PMHOATYP,PMHOCLAM,PMHOFUND,PMHOTABT,PMHOEDAT:      
                        PMHOVTYP,PMHOMAXO,PMHOWARO,PMHOCDAT,PMHOCTIM,PMHOCUID:  
                        PMHOUDAT,PMHOUTIM,PMHOUUID,PMHOSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHPO1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSHPOA1;PMHOATYP,PMHOCLAM,PMHOFUND,PMHOTABT,PMHOEDAT:      
                        PMHOVTYP,PMHOMAXO,PMHOWARO,PMHOCDAT,PMHOCTIM,PMHOCUID:  
                        PMHOUDAT,PMHOUTIM,PMHOUUID,PMHOSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHPO1                                                                        
          UPDATE    PMSHPOA1;PMHOATYP,PMHOCLAM,PMHOFUND,PMHOTABT,PMHOEDAT:      
                        PMHOVTYP,PMHOMAXO,PMHOWARO,PMHOCDAT,PMHOCTIM,PMHOCUID:  
                        PMHOUDAT,PMHOUTIM,PMHOUUID,PMHOSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMHPO1  RESET     KEY26                                                       
          WRITE     PMSHPOA1,KEY26;PMHOATYP,PMHOCLAM,PMHOFUND,PMHOTABT,PMHOEDAT:
                        PMHOVTYP,PMHOMAXO,PMHOWARO,PMHOCDAT,PMHOCTIM,PMHOCUID:  
                        PMHOUDAT,PMHOUTIM,PMHOUUID,PMHOSPAR                     
          RETURN
.
DEPMHPO1  RESET     KEY26                                                       
          DELETE    PMSHPOA1,KEY26                                              
          RETURN
.
RLPMHPO1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READL     PMSHPOA1,KEY26;PMHOATYP,PMHOCLAM,PMHOFUND,PMHOTABT,PMHOEDAT:
                        PMHOVTYP,PMHOMAXO,PMHOWARO,PMHOCDAT,PMHOCTIM,PMHOCUID:  
                        PMHOUDAT,PMHOUTIM,PMHOUUID,PMHOSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMHPO1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSHPOA1;PMHOATYP,PMHOCLAM,PMHOFUND,PMHOTABT,PMHOEDAT:      
                        PMHOVTYP,PMHOMAXO,PMHOWARO,PMHOCDAT,PMHOCTIM,PMHOCUID:  
                        PMHOUDAT,PMHOUTIM,PMHOUUID,PMHOSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMHPO1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSHPOA1;PMHOATYP,PMHOCLAM,PMHOFUND,PMHOTABT,PMHOEDAT:      
                        PMHOVTYP,PMHOMAXO,PMHOWARO,PMHOCDAT,PMHOCTIM,PMHOCUID:  
                        PMHOUDAT,PMHOUTIM,PMHOUUID,PMHOSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMHPO1  RESET     KEY26                                                       
          UNLOCK    PMSHPOA1                                                    
          RETURN
.
