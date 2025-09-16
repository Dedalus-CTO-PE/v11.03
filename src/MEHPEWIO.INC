.
. MEHPEWIO    
. --------
. Filename     : mehpewaf.dat
.
RSMHPEW1  RESET     KEY12                                                       
          READ      MEHPEWA1,KEY12;;                                            
          RETURN
.
RAMHPEW1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPEWA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHPEW1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPEWA1,KEY12;MHPWUNIQ,MHPWXCNT,MHPWTYPE,MHPWERCD,MHPWSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHPEW1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MEHPEWA1;MHPWUNIQ,MHPWXCNT,MHPWTYPE,MHPWERCD,MHPWSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHPEW1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MEHPEWA1;MHPWUNIQ,MHPWXCNT,MHPWTYPE,MHPWERCD,MHPWSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHPEW1                                                                        
          UPDATE    MEHPEWA1;MHPWUNIQ,MHPWXCNT,MHPWTYPE,MHPWERCD,MHPWSPAR       
          RETURN
.
WRMHPEW1  RESET     KEY12                                                       
          WRITE     MEHPEWA1,KEY12;MHPWUNIQ,MHPWXCNT,MHPWTYPE,MHPWERCD,MHPWSPAR 
          RETURN
.
DEMHPEW1  RESET     KEY12                                                       
          DELETE    MEHPEWA1,KEY12                                              
          RETURN
.
