.
. HICITIIO    
. --------
. Filename     : hicitiaf.dat
.
RSHCITI1  RESET     KEY26                                                       
          READ      HICITIA1,KEY26;;                                            
          RETURN
.
RAHCITI1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      HICITIA1,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCITI1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      HICITIA1,KEY26;HCITINVN,HCITCLMN,HCITVISN,HCITTRAN,HCITIDAT:
                        HCITIINV,HCITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCITI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICITIA1;HCITINVN,HCITCLMN,HCITVISN,HCITTRAN,HCITIDAT:      
                        HCITIINV,HCITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCITI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICITIA1;HCITINVN,HCITCLMN,HCITVISN,HCITTRAN,HCITIDAT:      
                        HCITIINV,HCITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCITI1                                                                        
          UPDATE    HICITIA1;HCITINVN,HCITCLMN,HCITVISN,HCITTRAN,HCITIDAT:      
                        HCITIINV,HCITSPAR                                       
          RETURN
.
WRHCITI1  RESET     KEY26                                                       
          WRITE     HICITIA1,KEY26;HCITINVN,HCITCLMN,HCITVISN,HCITTRAN,HCITIDAT:
                        HCITIINV,HCITSPAR                                       
          RETURN
.
DEHCITI1  RESET     KEY26                                                       
          DELETE    HICITIA1,KEY26                                              
          RETURN
.
RSHCITI2  RESET     KEY26                                                       
          READ      HICITIA2,KEY26;;                                            
          RETURN
.
RAHCITI2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      HICITIA2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCITI2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      HICITIA2,KEY26;HCITINVN,HCITCLMN,HCITVISN,HCITTRAN,HCITIDAT:
                        HCITIINV,HCITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCITI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICITIA2;HCITINVN,HCITCLMN,HCITVISN,HCITTRAN,HCITIDAT:      
                        HCITIINV,HCITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCITI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICITIA2;HCITINVN,HCITCLMN,HCITVISN,HCITTRAN,HCITIDAT:      
                        HCITIINV,HCITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCITI2                                                                        
          UPDATE    HICITIA2;HCITINVN,HCITCLMN,HCITVISN,HCITTRAN,HCITIDAT:      
                        HCITIINV,HCITSPAR                                       
          RETURN
.
WRHCITI2  RESET     KEY26                                                       
          WRITE     HICITIA2,KEY26;HCITINVN,HCITCLMN,HCITVISN,HCITTRAN,HCITIDAT:
                        HCITIINV,HCITSPAR                                       
          RETURN
.
DEHCITI2  RESET     KEY26                                                       
          DELETE    HICITIA2,KEY26                                              
          RETURN
.
RSHCITI3  RESET     KEY34                                                       
          READ      HICITIA3,KEY34;;                                            
          RETURN
.
RAHCITI3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      HICITIA3,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCITI3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      HICITIA3,KEY34;HCITINVN,HCITCLMN,HCITVISN,HCITTRAN,HCITIDAT:
                        HCITIINV,HCITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCITI3                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICITIA3;HCITINVN,HCITCLMN,HCITVISN,HCITTRAN,HCITIDAT:      
                        HCITIINV,HCITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCITI3                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICITIA3;HCITINVN,HCITCLMN,HCITVISN,HCITTRAN,HCITIDAT:      
                        HCITIINV,HCITSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCITI3                                                                        
          UPDATE    HICITIA3;HCITINVN,HCITCLMN,HCITVISN,HCITTRAN,HCITIDAT:      
                        HCITIINV,HCITSPAR                                       
          RETURN
.
WRHCITI3  RESET     KEY34                                                       
          WRITE     HICITIA3,KEY34;HCITINVN,HCITCLMN,HCITVISN,HCITTRAN,HCITIDAT:
                        HCITIINV,HCITSPAR                                       
          RETURN
.
DEHCITI3  RESET     KEY34                                                       
          DELETE    HICITIA3,KEY34                                              
          RETURN
.
