.
. CCSPROIO    
. --------
. Filename     : ccsproaf.dat
.
RSCCPR1   RESET     KEY4                                                        
          READ      CCSPROA1,KEY4;;                                             
          RETURN
.
RACCPR1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSPROA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCPR1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSPROA1,KEY4;CCPRPRO,CCPRDES,CCPRP01,CCPRP02,CCPRP03:      
                        CCPRP04,CCPRP05,CCPRP06,CCPRP07,CCPRP08,CCPRP09:        
                        CCPRP10,CCPRP11,CCPRP12,CCPRP13,CCPRSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCPR1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSPROA1;CCPRPRO,CCPRDES,CCPRP01,CCPRP02,CCPRP03:           
                        CCPRP04,CCPRP05,CCPRP06,CCPRP07,CCPRP08,CCPRP09:        
                        CCPRP10,CCPRP11,CCPRP12,CCPRP13,CCPRSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCPR1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSPROA1;CCPRPRO,CCPRDES,CCPRP01,CCPRP02,CCPRP03:           
                        CCPRP04,CCPRP05,CCPRP06,CCPRP07,CCPRP08,CCPRP09:        
                        CCPRP10,CCPRP11,CCPRP12,CCPRP13,CCPRSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCPR1                                                                         
          UPDATE    CCSPROA1;CCPRPRO,CCPRDES,CCPRP01,CCPRP02,CCPRP03:           
                        CCPRP04,CCPRP05,CCPRP06,CCPRP07,CCPRP08,CCPRP09:        
                        CCPRP10,CCPRP11,CCPRP12,CCPRP13,CCPRSPA                 
          RETURN
.
WRCCPR1   RESET     KEY4                                                        
          WRITE     CCSPROA1,KEY4;CCPRPRO,CCPRDES,CCPRP01,CCPRP02,CCPRP03:      
                        CCPRP04,CCPRP05,CCPRP06,CCPRP07,CCPRP08,CCPRP09:        
                        CCPRP10,CCPRP11,CCPRP12,CCPRP13,CCPRSPA                 
          RETURN
.
DECCPR1   RESET     KEY4                                                        
          DELETE    CCSPROA1,KEY4                                               
          RETURN
.
