.
. RCPSRTIO    
. --------
. Filename     : rcpsrtaf.dat
.
RSRCSRT1  RESET     KEY17                                                       
          READ      RCPSRTA1,KEY17;;                                            
          RETURN
.
RARCSRT1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      RCPSRTA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCSRT1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      RCPSRTA1,KEY17;RCSRRECN,RCSRTCNT,RCSRTDAT,RCSRRECT,RCSRREGI:
                                   RCSRINVN,RCSRVIST,RCSRNAME,RCSRADD1,RCSRADD2:
                                   RCSRADD3,RCSRADD4,RCSRPCOD,RCSRSFLG,RCSRREFR:
                                   RCSRAMNT,RCSRALDT,RCSRCDAT,RCSRCTIM,RCSRCUID:
                                   RCSRUDAT,RCSRUTIM,RCSRUUID,RCSRSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCSRT1  MOVE      ZERO,OVRCD                                                  
          READKS    RCPSRTA1;RCSRRECN,RCSRTCNT,RCSRTDAT,RCSRRECT,RCSRREGI:      
                             RCSRINVN,RCSRVIST,RCSRNAME,RCSRADD1,RCSRADD2:      
                             RCSRADD3,RCSRADD4,RCSRPCOD,RCSRSFLG,RCSRREFR:      
                             RCSRAMNT,RCSRALDT,RCSRCDAT,RCSRCTIM,RCSRCUID:      
                             RCSRUDAT,RCSRUTIM,RCSRUUID,RCSRSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCSRT1  MOVE      ZERO,OVRCD                                                  
          READKP    RCPSRTA1;RCSRRECN,RCSRTCNT,RCSRTDAT,RCSRRECT,RCSRREGI:      
                             RCSRINVN,RCSRVIST,RCSRNAME,RCSRADD1,RCSRADD2:      
                             RCSRADD3,RCSRADD4,RCSRPCOD,RCSRSFLG,RCSRREFR:      
                             RCSRAMNT,RCSRALDT,RCSRCDAT,RCSRCTIM,RCSRCUID:      
                             RCSRUDAT,RCSRUTIM,RCSRUUID,RCSRSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCSRT1  MOVE      ZERO,OVRCD                                                  
          UPDATE    RCPSRTA1;RCSRRECN,RCSRTCNT,RCSRTDAT,RCSRRECT,RCSRREGI:      
                             RCSRINVN,RCSRVIST,RCSRNAME,RCSRADD1,RCSRADD2:      
                             RCSRADD3,RCSRADD4,RCSRPCOD,RCSRSFLG,RCSRREFR:      
                             RCSRAMNT,RCSRALDT,RCSRCDAT,RCSRCTIM,RCSRCUID:      
                             RCSRUDAT,RCSRUTIM,RCSRUUID,RCSRSPAR                
          RETURN
.
WRRCSRT1  RESET     KEY17                                                       
          WRITE     RCPSRTA1,KEY17;RCSRRECN,RCSRTCNT,RCSRTDAT,RCSRRECT,RCSRREGI:
                                   RCSRINVN,RCSRVIST,RCSRNAME,RCSRADD1,RCSRADD2:
                                   RCSRADD3,RCSRADD4,RCSRPCOD,RCSRSFLG,RCSRREFR:
                                   RCSRAMNT,RCSRALDT,RCSRCDAT,RCSRCTIM,RCSRCUID:
                                   RCSRUDAT,RCSRUTIM,RCSRUUID,RCSRSPAR          
          RETURN
.
DERCSRT1  RESET     KEY17                                                       
          DELETE    RCPSRTA1,KEY17                                              
          RETURN
.
RSRCSRT2  RESET     KEY25                                                       
          READ      RCPSRTA2,KEY25;;                                            
          RETURN
.
RARCSRT2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      RCPSRTA2,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCSRT2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      RCPSRTA2,KEY25;RCSRRECN,RCSRTCNT,RCSRTDAT,RCSRRECT,RCSRREGI:
                                   RCSRINVN,RCSRVIST,RCSRNAME,RCSRADD1,RCSRADD2:
                                   RCSRADD3,RCSRADD4,RCSRPCOD,RCSRSFLG,RCSRREFR:
                                   RCSRAMNT,RCSRALDT,RCSRCDAT,RCSRCTIM,RCSRCUID:
                                   RCSRUDAT,RCSRUTIM,RCSRUUID,RCSRSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCSRT2  MOVE      ZERO,OVRCD                                                  
          READKS    RCPSRTA2;RCSRRECN,RCSRTCNT,RCSRTDAT,RCSRRECT,RCSRREGI:      
                             RCSRINVN,RCSRVIST,RCSRNAME,RCSRADD1,RCSRADD2:      
                             RCSRADD3,RCSRADD4,RCSRPCOD,RCSRSFLG,RCSRREFR:      
                             RCSRAMNT,RCSRALDT,RCSRCDAT,RCSRCTIM,RCSRCUID:      
                             RCSRUDAT,RCSRUTIM,RCSRUUID,RCSRSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCSRT2  MOVE      ZERO,OVRCD                                                  
          READKP    RCPSRTA2;RCSRRECN,RCSRTCNT,RCSRTDAT,RCSRRECT,RCSRREGI:      
                             RCSRINVN,RCSRVIST,RCSRNAME,RCSRADD1,RCSRADD2:      
                             RCSRADD3,RCSRADD4,RCSRPCOD,RCSRSFLG,RCSRREFR:      
                             RCSRAMNT,RCSRALDT,RCSRCDAT,RCSRCTIM,RCSRCUID:      
                             RCSRUDAT,RCSRUTIM,RCSRUUID,RCSRSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCSRT2  MOVE      ZERO,OVRCD                                                  
          UPDATE    RCPSRTA2;RCSRRECN,RCSRTCNT,RCSRTDAT,RCSRRECT,RCSRREGI:      
                             RCSRINVN,RCSRVIST,RCSRNAME,RCSRADD1,RCSRADD2:      
                             RCSRADD3,RCSRADD4,RCSRPCOD,RCSRSFLG,RCSRREFR:      
                             RCSRAMNT,RCSRALDT,RCSRCDAT,RCSRCTIM,RCSRCUID:      
                             RCSRUDAT,RCSRUTIM,RCSRUUID,RCSRSPAR                
          RETURN
.
WRRCSRT2  RESET     KEY25                                                       
          WRITE     RCPSRTA2,KEY25;RCSRRECN,RCSRTCNT,RCSRTDAT,RCSRRECT,RCSRREGI:
                                   RCSRINVN,RCSRVIST,RCSRNAME,RCSRADD1,RCSRADD2:
                                   RCSRADD3,RCSRADD4,RCSRPCOD,RCSRSFLG,RCSRREFR:
                                   RCSRAMNT,RCSRALDT,RCSRCDAT,RCSRCTIM,RCSRCUID:
                                   RCSRUDAT,RCSRUTIM,RCSRUUID,RCSRSPAR          
          RETURN
.
DERCSRT2  RESET     KEY25                                                       
          DELETE    RCPSRTA2,KEY25                                              
          RETURN
.
RSRCSRT3  RESET     KEY25                                                       
          READ      RCPSRTA3,KEY25;;                                            
          RETURN
.
RARCSRT3  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      RCPSRTA3,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCSRT3  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      RCPSRTA3,KEY25;RCSRRECN,RCSRTCNT,RCSRTDAT,RCSRRECT,RCSRREGI:
                                   RCSRINVN,RCSRVIST,RCSRNAME,RCSRADD1,RCSRADD2:
                                   RCSRADD3,RCSRADD4,RCSRPCOD,RCSRSFLG,RCSRREFR:
                                   RCSRAMNT,RCSRALDT,RCSRCDAT,RCSRCTIM,RCSRCUID:
                                   RCSRUDAT,RCSRUTIM,RCSRUUID,RCSRSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCSRT3  MOVE      ZERO,OVRCD                                                  
          READKS    RCPSRTA3;RCSRRECN,RCSRTCNT,RCSRTDAT,RCSRRECT,RCSRREGI:      
                             RCSRINVN,RCSRVIST,RCSRNAME,RCSRADD1,RCSRADD2:      
                             RCSRADD3,RCSRADD4,RCSRPCOD,RCSRSFLG,RCSRREFR:      
                             RCSRAMNT,RCSRALDT,RCSRCDAT,RCSRCTIM,RCSRCUID:      
                             RCSRUDAT,RCSRUTIM,RCSRUUID,RCSRSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCSRT3  MOVE      ZERO,OVRCD                                                  
          READKP    RCPSRTA3;RCSRRECN,RCSRTCNT,RCSRTDAT,RCSRRECT,RCSRREGI:      
                             RCSRINVN,RCSRVIST,RCSRNAME,RCSRADD1,RCSRADD2:      
                             RCSRADD3,RCSRADD4,RCSRPCOD,RCSRSFLG,RCSRREFR:      
                             RCSRAMNT,RCSRALDT,RCSRCDAT,RCSRCTIM,RCSRCUID:      
                             RCSRUDAT,RCSRUTIM,RCSRUUID,RCSRSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCSRT3  MOVE      ZERO,OVRCD                                                  
          UPDATE    RCPSRTA3;RCSRRECN,RCSRTCNT,RCSRTDAT,RCSRRECT,RCSRREGI:      
                             RCSRINVN,RCSRVIST,RCSRNAME,RCSRADD1,RCSRADD2:      
                             RCSRADD3,RCSRADD4,RCSRPCOD,RCSRSFLG,RCSRREFR:      
                             RCSRAMNT,RCSRALDT,RCSRCDAT,RCSRCTIM,RCSRCUID:      
                             RCSRUDAT,RCSRUTIM,RCSRUUID,RCSRSPAR                
          RETURN
.
WRRCSRT3  RESET     KEY25                                                       
          WRITE     RCPSRTA3,KEY25;RCSRRECN,RCSRTCNT,RCSRTDAT,RCSRRECT,RCSRREGI:
                                   RCSRINVN,RCSRVIST,RCSRNAME,RCSRADD1,RCSRADD2:
                                   RCSRADD3,RCSRADD4,RCSRPCOD,RCSRSFLG,RCSRREFR:
                                   RCSRAMNT,RCSRALDT,RCSRCDAT,RCSRCTIM,RCSRCUID:
                                   RCSRUDAT,RCSRUTIM,RCSRUUID,RCSRSPAR          
          RETURN
.
DERCSRT3  RESET     KEY25                                                       
          DELETE    RCPSRTA3,KEY25                                              
          RETURN
.
