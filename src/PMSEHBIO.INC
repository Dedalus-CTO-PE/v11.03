.
. PMSEHBIO    
. --------
. Filename     : pmsehbaf.dat
.
RSPMEHB1  RESET     KEY20                                                       
          READ      PMSEHBA1,KEY20;;                                            
          RETURN
.
RAPMEHB1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEHBA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEHB1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEHBA1,KEY20;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:
                                   PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:
                                   PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:
                                   PMHBWEBU,PMHBSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEHB1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSEHBA1;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEHB1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSEHBA1;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEHB1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSEHBA1;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          RETURN
.
WRPMEHB1  RESET     KEY20                                                       
          WRITE     PMSEHBA1,KEY20;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:
                                   PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:
                                   PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:
                                   PMHBWEBU,PMHBSPAR                            
          RETURN
.
DEPMEHB1  RESET     KEY20                                                       
          DELETE    PMSEHBA1,KEY20                                              
          RETURN
.
RSPMEHB2  RESET     KEY32                                                       
          READ      PMSEHBA2,KEY32;;                                            
          RETURN
.
RAPMEHB2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEHBA2,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEHB2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEHBA2,KEY32;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:
                                   PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:
                                   PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:
                                   PMHBWEBU,PMHBSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEHB2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSEHBA2;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEHB2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSEHBA2;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEHB2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSEHBA2;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          RETURN
.
WRPMEHB2  RESET     KEY32                                                       
          WRITE     PMSEHBA2,KEY32;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:
                                   PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:
                                   PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:
                                   PMHBWEBU,PMHBSPAR                            
          RETURN
.
DEPMEHB2  RESET     KEY32                                                       
          DELETE    PMSEHBA2,KEY32                                              
          RETURN
.
RSPMEHB3  RESET     KEY37                                                       
          READ      PMSEHBA3,KEY37;;                                            
          RETURN
.
RAPMEHB3  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEHBA3,KEY37;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEHB3  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEHBA3,KEY37;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:
                                   PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:
                                   PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:
                                   PMHBWEBU,PMHBSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEHB3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSEHBA3;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEHB3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSEHBA3;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEHB3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSEHBA3;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          RETURN
.
WRPMEHB3  RESET     KEY37                                                       
          WRITE     PMSEHBA3,KEY37;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:
                                   PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:
                                   PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:
                                   PMHBWEBU,PMHBSPAR                            
          RETURN
.
DEPMEHB3  RESET     KEY37                                                       
          DELETE    PMSEHBA3,KEY37                                              
          RETURN
.
RSPMEHB4  RESET     KEY32                                                       
          READ      PMSEHBA4,KEY32;;                                            
          RETURN
.
RAPMEHB4  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEHBA4,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEHB4  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEHBA4,KEY32;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:
                                   PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:
                                   PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:
                                   PMHBWEBU,PMHBSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEHB4  MOVE      ZERO,OVRCD                                                  
          READKS    PMSEHBA4;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEHB4  MOVE      ZERO,OVRCD                                                  
          READKP    PMSEHBA4;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEHB4  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSEHBA4;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          RETURN
.
WRPMEHB4  RESET     KEY32                                                       
          WRITE     PMSEHBA4,KEY32;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:
                                   PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:
                                   PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:
                                   PMHBWEBU,PMHBSPAR                            
          RETURN
.
DEPMEHB4  RESET     KEY32                                                       
          DELETE    PMSEHBA4,KEY32                                              
          RETURN
.
RSPMEHB5  RESET     KEY28                                                       
          READ      PMSEHBA5,KEY28;;                                            
          RETURN
.
RAPMEHB5  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEHBA5,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEHB5  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEHBA5,KEY28;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:
                                   PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:
                                   PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:
                                   PMHBWEBU,PMHBSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEHB5  MOVE      ZERO,OVRCD                                                  
          READKS    PMSEHBA5;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEHB5  MOVE      ZERO,OVRCD                                                  
          READKP    PMSEHBA5;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEHB5  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSEHBA5;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          RETURN
.
WRPMEHB5  RESET     KEY28                                                       
          WRITE     PMSEHBA5,KEY28;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:
                                   PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:
                                   PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:
                                   PMHBWEBU,PMHBSPAR                            
          RETURN
.
DEPMEHB5  RESET     KEY28                                                       
          DELETE    PMSEHBA5,KEY28                                              
          RETURN
.
RSPMEHB6  RESET     KEY40                                                       
          READ      PMSEHBA6,KEY40;;                                            
          RETURN
.
RAPMEHB6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEHBA6,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEHB6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEHBA6,KEY40;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:
                                   PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:
                                   PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:
                                   PMHBWEBU,PMHBSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEHB6  MOVE      ZERO,OVRCD                                                  
          READKS    PMSEHBA6;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEHB6  MOVE      ZERO,OVRCD                                                  
          READKP    PMSEHBA6;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEHB6  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSEHBA6;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          RETURN
.
WRPMEHB6  RESET     KEY40                                                       
          WRITE     PMSEHBA6,KEY40;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:
                                   PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:
                                   PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:
                                   PMHBWEBU,PMHBSPAR                            
          RETURN
.
DEPMEHB6  RESET     KEY40                                                       
          DELETE    PMSEHBA6,KEY40                                              
          RETURN
.
RSPMEHB7  RESET     KEY32                                                       
          READ      PMSEHBA7,KEY32;;                                            
          RETURN
.
RAPMEHB7  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEHBA7,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEHB7  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEHBA7,KEY32;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:
                                   PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:
                                   PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:
                                   PMHBWEBU,PMHBSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEHB7  MOVE      ZERO,OVRCD                                                  
          READKS    PMSEHBA7;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEHB7  MOVE      ZERO,OVRCD                                                  
          READKP    PMSEHBA7;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEHB7  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSEHBA7;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:      
                             PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:      
                             PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:      
                             PMHBWEBU,PMHBSPAR                                  
          RETURN
.
WRPMEHB7  RESET     KEY32                                                       
          WRITE     PMSEHBA7,KEY32;PMHBUNIQ,PMHBDATE,PMHBTIME,PMHBSTAT,PMHBADAT:
                                   PMHBURNO,PMHBVISN,PMHBHOSP,PMHBUDAT,PMHBBTYP:
                                   PMHBAVMO,PMHBEAID,PMHBLDDT,PMHBLDTY,PMHBUTIM:
                                   PMHBWEBU,PMHBSPAR                            
          RETURN
.
DEPMEHB7  RESET     KEY32                                                       
          DELETE    PMSEHBA7,KEY32                                              
          RETURN
.
