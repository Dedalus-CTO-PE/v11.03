.
. SCRPRGIO    
. --------
. Filename     : scrprgaf.dat
.
RSSCPR1   RESET     KEY8                                                        
          READ      SCRPRGA1,KEY8;;                                             
          RETURN
.
RASCPR1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      SCRPRGA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCPR1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      SCRPRGA1,KEY8;SCPRPID,SCPRNAM,SCPRNAT,SCPRCBF,SCPRCAF:      
                        SCPRISC,SCPRSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCPR1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRPRGA1;SCPRPID,SCPRNAM,SCPRNAT,SCPRCBF,SCPRCAF:           
                        SCPRISC,SCPRSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCPR1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRPRGA1;SCPRPID,SCPRNAM,SCPRNAT,SCPRCBF,SCPRCAF:           
                        SCPRISC,SCPRSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCPR1                                                                         
          UPDATE    SCRPRGA1;SCPRPID,SCPRNAM,SCPRNAT,SCPRCBF,SCPRCAF:           
                        SCPRISC,SCPRSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSCPR1   RESET     KEY8                                                        
          WRITE     SCRPRGA1,KEY8;SCPRPID,SCPRNAM,SCPRNAT,SCPRCBF,SCPRCAF:      
                        SCPRISC,SCPRSPA                                         
          RETURN
.
DESCPR1   RESET     KEY8                                                        
          DELETE    SCRPRGA1,KEY8                                               
          RETURN
.
RLSCPR1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     SCRPRGA1,KEY8;SCPRPID,SCPRNAM,SCPRNAT,SCPRCBF,SCPRCAF:      
                        SCPRISC,SCPRSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSCPR1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SCRPRGA1;SCPRPID,SCPRNAM,SCPRNAT,SCPRCBF,SCPRCAF:           
                        SCPRISC,SCPRSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSCPR1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SCRPRGA1;SCPRPID,SCPRNAM,SCPRNAT,SCPRCBF,SCPRCAF:           
                        SCPRISC,SCPRSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSCPR1   RESET     KEY8                                                        
          UNLOCK    SCRPRGA1                                                    
          RETURN
.
