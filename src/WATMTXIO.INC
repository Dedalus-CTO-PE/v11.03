.
. WATMTXIO    
. --------
. Filename     : watmtxaf.dat
.
RSWTMTX1  RESET     KEY31                                                       
          READ      WATMTXA1,KEY31;;                                            
          RETURN
.
RAWTMTX1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      WATMTXA1,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTMTX1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      WATMTXA1,KEY31;WTMTURNO,WTMTPROC,WTMTPCNT,WTMTTYPE,WTMTNOTE:
                        WTMTUNIQ,WTMTCMNT,WTMTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTMTX1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATMTXA1;WTMTURNO,WTMTPROC,WTMTPCNT,WTMTTYPE,WTMTNOTE:      
                        WTMTUNIQ,WTMTCMNT,WTMTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTMTX1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATMTXA1;WTMTURNO,WTMTPROC,WTMTPCNT,WTMTTYPE,WTMTNOTE:      
                        WTMTUNIQ,WTMTCMNT,WTMTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTMTX1                                                                        
          UPDATE    WATMTXA1;WTMTURNO,WTMTPROC,WTMTPCNT,WTMTTYPE,WTMTNOTE:      
                        WTMTUNIQ,WTMTCMNT,WTMTSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTMTX1  RESET     KEY31                                                       
          WRITE     WATMTXA1,KEY31;WTMTURNO,WTMTPROC,WTMTPCNT,WTMTTYPE,WTMTNOTE:
                        WTMTUNIQ,WTMTCMNT,WTMTSPAR                              
          RETURN
.
DEWTMTX1  RESET     KEY31                                                       
          DELETE    WATMTXA1,KEY31                                              
          RETURN
.
RLWTMTX1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READL     WATMTXA1,KEY31;WTMTURNO,WTMTPROC,WTMTPCNT,WTMTTYPE,WTMTNOTE:
                        WTMTUNIQ,WTMTCMNT,WTMTSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTMTX1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATMTXA1;WTMTURNO,WTMTPROC,WTMTPCNT,WTMTTYPE,WTMTNOTE:      
                        WTMTUNIQ,WTMTCMNT,WTMTSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTMTX1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATMTXA1;WTMTURNO,WTMTPROC,WTMTPCNT,WTMTTYPE,WTMTNOTE:      
                        WTMTUNIQ,WTMTCMNT,WTMTSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTMTX1  RESET     KEY31                                                       
          UNLOCK    WATMTXA1                                                    
          RETURN
.
