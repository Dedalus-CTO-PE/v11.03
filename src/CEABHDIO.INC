.
. CEABHDIO    
. --------
. Filename     : ceabhdaf.dat
.
RSCEBH1   RESET     KEY5                                                        
          READ      CEABHDA1,KEY5;;                                             
          RETURN
.
RACEBH1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      CEABHDA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEBH1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      CEABHDA1,KEY5;CEBHBAT,CEBHDAT,CEBHUID,CEBHTYP,CEBHHCD:      
                        CEBHSPC,CEBHTOT,CEBHUR1,CEBHUR2,CEBHUD1,CEBHUD2:        
                        CEBHUY1,CEBHUY2,CEBHSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEBH1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEABHDA1;CEBHBAT,CEBHDAT,CEBHUID,CEBHTYP,CEBHHCD:           
                        CEBHSPC,CEBHTOT,CEBHUR1,CEBHUR2,CEBHUD1,CEBHUD2:        
                        CEBHUY1,CEBHUY2,CEBHSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEBH1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEABHDA1;CEBHBAT,CEBHDAT,CEBHUID,CEBHTYP,CEBHHCD:           
                        CEBHSPC,CEBHTOT,CEBHUR1,CEBHUR2,CEBHUD1,CEBHUD2:        
                        CEBHUY1,CEBHUY2,CEBHSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEBH1                                                                         
          UPDATE    CEABHDA1;CEBHBAT,CEBHDAT,CEBHUID,CEBHTYP,CEBHHCD:           
                        CEBHSPC,CEBHTOT,CEBHUR1,CEBHUR2,CEBHUD1,CEBHUD2:        
                        CEBHUY1,CEBHUY2,CEBHSPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCEBH1   RESET     KEY5                                                        
          WRITE     CEABHDA1,KEY5;CEBHBAT,CEBHDAT,CEBHUID,CEBHTYP,CEBHHCD:      
                        CEBHSPC,CEBHTOT,CEBHUR1,CEBHUR2,CEBHUD1,CEBHUD2:        
                        CEBHUY1,CEBHUY2,CEBHSPA                                 
          RETURN
.
DECEBH1   RESET     KEY5                                                        
          DELETE    CEABHDA1,KEY5                                               
          RETURN
.
RLCEBH1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READL     CEABHDA1,KEY5;CEBHBAT,CEBHDAT,CEBHUID,CEBHTYP,CEBHHCD:      
                        CEBHSPC,CEBHTOT,CEBHUR1,CEBHUR2,CEBHUD1,CEBHUD2:        
                        CEBHUY1,CEBHUY2,CEBHSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCEBH1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CEABHDA1;CEBHBAT,CEBHDAT,CEBHUID,CEBHTYP,CEBHHCD:           
                        CEBHSPC,CEBHTOT,CEBHUR1,CEBHUR2,CEBHUD1,CEBHUD2:        
                        CEBHUY1,CEBHUY2,CEBHSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCEBH1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CEABHDA1;CEBHBAT,CEBHDAT,CEBHUID,CEBHTYP,CEBHHCD:           
                        CEBHSPC,CEBHTOT,CEBHUR1,CEBHUR2,CEBHUD1,CEBHUD2:        
                        CEBHUY1,CEBHUY2,CEBHSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCEBH1   RESET     KEY5                                                        
          UNLOCK    CEABHDA1                                                    
          RETURN
.
