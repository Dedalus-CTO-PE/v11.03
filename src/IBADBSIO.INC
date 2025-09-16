.
. IBADBSIO    
. --------
. Filename     : ibadbsaf.dat
.
RSIBDB1   RESET     KEY3                                                        
          READ      IBADBSA1,KEY3;;                                             
          RETURN
.
RAIBDB1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      IBADBSA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBDB1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      IBADBSA1,KEY3;IBDBDBS,IBDBDES,IBDBDB01,IBDBDB02,IBDBDB03:   
                        IBDBDB04,IBDBDB05,IBDBDB06,IBDBDB07,IBDBDB08,IBDBDB09:  
                        IBDBDB10,IBDBUR1,IBDBUR2,IBDBUD1,IBDBUD2,IBDBUY1:       
                        IBDBUY2,IBDBSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBDB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    IBADBSA1;IBDBDBS,IBDBDES,IBDBDB01,IBDBDB02,IBDBDB03:        
                        IBDBDB04,IBDBDB05,IBDBDB06,IBDBDB07,IBDBDB08,IBDBDB09:  
                        IBDBDB10,IBDBUR1,IBDBUR2,IBDBUD1,IBDBUD2,IBDBUY1:       
                        IBDBUY2,IBDBSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBDB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    IBADBSA1;IBDBDBS,IBDBDES,IBDBDB01,IBDBDB02,IBDBDB03:        
                        IBDBDB04,IBDBDB05,IBDBDB06,IBDBDB07,IBDBDB08,IBDBDB09:  
                        IBDBDB10,IBDBUR1,IBDBUR2,IBDBUD1,IBDBUD2,IBDBUY1:       
                        IBDBUY2,IBDBSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBDB1                                                                         
          UPDATE    IBADBSA1;IBDBDBS,IBDBDES,IBDBDB01,IBDBDB02,IBDBDB03:        
                        IBDBDB04,IBDBDB05,IBDBDB06,IBDBDB07,IBDBDB08,IBDBDB09:  
                        IBDBDB10,IBDBUR1,IBDBUR2,IBDBUD1,IBDBUD2,IBDBUY1:       
                        IBDBUY2,IBDBSPA                                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBDB1   RESET     KEY3                                                        
          WRITE     IBADBSA1,KEY3;IBDBDBS,IBDBDES,IBDBDB01,IBDBDB02,IBDBDB03:   
                        IBDBDB04,IBDBDB05,IBDBDB06,IBDBDB07,IBDBDB08,IBDBDB09:  
                        IBDBDB10,IBDBUR1,IBDBUR2,IBDBUD1,IBDBUD2,IBDBUY1:       
                        IBDBUY2,IBDBSPA                                         
          RETURN
.
DEIBDB1   RESET     KEY3                                                        
          DELETE    IBADBSA1,KEY3                                               
          RETURN
.
RLIBDB1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     IBADBSA1,KEY3;IBDBDBS,IBDBDES,IBDBDB01,IBDBDB02,IBDBDB03:   
                        IBDBDB04,IBDBDB05,IBDBDB06,IBDBDB07,IBDBDB08,IBDBDB09:  
                        IBDBDB10,IBDBUR1,IBDBUR2,IBDBUD1,IBDBUD2,IBDBUY1:       
                        IBDBUY2,IBDBSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBDB1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   IBADBSA1;IBDBDBS,IBDBDES,IBDBDB01,IBDBDB02,IBDBDB03:        
                        IBDBDB04,IBDBDB05,IBDBDB06,IBDBDB07,IBDBDB08,IBDBDB09:  
                        IBDBDB10,IBDBUR1,IBDBUR2,IBDBUD1,IBDBUD2,IBDBUY1:       
                        IBDBUY2,IBDBSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBDB1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   IBADBSA1;IBDBDBS,IBDBDES,IBDBDB01,IBDBDB02,IBDBDB03:        
                        IBDBDB04,IBDBDB05,IBDBDB06,IBDBDB07,IBDBDB08,IBDBDB09:  
                        IBDBDB10,IBDBUR1,IBDBUR2,IBDBUD1,IBDBUD2,IBDBUY1:       
                        IBDBUY2,IBDBSPA                                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBDB1   RESET     KEY3                                                        
          UNLOCK    IBADBSA1                                                    
          RETURN
.
