.
. CCSBULIO    
. --------
. Filename     : ccsbulaf.dat
.
RSCCBU1   RESET     KEY3                                                        
          READ      CCSBULA1,KEY3;;                                             
          RETURN
.
RACCBU1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      CCSBULA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCBU1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      CCSBULA1,KEY3;CCBULIN,CCBUDAT,CCBUSPA                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCBU1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSBULA1;CCBULIN,CCBUDAT,CCBUSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCBU1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSBULA1;CCBULIN,CCBUDAT,CCBUSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCBU1                                                                         
          UPDATE    CCSBULA1;CCBULIN,CCBUDAT,CCBUSPA                            
          RETURN
.
WRCCBU1   RESET     KEY3                                                        
          WRITE     CCSBULA1,KEY3;CCBULIN,CCBUDAT,CCBUSPA                       
          RETURN
.
DECCBU1   RESET     KEY3                                                        
          DELETE    CCSBULA1,KEY3                                               
          RETURN
.
