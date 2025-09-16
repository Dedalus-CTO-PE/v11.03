. V10.10.00 08/03/2017  Davin       TSK 0833093 - Created ICD10 Ed.10 Opr.KI FD
.
. PATKXOIO    
. --------
. Filename     : patkcoxf.dat
.
RSPTXO1   RESET     KEY24                                                       
          READ      PATKXOA1,KEY24;;                                            
          RETURN
.
RAPTXO1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATKXOA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTXO1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATKXOA1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTXO1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATKXOA1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTXO1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATKXOA1;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTXO1                                                                         
          UPDATE    PATKXOA1;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WRPTXO1   RESET     KEY24                                                       
          WRITE     PATKXOA1,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEPTXO1   RESET     KEY24                                                       
          DELETE    PATKXOA1,KEY24                                              
          RETURN
.
RSPTXO2   RESET     KEY24                                                       
          READ      PATKXOA2,KEY24;;                                            
          RETURN
.
RAPTXO2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATKXOA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTXO2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATKXOA2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTXO2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATKXOA2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTXO2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATKXOA2;PTCOITM,PTCOKWD,PTCOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTXO2                                                                         
          UPDATE    PATKXOA2;PTCOITM,PTCOKWD,PTCOSPA                            
          RETURN
.
WRPTXO2   RESET     KEY24                                                       
          WRITE     PATKXOA2,KEY24;PTCOITM,PTCOKWD,PTCOSPA                      
          RETURN
.
DEPTXO2   RESET     KEY24                                                       
          DELETE    PATKXOA2,KEY24                                              
          RETURN
.
