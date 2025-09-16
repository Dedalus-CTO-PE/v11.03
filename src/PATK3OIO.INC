.
. PATKCOIO    
. --------
. Filename     : patkco3f.dat
.
RSPT3O1   RESET     KEY24                                                       
          READ      PATK3OA1,KEY24;;                                            
          RETURN
.
RAPT3O1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK3OA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT3O1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK3OA1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT3O1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK3OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT3O1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK3OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT3O1                                                                         
          UPDATE    PATK3OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WRPT3O1   RESET     KEY24                                                       
          WRITE     PATK3OA1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEPT3O1   RESET     KEY24                                                       
          DELETE    PATK3OA1,KEY24                                              
          RETURN
.
RSPT3O2   RESET     KEY24                                                       
          READ      PATK3OA2,KEY24;;                                            
          RETURN
.
RAPT3O2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK3OA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT3O2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK3OA2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT3O2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK3OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT3O2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK3OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT3O2                                                                         
          UPDATE    PATK3OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WRPT3O2   RESET     KEY24                                                       
          WRITE     PATK3OA2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEPT3O2   RESET     KEY24                                                       
          DELETE    PATK3OA2,KEY24                                              
          RETURN
.
