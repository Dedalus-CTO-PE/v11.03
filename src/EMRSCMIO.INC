.
. EMRSCMIO    
. --------
. Filename     : emrscmaf.dat
.
RSEMSCM1  RESET     KEY5                                                        
          READ      EMRSCMA1,KEY5;;                                             
          RETURN
.
RAEMSCM1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      EMRSCMA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMSCM1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      EMRSCMA1,KEY5;EMSCSITE,EMSCLINE,EMSCCMNT,EMSCSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMSCM1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRSCMA1;EMSCSITE,EMSCLINE,EMSCCMNT,EMSCSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMSCM1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRSCMA1;EMSCSITE,EMSCLINE,EMSCCMNT,EMSCSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMSCM1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRSCMA1;EMSCSITE,EMSCLINE,EMSCCMNT,EMSCSPAR                
          RETURN
.
WREMSCM1  RESET     KEY5                                                        
          WRITE     EMRSCMA1,KEY5;EMSCSITE,EMSCLINE,EMSCCMNT,EMSCSPAR           
          RETURN
.
DEEMSCM1  RESET     KEY5                                                        
          DELETE    EMRSCMA1,KEY5                                               
          RETURN
.
