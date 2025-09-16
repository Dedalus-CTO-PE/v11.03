.
. CCSCMBIO    
. --------
. Filename     : ccscmbaf.dat
.
RSCCMB1   RESET     KEY20                                                       
          READ      CCSCMBA1,KEY20;;                                            
          RETURN
.
RACCMB1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCMBA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCMB1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCMBA1,KEY20;CCMBHCD,CCMBDPT,CCMBYEAR,CCMBPER,CCMBCTY:    
                        CCMBDIR,CCMBIND,CCMBFLX,CCMBSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCMB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCMBA1;CCMBHCD,CCMBDPT,CCMBYEAR,CCMBPER,CCMBCTY:          
                        CCMBDIR,CCMBIND,CCMBFLX,CCMBSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCMB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCMBA1;CCMBHCD,CCMBDPT,CCMBYEAR,CCMBPER,CCMBCTY:          
                        CCMBDIR,CCMBIND,CCMBFLX,CCMBSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCMB1                                                                         
          UPDATE    CCSCMBA1;CCMBHCD,CCMBDPT,CCMBYEAR,CCMBPER,CCMBCTY:          
                        CCMBDIR,CCMBIND,CCMBFLX,CCMBSPA                         
          RETURN
.
WRCCMB1   RESET     KEY20                                                       
          WRITE     CCSCMBA1,KEY20;CCMBHCD,CCMBDPT,CCMBYEAR,CCMBPER,CCMBCTY:    
                        CCMBDIR,CCMBIND,CCMBFLX,CCMBSPA                         
          RETURN
.
DECCMB1   RESET     KEY20                                                       
          DELETE    CCSCMBA1,KEY20                                              
          RETURN
.
RSCCMB2   RESET     KEY20                                                       
          READ      CCSCMBA2,KEY20;;                                            
          RETURN
.
RACCMB2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCMBA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCMB2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCMBA2,KEY20;CCMBHCD,CCMBDPT,CCMBYEAR,CCMBPER,CCMBCTY:    
                        CCMBDIR,CCMBIND,CCMBFLX,CCMBSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCMB2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCMBA2;CCMBHCD,CCMBDPT,CCMBYEAR,CCMBPER,CCMBCTY:          
                        CCMBDIR,CCMBIND,CCMBFLX,CCMBSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCMB2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCMBA2;CCMBHCD,CCMBDPT,CCMBYEAR,CCMBPER,CCMBCTY:          
                        CCMBDIR,CCMBIND,CCMBFLX,CCMBSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCMB2                                                                         
          UPDATE    CCSCMBA2;CCMBHCD,CCMBDPT,CCMBYEAR,CCMBPER,CCMBCTY:          
                        CCMBDIR,CCMBIND,CCMBFLX,CCMBSPA                         
          RETURN
.
WRCCMB2   RESET     KEY20                                                       
          WRITE     CCSCMBA2,KEY20;CCMBHCD,CCMBDPT,CCMBYEAR,CCMBPER,CCMBCTY:    
                        CCMBDIR,CCMBIND,CCMBFLX,CCMBSPA                         
          RETURN
.
DECCMB2   RESET     KEY20                                                       
          DELETE    CCSCMBA2,KEY20                                              
          RETURN
.
