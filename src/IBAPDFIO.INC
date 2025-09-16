.
. IBAPDFIO    
. --------
. Filename     : ibapdfaf.dat
.
RSIBPD1   RESET     KEY20                                                       
          READ      IBAPDFA1,KEY20;;                                            
          RETURN
.
RAIBPD1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      IBAPDFA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBPD1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      IBAPDFA1,KEY20;IBPDPID,IBPDREP,IBPDUID,IBPDPRT,IBPDCOP:
                                   IBPDDOC,IBPDNUM,IBPDSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBPD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    IBAPDFA1;IBPDPID,IBPDREP,IBPDUID,IBPDPRT,IBPDCOP:
                             IBPDDOC,IBPDNUM,IBPDSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBPD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    IBAPDFA1;IBPDPID,IBPDREP,IBPDUID,IBPDPRT,IBPDCOP:
                             IBPDDOC,IBPDNUM,IBPDSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBPD1                                                                         
          UPDATE    IBAPDFA1;IBPDPID,IBPDREP,IBPDUID,IBPDPRT,IBPDCOP:
                             IBPDDOC,IBPDNUM,IBPDSPA            
          RETURN
.
WRIBPD1   RESET     KEY20                                                       
          WRITE     IBAPDFA1,KEY20;IBPDPID,IBPDREP,IBPDUID,IBPDPRT,IBPDCOP:
                                   IBPDDOC,IBPDNUM,IBPDSPA      
          RETURN
.
DEIBPD1   RESET     KEY20                                                       
          DELETE    IBAPDFA1,KEY20                                              
          RETURN
.
