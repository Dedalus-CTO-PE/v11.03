.
. WEBPLDIO    
. --------
. Filename     : webpldaf.dat
.
RSWBPLD1  RESET     KEY13                                                       
          READ      WEBPLDA1,KEY13;;                                            
          RETURN
.
RAWBPLD1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPLDA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPLD1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPLDA1,KEY13;WBPDWUID,WBPDLNUM,WBPDDESC,WBPDBSPG,WBPDSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPLD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WEBPLDA1;WBPDWUID,WBPDLNUM,WBPDDESC,WBPDBSPG,WBPDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPLD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WEBPLDA1;WBPDWUID,WBPDLNUM,WBPDDESC,WBPDBSPG,WBPDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPLD1                                                                        
          UPDATE    WEBPLDA1;WBPDWUID,WBPDLNUM,WBPDDESC,WBPDBSPG,WBPDSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBPLD1  RESET     KEY13                                                       
          WRITE     WEBPLDA1,KEY13;WBPDWUID,WBPDLNUM,WBPDDESC,WBPDBSPG,WBPDSPAR 
          RETURN
.
DEWBPLD1  RESET     KEY13                                                       
          DELETE    WEBPLDA1,KEY13                                              
          RETURN
.
RLWBPLD1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     WEBPLDA1,KEY13;WBPDWUID,WBPDLNUM,WBPDDESC,WBPDBSPG,WBPDSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBPLD1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WEBPLDA1;WBPDWUID,WBPDLNUM,WBPDDESC,WBPDBSPG,WBPDSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBPLD1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WEBPLDA1;WBPDWUID,WBPDLNUM,WBPDDESC,WBPDBSPG,WBPDSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBPLD1  RESET     KEY13                                                       
          UNLOCK    WEBPLDA1                                                    
          RETURN
.
