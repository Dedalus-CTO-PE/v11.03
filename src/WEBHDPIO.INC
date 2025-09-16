.
. WEBHDPIO    
. --------
. Filename     : webhdpaf.dat
.
RSWBHD1   RESET     KEY10                                                       
          READ      WEBHDPA1,KEY10;;                                            
          RETURN
.
RAWBHD1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      WEBHDPA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBHD1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      WEBHDPA1,KEY10;WBHDHID,WBHDFIL,WBHDPATH,WBHDSPA             
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBHD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    WEBHDPA1;WBHDHID,WBHDFIL,WBHDPATH,WBHDSPA                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBHD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    WEBHDPA1;WBHDHID,WBHDFIL,WBHDPATH,WBHDSPA                   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBHD1                                                                         
          UPDATE    WEBHDPA1;WBHDHID,WBHDFIL,WBHDPATH,WBHDSPA                   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBHD1   RESET     KEY10                                                       
          WRITE     WEBHDPA1,KEY10;WBHDHID,WBHDFIL,WBHDPATH,WBHDSPA             
          RETURN
.
DEWBHD1   RESET     KEY10                                                       
          DELETE    WEBHDPA1,KEY10                                              
          RETURN
.
RLWBHD1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     WEBHDPA1,KEY10;WBHDHID,WBHDFIL,WBHDPATH,WBHDSPA             
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBHD1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   WEBHDPA1;WBHDHID,WBHDFIL,WBHDPATH,WBHDSPA                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBHD1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   WEBHDPA1;WBHDHID,WBHDFIL,WBHDPATH,WBHDSPA                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBHD1   RESET     KEY10                                                       
          UNLOCK    WEBHDPA1                                                    
          RETURN
.
