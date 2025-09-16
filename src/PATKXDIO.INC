. V10.10.00 08/03/2017  Davin       TSK 0833093 - Created ICD10 Ed.10 Dis.KI FD
. PATKXDIO    
. --------
. Filename     : patkcdxf.dat
.
RSPTXD1   RESET     KEY24                                                       
          READ      PATKXDA1,KEY24;;                                            
          RETURN
.
RAPTXD1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATKXDA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTXD1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATKXDA1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTXD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATKXDA1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTXD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATKXDA1;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTXD1                                                                         
          UPDATE    PATKXDA1;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRPTXD1   RESET     KEY24                                                       
          WRITE     PATKXDA1,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEPTXD1   RESET     KEY24                                                       
          DELETE    PATKXDA1,KEY24                                              
          RETURN
.
RSPTXD2   RESET     KEY24                                                       
          READ      PATKXDA2,KEY24;;                                            
          RETURN
.
RAPTXD2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATKXDA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTXD2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATKXDA2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTXD2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATKXDA2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTXD2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATKXDA2;PTCDITM,PTCDKWD,PTCDSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTXD2                                                                         
          UPDATE    PATKXDA2;PTCDITM,PTCDKWD,PTCDSPA                            
          RETURN
.
WRPTXD2   RESET     KEY24                                                       
          WRITE     PATKXDA2,KEY24;PTCDITM,PTCDKWD,PTCDSPA                      
          RETURN
.
DEPTXD2   RESET     KEY24                                                       
          DELETE    PATKXDA2,KEY24                                              
          RETURN
.
