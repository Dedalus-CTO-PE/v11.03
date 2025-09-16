.
. IBAGEDIO    
. --------
. Filename     : ibagedaf.dat
.
RSIBGE1   RESET     KEY14                                                       
          READ      IBAGEDA1,KEY14;;                                            
          RETURN
.
RAIBGE1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      IBAGEDA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBGE1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      IBAGEDA1,KEY14;IBGECODE,IBGEEDAT,IBGEAMNT,IBGESPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBGE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    IBAGEDA1;IBGECODE,IBGEEDAT,IBGEAMNT,IBGESPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBGE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    IBAGEDA1;IBGECODE,IBGEEDAT,IBGEAMNT,IBGESPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBGE1                                                                         
          UPDATE    IBAGEDA1;IBGECODE,IBGEEDAT,IBGEAMNT,IBGESPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBGE1   RESET     KEY14                                                       
          WRITE     IBAGEDA1,KEY14;IBGECODE,IBGEEDAT,IBGEAMNT,IBGESPAR          
          RETURN
.
DEIBGE1   RESET     KEY14                                                       
          DELETE    IBAGEDA1,KEY14                                              
          RETURN
.
RLIBGE1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     IBAGEDA1,KEY14;IBGECODE,IBGEEDAT,IBGEAMNT,IBGESPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBGE1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   IBAGEDA1;IBGECODE,IBGEEDAT,IBGEAMNT,IBGESPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBGE1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   IBAGEDA1;IBGECODE,IBGEEDAT,IBGEAMNT,IBGESPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBGE1   RESET     KEY14                                                       
          UNLOCK    IBAGEDA1                                                    
          RETURN
.
