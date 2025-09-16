.
. PATKCDIO    
. --------
. Filename     : patkcd3f.dat
.
RSPT3D1   RESET     KEY24                                                       
          READ      PATK3DA1,KEY24;;                                            
          RETURN
.
RAPT3D1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK3DA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT3D1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK3DA1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT3D1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK3DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT3D1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK3DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT3D1                                                                         
          UPDATE    PATK3DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRPT3D1   RESET     KEY24                                                       
          WRITE     PATK3DA1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEPT3D1   RESET     KEY24                                                       
          DELETE    PATK3DA1,KEY24                                              
          RETURN
.
RSPT3D2   RESET     KEY24                                                       
          READ      PATK3DA2,KEY24;;                                            
          RETURN
.
RAPT3D2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK3DA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT3D2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK3DA2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT3D2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK3DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT3D2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK3DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT3D2                                                                         
          UPDATE    PATK3DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRPT3D2   RESET     KEY24                                                       
          WRITE     PATK3DA2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEPT3D2   RESET     KEY24                                                       
          DELETE    PATK3DA2,KEY24                                              
          RETURN
.
