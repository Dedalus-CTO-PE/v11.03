. V11.02.00 25/03/2022  Davin       TSK 0917793 - Created ICD10 Ed.12 Opr.KI FD
.
. PTOK12IO    
. --------
. Filename     : patok12f.dat
.
RSOK12A1  RESET     KEY24                                                       
          READ      PTOK12A1,KEY24;;                                            
          RETURN
.
RAOK12A1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PTOK12A1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOK12A1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PTOK12A1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOK12A1  MOVE      ZERO,OVRCD
          READKS    PTOK12A1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOK12A1  MOVE      ZERO,OVRCD
          READKP    PTOK12A1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOK12A1  UPDATE    PTOK12A1;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WROK12A1  RESET     KEY24                                                       
          WRITE     PTOK12A1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEOK12A1  RESET     KEY24                                                       
          DELETE    PTOK12A1,KEY24                                              
          RETURN
.
RSOK12A2  RESET     KEY24                                                       
          READ      PTOK12A2,KEY24;;                                            
          RETURN
.
RAOK12A2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PTOK12A2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOK12A2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PTOK12A2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOK12A2  MOVE      ZERO,OVRCD
          READKS    PTOK12A2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOK12A2  MOVE      ZERO,OVRCD
          READKP    PTOK12A2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOK12A2  UPDATE    PTOK12A2;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WROK12A2  RESET     KEY24                                                       
          WRITE     PTOK12A2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEOK12A2  RESET     KEY24                                                       
          DELETE    PTOK12A2,KEY24                                              
          RETURN
.
