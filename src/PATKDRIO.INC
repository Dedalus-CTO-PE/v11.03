.
. PATKDRIO    
. --------
. Filename     : patkdraf.dat
.
RSPTKD1   RESET     KEY19                                                       
          READ      PATKDRA1,KEY19;;                                            
          RETURN
.
RAPTKD1   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PATKDRA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTKD1   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PATKDRA1,KEY19;PTKDITM,PTKDKWD,PTKDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTKD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATKDRA1;PTKDITM,PTKDKWD,PTKDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTKD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATKDRA1;PTKDITM,PTKDKWD,PTKDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTKD1                                                                         
          UPDATE    PATKDRA1;PTKDITM,PTKDKWD,PTKDSPA                            
          RETURN
.
WRPTKD1   RESET     KEY19                                                       
          WRITE     PATKDRA1,KEY19;PTKDITM,PTKDKWD,PTKDSPA                      
          RETURN
.
DEPTKD1   RESET     KEY19                                                       
          DELETE    PATKDRA1,KEY19                                              
          RETURN
.
RSPTKD2   RESET     KEY19                                                       
          READ      PATKDRA2,KEY19;;                                            
          RETURN
.
RAPTKD2   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PATKDRA2,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTKD2   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PATKDRA2,KEY19;PTKDITM,PTKDKWD,PTKDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTKD2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATKDRA2;PTKDITM,PTKDKWD,PTKDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTKD2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATKDRA2;PTKDITM,PTKDKWD,PTKDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTKD2                                                                         
          UPDATE    PATKDRA2;PTKDITM,PTKDKWD,PTKDSPA                            
          RETURN
.
WRPTKD2   RESET     KEY19                                                       
          WRITE     PATKDRA2,KEY19;PTKDITM,PTKDKWD,PTKDSPA                      
          RETURN
.
DEPTKD2   RESET     KEY19                                                       
          DELETE    PATKDRA2,KEY19                                              
          RETURN
.
