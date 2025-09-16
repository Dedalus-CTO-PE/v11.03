. V10.00.00 01/04/2010 Mike Laming  CAR 219246 - Created ICD10 Ed.7 Disease FD.
. PATK7DIO    
. --------
. Filename     : patkcd7f.dat
.
RSPT7D1   RESET     KEY24                                                       
          READ      PATK7DA1,KEY24;;                                            
          RETURN
.
RAPT7D1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK7DA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT7D1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK7DA1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT7D1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK7DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT7D1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK7DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT7D1                                                                         
          UPDATE    PATK7DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRPT7D1   RESET     KEY24                                                       
          WRITE     PATK7DA1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEPT7D1   RESET     KEY24                                                       
          DELETE    PATK7DA1,KEY24                                              
          RETURN
.
RSPT7D2   RESET     KEY24                                                       
          READ      PATK7DA2,KEY24;;                                            
          RETURN
.
RAPT7D2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK7DA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT7D2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK7DA2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT7D2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK7DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT7D2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK7DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT7D2                                                                         
          UPDATE    PATK7DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRPT7D2   RESET     KEY24                                                       
          WRITE     PATK7DA2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEPT7D2   RESET     KEY24                                                       
          DELETE    PATK7DA2,KEY24                                              
          RETURN
.
