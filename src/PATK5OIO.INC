.
. PATK5OIO    
. --------
. Filename     : patkco5f.dat
.
RSPT5O1   RESET     KEY24                                                       
          READ      PATK5OA1,KEY24;;                                            
          RETURN
.
RAPT5O1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK5OA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT5O1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK5OA1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT5O1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK5OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT5O1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK5OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT5O1                                                                         
          UPDATE    PATK5OA1;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WRPT5O1   RESET     KEY24                                                       
          WRITE     PATK5OA1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEPT5O1   RESET     KEY24                                                       
          DELETE    PATK5OA1,KEY24                                              
          RETURN
.
RSPT5O2   RESET     KEY24                                                       
          READ      PATK5OA2,KEY24;;                                            
          RETURN
.
RAPT5O2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK5OA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPT5O2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATK5OA2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPT5O2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATK5OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPT5O2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATK5OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPT5O2                                                                         
          UPDATE    PATK5OA2;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WRPT5O2   RESET     KEY24                                                       
          WRITE     PATK5OA2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEPT5O2   RESET     KEY24                                                       
          DELETE    PATK5OA2,KEY24                                              
          RETURN
.
