. V10.06.00 17/04/2015  Davin       CAR 311669 - Created ICD10 Ed.9 Dis.KI FD
. PATK9DIO    
. --------
. Filename     : patkcd9f.dat
.
RSPT9D1   RESET     KEY24                                                       
          READ      PATK9DA1,KEY24;;                                            
          RETURN
.
RAPT9D1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK9DA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT9D1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK9DA1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT9D1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK9DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT9D1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK9DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT9D1                                                                         
          UPDATE    PATK9DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRPT9D1   RESET     KEY24                                                       
          WRITE     PATK9DA1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEPT9D1   RESET     KEY24                                                       
          DELETE    PATK9DA1,KEY24                                              
          RETURN
.
RSPT9D2   RESET     KEY24                                                       
          READ      PATK9DA2,KEY24;;                                            
          RETURN
.
RAPT9D2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK9DA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT9D2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK9DA2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT9D2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK9DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT9D2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK9DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT9D2                                                                         
          UPDATE    PATK9DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRPT9D2   RESET     KEY24                                                       
          WRITE     PATK9DA2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEPT9D2   RESET     KEY24                                                       
          DELETE    PATK9DA2,KEY24                                              
          RETURN
.
