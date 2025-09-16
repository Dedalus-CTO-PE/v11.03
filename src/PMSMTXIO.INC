.
. PMSMTXIO    
. --------
. Filename     : pmsmtxaf.dat
.
RSPMMTX1  RESET     KEY17                                                       
          READ      PMSMTXA1,KEY17;;                                            
          RETURN
.
RAPMMTX1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMTXA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMMTX1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMTXA1,KEY17;PMMTURNO,PMMTNOTE,PMMTUNIQ,PMMTCMNT,PMMTSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMMTX1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSMTXA1;PMMTURNO,PMMTNOTE,PMMTUNIQ,PMMTCMNT,PMMTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMMTX1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSMTXA1;PMMTURNO,PMMTNOTE,PMMTUNIQ,PMMTCMNT,PMMTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMMTX1                                                                        
          UPDATE    PMSMTXA1;PMMTURNO,PMMTNOTE,PMMTUNIQ,PMMTCMNT,PMMTSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMMTX1  RESET     KEY17                                                       
          WRITE     PMSMTXA1,KEY17;PMMTURNO,PMMTNOTE,PMMTUNIQ,PMMTCMNT,PMMTSPAR 
          RETURN
.
DEPMMTX1  RESET     KEY17                                                       
          DELETE    PMSMTXA1,KEY17                                              
          RETURN
.
RLPMMTX1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     PMSMTXA1,KEY17;PMMTURNO,PMMTNOTE,PMMTUNIQ,PMMTCMNT,PMMTSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMMTX1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSMTXA1;PMMTURNO,PMMTNOTE,PMMTUNIQ,PMMTCMNT,PMMTSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMMTX1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSMTXA1;PMMTURNO,PMMTNOTE,PMMTUNIQ,PMMTCMNT,PMMTSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMMTX1  RESET     KEY17                                                       
          UNLOCK    PMSMTXA1                                                    
          RETURN
.
