.
. RCPDSTIO    
. --------
. Filename     : rcpdstaf.dat
.
RSRCDST1  RESET     KEY20                                                       
          READ      RCPDSTA1,KEY20;;                                            
          RETURN
.
RARCDST1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDSTA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCDST1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDSTA1,KEY20;RCDSUNIQ,RCDSURNO,RCDSVISN,RCDSSFID,RCDSDSTA:
                                   RCDSDAMN,RCDSUDAT,RCDSUTIM,RCDSUWID,RCDSSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCDST1  MOVE      ZERO,OVRCD                                                  
          READKS    RCPDSTA1;RCDSUNIQ,RCDSURNO,RCDSVISN,RCDSSFID,RCDSDSTA:      
                             RCDSDAMN,RCDSUDAT,RCDSUTIM,RCDSUWID,RCDSSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCDST1  MOVE      ZERO,OVRCD                                                  
          READKP    RCPDSTA1;RCDSUNIQ,RCDSURNO,RCDSVISN,RCDSSFID,RCDSDSTA:      
                             RCDSDAMN,RCDSUDAT,RCDSUTIM,RCDSUWID,RCDSSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCDST1  MOVE      ZERO,OVRCD                                                  
          UPDATE    RCPDSTA1;RCDSUNIQ,RCDSURNO,RCDSVISN,RCDSSFID,RCDSDSTA:      
                             RCDSDAMN,RCDSUDAT,RCDSUTIM,RCDSUWID,RCDSSPAR       
          RETURN
.
WRRCDST1  RESET     KEY20                                                       
          WRITE     RCPDSTA1,KEY20;RCDSUNIQ,RCDSURNO,RCDSVISN,RCDSSFID,RCDSDSTA:
                                   RCDSDAMN,RCDSUDAT,RCDSUTIM,RCDSUWID,RCDSSPAR 
          RETURN
.
DERCDST1  RESET     KEY20                                                       
          DELETE    RCPDSTA1,KEY20                                              
          RETURN
.
RSRCDST2  RESET     KEY28                                                       
          READ      RCPDSTA2,KEY28;;                                            
          RETURN
.
RARCDST2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDSTA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCDST2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDSTA2,KEY28;RCDSUNIQ,RCDSURNO,RCDSVISN,RCDSSFID,RCDSDSTA:
                                   RCDSDAMN,RCDSUDAT,RCDSUTIM,RCDSUWID,RCDSSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCDST2  MOVE      ZERO,OVRCD                                                  
          READKS    RCPDSTA2;RCDSUNIQ,RCDSURNO,RCDSVISN,RCDSSFID,RCDSDSTA:      
                             RCDSDAMN,RCDSUDAT,RCDSUTIM,RCDSUWID,RCDSSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCDST2  MOVE      ZERO,OVRCD                                                  
          READKP    RCPDSTA2;RCDSUNIQ,RCDSURNO,RCDSVISN,RCDSSFID,RCDSDSTA:      
                             RCDSDAMN,RCDSUDAT,RCDSUTIM,RCDSUWID,RCDSSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCDST2  MOVE      ZERO,OVRCD                                                  
          UPDATE    RCPDSTA2;RCDSUNIQ,RCDSURNO,RCDSVISN,RCDSSFID,RCDSDSTA:      
                             RCDSDAMN,RCDSUDAT,RCDSUTIM,RCDSUWID,RCDSSPAR       
          RETURN
.
WRRCDST2  RESET     KEY28                                                       
          WRITE     RCPDSTA2,KEY28;RCDSUNIQ,RCDSURNO,RCDSVISN,RCDSSFID,RCDSDSTA:
                                   RCDSDAMN,RCDSUDAT,RCDSUTIM,RCDSUWID,RCDSSPAR 
          RETURN
.
DERCDST2  RESET     KEY28                                                       
          DELETE    RCPDSTA2,KEY28                                              
          RETURN
.
RSRCDST3  RESET     KEY21                                                       
          READ      RCPDSTA3,KEY21;;                                            
          RETURN
.
RARCDST3  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDSTA3,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCDST3  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDSTA3,KEY21;RCDSUNIQ,RCDSURNO,RCDSVISN,RCDSSFID,RCDSDSTA:
                                   RCDSDAMN,RCDSUDAT,RCDSUTIM,RCDSUWID,RCDSSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCDST3  MOVE      ZERO,OVRCD                                                  
          READKS    RCPDSTA3;RCDSUNIQ,RCDSURNO,RCDSVISN,RCDSSFID,RCDSDSTA:      
                             RCDSDAMN,RCDSUDAT,RCDSUTIM,RCDSUWID,RCDSSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCDST3  MOVE      ZERO,OVRCD                                                  
          READKP    RCPDSTA3;RCDSUNIQ,RCDSURNO,RCDSVISN,RCDSSFID,RCDSDSTA:      
                             RCDSDAMN,RCDSUDAT,RCDSUTIM,RCDSUWID,RCDSSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCDST3  MOVE      ZERO,OVRCD                                                  
          UPDATE    RCPDSTA3;RCDSUNIQ,RCDSURNO,RCDSVISN,RCDSSFID,RCDSDSTA:      
                             RCDSDAMN,RCDSUDAT,RCDSUTIM,RCDSUWID,RCDSSPAR       
          RETURN
.
WRRCDST3  RESET     KEY21                                                       
          WRITE     RCPDSTA3,KEY21;RCDSUNIQ,RCDSURNO,RCDSVISN,RCDSSFID,RCDSDSTA:
                                   RCDSDAMN,RCDSUDAT,RCDSUTIM,RCDSUWID,RCDSSPAR 
          RETURN
.
DERCDST3  RESET     KEY21                                                       
          DELETE    RCPDSTA3,KEY21                                              
          RETURN
.
