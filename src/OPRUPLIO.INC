.
. OPRUPLIO    
. --------
. Filename     : opruplaf.dat
.
RSOPUP1   RESET     KEY71                                                       
          READ      OPRUPLA1,KEY71;;                                            
          RETURN
.
RAOPUP1   RESET     KEY71                                                       
          MOVE      ZERO,OVRCD
          READ      OPRUPLA1,KEY71;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPUP1   RESET     KEY71                                                       
          MOVE      ZERO,OVRCD
          READ      OPRUPLA1,KEY71;OPUPDATE,OPUPTIME,OPUPPATH,OPUPFILE,OPUPMANF:
                        OPUPTYPE,OPUPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPUP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    OPRUPLA1;OPUPDATE,OPUPTIME,OPUPPATH,OPUPFILE,OPUPMANF:      
                        OPUPTYPE,OPUPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPUP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    OPRUPLA1;OPUPDATE,OPUPTIME,OPUPPATH,OPUPFILE,OPUPMANF:      
                        OPUPTYPE,OPUPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPUP1                                                                         
          UPDATE    OPRUPLA1;OPUPDATE,OPUPTIME,OPUPPATH,OPUPFILE,OPUPMANF:      
                        OPUPTYPE,OPUPSPAR                                       
          RETURN
.
WROPUP1   RESET     KEY71                                                       
          WRITE     OPRUPLA1,KEY71;OPUPDATE,OPUPTIME,OPUPPATH,OPUPFILE,OPUPMANF:
                        OPUPTYPE,OPUPSPAR                                       
          RETURN
.
DEOPUP1   RESET     KEY71                                                       
          DELETE    OPRUPLA1,KEY71                                              
          RETURN
.
RSOPUP2   RESET     KEY71                                                       
          READ      OPRUPLA2,KEY71;;                                            
          RETURN
.
RAOPUP2   RESET     KEY71                                                       
          MOVE      ZERO,OVRCD
          READ      OPRUPLA2,KEY71;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPUP2   RESET     KEY71                                                       
          MOVE      ZERO,OVRCD
          READ      OPRUPLA2,KEY71;OPUPDATE,OPUPTIME,OPUPPATH,OPUPFILE,OPUPMANF:
                        OPUPTYPE,OPUPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPUP2                                                                         
          MOVE      ZERO,OVRCD
          READKS    OPRUPLA2;OPUPDATE,OPUPTIME,OPUPPATH,OPUPFILE,OPUPMANF:      
                        OPUPTYPE,OPUPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPUP2                                                                         
          MOVE      ZERO,OVRCD
          READKP    OPRUPLA2;OPUPDATE,OPUPTIME,OPUPPATH,OPUPFILE,OPUPMANF:      
                        OPUPTYPE,OPUPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPUP2                                                                         
          UPDATE    OPRUPLA2;OPUPDATE,OPUPTIME,OPUPPATH,OPUPFILE,OPUPMANF:      
                        OPUPTYPE,OPUPSPAR                                       
          RETURN
.
WROPUP2   RESET     KEY71                                                       
          WRITE     OPRUPLA2,KEY71;OPUPDATE,OPUPTIME,OPUPPATH,OPUPFILE,OPUPMANF:
                        OPUPTYPE,OPUPSPAR                                       
          RETURN
.
DEOPUP2   RESET     KEY71                                                       
          DELETE    OPRUPLA2,KEY71                                              
          RETURN
.
RSOPUP3   RESET     KEY56                                                       
          READ      OPRUPLA3,KEY56;;                                            
          RETURN
.
RAOPUP3   RESET     KEY56                                                       
          MOVE      ZERO,OVRCD
          READ      OPRUPLA3,KEY56;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPUP3   RESET     KEY56                                                       
          MOVE      ZERO,OVRCD
          READ      OPRUPLA3,KEY56;OPUPDATE,OPUPTIME,OPUPPATH,OPUPFILE,OPUPMANF:
                        OPUPTYPE,OPUPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPUP3                                                                         
          MOVE      ZERO,OVRCD
          READKS    OPRUPLA3;OPUPDATE,OPUPTIME,OPUPPATH,OPUPFILE,OPUPMANF:      
                        OPUPTYPE,OPUPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPUP3                                                                         
          MOVE      ZERO,OVRCD
          READKP    OPRUPLA3;OPUPDATE,OPUPTIME,OPUPPATH,OPUPFILE,OPUPMANF:      
                        OPUPTYPE,OPUPSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPUP3                                                                         
          UPDATE    OPRUPLA3;OPUPDATE,OPUPTIME,OPUPPATH,OPUPFILE,OPUPMANF:      
                        OPUPTYPE,OPUPSPAR                                       
          RETURN
.
WROPUP3   RESET     KEY56                                                       
          WRITE     OPRUPLA3,KEY56;OPUPDATE,OPUPTIME,OPUPPATH,OPUPFILE,OPUPMANF:
                        OPUPTYPE,OPUPSPAR                                       
          RETURN
.
DEOPUP3   RESET     KEY56                                                       
          DELETE    OPRUPLA3,KEY56                                              
          RETURN
.
