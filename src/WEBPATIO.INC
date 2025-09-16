.
. WEBPATIO    
. --------
. Filename     : webpataf.dat
.
RSWBPAT1  RESET     KEY21                                                       
          READ      WEBPATA1,KEY21;;                                            
          RETURN
.
RAWBPAT1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPATA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPAT1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPATA1,KEY21;WBPTWUID,WBPTLNUM,WBPTURNO,WBPTVNUM,WBPTDATC:
                        WBPTTIMC,WBPTRDAT,WBPTSTAT,WBPTCOM1,WBPTCOM2,WBPTSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPAT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WEBPATA1;WBPTWUID,WBPTLNUM,WBPTURNO,WBPTVNUM,WBPTDATC:      
                        WBPTTIMC,WBPTRDAT,WBPTSTAT,WBPTCOM1,WBPTCOM2,WBPTSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPAT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WEBPATA1;WBPTWUID,WBPTLNUM,WBPTURNO,WBPTVNUM,WBPTDATC:      
                        WBPTTIMC,WBPTRDAT,WBPTSTAT,WBPTCOM1,WBPTCOM2,WBPTSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPAT1                                                                        
          UPDATE    WEBPATA1;WBPTWUID,WBPTLNUM,WBPTURNO,WBPTVNUM,WBPTDATC:      
                        WBPTTIMC,WBPTRDAT,WBPTSTAT,WBPTCOM1,WBPTCOM2,WBPTSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBPAT1  RESET     KEY21                                                       
          WRITE     WEBPATA1,KEY21;WBPTWUID,WBPTLNUM,WBPTURNO,WBPTVNUM,WBPTDATC:
                        WBPTTIMC,WBPTRDAT,WBPTSTAT,WBPTCOM1,WBPTCOM2,WBPTSPAR   
          RETURN
.
DEWBPAT1  RESET     KEY21                                                       
          DELETE    WEBPATA1,KEY21                                              
          RETURN
.
RLWBPAT1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     WEBPATA1,KEY21;WBPTWUID,WBPTLNUM,WBPTURNO,WBPTVNUM,WBPTDATC:
                        WBPTTIMC,WBPTRDAT,WBPTSTAT,WBPTCOM1,WBPTCOM2,WBPTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBPAT1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WEBPATA1;WBPTWUID,WBPTLNUM,WBPTURNO,WBPTVNUM,WBPTDATC:      
                        WBPTTIMC,WBPTRDAT,WBPTSTAT,WBPTCOM1,WBPTCOM2,WBPTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBPAT1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WEBPATA1;WBPTWUID,WBPTLNUM,WBPTURNO,WBPTVNUM,WBPTDATC:      
                        WBPTTIMC,WBPTRDAT,WBPTSTAT,WBPTCOM1,WBPTCOM2,WBPTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBPAT1  RESET     KEY21                                                       
          UNLOCK    WEBPATA1                                                    
          RETURN
.
