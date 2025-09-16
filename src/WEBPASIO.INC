.
. WEBPASIO    
. --------
. Filename     : webpasaf.dat
.
RSWBPAS1  RESET     KEY10                                                       
          READ      WEBPASA1,KEY10;;                                            
          RETURN
.
RAWBPAS1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPASA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPAS1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPASA1,KEY10;WBPAUID,WBPAPAS1,WBPAPAS2,WBPAPAS3,WBPAPAS4: 
                        WBPAPAS5,WBPASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPAS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WEBPASA1;WBPAUID,WBPAPAS1,WBPAPAS2,WBPAPAS3,WBPAPAS4:       
                        WBPAPAS5,WBPASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPAS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WEBPASA1;WBPAUID,WBPAPAS1,WBPAPAS2,WBPAPAS3,WBPAPAS4:       
                        WBPAPAS5,WBPASPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPAS1                                                                        
          UPDATE    WEBPASA1;WBPAUID,WBPAPAS1,WBPAPAS2,WBPAPAS3,WBPAPAS4:       
                        WBPAPAS5,WBPASPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBPAS1  RESET     KEY10                                                       
          WRITE     WEBPASA1,KEY10;WBPAUID,WBPAPAS1,WBPAPAS2,WBPAPAS3,WBPAPAS4: 
                        WBPAPAS5,WBPASPAR                                       
          RETURN
.
DEWBPAS1  RESET     KEY10                                                       
          DELETE    WEBPASA1,KEY10                                              
          RETURN
.
RLWBPAS1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     WEBPASA1,KEY10;WBPAUID,WBPAPAS1,WBPAPAS2,WBPAPAS3,WBPAPAS4: 
                        WBPAPAS5,WBPASPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBPAS1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WEBPASA1;WBPAUID,WBPAPAS1,WBPAPAS2,WBPAPAS3,WBPAPAS4:       
                        WBPAPAS5,WBPASPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBPAS1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WEBPASA1;WBPAUID,WBPAPAS1,WBPAPAS2,WBPAPAS3,WBPAPAS4:       
                        WBPAPAS5,WBPASPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBPAS1  RESET     KEY10                                                       
          UNLOCK    WEBPASA1                                                    
          RETURN
.
