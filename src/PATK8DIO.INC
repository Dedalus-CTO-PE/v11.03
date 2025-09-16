. V10.03.00 23/04/2013  Davin       CAR 284420 - Created ICD10 Ed.8 Dis.KI FD
. PATK8DIO    
. --------
. Filename     : patkcd8f.dat
.
RSPT8D1   RESET     KEY24                                                       
          READ      PATK8DA1,KEY24;;                                            
          RETURN
.
RAPT8D1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK8DA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT8D1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK8DA1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT8D1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK8DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT8D1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK8DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT8D1                                                                         
          UPDATE    PATK8DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRPT8D1   RESET     KEY24                                                       
          WRITE     PATK8DA1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEPT8D1   RESET     KEY24                                                       
          DELETE    PATK8DA1,KEY24                                              
          RETURN
.
RSPT8D2   RESET     KEY24                                                       
          READ      PATK8DA2,KEY24;;                                            
          RETURN
.
RAPT8D2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK8DA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT8D2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK8DA2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT8D2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK8DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT8D2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK8DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT8D2                                                                         
          UPDATE    PATK8DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRPT8D2   RESET     KEY24                                                       
          WRITE     PATK8DA2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEPT8D2   RESET     KEY24                                                       
          DELETE    PATK8DA2,KEY24                                              
          RETURN
.
