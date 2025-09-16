. V10.00.00 01/04/2010 Mike Laming  CAR 219246 - Created ICD10 Ed.7 Operatn FD
.
. PATK7OIO    
. --------
. Filename     : patkco7f.dat
.
RSPT7O1   RESET     KEY24                                                       
          READ      PATK7OA1,KEY24;;                                            
          RETURN
.
RAPT7O1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK7OA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT7O1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK7OA1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT7O1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK7OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT7O1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK7OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT7O1                                                                         
          UPDATE    PATK7OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WRPT7O1   RESET     KEY24                                                       
          WRITE     PATK7OA1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEPT7O1   RESET     KEY24                                                       
          DELETE    PATK7OA1,KEY24                                              
          RETURN
.
RSPT7O2   RESET     KEY24                                                       
          READ      PATK7OA2,KEY24;;                                            
          RETURN
.
RAPT7O2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK7OA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT7O2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK7OA2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT7O2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK7OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT7O2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK7OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT7O2                                                                         
          UPDATE    PATK7OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WRPT7O2   RESET     KEY24                                                       
          WRITE     PATK7OA2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEPT7O2   RESET     KEY24                                                       
          DELETE    PATK7OA2,KEY24                                              
          RETURN
.
