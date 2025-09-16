.
. WEBSPGIO    
. --------
. Filename     : webspgaf.dat
.
RSWBSP1   RESET     KEY8                                                        
          READ      WEBSPGA1,KEY8;;                                             
          RETURN
.
RAWBSP1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBSPGA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSP1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBSPGA1,KEY8;WBSPPRG,WBSPNAM,WBSPFIFO,WBSPOUTD,WBSPDEFT:   
                        WBSPUR1,WBSPUR2,WBSPUD1,WBSPUD2,WBSPUY1,WBSPUY2:        
                        WBSPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBSP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    WEBSPGA1;WBSPPRG,WBSPNAM,WBSPFIFO,WBSPOUTD,WBSPDEFT:        
                        WBSPUR1,WBSPUR2,WBSPUD1,WBSPUD2,WBSPUY1,WBSPUY2:        
                        WBSPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBSP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    WEBSPGA1;WBSPPRG,WBSPNAM,WBSPFIFO,WBSPOUTD,WBSPDEFT:        
                        WBSPUR1,WBSPUR2,WBSPUD1,WBSPUD2,WBSPUY1,WBSPUY2:        
                        WBSPSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBSP1                                                                         
          UPDATE    WEBSPGA1;WBSPPRG,WBSPNAM,WBSPFIFO,WBSPOUTD,WBSPDEFT:        
                        WBSPUR1,WBSPUR2,WBSPUD1,WBSPUD2,WBSPUY1,WBSPUY2:        
                        WBSPSPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBSP1   RESET     KEY8                                                        
          WRITE     WEBSPGA1,KEY8;WBSPPRG,WBSPNAM,WBSPFIFO,WBSPOUTD,WBSPDEFT:   
                        WBSPUR1,WBSPUR2,WBSPUD1,WBSPUD2,WBSPUY1,WBSPUY2:        
                        WBSPSPA                                                 
          RETURN
.
DEWBSP1   RESET     KEY8                                                        
          DELETE    WEBSPGA1,KEY8                                               
          RETURN
.
RLWBSP1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     WEBSPGA1,KEY8;WBSPPRG,WBSPNAM,WBSPFIFO,WBSPOUTD,WBSPDEFT:   
                        WBSPUR1,WBSPUR2,WBSPUD1,WBSPUD2,WBSPUY1,WBSPUY2:        
                        WBSPSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBSP1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   WEBSPGA1;WBSPPRG,WBSPNAM,WBSPFIFO,WBSPOUTD,WBSPDEFT:        
                        WBSPUR1,WBSPUR2,WBSPUD1,WBSPUD2,WBSPUY1,WBSPUY2:        
                        WBSPSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBSP1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   WEBSPGA1;WBSPPRG,WBSPNAM,WBSPFIFO,WBSPOUTD,WBSPDEFT:        
                        WBSPUR1,WBSPUR2,WBSPUD1,WBSPUD2,WBSPUY1,WBSPUY2:        
                        WBSPSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBSP1   RESET     KEY8                                                        
          UNLOCK    WEBSPGA1                                                    
          RETURN
.
