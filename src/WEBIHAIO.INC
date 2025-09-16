.
. WEBIHAIO    
. --------
. Filename     : webihaaf.dat
.
RSWBIHA1  RESET     KEY26                                                       
          READ      WEBIHAA1,KEY26;;                                            
          RETURN
.
RAWBIHA1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHAA1,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHA1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHAA1,KEY26;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:
                                   WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:
                                   WBIIMSID,WBIISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIHA1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHAA1;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:      
                             WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:      
                             WBIIMSID,WBIISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIHA1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHAA1;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:      
                             WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:      
                             WBIIMSID,WBIISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIHA1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHAA1;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:      
                             WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:      
                             WBIIMSID,WBIISPAR                                  
          RETURN
.
WRWBIHA1  RESET     KEY26                                                       
          WRITE     WEBIHAA1,KEY26;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:
                                   WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:
                                   WBIIMSID,WBIISPAR                            
          RETURN
.
DEWBIHA1  RESET     KEY26                                                       
          DELETE    WEBIHAA1,KEY26                                              
          RETURN
.
RSWBIHA2  RESET     KEY26                                                       
          READ      WEBIHAA2,KEY26;;                                            
          RETURN
.
RAWBIHA2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHAA2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHA2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHAA2,KEY26;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:
                                   WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:
                                   WBIIMSID,WBIISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIHA2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHAA2;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:      
                             WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:      
                             WBIIMSID,WBIISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIHA2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHAA2;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:      
                             WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:      
                             WBIIMSID,WBIISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIHA2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHAA2;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:      
                             WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:      
                             WBIIMSID,WBIISPAR                                  
          RETURN
.
WRWBIHA2  RESET     KEY26                                                       
          WRITE     WEBIHAA2,KEY26;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:
                                   WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:
                                   WBIIMSID,WBIISPAR                            
          RETURN
.
DEWBIHA2  RESET     KEY26                                                       
          DELETE    WEBIHAA2,KEY26                                              
          RETURN
.
RSWBIHA3  RESET     KEY34                                                       
          READ      WEBIHAA3,KEY34;;                                            
          RETURN
.
RAWBIHA3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHAA3,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHA3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHAA3,KEY34;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:
                                   WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:
                                   WBIIMSID,WBIISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIHA3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHAA3;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:      
                             WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:      
                             WBIIMSID,WBIISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIHA3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHAA3;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:      
                             WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:      
                             WBIIMSID,WBIISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIHA3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHAA3;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:      
                             WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:      
                             WBIIMSID,WBIISPAR                                  
          RETURN
.
WRWBIHA3  RESET     KEY34                                                       
          WRITE     WEBIHAA3,KEY34;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:
                                   WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:
                                   WBIIMSID,WBIISPAR                            
          RETURN
.
DEWBIHA3  RESET     KEY34                                                       
          DELETE    WEBIHAA3,KEY34                                              
          RETURN
.
RSWBIHA4  RESET     KEY50                                                       
          READ      WEBIHAA4,KEY50;;                                            
          RETURN
.
RAWBIHA4  RESET     KEY50                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHAA4,KEY50;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHA4  RESET     KEY50                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHAA4,KEY50;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:
                                   WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:
                                   WBIIMSID,WBIISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIHA4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHAA4;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:      
                             WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:      
                             WBIIMSID,WBIISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIHA4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHAA4;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:      
                             WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:      
                             WBIIMSID,WBIISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIHA4  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHAA4;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:      
                             WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:      
                             WBIIMSID,WBIISPAR                                  
          RETURN
.
WRWBIHA4  RESET     KEY50                                                       
          WRITE     WEBIHAA4,KEY50;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:
                                   WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:
                                   WBIIMSID,WBIISPAR                            
          RETURN
.
DEWBIHA4  RESET     KEY50                                                       
          DELETE    WEBIHAA4,KEY50                                              
          RETURN
.
RSWBIHA5  RESET     KEY62                                                       
          READ      WEBIHAA5,KEY62;;                                            
          RETURN
.
RAWBIHA5  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHAA5,KEY62;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHA5  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHAA5,KEY62;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:
                                   WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:
                                   WBIIMSID,WBIISPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIHA5  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHAA5;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:      
                             WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:      
                             WBIIMSID,WBIISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIHA5  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHAA5;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:      
                             WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:      
                             WBIIMSID,WBIISPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIHA5  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHAA5;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:      
                             WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:      
                             WBIIMSID,WBIISPAR                                  
          RETURN
.
WRWBIHA5  RESET     KEY62                                                       
          WRITE     WEBIHAA5,KEY62;WBIIINVN,WBIIDATE,WBIITIME,WBIIBATN,WBIISTAT:
                                   WBIITYPE,WBIIOPER,WBIITRID,WBIIEROR,WBIIEROT:
                                   WBIIMSID,WBIISPAR                            
          RETURN
.
DEWBIHA5  RESET     KEY62                                                       
          DELETE    WEBIHAA5,KEY62                                              
          RETURN
.
