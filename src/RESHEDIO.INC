.
. RESHEDIO    
. --------
. Filename     : reshedaf.dat
.
RSREHD1   RESET     KEY17                                                       
          READ      RESHEDA1,KEY17;;                                            
          RETURN
.
RAREHD1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      RESHEDA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREHD1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      RESHEDA1,KEY17;REHDRDT,REHDRTM,REHDRUN,REHDRCI,REHDSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREHD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESHEDA1;REHDRDT,REHDRTM,REHDRUN,REHDRCI,REHDSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREHD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESHEDA1;REHDRDT,REHDRTM,REHDRUN,REHDRCI,REHDSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREHD1                                                                         
          UPDATE    RESHEDA1;REHDRDT,REHDRTM,REHDRUN,REHDRCI,REHDSPA            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRREHD1   RESET     KEY17                                                       
          WRITE     RESHEDA1,KEY17;REHDRDT,REHDRTM,REHDRUN,REHDRCI,REHDSPA      
          RETURN
.
DEREHD1   RESET     KEY17                                                       
          DELETE    RESHEDA1,KEY17                                              
          RETURN
.
RLREHD1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     RESHEDA1,KEY17;REHDRDT,REHDRTM,REHDRUN,REHDRCI,REHDSPA      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLREHD1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESHEDA1;REHDRDT,REHDRTM,REHDRUN,REHDRCI,REHDSPA            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLREHD1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESHEDA1;REHDRDT,REHDRTM,REHDRUN,REHDRCI,REHDSPA            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUREHD1   RESET     KEY17                                                       
          UNLOCK    RESHEDA1                                                    
          RETURN
.
