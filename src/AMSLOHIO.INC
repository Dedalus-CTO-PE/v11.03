.
. AMSLOHIO    
. --------
. Filename     : amslohaf.dat
.
RSAMLH1   RESET     KEY22                                                       
          READ      AMSLOHA1,KEY22;;                                            
          RETURN
.
RAAMLH1   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      AMSLOHA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMLH1   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      AMSLOHA1,KEY22;AMLHREG,AMLHASS,AMLHDAT,AMLHFBLD,AMLHFLOC:   
                        AMLHTBLD,AMLHTLOC,AMLHCOM,AMLHUA1,AMLHUA2,AMLHUR1:      
                        AMLHUR2,AMLHUY1,AMLHUY2,AMLHSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMLH1                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSLOHA1;AMLHREG,AMLHASS,AMLHDAT,AMLHFBLD,AMLHFLOC:         
                        AMLHTBLD,AMLHTLOC,AMLHCOM,AMLHUA1,AMLHUA2,AMLHUR1:      
                        AMLHUR2,AMLHUY1,AMLHUY2,AMLHSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMLH1                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSLOHA1;AMLHREG,AMLHASS,AMLHDAT,AMLHFBLD,AMLHFLOC:         
                        AMLHTBLD,AMLHTLOC,AMLHCOM,AMLHUA1,AMLHUA2,AMLHUR1:      
                        AMLHUR2,AMLHUY1,AMLHUY2,AMLHSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMLH1                                                                         
          UPDATE    AMSLOHA1;AMLHREG,AMLHASS,AMLHDAT,AMLHFBLD,AMLHFLOC:         
                        AMLHTBLD,AMLHTLOC,AMLHCOM,AMLHUA1,AMLHUA2,AMLHUR1:      
                        AMLHUR2,AMLHUY1,AMLHUY2,AMLHSPA                         
          RETURN
.
WRAMLH1   RESET     KEY22                                                       
          WRITE     AMSLOHA1,KEY22;AMLHREG,AMLHASS,AMLHDAT,AMLHFBLD,AMLHFLOC:   
                        AMLHTBLD,AMLHTLOC,AMLHCOM,AMLHUA1,AMLHUA2,AMLHUR1:      
                        AMLHUR2,AMLHUY1,AMLHUY2,AMLHSPA                         
          RETURN
.
DEAMLH1   RESET     KEY22                                                       
          DELETE    AMSLOHA1,KEY22                                              
          RETURN
.
