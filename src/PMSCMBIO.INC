.
. PMSCMBIO    
. --------
. Filename     : pmscmbaf.dat
.
RSPMCMB1  RESET     KEY14                                                       
          READ      PMSCMBA1,KEY14;;                                            
          RETURN
.
RAPMCMB1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCMBA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCMB1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCMBA1,KEY14;PMCBVISN,PMCBCNTR,PMCBUNID,PMCBRTYP,PMCBSTAT:
                                   PMCBITEM,PMCBQUAN,PMCBREFN,PMCBRDTE,PMCBTACT:
                                   PMCBTUID,PMCBTDTE,PMCBTTIM,PMCBCACT,PMCBCUID:
                                   PMCBCDTE,PMCBCTIM,PMCBBACT,PMCBBUID,PMCBBDTE:
                                   PMCBBTIM,PMCBRSTA,PMCBDUID,PMCBDDTE,PMCBDTIM:
                                   PMCBDCOM,PMCBSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCMB1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSCMBA1;PMCBVISN,PMCBCNTR,PMCBUNID,PMCBRTYP,PMCBSTAT:      
                             PMCBITEM,PMCBQUAN,PMCBREFN,PMCBRDTE,PMCBTACT:      
                             PMCBTUID,PMCBTDTE,PMCBTTIM,PMCBCACT,PMCBCUID:      
                             PMCBCDTE,PMCBCTIM,PMCBBACT,PMCBBUID,PMCBBDTE:      
                             PMCBBTIM,PMCBRSTA,PMCBDUID,PMCBDDTE,PMCBDTIM:      
                             PMCBDCOM,PMCBSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCMB1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSCMBA1;PMCBVISN,PMCBCNTR,PMCBUNID,PMCBRTYP,PMCBSTAT:      
                             PMCBITEM,PMCBQUAN,PMCBREFN,PMCBRDTE,PMCBTACT:      
                             PMCBTUID,PMCBTDTE,PMCBTTIM,PMCBCACT,PMCBCUID:      
                             PMCBCDTE,PMCBCTIM,PMCBBACT,PMCBBUID,PMCBBDTE:      
                             PMCBBTIM,PMCBRSTA,PMCBDUID,PMCBDDTE,PMCBDTIM:      
                             PMCBDCOM,PMCBSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCMB1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSCMBA1;PMCBVISN,PMCBCNTR,PMCBUNID,PMCBRTYP,PMCBSTAT:      
                             PMCBITEM,PMCBQUAN,PMCBREFN,PMCBRDTE,PMCBTACT:      
                             PMCBTUID,PMCBTDTE,PMCBTTIM,PMCBCACT,PMCBCUID:      
                             PMCBCDTE,PMCBCTIM,PMCBBACT,PMCBBUID,PMCBBDTE:      
                             PMCBBTIM,PMCBRSTA,PMCBDUID,PMCBDDTE,PMCBDTIM:      
                             PMCBDCOM,PMCBSPAR                                  
          RETURN
.
WRPMCMB1  RESET     KEY14                                                       
          WRITE     PMSCMBA1,KEY14;PMCBVISN,PMCBCNTR,PMCBUNID,PMCBRTYP,PMCBSTAT:
                                   PMCBITEM,PMCBQUAN,PMCBREFN,PMCBRDTE,PMCBTACT:
                                   PMCBTUID,PMCBTDTE,PMCBTTIM,PMCBCACT,PMCBCUID:
                                   PMCBCDTE,PMCBCTIM,PMCBBACT,PMCBBUID,PMCBBDTE:
                                   PMCBBTIM,PMCBRSTA,PMCBDUID,PMCBDDTE,PMCBDTIM:
                                   PMCBDCOM,PMCBSPAR                            
          RETURN
.
DEPMCMB1  RESET     KEY14                                                       
          DELETE    PMSCMBA1,KEY14                                              
          RETURN
.
RSPMCMB2  RESET     KEY22                                                       
          READ      PMSCMBA2,KEY22;;                                            
          RETURN
.
RAPMCMB2  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCMBA2,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCMB2  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCMBA2,KEY22;PMCBVISN,PMCBCNTR,PMCBUNID,PMCBRTYP,PMCBSTAT:
                                   PMCBITEM,PMCBQUAN,PMCBREFN,PMCBRDTE,PMCBTACT:
                                   PMCBTUID,PMCBTDTE,PMCBTTIM,PMCBCACT,PMCBCUID:
                                   PMCBCDTE,PMCBCTIM,PMCBBACT,PMCBBUID,PMCBBDTE:
                                   PMCBBTIM,PMCBRSTA,PMCBDUID,PMCBDDTE,PMCBDTIM:
                                   PMCBDCOM,PMCBSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCMB2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSCMBA2;PMCBVISN,PMCBCNTR,PMCBUNID,PMCBRTYP,PMCBSTAT:      
                             PMCBITEM,PMCBQUAN,PMCBREFN,PMCBRDTE,PMCBTACT:      
                             PMCBTUID,PMCBTDTE,PMCBTTIM,PMCBCACT,PMCBCUID:      
                             PMCBCDTE,PMCBCTIM,PMCBBACT,PMCBBUID,PMCBBDTE:      
                             PMCBBTIM,PMCBRSTA,PMCBDUID,PMCBDDTE,PMCBDTIM:      
                             PMCBDCOM,PMCBSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCMB2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSCMBA2;PMCBVISN,PMCBCNTR,PMCBUNID,PMCBRTYP,PMCBSTAT:      
                             PMCBITEM,PMCBQUAN,PMCBREFN,PMCBRDTE,PMCBTACT:      
                             PMCBTUID,PMCBTDTE,PMCBTTIM,PMCBCACT,PMCBCUID:      
                             PMCBCDTE,PMCBCTIM,PMCBBACT,PMCBBUID,PMCBBDTE:      
                             PMCBBTIM,PMCBRSTA,PMCBDUID,PMCBDDTE,PMCBDTIM:      
                             PMCBDCOM,PMCBSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCMB2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSCMBA2;PMCBVISN,PMCBCNTR,PMCBUNID,PMCBRTYP,PMCBSTAT:      
                             PMCBITEM,PMCBQUAN,PMCBREFN,PMCBRDTE,PMCBTACT:      
                             PMCBTUID,PMCBTDTE,PMCBTTIM,PMCBCACT,PMCBCUID:      
                             PMCBCDTE,PMCBCTIM,PMCBBACT,PMCBBUID,PMCBBDTE:      
                             PMCBBTIM,PMCBRSTA,PMCBDUID,PMCBDDTE,PMCBDTIM:      
                             PMCBDCOM,PMCBSPAR                                  
          RETURN
.
WRPMCMB2  RESET     KEY22                                                       
          WRITE     PMSCMBA2,KEY22;PMCBVISN,PMCBCNTR,PMCBUNID,PMCBRTYP,PMCBSTAT:
                                   PMCBITEM,PMCBQUAN,PMCBREFN,PMCBRDTE,PMCBTACT:
                                   PMCBTUID,PMCBTDTE,PMCBTTIM,PMCBCACT,PMCBCUID:
                                   PMCBCDTE,PMCBCTIM,PMCBBACT,PMCBBUID,PMCBBDTE:
                                   PMCBBTIM,PMCBRSTA,PMCBDUID,PMCBDDTE,PMCBDTIM:
                                   PMCBDCOM,PMCBSPAR                            
          RETURN
.
DEPMCMB2  RESET     KEY22                                                       
          DELETE    PMSCMBA2,KEY22                                              
          RETURN
.
