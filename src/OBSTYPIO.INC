.
. OBSTYPIO    
. --------
. Filename     : obstypaf.dat
.
RSOBTY1   RESET     KEY3                                                       
          READ      OBSTYPA1,KEY3;;                                            
          RETURN
.
RAOBTY1   RESET     KEY3                                                       
          MOVE      ZERO,OVRCD
          READ      OBSTYPA1,KEY3;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBTY1   RESET     KEY3                                                       
          MOVE      ZERO,OVRCD
          READ      OBSTYPA1,KEY3;OBTYTYPE,OBTYDESC,OBTYTMAD,OBTYTMUP,OBTYACTV:
                             OBTYSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBTY1   MOVE      ZERO,OVRCD
          READKS    OBSTYPA1;OBTYTYPE,OBTYDESC,OBTYTMAD,OBTYTMUP,OBTYACTV:
                             OBTYSPAR      
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBTY1   MOVE      ZERO,OVRCD
          READKP    OBSTYPA1;OBTYTYPE,OBTYDESC,OBTYTMAD,OBTYTMUP,OBTYACTV:
                             OBTYSPAR      
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBTY1   UPDATE    OBSTYPA1;OBTYTYPE,OBTYDESC,OBTYTMAD,OBTYTMUP,OBTYACTV:
                             OBTYSPAR      
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROBTY1   RESET     KEY3                                                       
          WRITE     OBSTYPA1,KEY3;OBTYTYPE,OBTYDESC,OBTYTMAD,OBTYTMUP,OBTYACTV:
                             OBTYSPAR
          RETURN
.
DEOBTY1   RESET     KEY3                                                       
          DELETE    OBSTYPA1,KEY3                                              
          RETURN
.
RLOBTY1   RESET     KEY3                                                       
          MOVE      ZERO,OVRCD
          READL     OBSTYPA1,KEY3;OBTYTYPE,OBTYDESC,OBTYTMAD,OBTYTMUP,OBTYACTV:
                             OBTYSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOBTY1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   OBSTYPA1;OBTYTYPE,OBTYDESC,OBTYTMAD,OBTYTMUP,OBTYACTV:
                             OBTYSPAR      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOBTY1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   OBSTYPA1;OBTYTYPE,OBTYDESC,OBTYTMAD,OBTYTMUP,OBTYACTV:
                             OBTYSPAR      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOBTY1   RESET     KEY3                                                       
          UNLOCK    OBSTYPA1                                                    
          RETURN
.
