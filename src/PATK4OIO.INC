.
. PATK4OIO    
. --------
. Filename     : patkco3f.dat
.
RSPT4O1   RESET     KEY24                                                       
          READ      PATK4OA1,KEY24;;                                            
          RETURN
.
RAPT4O1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK4OA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT4O1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK4OA1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT4O1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK4OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT4O1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK4OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT4O1                                                                         
          UPDATE    PATK4OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WRPT4O1   RESET     KEY24                                                       
          WRITE     PATK4OA1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEPT4O1   RESET     KEY24                                                       
          DELETE    PATK4OA1,KEY24                                              
          RETURN
.
RSPT4O2   RESET     KEY24                                                       
          READ      PATK4OA2,KEY24;;                                            
          RETURN
.
RAPT4O2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK4OA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT4O2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK4OA2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT4O2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK4OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT4O2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK4OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT4O2                                                                         
          UPDATE    PATK4OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WRPT4O2   RESET     KEY24                                                       
          WRITE     PATK4OA2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEPT4O2   RESET     KEY24                                                       
          DELETE    PATK4OA2,KEY24                                              
          RETURN
.
