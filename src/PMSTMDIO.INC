.
. PMSTMDIO    
. --------
. Filename     : pmstmdaf.dat
.
RSPMTMD1  RESET     KEY21                                                       
          READ      PMSTMDA1,KEY21;;                                            
          RETURN
.
RAPMTMD1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PMSTMDA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMTMD1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PMSTMDA1,KEY21;PMTDDOCT,PMTDHOSP,PMTDUNIT,PMTDTEAM,PMTDACTV:
                        PMTDHEAD,PMTDPROV,PMTDCUID,PMTDCDAT,PMTDCTIM,PMTDUUID:  
                        PMTDUDAT,PMTDUTIM,PMTDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMTMD1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSTMDA1;PMTDDOCT,PMTDHOSP,PMTDUNIT,PMTDTEAM,PMTDACTV:      
                        PMTDHEAD,PMTDPROV,PMTDCUID,PMTDCDAT,PMTDCTIM,PMTDUUID:  
                        PMTDUDAT,PMTDUTIM,PMTDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMTMD1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSTMDA1;PMTDDOCT,PMTDHOSP,PMTDUNIT,PMTDTEAM,PMTDACTV:      
                        PMTDHEAD,PMTDPROV,PMTDCUID,PMTDCDAT,PMTDCTIM,PMTDUUID:  
                        PMTDUDAT,PMTDUTIM,PMTDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMTMD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSTMDA1;PMTDDOCT,PMTDHOSP,PMTDUNIT,PMTDTEAM,PMTDACTV:      
                        PMTDHEAD,PMTDPROV,PMTDCUID,PMTDCDAT,PMTDCTIM,PMTDUUID:  
                        PMTDUDAT,PMTDUTIM,PMTDSPAR                              
          RETURN
.
WRPMTMD1  RESET     KEY21                                                       
          WRITE     PMSTMDA1,KEY21;PMTDDOCT,PMTDHOSP,PMTDUNIT,PMTDTEAM,PMTDACTV:
                        PMTDHEAD,PMTDPROV,PMTDCUID,PMTDCDAT,PMTDCTIM,PMTDUUID:  
                        PMTDUDAT,PMTDUTIM,PMTDSPAR                              
          RETURN
.
DEPMTMD1  RESET     KEY21                                                       
          DELETE    PMSTMDA1,KEY21                                              
          RETURN
.
RSPMTMD2  RESET     KEY21                                                       
          READ      PMSTMDA2,KEY21;;                                            
          RETURN
.
RAPMTMD2  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PMSTMDA2,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMTMD2  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PMSTMDA2,KEY21;PMTDDOCT,PMTDHOSP,PMTDUNIT,PMTDTEAM,PMTDACTV:
                        PMTDHEAD,PMTDPROV,PMTDCUID,PMTDCDAT,PMTDCTIM,PMTDUUID:  
                        PMTDUDAT,PMTDUTIM,PMTDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMTMD2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSTMDA2;PMTDDOCT,PMTDHOSP,PMTDUNIT,PMTDTEAM,PMTDACTV:      
                        PMTDHEAD,PMTDPROV,PMTDCUID,PMTDCDAT,PMTDCTIM,PMTDUUID:  
                        PMTDUDAT,PMTDUTIM,PMTDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMTMD2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSTMDA2;PMTDDOCT,PMTDHOSP,PMTDUNIT,PMTDTEAM,PMTDACTV:      
                        PMTDHEAD,PMTDPROV,PMTDCUID,PMTDCDAT,PMTDCTIM,PMTDUUID:  
                        PMTDUDAT,PMTDUTIM,PMTDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMTMD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSTMDA2;PMTDDOCT,PMTDHOSP,PMTDUNIT,PMTDTEAM,PMTDACTV:      
                        PMTDHEAD,PMTDPROV,PMTDCUID,PMTDCDAT,PMTDCTIM,PMTDUUID:  
                        PMTDUDAT,PMTDUTIM,PMTDSPAR                              
          RETURN
.
WRPMTMD2  RESET     KEY21                                                       
          WRITE     PMSTMDA2,KEY21;PMTDDOCT,PMTDHOSP,PMTDUNIT,PMTDTEAM,PMTDACTV:
                        PMTDHEAD,PMTDPROV,PMTDCUID,PMTDCDAT,PMTDCTIM,PMTDUUID:  
                        PMTDUDAT,PMTDUTIM,PMTDSPAR                              
          RETURN
.
DEPMTMD2  RESET     KEY21                                                       
          DELETE    PMSTMDA2,KEY21                                              
          RETURN
.
