.
. EMRRVSIO    
. --------
. Filename     : emrrvsaf.dat
.
RSEMRVS1  RESET     KEY19                                                       
          READ      EMRRVSA1,KEY19;;                                            
          RETURN
.
RAEMRVS1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      EMRRVSA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMRVS1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      EMRRVSA1,KEY19;EMRVRESP,EMRVSDAT,EMRVVISN,EMRVPSTA,EMRVCUID:
                        EMRVCDAT,EMRVCTIM,EMRVUUID,EMRVUDAT,EMRVUTIM,EMRVSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMRVS1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRRVSA1;EMRVRESP,EMRVSDAT,EMRVVISN,EMRVPSTA,EMRVCUID:      
                        EMRVCDAT,EMRVCTIM,EMRVUUID,EMRVUDAT,EMRVUTIM,EMRVSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMRVS1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRRVSA1;EMRVRESP,EMRVSDAT,EMRVVISN,EMRVPSTA,EMRVCUID:      
                        EMRVCDAT,EMRVCTIM,EMRVUUID,EMRVUDAT,EMRVUTIM,EMRVSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMRVS1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRRVSA1;EMRVRESP,EMRVSDAT,EMRVVISN,EMRVPSTA,EMRVCUID:      
                        EMRVCDAT,EMRVCTIM,EMRVUUID,EMRVUDAT,EMRVUTIM,EMRVSPAR   
          RETURN
.
WREMRVS1  RESET     KEY19                                                       
          WRITE     EMRRVSA1,KEY19;EMRVRESP,EMRVSDAT,EMRVVISN,EMRVPSTA,EMRVCUID:
                        EMRVCDAT,EMRVCTIM,EMRVUUID,EMRVUDAT,EMRVUTIM,EMRVSPAR   
          RETURN
.
DEEMRVS1  RESET     KEY19                                                       
          DELETE    EMRRVSA1,KEY19                                              
          RETURN
.
