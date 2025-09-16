.
. IBASMAIO    
. --------
. Filename     : ibasmaaf.dat
.
RSIBSMA1  RESET     KEY3                                                        
          READ      IBASMAA1,KEY3;;                                             
          RETURN
.
RAIBSMA1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      IBASMAA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBSMA1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      IBASMAA1,KEY3;IBSMNUMB,IBSMNAME,IBSMNATV,IBSMHEAD,IBSMDMPG: 
                        IBSMAVAL,IBSMSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBSMA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBASMAA1;IBSMNUMB,IBSMNAME,IBSMNATV,IBSMHEAD,IBSMDMPG:      
                        IBSMAVAL,IBSMSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBSMA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBASMAA1;IBSMNUMB,IBSMNAME,IBSMNATV,IBSMHEAD,IBSMDMPG:      
                        IBSMAVAL,IBSMSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBSMA1                                                                        
          UPDATE    IBASMAA1;IBSMNUMB,IBSMNAME,IBSMNATV,IBSMHEAD,IBSMDMPG:      
                        IBSMAVAL,IBSMSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBSMA1  RESET     KEY3                                                        
          WRITE     IBASMAA1,KEY3;IBSMNUMB,IBSMNAME,IBSMNATV,IBSMHEAD,IBSMDMPG: 
                        IBSMAVAL,IBSMSPAR                                       
          RETURN
.
DEIBSMA1  RESET     KEY3                                                        
          DELETE    IBASMAA1,KEY3                                               
          RETURN
.
RLIBSMA1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     IBASMAA1,KEY3;IBSMNUMB,IBSMNAME,IBSMNATV,IBSMHEAD,IBSMDMPG: 
                        IBSMAVAL,IBSMSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBSMA1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   IBASMAA1;IBSMNUMB,IBSMNAME,IBSMNATV,IBSMHEAD,IBSMDMPG:      
                        IBSMAVAL,IBSMSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBSMA1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   IBASMAA1;IBSMNUMB,IBSMNAME,IBSMNATV,IBSMHEAD,IBSMDMPG:      
                        IBSMAVAL,IBSMSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBSMA1  RESET     KEY3                                                        
          UNLOCK    IBASMAA1                                                    
          RETURN
.
