.
. PMSGKIIO    
. --------
. Filename     : pmsgkiaf.dat
.
RSPMGKI1  RESET     KEY33                                                       
          READ      PMSGKIA1,KEY33;;                                            
          RETURN
.
RAPMGKI1  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      PMSGKIA1,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMGKI1  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      PMSGKIA1,KEY33;PMGKCODE,PMGKKKWD,PMGKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMGKI1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSGKIA1;PMGKCODE,PMGKKKWD,PMGKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMGKI1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSGKIA1;PMGKCODE,PMGKKKWD,PMGKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMGKI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSGKIA1;PMGKCODE,PMGKKKWD,PMGKSPAR                         
          RETURN
.
WRPMGKI1  RESET     KEY33                                                       
          WRITE     PMSGKIA1,KEY33;PMGKCODE,PMGKKKWD,PMGKSPAR                   
          RETURN
.
DEPMGKI1  RESET     KEY33                                                       
          DELETE    PMSGKIA1,KEY33                                              
          RETURN
.
RSPMGKI2  RESET     KEY33                                                       
          READ      PMSGKIA2,KEY33;;                                            
          RETURN
.
RAPMGKI2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      PMSGKIA2,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMGKI2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      PMSGKIA2,KEY33;PMGKCODE,PMGKKKWD,PMGKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMGKI2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSGKIA2;PMGKCODE,PMGKKKWD,PMGKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMGKI2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSGKIA2;PMGKCODE,PMGKKKWD,PMGKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMGKI2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSGKIA2;PMGKCODE,PMGKKKWD,PMGKSPAR                         
          RETURN
.
WRPMGKI2  RESET     KEY33                                                       
          WRITE     PMSGKIA2,KEY33;PMGKCODE,PMGKKKWD,PMGKSPAR                   
          RETURN
.
DEPMGKI2  RESET     KEY33                                                       
          DELETE    PMSGKIA2,KEY33                                              
          RETURN
.
