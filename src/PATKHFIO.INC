.
. PATKHFIO    
. --------
. Filename     : patkhfaf.dat
.
RSPTHF1   RESET     KEY29                                                       
          READ      PATKHFA1,KEY29;;                                            
          RETURN
.
RAPTHF1   RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PATKHFA1,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTHF1   RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PATKHFA1,KEY29;PTHFFUN,PTHFTAB,PTHFKWD,PTHFSPAR             
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTHF1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATKHFA1;PTHFFUN,PTHFTAB,PTHFKWD,PTHFSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTHF1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATKHFA1;PTHFFUN,PTHFTAB,PTHFKWD,PTHFSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTHF1                                                                         
          UPDATE    PATKHFA1;PTHFFUN,PTHFTAB,PTHFKWD,PTHFSPAR                   
          RETURN
.
WRPTHF1   RESET     KEY29                                                       
          WRITE     PATKHFA1,KEY29;PTHFFUN,PTHFTAB,PTHFKWD,PTHFSPAR             
          RETURN
.
DEPTHF1   RESET     KEY29                                                       
          DELETE    PATKHFA1,KEY29                                              
          RETURN
.
RSPTHF2   RESET     KEY29                                                       
          READ      PATKHFA2,KEY29;;                                            
          RETURN
.
RAPTHF2   RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PATKHFA2,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTHF2   RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      PATKHFA2,KEY29;PTHFFUN,PTHFTAB,PTHFKWD,PTHFSPAR             
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTHF2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATKHFA2;PTHFFUN,PTHFTAB,PTHFKWD,PTHFSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTHF2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATKHFA2;PTHFFUN,PTHFTAB,PTHFKWD,PTHFSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTHF2                                                                         
          UPDATE    PATKHFA2;PTHFFUN,PTHFTAB,PTHFKWD,PTHFSPAR                   
          RETURN
.
WRPTHF2   RESET     KEY29                                                       
          WRITE     PATKHFA2,KEY29;PTHFFUN,PTHFTAB,PTHFKWD,PTHFSPAR             
          RETURN
.
DEPTHF2   RESET     KEY29                                                       
          DELETE    PATKHFA2,KEY29                                              
          RETURN
.
