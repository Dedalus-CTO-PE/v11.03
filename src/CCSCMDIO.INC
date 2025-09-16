.
. CCSCMDIO    
. --------
. Filename     : ccscmdaf.dat
.
RSCCMD1   RESET     KEY28                                                       
          READ      CCSCMDA1,KEY28;;                                            
          RETURN
.
RACCMD1   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCMDA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCMD1   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCMDA1,KEY28;CCMDHCD,CCMDDPT,CCMDYEAR,CCMDPER,CCMDPCD:    
                        CCMDCTY,CCMDCST,CCMDFLX,CCMDRVI,CCMDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCMD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCMDA1;CCMDHCD,CCMDDPT,CCMDYEAR,CCMDPER,CCMDPCD:          
                        CCMDCTY,CCMDCST,CCMDFLX,CCMDRVI,CCMDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCMD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCMDA1;CCMDHCD,CCMDDPT,CCMDYEAR,CCMDPER,CCMDPCD:          
                        CCMDCTY,CCMDCST,CCMDFLX,CCMDRVI,CCMDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCMD1                                                                         
          UPDATE    CCSCMDA1;CCMDHCD,CCMDDPT,CCMDYEAR,CCMDPER,CCMDPCD:          
                        CCMDCTY,CCMDCST,CCMDFLX,CCMDRVI,CCMDSPA                 
          RETURN
.
WRCCMD1   RESET     KEY28                                                       
          WRITE     CCSCMDA1,KEY28;CCMDHCD,CCMDDPT,CCMDYEAR,CCMDPER,CCMDPCD:    
                        CCMDCTY,CCMDCST,CCMDFLX,CCMDRVI,CCMDSPA                 
          RETURN
.
DECCMD1   RESET     KEY28                                                       
          DELETE    CCSCMDA1,KEY28                                              
          RETURN
.
