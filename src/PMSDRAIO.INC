.
. PMSDRAIO    
. --------
. Filename     : pmsdraaf.dat
.
RSPMDRA1  RESET     KEY13                                                       
          READ      PMSDRAA1,KEY13;;                                            
          RETURN
.
RAPMDRA1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDRAA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMDRA1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDRAA1,KEY13;PMDRDOCT,PMDRARRA,PMDRAFDT,PMDRATDT,PMDRCUID:
                        PMDRCDAT,PMDRCTIM,PMDRUUID,PMDRUDAT,PMDRUTIM,PMDRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMDRA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSDRAA1;PMDRDOCT,PMDRARRA,PMDRAFDT,PMDRATDT,PMDRCUID:      
                        PMDRCDAT,PMDRCTIM,PMDRUUID,PMDRUDAT,PMDRUTIM,PMDRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMDRA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSDRAA1;PMDRDOCT,PMDRARRA,PMDRAFDT,PMDRATDT,PMDRCUID:      
                        PMDRCDAT,PMDRCTIM,PMDRUUID,PMDRUDAT,PMDRUTIM,PMDRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMDRA1                                                                        
          UPDATE    PMSDRAA1;PMDRDOCT,PMDRARRA,PMDRAFDT,PMDRATDT,PMDRCUID:      
                        PMDRCDAT,PMDRCTIM,PMDRUUID,PMDRUDAT,PMDRUTIM,PMDRSPAR   
          RETURN
.
WRPMDRA1  RESET     KEY13                                                       
          WRITE     PMSDRAA1,KEY13;PMDRDOCT,PMDRARRA,PMDRAFDT,PMDRATDT,PMDRCUID:
                        PMDRCDAT,PMDRCTIM,PMDRUUID,PMDRUDAT,PMDRUTIM,PMDRSPAR   
          RETURN
.
DEPMDRA1  RESET     KEY13                                                       
          DELETE    PMSDRAA1,KEY13                                              
          RETURN
.
RSPMDRA2  RESET     KEY21                                                       
          READ      PMSDRAA2,KEY21;;                                            
          RETURN
.
RAPMDRA2  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDRAA2,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMDRA2  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDRAA2,KEY21;PMDRDOCT,PMDRARRA,PMDRAFDT,PMDRATDT,PMDRCUID:
                        PMDRCDAT,PMDRCTIM,PMDRUUID,PMDRUDAT,PMDRUTIM,PMDRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMDRA2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSDRAA2;PMDRDOCT,PMDRARRA,PMDRAFDT,PMDRATDT,PMDRCUID:      
                        PMDRCDAT,PMDRCTIM,PMDRUUID,PMDRUDAT,PMDRUTIM,PMDRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMDRA2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSDRAA2;PMDRDOCT,PMDRARRA,PMDRAFDT,PMDRATDT,PMDRCUID:      
                        PMDRCDAT,PMDRCTIM,PMDRUUID,PMDRUDAT,PMDRUTIM,PMDRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMDRA2                                                                        
          UPDATE    PMSDRAA2;PMDRDOCT,PMDRARRA,PMDRAFDT,PMDRATDT,PMDRCUID:      
                        PMDRCDAT,PMDRCTIM,PMDRUUID,PMDRUDAT,PMDRUTIM,PMDRSPAR   
          RETURN
.
WRPMDRA2  RESET     KEY21                                                       
          WRITE     PMSDRAA2,KEY21;PMDRDOCT,PMDRARRA,PMDRAFDT,PMDRATDT,PMDRCUID:
                        PMDRCDAT,PMDRCTIM,PMDRUUID,PMDRUDAT,PMDRUTIM,PMDRSPAR   
          RETURN
.
DEPMDRA2  RESET     KEY21                                                       
          DELETE    PMSDRAA2,KEY21                                              
          RETURN
.
