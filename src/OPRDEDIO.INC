.
. OPRDEDIO    
. --------
. Filename     : oprdedaf.dat
.
RSOPDED1  RESET     KEY16                                                       
          READ      OPRDEDA1,KEY16;;                                            
          RETURN
.
RAOPDED1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      OPRDEDA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPDED1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      OPRDEDA1,KEY16;OPDDUNIQ,OPDDTYPE,OPDDLINE,OPDDDATA,OPDDSPA  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPDED1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OPRDEDA1;OPDDUNIQ,OPDDTYPE,OPDDLINE,OPDDDATA,OPDDSPA        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPDED1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OPRDEDA1;OPDDUNIQ,OPDDTYPE,OPDDLINE,OPDDDATA,OPDDSPA        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPDED1                                                                        
          UPDATE    OPRDEDA1;OPDDUNIQ,OPDDTYPE,OPDDLINE,OPDDDATA,OPDDSPA        
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROPDED1  RESET     KEY16                                                       
          WRITE     OPRDEDA1,KEY16;OPDDUNIQ,OPDDTYPE,OPDDLINE,OPDDDATA,OPDDSPA  
          RETURN
.
DEOPDED1  RESET     KEY16                                                       
          DELETE    OPRDEDA1,KEY16                                              
          RETURN
.
RLOPDED1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     OPRDEDA1,KEY16;OPDDUNIQ,OPDDTYPE,OPDDLINE,OPDDDATA,OPDDSPA  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOPDED1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OPRDEDA1;OPDDUNIQ,OPDDTYPE,OPDDLINE,OPDDDATA,OPDDSPA        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOPDED1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OPRDEDA1;OPDDUNIQ,OPDDTYPE,OPDDLINE,OPDDDATA,OPDDSPA        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOPDED1  RESET     KEY16                                                       
          UNLOCK    OPRDEDA1                                                    
          RETURN
.
