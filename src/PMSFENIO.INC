.
. PMSFENIO    
. --------
. Filename     : pmsfenaf.dat
.
RSPMFEN1  RESET     KEY12                                                       
          READ      PMSFENA1,KEY12;;                                            
          RETURN
.
RAPMFEN1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFENA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMFEN1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFENA1,KEY12;PMFNQUOT,PMFNTITL,PMFNSNAM,PMFNGNAM,PMFNADD1:
                        PMFNADD2,PMFNSUBR,PMFNPOST,PMFNBDAT,PMFNPHON,PMFNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMFEN1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSFENA1;PMFNQUOT,PMFNTITL,PMFNSNAM,PMFNGNAM,PMFNADD1:      
                        PMFNADD2,PMFNSUBR,PMFNPOST,PMFNBDAT,PMFNPHON,PMFNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMFEN1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSFENA1;PMFNQUOT,PMFNTITL,PMFNSNAM,PMFNGNAM,PMFNADD1:      
                        PMFNADD2,PMFNSUBR,PMFNPOST,PMFNBDAT,PMFNPHON,PMFNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMFEN1                                                                        
          UPDATE    PMSFENA1;PMFNQUOT,PMFNTITL,PMFNSNAM,PMFNGNAM,PMFNADD1:      
                        PMFNADD2,PMFNSUBR,PMFNPOST,PMFNBDAT,PMFNPHON,PMFNSPAR   
          RETURN
.
WRPMFEN1  RESET     KEY12                                                       
          WRITE     PMSFENA1,KEY12;PMFNQUOT,PMFNTITL,PMFNSNAM,PMFNGNAM,PMFNADD1:
                        PMFNADD2,PMFNSUBR,PMFNPOST,PMFNBDAT,PMFNPHON,PMFNSPAR   
          RETURN
.
DEPMFEN1  RESET     KEY12                                                       
          DELETE    PMSFENA1,KEY12                                              
          RETURN
.
RSPMFEN2  RESET     KEY32                                                       
          READ      PMSFENA2,KEY32;;                                            
          RETURN
.
RAPMFEN2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFENA2,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMFEN2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PMSFENA2,KEY32;PMFNQUOT,PMFNTITL,PMFNSNAM,PMFNGNAM,PMFNADD1:
                        PMFNADD2,PMFNSUBR,PMFNPOST,PMFNBDAT,PMFNPHON,PMFNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMFEN2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSFENA2;PMFNQUOT,PMFNTITL,PMFNSNAM,PMFNGNAM,PMFNADD1:      
                        PMFNADD2,PMFNSUBR,PMFNPOST,PMFNBDAT,PMFNPHON,PMFNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMFEN2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSFENA2;PMFNQUOT,PMFNTITL,PMFNSNAM,PMFNGNAM,PMFNADD1:      
                        PMFNADD2,PMFNSUBR,PMFNPOST,PMFNBDAT,PMFNPHON,PMFNSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMFEN2                                                                        
          UPDATE    PMSFENA2;PMFNQUOT,PMFNTITL,PMFNSNAM,PMFNGNAM,PMFNADD1:      
                        PMFNADD2,PMFNSUBR,PMFNPOST,PMFNBDAT,PMFNPHON,PMFNSPAR   
          RETURN
.
WRPMFEN2  RESET     KEY32                                                       
          WRITE     PMSFENA2,KEY32;PMFNQUOT,PMFNTITL,PMFNSNAM,PMFNGNAM,PMFNADD1:
                        PMFNADD2,PMFNSUBR,PMFNPOST,PMFNBDAT,PMFNPHON,PMFNSPAR   
          RETURN
.
DEPMFEN2  RESET     KEY32                                                       
          DELETE    PMSFENA2,KEY32                                              
          RETURN
.
