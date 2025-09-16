.
. SCROPNIO    
. --------
. Filename     : scropnaf.dat
.
RSSCOP1   RESET     KEY16                                                       
          READ      SCROPNA1,KEY16;;                                            
          RETURN
.
RASCOP1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      SCROPNA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCOP1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      SCROPNA1,KEY16;SCOPPID,SCOPFIL,SCOPPHY,SCOPMOD,SCOPOPT:     
                        SCOPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCOP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCROPNA1;SCOPPID,SCOPFIL,SCOPPHY,SCOPMOD,SCOPOPT:           
                        SCOPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCOP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCROPNA1;SCOPPID,SCOPFIL,SCOPPHY,SCOPMOD,SCOPOPT:           
                        SCOPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCOP1                                                                         
          UPDATE    SCROPNA1;SCOPPID,SCOPFIL,SCOPPHY,SCOPMOD,SCOPOPT:           
                        SCOPSPA                                                 
          RETURN
.
WRSCOP1   RESET     KEY16                                                       
          WRITE     SCROPNA1,KEY16;SCOPPID,SCOPFIL,SCOPPHY,SCOPMOD,SCOPOPT:     
                        SCOPSPA                                                 
          RETURN
.
DESCOP1   RESET     KEY16                                                       
          DELETE    SCROPNA1,KEY16                                              
          RETURN
.
