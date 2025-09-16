.
. RESHECIO    
. --------
. Filename     : reshecaf.dat
.
RSREHC1   RESET     KEY19                                                       
          READ      RESHECA1,KEY19;;                                            
          RETURN
.
RAREHC1   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      RESHECA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDREHC1   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      RESHECA1,KEY19;REHCRDT,REHCRTM,REHCRUN,REHCCNO,REHCCTO:     
                        REHCSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKREHC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESHECA1;REHCRDT,REHCRTM,REHCRUN,REHCCNO,REHCCTO:           
                        REHCSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPREHC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESHECA1;REHCRDT,REHCRTM,REHCRUN,REHCCNO,REHCCTO:           
                        REHCSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPREHC1                                                                         
          UPDATE    RESHECA1;REHCRDT,REHCRTM,REHCRUN,REHCCNO,REHCCTO:           
                        REHCSPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRREHC1   RESET     KEY19                                                       
          WRITE     RESHECA1,KEY19;REHCRDT,REHCRTM,REHCRUN,REHCCNO,REHCCTO:     
                        REHCSPA                                                 
          RETURN
.
DEREHC1   RESET     KEY19                                                       
          DELETE    RESHECA1,KEY19                                              
          RETURN
.
RLREHC1   RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READL     RESHECA1,KEY19;REHCRDT,REHCRTM,REHCRUN,REHCCNO,REHCCTO:     
                        REHCSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLREHC1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESHECA1;REHCRDT,REHCRTM,REHCRUN,REHCCNO,REHCCTO:           
                        REHCSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLREHC1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESHECA1;REHCRDT,REHCRTM,REHCRUN,REHCCNO,REHCCTO:           
                        REHCSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUREHC1   RESET     KEY19                                                       
          UNLOCK    RESHECA1                                                    
          RETURN
.
