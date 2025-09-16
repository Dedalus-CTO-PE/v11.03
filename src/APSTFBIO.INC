.
. APSTFBIO    
. --------
. Filename     : apstfbaf.dat
.
RSAPTF1   RESET     KEY5                                                        
          READ      APSTFBA1,KEY5;;                                             
          RETURN
.
RAAPTF1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      APSTFBA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPTF1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      APSTFBA1,KEY5;APTFBAT,APTFTRAN,APTFDATE,APTFSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPTF1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSTFBA1;APTFBAT,APTFTRAN,APTFDATE,APTFSPAR                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPTF1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSTFBA1;APTFBAT,APTFTRAN,APTFDATE,APTFSPAR                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPTF1                                                                         
          UPDATE    APSTFBA1;APTFBAT,APTFTRAN,APTFDATE,APTFSPAR                 
          RETURN
.
WRAPTF1   RESET     KEY5                                                        
          WRITE     APSTFBA1,KEY5;APTFBAT,APTFTRAN,APTFDATE,APTFSPAR            
          RETURN
.
DEAPTF1   RESET     KEY5                                                        
          DELETE    APSTFBA1,KEY5                                               
          RETURN
.
RSAPTF2   RESET     KEY10                                                       
          READ      APSTFBA2,KEY10;;                                            
          RETURN
.
RAAPTF2   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      APSTFBA2,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPTF2   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      APSTFBA2,KEY10;APTFBAT,APTFTRAN,APTFDATE,APTFSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPTF2                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSTFBA2;APTFBAT,APTFTRAN,APTFDATE,APTFSPAR                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPTF2                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSTFBA2;APTFBAT,APTFTRAN,APTFDATE,APTFSPAR                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPTF2                                                                         
          UPDATE    APSTFBA2;APTFBAT,APTFTRAN,APTFDATE,APTFSPAR                 
          RETURN
.
WRAPTF2   RESET     KEY10                                                       
          WRITE     APSTFBA2,KEY10;APTFBAT,APTFTRAN,APTFDATE,APTFSPAR           
          RETURN
.
DEAPTF2   RESET     KEY10                                                       
          DELETE    APSTFBA2,KEY10                                              
          RETURN
.
