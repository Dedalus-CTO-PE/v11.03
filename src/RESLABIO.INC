.
. RESLABIO    
. --------
. Filename     : reslabaf.dat
.
RSRELB1   RESET     KEY3                                                        
          READ      RESLABA1,KEY3;;                                             
          RETURN
.
RARELB1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      RESLABA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRELB1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      RESLABA1,KEY3;RELBLCD,RELBDES,RELBLRN,RELBEML,RELBHEM:      
                        RELBMID,RELBSAP,RELBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRELB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESLABA1;RELBLCD,RELBDES,RELBLRN,RELBEML,RELBHEM:           
                        RELBMID,RELBSAP,RELBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRELB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESLABA1;RELBLCD,RELBDES,RELBLRN,RELBEML,RELBHEM:           
                        RELBMID,RELBSAP,RELBSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRELB1                                                                         
          UPDATE    RESLABA1;RELBLCD,RELBDES,RELBLRN,RELBEML,RELBHEM:           
                        RELBMID,RELBSAP,RELBSPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRELB1   RESET     KEY3                                                        
          WRITE     RESLABA1,KEY3;RELBLCD,RELBDES,RELBLRN,RELBEML,RELBHEM:      
                        RELBMID,RELBSAP,RELBSPA                                 
          RETURN
.
DERELB1   RESET     KEY3                                                        
          DELETE    RESLABA1,KEY3                                               
          RETURN
.
RLRELB1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     RESLABA1,KEY3;RELBLCD,RELBDES,RELBLRN,RELBEML,RELBHEM:      
                        RELBMID,RELBSAP,RELBSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRELB1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESLABA1;RELBLCD,RELBDES,RELBLRN,RELBEML,RELBHEM:           
                        RELBMID,RELBSAP,RELBSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRELB1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESLABA1;RELBLCD,RELBDES,RELBLRN,RELBEML,RELBHEM:           
                        RELBMID,RELBSAP,RELBSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURELB1   RESET     KEY3                                                        
          UNLOCK    RESLABA1                                                    
          RETURN
.
