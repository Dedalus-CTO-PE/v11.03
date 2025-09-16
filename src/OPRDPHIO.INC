.
. OPRDPHIO    
. --------
. Filename     : oprdphaf.dat
.
RSOPDPH1  RESET     KEY18                                                       
          READ      OPRDPHA1,KEY18;;                                            
          RETURN
.
RAOPDPH1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      OPRDPHA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPDPH1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      OPRDPHA1,KEY18;OPDHCODE,OPDHPREF,OPDHDESC,OPDHHOSP,OPDHSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPDPH1  MOVE      ZERO,OVRCD                                                  
          READKS    OPRDPHA1;OPDHCODE,OPDHPREF,OPDHDESC,OPDHHOSP,OPDHSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPDPH1  MOVE      ZERO,OVRCD                                                  
          READKP    OPRDPHA1;OPDHCODE,OPDHPREF,OPDHDESC,OPDHHOSP,OPDHSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPDPH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRDPHA1;OPDHCODE,OPDHPREF,OPDHDESC,OPDHHOSP,OPDHSPAR       
          RETURN
.
WROPDPH1  RESET     KEY18                                                       
          WRITE     OPRDPHA1,KEY18;OPDHCODE,OPDHPREF,OPDHDESC,OPDHHOSP,OPDHSPAR 
          RETURN
.
DEOPDPH1  RESET     KEY18                                                       
          DELETE    OPRDPHA1,KEY18                                              
          RETURN
.
RSOPDPH2  RESET     KEY68                                                       
          READ      OPRDPHA2,KEY68;;                                            
          RETURN
.
RAOPDPH2  RESET     KEY68                                                       
          MOVE      ZERO,OVRCD
          READ      OPRDPHA2,KEY68;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPDPH2  RESET     KEY68                                                       
          MOVE      ZERO,OVRCD
          READ      OPRDPHA2,KEY68;OPDHCODE,OPDHPREF,OPDHDESC,OPDHHOSP,OPDHSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPDPH2  MOVE      ZERO,OVRCD                                                  
          READKS    OPRDPHA2;OPDHCODE,OPDHPREF,OPDHDESC,OPDHHOSP,OPDHSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPDPH2  MOVE      ZERO,OVRCD                                                  
          READKP    OPRDPHA2;OPDHCODE,OPDHPREF,OPDHDESC,OPDHHOSP,OPDHSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPDPH2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRDPHA2;OPDHCODE,OPDHPREF,OPDHDESC,OPDHHOSP,OPDHSPAR       
          RETURN
.
WROPDPH2  RESET     KEY68                                                       
          WRITE     OPRDPHA2,KEY68;OPDHCODE,OPDHPREF,OPDHDESC,OPDHHOSP,OPDHSPAR 
          RETURN
.
DEOPDPH2  RESET     KEY68                                                       
          DELETE    OPRDPHA2,KEY68                                              
          RETURN
.
