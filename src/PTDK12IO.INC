. V11.02.00 25/03/2022  Davin       TSK 0917793 - Created ICD10 Ed.12 Dis.KI FD
.
. PTDK12IO    
. --------
. Filename     : patdk12f.dat
.
RSDK12A1  RESET     KEY24                                                       
          READ      PTDK12A1,KEY24;;                                            
          RETURN
.
RADK12A1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PTDK12A1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDK12A1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PTDK12A1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDK12A1  MOVE      ZERO,OVRCD
          READKS    PTDK12A1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDK12A1  MOVE      ZERO,OVRCD
          READKP    PTDK12A1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDK12A1  UPDATE    PTDK12A1;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRDK12A1  RESET     KEY24                                                       
          WRITE     PTDK12A1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEDK12A1  RESET     KEY24                                                       
          DELETE    PTDK12A1,KEY24                                              
          RETURN
.
RSDK12A2  RESET     KEY24                                                       
          READ      PTDK12A2,KEY24;;                                            
          RETURN
.
RADK12A2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PTDK12A2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDK12A2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PTDK12A2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDK12A2  MOVE      ZERO,OVRCD
          READKS    PTDK12A2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDK12A2  MOVE      ZERO,OVRCD
          READKP    PTDK12A2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDK12A2  UPDATE    PTDK12A2;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRDK12A2  RESET     KEY24                                                       
          WRITE     PTDK12A2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEDK12A2  RESET     KEY24                                                       
          DELETE    PTDK12A2,KEY24                                              
          RETURN
.
