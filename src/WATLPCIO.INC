.
. WATLPCIO    
. --------
. Filename     : watlpcaf.dat
.
RSWTLPC1  RESET     KEY5                                                        
          READ      WATLPCA1,KEY5;;                                             
          RETURN
.
RAWTLPC1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      WATLPCA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTLPC1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      WATLPCA1,KEY5;WTLPSCHE,WTLPURNO,WTLPPCOD,WTLPPCNT,WTLPPRNT: 
                        WTLPCOPY,WTLPLETT,WTLPWEBU,WTLPRDAT,WTLPRTIM,WTLPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTLPC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATLPCA1;WTLPSCHE,WTLPURNO,WTLPPCOD,WTLPPCNT,WTLPPRNT:      
                        WTLPCOPY,WTLPLETT,WTLPWEBU,WTLPRDAT,WTLPRTIM,WTLPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTLPC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATLPCA1;WTLPSCHE,WTLPURNO,WTLPPCOD,WTLPPCNT,WTLPPRNT:      
                        WTLPCOPY,WTLPLETT,WTLPWEBU,WTLPRDAT,WTLPRTIM,WTLPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTLPC1                                                                        
          UPDATE    WATLPCA1;WTLPSCHE,WTLPURNO,WTLPPCOD,WTLPPCNT,WTLPPRNT:      
                        WTLPCOPY,WTLPLETT,WTLPWEBU,WTLPRDAT,WTLPRTIM,WTLPSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTLPC1  RESET     KEY5                                                        
          WRITE     WATLPCA1,KEY5;WTLPSCHE,WTLPURNO,WTLPPCOD,WTLPPCNT,WTLPPRNT: 
                        WTLPCOPY,WTLPLETT,WTLPWEBU,WTLPRDAT,WTLPRTIM,WTLPSPAR   
          RETURN
.
DEWTLPC1  RESET     KEY5                                                        
          DELETE    WATLPCA1,KEY5                                               
          RETURN
.
RLWTLPC1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READL     WATLPCA1,KEY5;WTLPSCHE,WTLPURNO,WTLPPCOD,WTLPPCNT,WTLPPRNT: 
                        WTLPCOPY,WTLPLETT,WTLPWEBU,WTLPRDAT,WTLPRTIM,WTLPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTLPC1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATLPCA1;WTLPSCHE,WTLPURNO,WTLPPCOD,WTLPPCNT,WTLPPRNT:      
                        WTLPCOPY,WTLPLETT,WTLPWEBU,WTLPRDAT,WTLPRTIM,WTLPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTLPC1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATLPCA1;WTLPSCHE,WTLPURNO,WTLPPCOD,WTLPPCNT,WTLPPRNT:      
                        WTLPCOPY,WTLPLETT,WTLPWEBU,WTLPRDAT,WTLPRTIM,WTLPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTLPC1  RESET     KEY5                                                        
          UNLOCK    WATLPCA1                                                    
          RETURN
.
