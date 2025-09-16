.
. PATK4DIO    
. --------
. Filename     : patkcd4f.dat
.
RSPT4D1   RESET     KEY24                                                       
          READ      PATK4DA1,KEY24;;                                            
          RETURN
.
RAPT4D1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK4DA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT4D1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK4DA1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT4D1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK4DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT4D1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK4DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT4D1                                                                         
          UPDATE    PATK4DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRPT4D1   RESET     KEY24                                                       
          WRITE     PATK4DA1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEPT4D1   RESET     KEY24                                                       
          DELETE    PATK4DA1,KEY24                                              
          RETURN
.
RSPT4D2   RESET     KEY24                                                       
          READ      PATK4DA2,KEY24;;                                            
          RETURN
.
RAPT4D2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK4DA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT4D2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK4DA2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT4D2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK4DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT4D2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK4DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT4D2                                                                         
          UPDATE    PATK4DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRPT4D2   RESET     KEY24                                                       
          WRITE     PATK4DA2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEPT4D2   RESET     KEY24                                                       
          DELETE    PATK4DA2,KEY24                                              
          RETURN
.
