.
. CCIDEPIO    
. --------
. Filename     : ccidepaf.dat
.
RSCCDEP1  RESET     KEY3                                                        
          READ      CCIDEPA1,KEY3;;                                             
          RETURN
.
RACCDEP1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      CCIDEPA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCDEP1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      CCIDEPA1,KEY3;CCDPDEPT,CCDPDESC,DCCDPMAN,CCDPIOPA,CCDPSPAR  
          GOTO      OVERCOND IF OVER
          MOVE      DCCDPMAN,CCDPMANU                                           
          RETURN
.
RKCCDEP1                                                                        
          MOVE      ZERO,OVRCD
          READKS    CCIDEPA1;CCDPDEPT,CCDPDESC,DCCDPMAN,CCDPIOPA,CCDPSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DCCDPMAN,CCDPMANU                                           
          RETURN
.
RPCCDEP1                                                                        
          MOVE      ZERO,OVRCD
          READKP    CCIDEPA1;CCDPDEPT,CCDPDESC,DCCDPMAN,CCDPIOPA,CCDPSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DCCDPMAN,CCDPMANU                                           
          RETURN
.
UPCCDEP1                                                                        
          MOVE      CCDPMANU,DCCDPMAN                                           
          UPDATE    CCIDEPA1;CCDPDEPT,CCDPDESC,DCCDPMAN,CCDPIOPA,CCDPSPAR       
          RETURN
.
WRCCDEP1  RESET     KEY3                                                        
          MOVE      CCDPMANU,DCCDPMAN                                           
          WRITE     CCIDEPA1,KEY3;CCDPDEPT,CCDPDESC,DCCDPMAN,CCDPIOPA,CCDPSPAR  
          RETURN
.
DECCDEP1  RESET     KEY3                                                        
          DELETE    CCIDEPA1,KEY3                                               
          RETURN
.
RSCCDEP2  RESET     KEY33                                                       
          READ      CCIDEPA2,KEY33;;                                            
          RETURN
.
RACCDEP2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      CCIDEPA2,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCDEP2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      CCIDEPA2,KEY33;CCDPDEPT,CCDPDESC,DCCDPMAN,CCDPIOPA,CCDPSPAR 
          GOTO      OVERCOND IF OVER
          MOVE      DCCDPMAN,CCDPMANU                                           
          RETURN
.
RKCCDEP2                                                                        
          MOVE      ZERO,OVRCD
          READKS    CCIDEPA2;CCDPDEPT,CCDPDESC,DCCDPMAN,CCDPIOPA,CCDPSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DCCDPMAN,CCDPMANU                                           
          RETURN
.
RPCCDEP2                                                                        
          MOVE      ZERO,OVRCD
          READKP    CCIDEPA2;CCDPDEPT,CCDPDESC,DCCDPMAN,CCDPIOPA,CCDPSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DCCDPMAN,CCDPMANU                                           
          RETURN
.
UPCCDEP2                                                                        
          MOVE      CCDPMANU,DCCDPMAN                                           
          UPDATE    CCIDEPA2;CCDPDEPT,CCDPDESC,DCCDPMAN,CCDPIOPA,CCDPSPAR       
          RETURN
.
WRCCDEP2  RESET     KEY33                                                       
          MOVE      CCDPMANU,DCCDPMAN                                           
          WRITE     CCIDEPA2,KEY33;CCDPDEPT,CCDPDESC,DCCDPMAN,CCDPIOPA,CCDPSPAR 
          RETURN
.
DECCDEP2  RESET     KEY33                                                       
          DELETE    CCIDEPA2,KEY33                                              
          RETURN
.
RSCCDEP3  RESET     KEY34                                                       
          READ      CCIDEPA3,KEY34;;                                            
          RETURN
.
RACCDEP3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      CCIDEPA3,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCDEP3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      CCIDEPA3,KEY34;CCDPDEPT,CCDPDESC,DCCDPMAN,CCDPIOPA,CCDPSPAR 
          GOTO      OVERCOND IF OVER
          MOVE      DCCDPMAN,CCDPMANU                                           
          RETURN
.
RKCCDEP3                                                                        
          MOVE      ZERO,OVRCD
          READKS    CCIDEPA3;CCDPDEPT,CCDPDESC,DCCDPMAN,CCDPIOPA,CCDPSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DCCDPMAN,CCDPMANU                                           
          RETURN
.
RPCCDEP3                                                                        
          MOVE      ZERO,OVRCD
          READKP    CCIDEPA3;CCDPDEPT,CCDPDESC,DCCDPMAN,CCDPIOPA,CCDPSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DCCDPMAN,CCDPMANU                                           
          RETURN
.
UPCCDEP3                                                                        
          MOVE      CCDPMANU,DCCDPMAN                                           
          UPDATE    CCIDEPA3;CCDPDEPT,CCDPDESC,DCCDPMAN,CCDPIOPA,CCDPSPAR       
          RETURN
.
WRCCDEP3  RESET     KEY34                                                       
          MOVE      CCDPMANU,DCCDPMAN                                           
          WRITE     CCIDEPA3,KEY34;CCDPDEPT,CCDPDESC,DCCDPMAN,CCDPIOPA,CCDPSPAR 
          RETURN
.
DECCDEP3  RESET     KEY34                                                       
          DELETE    CCIDEPA3,KEY34                                              
          RETURN
.
