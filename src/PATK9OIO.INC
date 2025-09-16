. V10.06.00 17/04/2015  Davin       CAR 311669 - Created ICD10 Ed.9 Operatn FD
.
. PATK9OIO    
. --------
. Filename     : patkco9f.dat
.
RSPT9O1   RESET     KEY24                                                       
          READ      PATK9OA1,KEY24;;                                            
          RETURN
.
RAPT9O1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK9OA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT9O1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK9OA1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT9O1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK9OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT9O1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK9OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT9O1                                                                         
          UPDATE    PATK9OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WRPT9O1   RESET     KEY24                                                       
          WRITE     PATK9OA1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEPT9O1   RESET     KEY24                                                       
          DELETE    PATK9OA1,KEY24                                              
          RETURN
.
RSPT9O2   RESET     KEY24                                                       
          READ      PATK9OA2,KEY24;;                                            
          RETURN
.
RAPT9O2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK9OA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT9O2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK9OA2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT9O2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK9OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT9O2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK9OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT9O2                                                                         
          UPDATE    PATK9OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WRPT9O2   RESET     KEY24                                                       
          WRITE     PATK9OA2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEPT9O2   RESET     KEY24                                                       
          DELETE    PATK9OA2,KEY24                                              
          RETURN
.
