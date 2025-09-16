. V9.09.001 18/03/2008 Mike Laming  CAR 163918 - Created ICD10 Ed.6 Operatn FD
.
. PATK6OIO    
. --------
. Filename     : patkco6f.dat
.
RSPT6O1   RESET     KEY24                                                       
          READ      PATK6OA1,KEY24;;                                            
          RETURN
.
RAPT6O1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK6OA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT6O1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK6OA1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT6O1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK6OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT6O1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK6OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT6O1                                                                         
          UPDATE    PATK6OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WRPT6O1   RESET     KEY24                                                       
          WRITE     PATK6OA1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEPT6O1   RESET     KEY24                                                       
          DELETE    PATK6OA1,KEY24                                              
          RETURN
.
RSPT6O2   RESET     KEY24                                                       
          READ      PATK6OA2,KEY24;;                                            
          RETURN
.
RAPT6O2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK6OA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT6O2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK6OA2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT6O2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK6OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT6O2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK6OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT6O2                                                                         
          UPDATE    PATK6OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WRPT6O2   RESET     KEY24                                                       
          WRITE     PATK6OA2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEPT6O2   RESET     KEY24                                                       
          DELETE    PATK6OA2,KEY24                                              
          RETURN
.
