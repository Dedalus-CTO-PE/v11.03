.
. DEBADJIO    
. --------
. Filename     : debadjaf.dat
.
RSDBAD1   RESET     KEY3                                                        
          READ      DEBADJA1,KEY3;;                                             
          RETURN
.
RADBAD1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      DEBADJA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBAD1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      DEBADJA1,KEY3;DBADCOD,DBADDES,DBADTYP,DBADLED,DBADIAC:      
                        DBADTAC,DBADUR1,DBADUR2,DBADUY1,DBADUY2,DBADSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBAD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBADJA1;DBADCOD,DBADDES,DBADTYP,DBADLED,DBADIAC:           
                        DBADTAC,DBADUR1,DBADUR2,DBADUY1,DBADUY2,DBADSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBAD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBADJA1;DBADCOD,DBADDES,DBADTYP,DBADLED,DBADIAC:           
                        DBADTAC,DBADUR1,DBADUR2,DBADUY1,DBADUY2,DBADSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBAD1                                                                         
          UPDATE    DEBADJA1;DBADCOD,DBADDES,DBADTYP,DBADLED,DBADIAC:           
                        DBADTAC,DBADUR1,DBADUR2,DBADUY1,DBADUY2,DBADSPA         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBAD1   RESET     KEY3                                                        
          WRITE     DEBADJA1,KEY3;DBADCOD,DBADDES,DBADTYP,DBADLED,DBADIAC:      
                        DBADTAC,DBADUR1,DBADUR2,DBADUY1,DBADUY2,DBADSPA         
          RETURN
.
DEDBAD1   RESET     KEY3                                                        
          DELETE    DEBADJA1,KEY3                                               
          RETURN
.
RLDBAD1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     DEBADJA1,KEY3;DBADCOD,DBADDES,DBADTYP,DBADLED,DBADIAC:      
                        DBADTAC,DBADUR1,DBADUR2,DBADUY1,DBADUY2,DBADSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBAD1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBADJA1;DBADCOD,DBADDES,DBADTYP,DBADLED,DBADIAC:           
                        DBADTAC,DBADUR1,DBADUR2,DBADUY1,DBADUY2,DBADSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBAD1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBADJA1;DBADCOD,DBADDES,DBADTYP,DBADLED,DBADIAC:           
                        DBADTAC,DBADUR1,DBADUR2,DBADUY1,DBADUY2,DBADSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBAD1   RESET     KEY3                                                        
          UNLOCK    DEBADJA1                                                    
          RETURN
.
