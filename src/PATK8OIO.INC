. V10.03.00 23/04/2013  Davin       CAR 284420 - Created ICD10 Ed.8 Operatn FD
.
. PATK8OIO    
. --------
. Filename     : patkco8f.dat
.
RSPT8O1   RESET     KEY24                                                       
          READ      PATK8OA1,KEY24;;                                            
          RETURN
.
RAPT8O1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK8OA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT8O1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK8OA1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT8O1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK8OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT8O1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK8OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT8O1                                                                         
          UPDATE    PATK8OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WRPT8O1   RESET     KEY24                                                       
          WRITE     PATK8OA1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEPT8O1   RESET     KEY24                                                       
          DELETE    PATK8OA1,KEY24                                              
          RETURN
.
RSPT8O2   RESET     KEY24                                                       
          READ      PATK8OA2,KEY24;;                                            
          RETURN
.
RAPT8O2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK8OA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT8O2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK8OA2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT8O2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK8OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT8O2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK8OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT8O2                                                                         
          UPDATE    PATK8OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WRPT8O2   RESET     KEY24                                                       
          WRITE     PATK8OA2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEPT8O2   RESET     KEY24                                                       
          DELETE    PATK8OA2,KEY24                                              
          RETURN
.
