.
. ALLDSPIO    
. --------
. Filename     : alldspaf.dat
.
RSALDSP1  RESET     KEY3                                                        
          READ      ALLDSPA1,KEY3;;                                             
          RETURN
.
RAALDSP1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      ALLDSPA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALDSP1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      ALLDSPA1,KEY3;ALDPDEPT,ALDPCT01,ALDPCT02,ALDPCT03,ALDPCT04: 
                        ALDPCT05,ALDPCT06,ALDPCT07,ALDPCT08,ALDPCT09,ALDPCT10:  
                        ALDPCT11,ALDPCT12,ALDPCT13,ALDPCT14,ALDPCT15,ALDPCT16:  
                        ALDPCT17,ALDPCT18,ALDPCT19,ALDPCT20,ALDPCT21,ALDPCT22:  
                        ALDPCT23,ALDPCT24,ALDPCT25,ALDPCT26,ALDPSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALDSP1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLDSPA1;ALDPDEPT,ALDPCT01,ALDPCT02,ALDPCT03,ALDPCT04:      
                        ALDPCT05,ALDPCT06,ALDPCT07,ALDPCT08,ALDPCT09,ALDPCT10:  
                        ALDPCT11,ALDPCT12,ALDPCT13,ALDPCT14,ALDPCT15,ALDPCT16:  
                        ALDPCT17,ALDPCT18,ALDPCT19,ALDPCT20,ALDPCT21,ALDPCT22:  
                        ALDPCT23,ALDPCT24,ALDPCT25,ALDPCT26,ALDPSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALDSP1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLDSPA1;ALDPDEPT,ALDPCT01,ALDPCT02,ALDPCT03,ALDPCT04:      
                        ALDPCT05,ALDPCT06,ALDPCT07,ALDPCT08,ALDPCT09,ALDPCT10:  
                        ALDPCT11,ALDPCT12,ALDPCT13,ALDPCT14,ALDPCT15,ALDPCT16:  
                        ALDPCT17,ALDPCT18,ALDPCT19,ALDPCT20,ALDPCT21,ALDPCT22:  
                        ALDPCT23,ALDPCT24,ALDPCT25,ALDPCT26,ALDPSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALDSP1                                                                        
          UPDATE    ALLDSPA1;ALDPDEPT,ALDPCT01,ALDPCT02,ALDPCT03,ALDPCT04:      
                        ALDPCT05,ALDPCT06,ALDPCT07,ALDPCT08,ALDPCT09,ALDPCT10:  
                        ALDPCT11,ALDPCT12,ALDPCT13,ALDPCT14,ALDPCT15,ALDPCT16:  
                        ALDPCT17,ALDPCT18,ALDPCT19,ALDPCT20,ALDPCT21,ALDPCT22:  
                        ALDPCT23,ALDPCT24,ALDPCT25,ALDPCT26,ALDPSPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALDSP1  RESET     KEY3                                                        
          WRITE     ALLDSPA1,KEY3;ALDPDEPT,ALDPCT01,ALDPCT02,ALDPCT03,ALDPCT04: 
                        ALDPCT05,ALDPCT06,ALDPCT07,ALDPCT08,ALDPCT09,ALDPCT10:  
                        ALDPCT11,ALDPCT12,ALDPCT13,ALDPCT14,ALDPCT15,ALDPCT16:  
                        ALDPCT17,ALDPCT18,ALDPCT19,ALDPCT20,ALDPCT21,ALDPCT22:  
                        ALDPCT23,ALDPCT24,ALDPCT25,ALDPCT26,ALDPSPAR            
          RETURN
.
DEALDSP1  RESET     KEY3                                                        
          DELETE    ALLDSPA1,KEY3                                               
          RETURN
.
RLALDSP1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     ALLDSPA1,KEY3;ALDPDEPT,ALDPCT01,ALDPCT02,ALDPCT03,ALDPCT04: 
                        ALDPCT05,ALDPCT06,ALDPCT07,ALDPCT08,ALDPCT09,ALDPCT10:  
                        ALDPCT11,ALDPCT12,ALDPCT13,ALDPCT14,ALDPCT15,ALDPCT16:  
                        ALDPCT17,ALDPCT18,ALDPCT19,ALDPCT20,ALDPCT21,ALDPCT22:  
                        ALDPCT23,ALDPCT24,ALDPCT25,ALDPCT26,ALDPSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALDSP1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLDSPA1;ALDPDEPT,ALDPCT01,ALDPCT02,ALDPCT03,ALDPCT04:      
                        ALDPCT05,ALDPCT06,ALDPCT07,ALDPCT08,ALDPCT09,ALDPCT10:  
                        ALDPCT11,ALDPCT12,ALDPCT13,ALDPCT14,ALDPCT15,ALDPCT16:  
                        ALDPCT17,ALDPCT18,ALDPCT19,ALDPCT20,ALDPCT21,ALDPCT22:  
                        ALDPCT23,ALDPCT24,ALDPCT25,ALDPCT26,ALDPSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALDSP1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLDSPA1;ALDPDEPT,ALDPCT01,ALDPCT02,ALDPCT03,ALDPCT04:      
                        ALDPCT05,ALDPCT06,ALDPCT07,ALDPCT08,ALDPCT09,ALDPCT10:  
                        ALDPCT11,ALDPCT12,ALDPCT13,ALDPCT14,ALDPCT15,ALDPCT16:  
                        ALDPCT17,ALDPCT18,ALDPCT19,ALDPCT20,ALDPCT21,ALDPCT22:  
                        ALDPCT23,ALDPCT24,ALDPCT25,ALDPCT26,ALDPSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALDSP1  RESET     KEY3                                                        
          UNLOCK    ALLDSPA1                                                    
          RETURN
.
