.
. PMSVMTIO    
. --------
. Filename     : pmsvmtaf.dat
.
RSPMVMT1  RESET     KEY41                                                       
          READ      PMSVMTA1,KEY41;;                                            
          RETURN
.
RAPMVMT1  RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READ      PMSVMTA1,KEY41;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMVMT1  RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READ      PMSVMTA1,KEY41;PMVMTNAM,PMVMTIDX,PMVMMVSI,PMVMMCOD,PMVMMDES:
                                   PMVMSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMVMT1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSVMTA1;PMVMTNAM,PMVMTIDX,PMVMMVSI,PMVMMCOD,PMVMMDES:      
                             PMVMSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMVMT1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSVMTA1;PMVMTNAM,PMVMTIDX,PMVMMVSI,PMVMMCOD,PMVMMDES:      
                             PMVMSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMVMT1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSVMTA1;PMVMTNAM,PMVMTIDX,PMVMMVSI,PMVMMCOD,PMVMMDES:      
                             PMVMSPAR                                           
          RETURN
.
WRPMVMT1  RESET     KEY41                                                       
          WRITE     PMSVMTA1,KEY41;PMVMTNAM,PMVMTIDX,PMVMMVSI,PMVMMCOD,PMVMMDES:
                                   PMVMSPAR                                     
          RETURN
.
DEPMVMT1  RESET     KEY41                                                       
          DELETE    PMSVMTA1,KEY41                                              
          RETURN
.
