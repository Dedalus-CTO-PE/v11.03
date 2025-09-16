. V10.14.00 14/03/2019  Don Nguyen  TSK 0869412 - Created ICD10 Ed.11 Opr.KI FD
.
. PTOK11IO    
. --------
. Filename     : patok11f.dat
.
RSOK11A1  RESET     KEY24                                                       
          READ      PTOK11A1,KEY24;;                                            
          RETURN
.
RAOK11A1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PTOK11A1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOK11A1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PTOK11A1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOK11A1  MOVE      ZERO,OVRCD
          READKS    PTOK11A1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOK11A1  MOVE      ZERO,OVRCD
          READKP    PTOK11A1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOK11A1  UPDATE    PTOK11A1;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WROK11A1  RESET     KEY24                                                       
          WRITE     PTOK11A1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEOK11A1  RESET     KEY24                                                       
          DELETE    PTOK11A1,KEY24                                              
          RETURN
.
RSOK11A2  RESET     KEY24                                                       
          READ      PTOK11A2,KEY24;;                                            
          RETURN
.
RAOK11A2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PTOK11A2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOK11A2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PTOK11A2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOK11A2  MOVE      ZERO,OVRCD
          READKS    PTOK11A2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOK11A2  MOVE      ZERO,OVRCD
          READKP    PTOK11A2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOK11A2  UPDATE    PTOK11A2;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WROK11A2  RESET     KEY24                                                       
          WRITE     PTOK11A2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEOK11A2  RESET     KEY24                                                       
          DELETE    PTOK11A2,KEY24                                              
          RETURN
.
