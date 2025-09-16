.
. WEBTPLIO    
. --------
. Filename     : webtplaf.dat
.
RSWBTP1   RESET     KEY13                                                       
          READ      WEBTPLA1,KEY13;;                                            
          RETURN
.
RAWBTP1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      WEBTPLA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBTP1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      WEBTPLA1,KEY13;WBTPPRG,WBTPOPT,WBTPTPL,WBTPDES,WBTPFIL:     
                        WBTPLEV,WBTPMSC,WBTPMTY,WBTPTAR,WBTPWID,WBTPHIG:        
                        WBTPLP1,WBTPLP2,WBTPLP3,WBTPLP4,WBTPSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBTP1   MOVE      ZERO,OVRCD                                                  
          READKS    WEBTPLA1;WBTPPRG,WBTPOPT,WBTPTPL,WBTPDES,WBTPFIL:           
                        WBTPLEV,WBTPMSC,WBTPMTY,WBTPTAR,WBTPWID,WBTPHIG:        
                        WBTPLP1,WBTPLP2,WBTPLP3,WBTPLP4,WBTPSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBTP1   MOVE      ZERO,OVRCD                                                  
          READKP    WEBTPLA1;WBTPPRG,WBTPOPT,WBTPTPL,WBTPDES,WBTPFIL:           
                        WBTPLEV,WBTPMSC,WBTPMTY,WBTPTAR,WBTPWID,WBTPHIG:        
                        WBTPLP1,WBTPLP2,WBTPLP3,WBTPLP4,WBTPSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBTP1   MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBTPLA1;WBTPPRG,WBTPOPT,WBTPTPL,WBTPDES,WBTPFIL:           
                        WBTPLEV,WBTPMSC,WBTPMTY,WBTPTAR,WBTPWID,WBTPHIG:        
                        WBTPLP1,WBTPLP2,WBTPLP3,WBTPLP4,WBTPSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBTP1   RESET     KEY13                                                       
          WRITE     WEBTPLA1,KEY13;WBTPPRG,WBTPOPT,WBTPTPL,WBTPDES,WBTPFIL:     
                        WBTPLEV,WBTPMSC,WBTPMTY,WBTPTAR,WBTPWID,WBTPHIG:        
                        WBTPLP1,WBTPLP2,WBTPLP3,WBTPLP4,WBTPSPA                 
          RETURN
.
DEWBTP1   RESET     KEY13                                                       
          DELETE    WEBTPLA1,KEY13                                              
          RETURN
.
RLWBTP1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     WEBTPLA1,KEY13;WBTPPRG,WBTPOPT,WBTPTPL,WBTPDES,WBTPFIL:     
                        WBTPLEV,WBTPMSC,WBTPMTY,WBTPTAR,WBTPWID,WBTPHIG:        
                        WBTPLP1,WBTPLP2,WBTPLP3,WBTPLP4,WBTPSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBTP1   MOVE      ZERO,OVRCD                                                  
          READLKS   WEBTPLA1;WBTPPRG,WBTPOPT,WBTPTPL,WBTPDES,WBTPFIL:           
                        WBTPLEV,WBTPMSC,WBTPMTY,WBTPTAR,WBTPWID,WBTPHIG:        
                        WBTPLP1,WBTPLP2,WBTPLP3,WBTPLP4,WBTPSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBTP1   MOVE      ZERO,OVRCD                                                  
          READLKP   WEBTPLA1;WBTPPRG,WBTPOPT,WBTPTPL,WBTPDES,WBTPFIL:           
                        WBTPLEV,WBTPMSC,WBTPMTY,WBTPTAR,WBTPWID,WBTPHIG:        
                        WBTPLP1,WBTPLP2,WBTPLP3,WBTPLP4,WBTPSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBTP1   RESET     KEY13                                                       
          UNLOCK    WEBTPLA1                                                    
          RETURN
.
