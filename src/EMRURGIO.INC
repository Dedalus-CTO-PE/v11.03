.
. EMRURGIO    
. --------
. Filename     : emrurgaf.dat
.
RSEMURG1  RESET     KEY47                                                       
          READ      EMRURGA1,KEY47;;                                            
          RETURN
.
RAEMURG1  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      EMRURGA1,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMURG1  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      EMRURGA1,KEY47;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:
                                   EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:
                                   EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMURG1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRURGA1;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:      
                             EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:      
                             EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMURG1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRURGA1;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:      
                             EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:      
                             EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMURG1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRURGA1;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:      
                             EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:      
                             EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR                
          RETURN
.
WREMURG1  RESET     KEY47                                                       
          WRITE     EMRURGA1,KEY47;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:
                                   EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:
                                   EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR          
          RETURN
.
DEEMURG1  RESET     KEY47                                                       
          DELETE    EMRURGA1,KEY47                                              
          RETURN
.
RSEMURG2  RESET     KEY47                                                       
          READ      EMRURGA2,KEY47;;                                            
          RETURN
.
RAEMURG2  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      EMRURGA2,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMURG2  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      EMRURGA2,KEY47;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:
                                   EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:
                                   EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMURG2  MOVE      ZERO,OVRCD                                                  
          READKS    EMRURGA2;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:      
                             EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:      
                             EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMURG2  MOVE      ZERO,OVRCD                                                  
          READKP    EMRURGA2;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:      
                             EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:      
                             EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMURG2  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRURGA2;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:      
                             EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:      
                             EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR                
          RETURN
.
WREMURG2  RESET     KEY47                                                       
          WRITE     EMRURGA2,KEY47;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:
                                   EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:
                                   EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR          
          RETURN
.
DEEMURG2  RESET     KEY47                                                       
          DELETE    EMRURGA2,KEY47                                              
          RETURN
.
RSEMURG3  RESET     KEY47                                                       
          READ      EMRURGA3,KEY47;;                                            
          RETURN
.
RAEMURG3  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      EMRURGA3,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMURG3  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      EMRURGA3,KEY47;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:
                                   EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:
                                   EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMURG3  MOVE      ZERO,OVRCD                                                  
          READKS    EMRURGA3;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:      
                             EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:      
                             EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMURG3  MOVE      ZERO,OVRCD                                                  
          READKP    EMRURGA3;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:      
                             EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:      
                             EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMURG3  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRURGA3;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:      
                             EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:      
                             EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR                
          RETURN
.
WREMURG3  RESET     KEY47                                                       
          WRITE     EMRURGA3,KEY47;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:
                                   EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:
                                   EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR          
          RETURN
.
DEEMURG3  RESET     KEY47                                                       
          DELETE    EMRURGA3,KEY47                                              
          RETURN
.
RSEMURG4  RESET     KEY47                                                       
          READ      EMRURGA4,KEY47;;                                            
          RETURN
.
RAEMURG4  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      EMRURGA4,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMURG4  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      EMRURGA4,KEY47;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:
                                   EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:
                                   EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMURG4  MOVE      ZERO,OVRCD                                                  
          READKS    EMRURGA4;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:      
                             EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:      
                             EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMURG4  MOVE      ZERO,OVRCD                                                  
          READKP    EMRURGA4;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:      
                             EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:      
                             EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMURG4  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRURGA4;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:      
                             EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:      
                             EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR                
          RETURN
.
WREMURG4  RESET     KEY47                                                       
          WRITE     EMRURGA4,KEY47;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:
                                   EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:
                                   EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR          
          RETURN
.
DEEMURG4  RESET     KEY47                                                       
          DELETE    EMRURGA4,KEY47                                              
          RETURN
.
RSEMURG5  RESET     KEY47                                                       
          READ      EMRURGA5,KEY47;;                                            
          RETURN
.
RAEMURG5  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      EMRURGA5,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMURG5  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      EMRURGA5,KEY47;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:
                                   EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:
                                   EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMURG5  MOVE      ZERO,OVRCD                                                  
          READKS    EMRURGA5;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:      
                             EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:      
                             EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMURG5  MOVE      ZERO,OVRCD                                                  
          READKP    EMRURGA5;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:      
                             EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:      
                             EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMURG5  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRURGA5;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:      
                             EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:      
                             EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR                
          RETURN
.
WREMURG5  RESET     KEY47                                                       
          WRITE     EMRURGA5,KEY47;EMUREDAT,EMURESTA,EMURTRIA,EMURVTYP,EMURMDBC:
                                   EMURURGV,EMURURGD,EMURCDAT,EMURCTIM,EMURCUID:
                                   EMURUDAT,EMURUTIM,EMURUUID,EMURSPAR          
          RETURN
.
DEEMURG5  RESET     KEY47                                                       
          DELETE    EMRURGA5,KEY47                                              
          RETURN
.
