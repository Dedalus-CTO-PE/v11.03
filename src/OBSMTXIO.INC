.
. OBSMTXIO    
. --------
. Filename     : obsmtxaf.dat
.
RSOBMTX1  RESET     KEY17                                                       
          READ      OBSMTXA1,KEY17;;                                            
          RETURN
.
RAOBMTX1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      OBSMTXA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBMTX1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      OBSMTXA1,KEY17;OBMTURNO,OBMTNOTE,OBMTUNIQ,OBMTCMNT,OBMTSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBMTX1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OBSMTXA1;OBMTURNO,OBMTNOTE,OBMTUNIQ,OBMTCMNT,OBMTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBMTX1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OBSMTXA1;OBMTURNO,OBMTNOTE,OBMTUNIQ,OBMTCMNT,OBMTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBMTX1                                                                        
          UPDATE    OBSMTXA1;OBMTURNO,OBMTNOTE,OBMTUNIQ,OBMTCMNT,OBMTSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROBMTX1  RESET     KEY17                                                       
          WRITE     OBSMTXA1,KEY17;OBMTURNO,OBMTNOTE,OBMTUNIQ,OBMTCMNT,OBMTSPAR 
          RETURN
.
DEOBMTX1  RESET     KEY17                                                       
          DELETE    OBSMTXA1,KEY17                                              
          RETURN
.
RLOBMTX1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     OBSMTXA1,KEY17;OBMTURNO,OBMTNOTE,OBMTUNIQ,OBMTCMNT,OBMTSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOBMTX1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OBSMTXA1;OBMTURNO,OBMTNOTE,OBMTUNIQ,OBMTCMNT,OBMTSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOBMTX1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OBSMTXA1;OBMTURNO,OBMTNOTE,OBMTUNIQ,OBMTCMNT,OBMTSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOBMTX1  RESET     KEY17                                                       
          UNLOCK    OBSMTXA1                                                    
          RETURN
.
