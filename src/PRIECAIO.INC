.
. PRIECAIO    
. --------
. Filename     : priecaaf.dat
.
RSPRECA1  RESET     KEY26                                                       
          READ      PRIECAA1,KEY26;;                                            
          RETURN
.
RAPRECA1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PRIECAA1,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRECA1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PRIECAA1,KEY26;PREAINVN,PREADATE,PREATIME,PREABATN,PREASTAT:
                        PREATYPE,PREAOPER,PREATRID,PREAEROR,PREAEROT,PREASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRECA1  MOVE      ZERO,OVRCD                                                  
          READKS    PRIECAA1;PREAINVN,PREADATE,PREATIME,PREABATN,PREASTAT:      
                        PREATYPE,PREAOPER,PREATRID,PREAEROR,PREAEROT,PREASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRECA1  MOVE      ZERO,OVRCD                                                  
          READKP    PRIECAA1;PREAINVN,PREADATE,PREATIME,PREABATN,PREASTAT:      
                        PREATYPE,PREAOPER,PREATRID,PREAEROR,PREAEROT,PREASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRECA1  UPDATE    PRIECAA1;PREAINVN,PREADATE,PREATIME,PREABATN,PREASTAT:      
                        PREATYPE,PREAOPER,PREATRID,PREAEROR,PREAEROT,PREASPAR   
          RETURN
.
WRPRECA1  RESET     KEY26                                                       
          WRITE     PRIECAA1,KEY26;PREAINVN,PREADATE,PREATIME,PREABATN,PREASTAT:
                        PREATYPE,PREAOPER,PREATRID,PREAEROR,PREAEROT,PREASPAR   
          RETURN
.
DEPRECA1  RESET     KEY26                                                       
          DELETE    PRIECAA1,KEY26                                              
          RETURN
.
RSPRECA2  RESET     KEY26                                                       
          READ      PRIECAA2,KEY26;;                                            
          RETURN
.
RAPRECA2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PRIECAA2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRECA2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PRIECAA2,KEY26;PREAINVN,PREADATE,PREATIME,PREABATN,PREASTAT:
                        PREATYPE,PREAOPER,PREATRID,PREAEROR,PREAEROT,PREASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRECA2  MOVE      ZERO,OVRCD                                                  
          READKS    PRIECAA2;PREAINVN,PREADATE,PREATIME,PREABATN,PREASTAT:      
                        PREATYPE,PREAOPER,PREATRID,PREAEROR,PREAEROT,PREASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRECA2  MOVE      ZERO,OVRCD                                                  
          READKP    PRIECAA2;PREAINVN,PREADATE,PREATIME,PREABATN,PREASTAT:      
                        PREATYPE,PREAOPER,PREATRID,PREAEROR,PREAEROT,PREASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRECA2  UPDATE    PRIECAA2;PREAINVN,PREADATE,PREATIME,PREABATN,PREASTAT:      
                        PREATYPE,PREAOPER,PREATRID,PREAEROR,PREAEROT,PREASPAR   
          RETURN
.
WRPRECA2  RESET     KEY26                                                       
          WRITE     PRIECAA2,KEY26;PREAINVN,PREADATE,PREATIME,PREABATN,PREASTAT:
                        PREATYPE,PREAOPER,PREATRID,PREAEROR,PREAEROT,PREASPAR   
          RETURN
.
DEPRECA2  RESET     KEY26                                                       
          DELETE    PRIECAA2,KEY26                                              
          RETURN
.
RSPRECA3  RESET     KEY34                                                       
          READ      PRIECAA3,KEY34;;                                            
          RETURN
.
RAPRECA3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      PRIECAA3,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRECA3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      PRIECAA3,KEY34;PREAINVN,PREADATE,PREATIME,PREABATN,PREASTAT:
                        PREATYPE,PREAOPER,PREATRID,PREAEROR,PREAEROT,PREASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRECA3  MOVE      ZERO,OVRCD                                                  
          READKS    PRIECAA3;PREAINVN,PREADATE,PREATIME,PREABATN,PREASTAT:      
                        PREATYPE,PREAOPER,PREATRID,PREAEROR,PREAEROT,PREASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRECA3  MOVE      ZERO,OVRCD                                                  
          READKP    PRIECAA3;PREAINVN,PREADATE,PREATIME,PREABATN,PREASTAT:      
                        PREATYPE,PREAOPER,PREATRID,PREAEROR,PREAEROT,PREASPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRECA3  UPDATE    PRIECAA3;PREAINVN,PREADATE,PREATIME,PREABATN,PREASTAT:      
                        PREATYPE,PREAOPER,PREATRID,PREAEROR,PREAEROT,PREASPAR   
          RETURN
.
WRPRECA3  RESET     KEY34                                                       
          WRITE     PRIECAA3,KEY34;PREAINVN,PREADATE,PREATIME,PREABATN,PREASTAT:
                        PREATYPE,PREAOPER,PREATRID,PREAEROR,PREAEROT,PREASPAR   
          RETURN
.
DEPRECA3  RESET     KEY34                                                       
          DELETE    PRIECAA3,KEY34                                              
          RETURN
.
