.
. IBASEQIO    
. --------
. Filename     : ibaseqaf.dat
.
RSIBSEQ1  RESET     KEY8                                                        
          READ      IBASEQA1,KEY8;;                                             
          RETURN
.
RAIBSEQ1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      IBASEQA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBSEQ1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      IBASEQA1,KEY8;IBSQTYPE,IBSQNEXT,IBSQDESC,IBSQMAXM,IBSQSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBSEQ1                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBASEQA1;IBSQTYPE,IBSQNEXT,IBSQDESC,IBSQMAXM,IBSQSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBSEQ1                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBASEQA1;IBSQTYPE,IBSQNEXT,IBSQDESC,IBSQMAXM,IBSQSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBSEQ1                                                                        
          UPDATE    IBASEQA1;IBSQTYPE,IBSQNEXT,IBSQDESC,IBSQMAXM,IBSQSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBSEQ1  RESET     KEY8                                                        
          WRITE     IBASEQA1,KEY8;IBSQTYPE,IBSQNEXT,IBSQDESC,IBSQMAXM,IBSQSPAR  
          RETURN
.
DEIBSEQ1  RESET     KEY8                                                        
          DELETE    IBASEQA1,KEY8                                               
          RETURN
.
RLIBSEQ1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     IBASEQA1,KEY8;IBSQTYPE,IBSQNEXT,IBSQDESC,IBSQMAXM,IBSQSPAR  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBSEQ1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   IBASEQA1;IBSQTYPE,IBSQNEXT,IBSQDESC,IBSQMAXM,IBSQSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBSEQ1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   IBASEQA1;IBSQTYPE,IBSQNEXT,IBSQDESC,IBSQMAXM,IBSQSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBSEQ1  RESET     KEY8                                                        
          UNLOCK    IBASEQA1                                                    
          RETURN
.
