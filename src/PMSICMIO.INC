.
. PMSICMIO    
. --------
. Filename     : pmsicmaf.dat
.
RSPMICM1  RESET     KEY19                                                       
          READ      PMSICMA1,KEY19;;                                            
          RETURN
.
RAPMICM1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSICMA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMICM1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSICMA1,KEY19;PMICVISN,PMICINVN,PMICLNNO,PMICCMNT,PMICCDAT:
                        PMICCTIM,PMICCUID,PMICUDAT,PMICUTIM,PMICUUID,PMICSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMICM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSICMA1;PMICVISN,PMICINVN,PMICLNNO,PMICCMNT,PMICCDAT:      
                        PMICCTIM,PMICCUID,PMICUDAT,PMICUTIM,PMICUUID,PMICSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMICM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSICMA1;PMICVISN,PMICINVN,PMICLNNO,PMICCMNT,PMICCDAT:      
                        PMICCTIM,PMICCUID,PMICUDAT,PMICUTIM,PMICUUID,PMICSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMICM1                                                                        
          UPDATE    PMSICMA1;PMICVISN,PMICINVN,PMICLNNO,PMICCMNT,PMICCDAT:      
                        PMICCTIM,PMICCUID,PMICUDAT,PMICUTIM,PMICUUID,PMICSPAR   
          RETURN
.
WRPMICM1  RESET     KEY19                                                       
          WRITE     PMSICMA1,KEY19;PMICVISN,PMICINVN,PMICLNNO,PMICCMNT,PMICCDAT:
                        PMICCTIM,PMICCUID,PMICUDAT,PMICUTIM,PMICUUID,PMICSPAR   
          RETURN
.
DEPMICM1  RESET     KEY19                                                       
          DELETE    PMSICMA1,KEY19                                              
          RETURN
.
RSPMICM2  RESET     KEY19                                                       
          READ      PMSICMA2,KEY19;;                                            
          RETURN
.
RAPMICM2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSICMA2,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMICM2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSICMA2,KEY19;PMICVISN,PMICINVN,PMICLNNO,PMICCMNT,PMICCDAT:
                        PMICCTIM,PMICCUID,PMICUDAT,PMICUTIM,PMICUUID,PMICSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMICM2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSICMA2;PMICVISN,PMICINVN,PMICLNNO,PMICCMNT,PMICCDAT:      
                        PMICCTIM,PMICCUID,PMICUDAT,PMICUTIM,PMICUUID,PMICSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMICM2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSICMA2;PMICVISN,PMICINVN,PMICLNNO,PMICCMNT,PMICCDAT:      
                        PMICCTIM,PMICCUID,PMICUDAT,PMICUTIM,PMICUUID,PMICSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMICM2                                                                        
          UPDATE    PMSICMA2;PMICVISN,PMICINVN,PMICLNNO,PMICCMNT,PMICCDAT:      
                        PMICCTIM,PMICCUID,PMICUDAT,PMICUTIM,PMICUUID,PMICSPAR   
          RETURN
.
WRPMICM2  RESET     KEY19                                                       
          WRITE     PMSICMA2,KEY19;PMICVISN,PMICINVN,PMICLNNO,PMICCMNT,PMICCDAT:
                        PMICCTIM,PMICCUID,PMICUDAT,PMICUTIM,PMICUUID,PMICSPAR   
          RETURN
.
DEPMICM2  RESET     KEY19                                                       
          DELETE    PMSICMA2,KEY19                                              
          RETURN
.
