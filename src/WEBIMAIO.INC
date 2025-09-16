.
. WEBIMAIO    
. --------
. Filename     : webimaaf.dat
.
RSWBIMA1  RESET     KEY26                                                       
          READ      WEBIMAA1,KEY26;;                                            
          RETURN
.
RAWBIMA1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMAA1,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMA1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMAA1,KEY26;WBIAINVN,WBIADATE,WBIATIME,WBIABATN,WBIASTAT:
                                   WBIATYPE,WBIAOPER,WBIATRID,WBIAEROR,WBIAEROT:
                                   WBIAMSID,WBIASPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIMA1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMAA1;WBIAINVN,WBIADATE,WBIATIME,WBIABATN,WBIASTAT:      
                             WBIATYPE,WBIAOPER,WBIATRID,WBIAEROR,WBIAEROT:      
                             WBIAMSID,WBIASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIMA1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMAA1;WBIAINVN,WBIADATE,WBIATIME,WBIABATN,WBIASTAT:      
                             WBIATYPE,WBIAOPER,WBIATRID,WBIAEROR,WBIAEROT:      
                             WBIAMSID,WBIASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIMA1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIMAA1;WBIAINVN,WBIADATE,WBIATIME,WBIABATN,WBIASTAT:      
                             WBIATYPE,WBIAOPER,WBIATRID,WBIAEROR,WBIAEROT:      
                             WBIAMSID,WBIASPAR                                  
          RETURN
.
WRWBIMA1  RESET     KEY26                                                       
          WRITE     WEBIMAA1,KEY26;WBIAINVN,WBIADATE,WBIATIME,WBIABATN,WBIASTAT:
                                   WBIATYPE,WBIAOPER,WBIATRID,WBIAEROR,WBIAEROT:
                                   WBIAMSID,WBIASPAR                            
          RETURN
.
DEWBIMA1  RESET     KEY26                                                       
          DELETE    WEBIMAA1,KEY26                                              
          RETURN
.
RSWBIMA2  RESET     KEY26                                                       
          READ      WEBIMAA2,KEY26;;                                            
          RETURN
.
RAWBIMA2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMAA2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMA2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMAA2,KEY26;WBIAINVN,WBIADATE,WBIATIME,WBIABATN,WBIASTAT:
                                   WBIATYPE,WBIAOPER,WBIATRID,WBIAEROR,WBIAEROT:
                                   WBIAMSID,WBIASPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIMA2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMAA2;WBIAINVN,WBIADATE,WBIATIME,WBIABATN,WBIASTAT:      
                             WBIATYPE,WBIAOPER,WBIATRID,WBIAEROR,WBIAEROT:      
                             WBIAMSID,WBIASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIMA2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMAA2;WBIAINVN,WBIADATE,WBIATIME,WBIABATN,WBIASTAT:      
                             WBIATYPE,WBIAOPER,WBIATRID,WBIAEROR,WBIAEROT:      
                             WBIAMSID,WBIASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIMA2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIMAA2;WBIAINVN,WBIADATE,WBIATIME,WBIABATN,WBIASTAT:      
                             WBIATYPE,WBIAOPER,WBIATRID,WBIAEROR,WBIAEROT:      
                             WBIAMSID,WBIASPAR                                  
          RETURN
.
WRWBIMA2  RESET     KEY26                                                       
          WRITE     WEBIMAA2,KEY26;WBIAINVN,WBIADATE,WBIATIME,WBIABATN,WBIASTAT:
                                   WBIATYPE,WBIAOPER,WBIATRID,WBIAEROR,WBIAEROT:
                                   WBIAMSID,WBIASPAR                            
          RETURN
.
DEWBIMA2  RESET     KEY26                                                       
          DELETE    WEBIMAA2,KEY26                                              
          RETURN
.
RSWBIMA3  RESET     KEY34                                                       
          READ      WEBIMAA3,KEY34;;                                            
          RETURN
.
RAWBIMA3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMAA3,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMA3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMAA3,KEY34;WBIAINVN,WBIADATE,WBIATIME,WBIABATN,WBIASTAT:
                                   WBIATYPE,WBIAOPER,WBIATRID,WBIAEROR,WBIAEROT:
                                   WBIAMSID,WBIASPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIMA3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMAA3;WBIAINVN,WBIADATE,WBIATIME,WBIABATN,WBIASTAT:      
                             WBIATYPE,WBIAOPER,WBIATRID,WBIAEROR,WBIAEROT:      
                             WBIAMSID,WBIASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIMA3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMAA3;WBIAINVN,WBIADATE,WBIATIME,WBIABATN,WBIASTAT:      
                             WBIATYPE,WBIAOPER,WBIATRID,WBIAEROR,WBIAEROT:      
                             WBIAMSID,WBIASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIMA3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIMAA3;WBIAINVN,WBIADATE,WBIATIME,WBIABATN,WBIASTAT:      
                             WBIATYPE,WBIAOPER,WBIATRID,WBIAEROR,WBIAEROT:      
                             WBIAMSID,WBIASPAR                                  
          RETURN
.
WRWBIMA3  RESET     KEY34                                                       
          WRITE     WEBIMAA3,KEY34;WBIAINVN,WBIADATE,WBIATIME,WBIABATN,WBIASTAT:
                                   WBIATYPE,WBIAOPER,WBIATRID,WBIAEROR,WBIAEROT:
                                   WBIAMSID,WBIASPAR                            
          RETURN
.
DEWBIMA3  RESET     KEY34                                                       
          DELETE    WEBIMAA3,KEY34                                              
          RETURN
.
RSWBIMA4  RESET     KEY50                                                       
          READ      WEBIMAA4,KEY50;;                                            
          RETURN
.
RAWBIMA4  RESET     KEY50                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMAA4,KEY50;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMA4  RESET     KEY50                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMAA4,KEY50;WBIAINVN,WBIADATE,WBIATIME,WBIABATN,WBIASTAT:
                                   WBIATYPE,WBIAOPER,WBIATRID,WBIAEROR,WBIAEROT:
                                   WBIAMSID,WBIASPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIMA4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMAA4;WBIAINVN,WBIADATE,WBIATIME,WBIABATN,WBIASTAT:      
                             WBIATYPE,WBIAOPER,WBIATRID,WBIAEROR,WBIAEROT:      
                             WBIAMSID,WBIASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIMA4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMAA4;WBIAINVN,WBIADATE,WBIATIME,WBIABATN,WBIASTAT:      
                             WBIATYPE,WBIAOPER,WBIATRID,WBIAEROR,WBIAEROT:      
                             WBIAMSID,WBIASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIMA4  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIMAA4;WBIAINVN,WBIADATE,WBIATIME,WBIABATN,WBIASTAT:      
                             WBIATYPE,WBIAOPER,WBIATRID,WBIAEROR,WBIAEROT:      
                             WBIAMSID,WBIASPAR                                  
          RETURN
.
WRWBIMA4  RESET     KEY50                                                       
          WRITE     WEBIMAA4,KEY50;WBIAINVN,WBIADATE,WBIATIME,WBIABATN,WBIASTAT:
                                   WBIATYPE,WBIAOPER,WBIATRID,WBIAEROR,WBIAEROT:
                                   WBIAMSID,WBIASPAR                            
          RETURN
.
DEWBIMA4  RESET     KEY50                                                       
          DELETE    WEBIMAA4,KEY50                                              
          RETURN
.
