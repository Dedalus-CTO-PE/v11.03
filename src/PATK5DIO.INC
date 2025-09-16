.
. PATK5DIO    
. --------
. Filename     : patkcd5f.dat
.
RSPT5D1   RESET     KEY24                                                       
          READ      PATK5DA1,KEY24;;                                            
          RETURN
.
RAPT5D1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK5DA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT5D1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK5DA1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT5D1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK5DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT5D1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK5DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT5D1                                                                         
          UPDATE    PATK5DA1;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRPT5D1   RESET     KEY24                                                       
          WRITE     PATK5DA1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEPT5D1   RESET     KEY24                                                       
          DELETE    PATK5DA1,KEY24                                              
          RETURN
.
RSPT5D2   RESET     KEY24                                                       
          READ      PATK5DA2,KEY24;;                                            
          RETURN
.
RAPT5D2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK5DA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT5D2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK5DA2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT5D2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK5DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT5D2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK5DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT5D2                                                                         
          UPDATE    PATK5DA2;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRPT5D2   RESET     KEY24                                                       
          WRITE     PATK5DA2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEPT5D2   RESET     KEY24                                                       
          DELETE    PATK5DA2,KEY24                                              
          RETURN
.
