.
. CCSTIMIO    
. --------
. Filename     : ccstimaf.dat
.
RSCCTM1   RESET     KEY9                                                        
          READ      CCSTIMA1,KEY9;;                                             
          RETURN
.
RACCTM1   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      CCSTIMA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCTM1   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      CCSTIMA1,KEY9;CCTMDEF,CCTMDAT,CCTMDES,CCTMLV2,CCTMLV3:      
                        CCTMLV4,CCTMSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCTM1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSTIMA1;CCTMDEF,CCTMDAT,CCTMDES,CCTMLV2,CCTMLV3:           
                        CCTMLV4,CCTMSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCTM1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSTIMA1;CCTMDEF,CCTMDAT,CCTMDES,CCTMLV2,CCTMLV3:           
                        CCTMLV4,CCTMSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCTM1                                                                         
          UPDATE    CCSTIMA1;CCTMDEF,CCTMDAT,CCTMDES,CCTMLV2,CCTMLV3:           
                        CCTMLV4,CCTMSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCCTM1   RESET     KEY9                                                        
          WRITE     CCSTIMA1,KEY9;CCTMDEF,CCTMDAT,CCTMDES,CCTMLV2,CCTMLV3:      
                        CCTMLV4,CCTMSPA                                         
          RETURN
.
DECCTM1   RESET     KEY9                                                        
          DELETE    CCSTIMA1,KEY9                                               
          RETURN
.
RLCCTM1   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READL     CCSTIMA1,KEY9;CCTMDEF,CCTMDAT,CCTMDES,CCTMLV2,CCTMLV3:      
                        CCTMLV4,CCTMSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCCTM1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CCSTIMA1;CCTMDEF,CCTMDAT,CCTMDES,CCTMLV2,CCTMLV3:           
                        CCTMLV4,CCTMSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCCTM1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CCSTIMA1;CCTMDEF,CCTMDAT,CCTMDES,CCTMLV2,CCTMLV3:           
                        CCTMLV4,CCTMSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCCTM1   RESET     KEY9                                                        
          UNLOCK    CCSTIMA1                                                    
          RETURN
.
