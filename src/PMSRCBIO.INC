.
. PMSRCBIO    
. --------
. Filename     : pmsrcbaf.dat
.
RSPMRCB1  RESET     KEY16                                                       
          READ      PMSRCBA1,KEY16;;                                            
          RETURN
.
RAPMRCB1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRCBA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMRCB1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRCBA1,KEY16;PMRCBATC,PMRCADMN,PMRCPREV,PMRCSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMRCB1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSRCBA1;PMRCBATC,PMRCADMN,PMRCPREV,PMRCSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMRCB1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSRCBA1;PMRCBATC,PMRCADMN,PMRCPREV,PMRCSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMRCB1                                                                        
          UPDATE    PMSRCBA1;PMRCBATC,PMRCADMN,PMRCPREV,PMRCSPAR                
          RETURN
.
WRPMRCB1  RESET     KEY16                                                       
          WRITE     PMSRCBA1,KEY16;PMRCBATC,PMRCADMN,PMRCPREV,PMRCSPAR          
          RETURN
.
DEPMRCB1  RESET     KEY16                                                       
          DELETE    PMSRCBA1,KEY16                                              
          RETURN
.
RSPMRCB2  RESET     KEY16                                                       
          READ      PMSRCBA2,KEY16;;                                            
          RETURN
.
RAPMRCB2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRCBA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMRCB2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRCBA2,KEY16;PMRCBATC,PMRCADMN,PMRCPREV,PMRCSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMRCB2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSRCBA2;PMRCBATC,PMRCADMN,PMRCPREV,PMRCSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMRCB2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSRCBA2;PMRCBATC,PMRCADMN,PMRCPREV,PMRCSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMRCB2                                                                        
          UPDATE    PMSRCBA2;PMRCBATC,PMRCADMN,PMRCPREV,PMRCSPAR                
          RETURN
.
WRPMRCB2  RESET     KEY16                                                       
          WRITE     PMSRCBA2,KEY16;PMRCBATC,PMRCADMN,PMRCPREV,PMRCSPAR          
          RETURN
.
DEPMRCB2  RESET     KEY16                                                       
          DELETE    PMSRCBA2,KEY16                                              
          RETURN
.
