.
. DISPATIO    
. --------
. Filename     : dispataf.dat
.
RSDSPAT1  RESET     KEY17                                                       
          READ      DISPATA1,KEY17;;                                            
          RETURN
.
RADSPAT1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      DISPATA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDSPAT1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      DISPATA1,KEY17;DSPTURNO,DSPTDIID,DSPTCODE,DSPTSDAT,DSPTSTIM:
                        DSPTEDAT,DSPTETIM,DSPTOTCM,DSPTFICA,DSPTCUSR,DSPTCDAT:  
                        DSPTCTIM,DSPTUUSR,DSPTUDAT,DSPTUTIM,DSPTSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDSPAT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    DISPATA1;DSPTURNO,DSPTDIID,DSPTCODE,DSPTSDAT,DSPTSTIM:      
                        DSPTEDAT,DSPTETIM,DSPTOTCM,DSPTFICA,DSPTCUSR,DSPTCDAT:  
                        DSPTCTIM,DSPTUUSR,DSPTUDAT,DSPTUTIM,DSPTSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDSPAT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    DISPATA1;DSPTURNO,DSPTDIID,DSPTCODE,DSPTSDAT,DSPTSTIM:      
                        DSPTEDAT,DSPTETIM,DSPTOTCM,DSPTFICA,DSPTCUSR,DSPTCDAT:  
                        DSPTCTIM,DSPTUUSR,DSPTUDAT,DSPTUTIM,DSPTSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDSPAT1                                                                        
          UPDATE    DISPATA1;DSPTURNO,DSPTDIID,DSPTCODE,DSPTSDAT,DSPTSTIM:      
                        DSPTEDAT,DSPTETIM,DSPTOTCM,DSPTFICA,DSPTCUSR,DSPTCDAT:  
                        DSPTCTIM,DSPTUUSR,DSPTUDAT,DSPTUTIM,DSPTSPAR            
          RETURN
.
WRDSPAT1  RESET     KEY17                                                       
          WRITE     DISPATA1,KEY17;DSPTURNO,DSPTDIID,DSPTCODE,DSPTSDAT,DSPTSTIM:
                        DSPTEDAT,DSPTETIM,DSPTOTCM,DSPTFICA,DSPTCUSR,DSPTCDAT:  
                        DSPTCTIM,DSPTUUSR,DSPTUDAT,DSPTUTIM,DSPTSPAR            
          RETURN
.
DEDSPAT1  RESET     KEY17                                                       
          DELETE    DISPATA1,KEY17                                              
          RETURN
.
RSDSPAT2  RESET     KEY17                                                       
          READ      DISPATA2,KEY17;;                                            
          RETURN
.
RADSPAT2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      DISPATA2,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDSPAT2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      DISPATA2,KEY17;DSPTURNO,DSPTDIID,DSPTCODE,DSPTSDAT,DSPTSTIM:
                        DSPTEDAT,DSPTETIM,DSPTOTCM,DSPTFICA,DSPTCUSR,DSPTCDAT:  
                        DSPTCTIM,DSPTUUSR,DSPTUDAT,DSPTUTIM,DSPTSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDSPAT2                                                                        
          MOVE      ZERO,OVRCD
          READKS    DISPATA2;DSPTURNO,DSPTDIID,DSPTCODE,DSPTSDAT,DSPTSTIM:      
                        DSPTEDAT,DSPTETIM,DSPTOTCM,DSPTFICA,DSPTCUSR,DSPTCDAT:  
                        DSPTCTIM,DSPTUUSR,DSPTUDAT,DSPTUTIM,DSPTSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDSPAT2                                                                        
          MOVE      ZERO,OVRCD
          READKP    DISPATA2;DSPTURNO,DSPTDIID,DSPTCODE,DSPTSDAT,DSPTSTIM:      
                        DSPTEDAT,DSPTETIM,DSPTOTCM,DSPTFICA,DSPTCUSR,DSPTCDAT:  
                        DSPTCTIM,DSPTUUSR,DSPTUDAT,DSPTUTIM,DSPTSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDSPAT2                                                                        
          UPDATE    DISPATA2;DSPTURNO,DSPTDIID,DSPTCODE,DSPTSDAT,DSPTSTIM:      
                        DSPTEDAT,DSPTETIM,DSPTOTCM,DSPTFICA,DSPTCUSR,DSPTCDAT:  
                        DSPTCTIM,DSPTUUSR,DSPTUDAT,DSPTUTIM,DSPTSPAR            
          RETURN
.
WRDSPAT2  RESET     KEY17                                                       
          WRITE     DISPATA2,KEY17;DSPTURNO,DSPTDIID,DSPTCODE,DSPTSDAT,DSPTSTIM:
                        DSPTEDAT,DSPTETIM,DSPTOTCM,DSPTFICA,DSPTCUSR,DSPTCDAT:  
                        DSPTCTIM,DSPTUUSR,DSPTUDAT,DSPTUTIM,DSPTSPAR            
          RETURN
.
DEDSPAT2  RESET     KEY17                                                       
          DELETE    DISPATA2,KEY17                                              
          RETURN
.
