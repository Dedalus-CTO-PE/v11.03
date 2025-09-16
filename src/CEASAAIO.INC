.
. CEASAAIO    
. --------
. Filename     : ceasaaaf.dat
.
RSCESA1   RESET     KEY9                                                        
          READ      CEASAAA1,KEY9;;                                             
          RETURN
.
RACESA1   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      CEASAAA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCESA1   RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      CEASAAA1,KEY9;CESASPC,CESAYEAR,CESAPER,CESACST1,CESACST2:   
                        CESACST3,CESACST4,CESACST5,CESAGLA,CESAGLB,CESASPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCESA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEASAAA1;CESASPC,CESAYEAR,CESAPER,CESACST1,CESACST2:        
                        CESACST3,CESACST4,CESACST5,CESAGLA,CESAGLB,CESASPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCESA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEASAAA1;CESASPC,CESAYEAR,CESAPER,CESACST1,CESACST2:        
                        CESACST3,CESACST4,CESACST5,CESAGLA,CESAGLB,CESASPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCESA1                                                                         
          UPDATE    CEASAAA1;CESASPC,CESAYEAR,CESAPER,CESACST1,CESACST2:        
                        CESACST3,CESACST4,CESACST5,CESAGLA,CESAGLB,CESASPA      
          RETURN
.
WRCESA1   RESET     KEY9                                                        
          WRITE     CEASAAA1,KEY9;CESASPC,CESAYEAR,CESAPER,CESACST1,CESACST2:   
                        CESACST3,CESACST4,CESACST5,CESAGLA,CESAGLB,CESASPA      
          RETURN
.
DECESA1   RESET     KEY9                                                        
          DELETE    CEASAAA1,KEY9                                               
          RETURN
.
