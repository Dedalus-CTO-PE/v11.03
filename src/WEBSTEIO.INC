.
. WEBSTEIO    
. --------
. Filename     : websteaf.dat
.
RSWBST1   RESET     KEY18                                                       
          READ      WEBSTEA1,KEY18;;                                            
          RETURN
.
RAWBST1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSTEA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBST1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSTEA1,KEY18;WBSTUID,WBSTPRG,WBSTLEV,WBSTUR1,WBSTUR2:     
                        WBSTUD1,WBSTUD2,WBSTUY1,WBSTUY2,WBSTSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBST1                                                                         
          MOVE      ZERO,OVRCD
          READKS    WEBSTEA1;WBSTUID,WBSTPRG,WBSTLEV,WBSTUR1,WBSTUR2:           
                        WBSTUD1,WBSTUD2,WBSTUY1,WBSTUY2,WBSTSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBST1                                                                         
          MOVE      ZERO,OVRCD
          READKP    WEBSTEA1;WBSTUID,WBSTPRG,WBSTLEV,WBSTUR1,WBSTUR2:           
                        WBSTUD1,WBSTUD2,WBSTUY1,WBSTUY2,WBSTSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBST1                                                                         
          UPDATE    WEBSTEA1;WBSTUID,WBSTPRG,WBSTLEV,WBSTUR1,WBSTUR2:           
                        WBSTUD1,WBSTUD2,WBSTUY1,WBSTUY2,WBSTSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBST1   RESET     KEY18                                                       
          WRITE     WEBSTEA1,KEY18;WBSTUID,WBSTPRG,WBSTLEV,WBSTUR1,WBSTUR2:     
                        WBSTUD1,WBSTUD2,WBSTUY1,WBSTUY2,WBSTSPA                 
          RETURN
.
DEWBST1   RESET     KEY18                                                       
          DELETE    WEBSTEA1,KEY18                                              
          RETURN
.
RLWBST1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     WEBSTEA1,KEY18;WBSTUID,WBSTPRG,WBSTLEV,WBSTUR1,WBSTUR2:     
                        WBSTUD1,WBSTUD2,WBSTUY1,WBSTUY2,WBSTSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBST1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   WEBSTEA1;WBSTUID,WBSTPRG,WBSTLEV,WBSTUR1,WBSTUR2:           
                        WBSTUD1,WBSTUD2,WBSTUY1,WBSTUY2,WBSTSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBST1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   WEBSTEA1;WBSTUID,WBSTPRG,WBSTLEV,WBSTUR1,WBSTUR2:           
                        WBSTUD1,WBSTUD2,WBSTUY1,WBSTUY2,WBSTSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBST1   RESET     KEY18                                                       
          UNLOCK    WEBSTEA1                                                    
          RETURN
.
