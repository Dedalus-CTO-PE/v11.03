. V9.09.001 18/03/2008 Mike Laming  CAR 163918 - Created ICD10 Ed.6 Disease FD.
. PATK6DIO    
. --------
. Filename     : patkcd6f.dat
.
RSPT6D1   RESET     KEY24                                                       
          READ      PATK6DA1,KEY24;;                                            
          RETURN
.
RAPT6D1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK6DA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT6D1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK6DA1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT6D1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK6DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT6D1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK6DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT6D1                                                                         
          UPDATE    PATK6DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRPT6D1   RESET     KEY24                                                       
          WRITE     PATK6DA1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEPT6D1   RESET     KEY24                                                       
          DELETE    PATK6DA1,KEY24                                              
          RETURN
.
RSPT6D2   RESET     KEY24                                                       
          READ      PATK6DA2,KEY24;;                                            
          RETURN
.
RAPT6D2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK6DA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT6D2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK6DA2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT6D2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK6DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT6D2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK6DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT6D2                                                                         
          UPDATE    PATK6DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRPT6D2   RESET     KEY24                                                       
          WRITE     PATK6DA2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEPT6D2   RESET     KEY24                                                       
          DELETE    PATK6DA2,KEY24                                              
          RETURN
.
