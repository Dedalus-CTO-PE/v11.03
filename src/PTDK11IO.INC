. V10.14.00 14/03/2019  Don Nguyen  TSK 0869412 - Created ICD10 Ed.11 Dis.KI FD
.
. PTDK11IO    
. --------
. Filename     : patdk11f.dat
.
RSDK11A1  RESET     KEY24                                                       
          READ      PTDK11A1,KEY24;;                                            
          RETURN
.
RADK11A1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PTDK11A1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDK11A1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PTDK11A1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDK11A1  MOVE      ZERO,OVRCD
          READKS    PTDK11A1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDK11A1  MOVE      ZERO,OVRCD
          READKP    PTDK11A1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDK11A1  UPDATE    PTDK11A1;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRDK11A1  RESET     KEY24                                                       
          WRITE     PTDK11A1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEDK11A1  RESET     KEY24                                                       
          DELETE    PTDK11A1,KEY24                                              
          RETURN
.
RSDK11A2  RESET     KEY24                                                       
          READ      PTDK11A2,KEY24;;                                            
          RETURN
.
RADK11A2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PTDK11A2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDK11A2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PTDK11A2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDK11A2  MOVE      ZERO,OVRCD
          READKS    PTDK11A2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDK11A2  MOVE      ZERO,OVRCD
          READKP    PTDK11A2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDK11A2  UPDATE    PTDK11A2;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRDK11A2  RESET     KEY24                                                       
          WRITE     PTDK11A2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEDK11A2  RESET     KEY24                                                       
          DELETE    PTDK11A2,KEY24                                              
          RETURN
.
