.
. VISCTMIO    
. --------
. Filename     : visctmaf.dat
.
RSVSCTM1  RESET     KEY6                                                        
          READ      VISCTMA1,KEY6;;                                             
          RETURN
.
RAVSCTM1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      VISCTMA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDVSCTM1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      VISCTMA1,KEY6;VSCMTEM,VSCMUNQ,VSCMCMT,VSCMSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKVSCTM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    VISCTMA1;VSCMTEM,VSCMUNQ,VSCMCMT,VSCMSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPVSCTM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    VISCTMA1;VSCMTEM,VSCMUNQ,VSCMCMT,VSCMSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPVSCTM1                                                                        
          UPDATE    VISCTMA1;VSCMTEM,VSCMUNQ,VSCMCMT,VSCMSPA                    
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRVSCTM1  RESET     KEY6                                                        
          WRITE     VISCTMA1,KEY6;VSCMTEM,VSCMUNQ,VSCMCMT,VSCMSPA               
          RETURN
.
DEVSCTM1  RESET     KEY6                                                        
          DELETE    VISCTMA1,KEY6                                               
          RETURN
.
RLVSCTM1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READL     VISCTMA1,KEY6;VSCMTEM,VSCMUNQ,VSCMCMT,VSCMSPA               
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLVSCTM1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   VISCTMA1;VSCMTEM,VSCMUNQ,VSCMCMT,VSCMSPA                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLVSCTM1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   VISCTMA1;VSCMTEM,VSCMUNQ,VSCMCMT,VSCMSPA                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUVSCTM1  RESET     KEY6                                                        
          UNLOCK    VISCTMA1                                                    
          RETURN
.
