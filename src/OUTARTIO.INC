.
. OUTARTIO    
. --------
. Filename     : outartaf.dat
.
RSOTART1  RESET     KEY32                                                       
          READ      OUTARTA1,KEY32;;                                            
          RETURN
.
RAOTART1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      OUTARTA1,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTART1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      OUTARTA1,KEY32;OTARURNO,OTARREFN,OTARRQDT,OTARRQTM,OTARRDEP:
                                   OTARADEP,OTARPRDT,OTARPRHS,OTARPRSI,OTARCLTY:
                                   OTARCLID,OTARVIST,OTARTRRQ,OTARPCOM,OTARFINC:
                                   OTARPRIO,OTARSORF,OTARSARR,OTAROOBN,OTARSTAT:
                                   OTARRREQ,OTARRCAN,OTARCADT,OTARCATM,OTARCAUS:
                                   OTARBKNO,OTARBKSI,OTARBKCL,OTARBKDT,OTARCLST:
                                   OTARCLSN,OTARCLTM,OTARBKID,OTARCDAT,OTARCTIM:
                                   OTARCUID,OTARCPDT,OTARCPTM,OTARCPID,OTARFSRC:
                                   OTARINTR,OTARLNG1,OTARCMID,OTARSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTART1  MOVE      ZERO,OVRCD                                                  
          READKS    OUTARTA1;OTARURNO,OTARREFN,OTARRQDT,OTARRQTM,OTARRDEP:      
                             OTARADEP,OTARPRDT,OTARPRHS,OTARPRSI,OTARCLTY:      
                             OTARCLID,OTARVIST,OTARTRRQ,OTARPCOM,OTARFINC:      
                             OTARPRIO,OTARSORF,OTARSARR,OTAROOBN,OTARSTAT:      
                             OTARRREQ,OTARRCAN,OTARCADT,OTARCATM,OTARCAUS:      
                             OTARBKNO,OTARBKSI,OTARBKCL,OTARBKDT,OTARCLST:      
                             OTARCLSN,OTARCLTM,OTARBKID,OTARCDAT,OTARCTIM:      
                             OTARCUID,OTARCPDT,OTARCPTM,OTARCPID,OTARFSRC:      
                             OTARINTR,OTARLNG1,OTARCMID,OTARSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTART1  MOVE      ZERO,OVRCD                                                  
          READKP    OUTARTA1;OTARURNO,OTARREFN,OTARRQDT,OTARRQTM,OTARRDEP:      
                             OTARADEP,OTARPRDT,OTARPRHS,OTARPRSI,OTARCLTY:      
                             OTARCLID,OTARVIST,OTARTRRQ,OTARPCOM,OTARFINC:      
                             OTARPRIO,OTARSORF,OTARSARR,OTAROOBN,OTARSTAT:      
                             OTARRREQ,OTARRCAN,OTARCADT,OTARCATM,OTARCAUS:      
                             OTARBKNO,OTARBKSI,OTARBKCL,OTARBKDT,OTARCLST:      
                             OTARCLSN,OTARCLTM,OTARBKID,OTARCDAT,OTARCTIM:      
                             OTARCUID,OTARCPDT,OTARCPTM,OTARCPID,OTARFSRC:      
                             OTARINTR,OTARLNG1,OTARCMID,OTARSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTART1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTARTA1;OTARURNO,OTARREFN,OTARRQDT,OTARRQTM,OTARRDEP:      
                             OTARADEP,OTARPRDT,OTARPRHS,OTARPRSI,OTARCLTY:      
                             OTARCLID,OTARVIST,OTARTRRQ,OTARPCOM,OTARFINC:      
                             OTARPRIO,OTARSORF,OTARSARR,OTAROOBN,OTARSTAT:      
                             OTARRREQ,OTARRCAN,OTARCADT,OTARCATM,OTARCAUS:      
                             OTARBKNO,OTARBKSI,OTARBKCL,OTARBKDT,OTARCLST:      
                             OTARCLSN,OTARCLTM,OTARBKID,OTARCDAT,OTARCTIM:      
                             OTARCUID,OTARCPDT,OTARCPTM,OTARCPID,OTARFSRC:      
                             OTARINTR,OTARLNG1,OTARCMID,OTARSPAR                
          RETURN
.
WROTART1  RESET     KEY32                                                       
          WRITE     OUTARTA1,KEY32;OTARURNO,OTARREFN,OTARRQDT,OTARRQTM,OTARRDEP:
                                   OTARADEP,OTARPRDT,OTARPRHS,OTARPRSI,OTARCLTY:
                                   OTARCLID,OTARVIST,OTARTRRQ,OTARPCOM,OTARFINC:
                                   OTARPRIO,OTARSORF,OTARSARR,OTAROOBN,OTARSTAT:
                                   OTARRREQ,OTARRCAN,OTARCADT,OTARCATM,OTARCAUS:
                                   OTARBKNO,OTARBKSI,OTARBKCL,OTARBKDT,OTARCLST:
                                   OTARCLSN,OTARCLTM,OTARBKID,OTARCDAT,OTARCTIM:
                                   OTARCUID,OTARCPDT,OTARCPTM,OTARCPID,OTARFSRC:
                                   OTARINTR,OTARLNG1,OTARCMID,OTARSPAR          
          RETURN
.
DEOTART1  RESET     KEY32                                                       
          DELETE    OUTARTA1,KEY32                                              
          RETURN
.
RSOTART2  RESET     KEY33                                                       
          READ      OUTARTA2,KEY33;;                                            
          RETURN
.
RAOTART2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      OUTARTA2,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTART2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      OUTARTA2,KEY33;OTARURNO,OTARREFN,OTARRQDT,OTARRQTM,OTARRDEP:
                                   OTARADEP,OTARPRDT,OTARPRHS,OTARPRSI,OTARCLTY:
                                   OTARCLID,OTARVIST,OTARTRRQ,OTARPCOM,OTARFINC:
                                   OTARPRIO,OTARSORF,OTARSARR,OTAROOBN,OTARSTAT:
                                   OTARRREQ,OTARRCAN,OTARCADT,OTARCATM,OTARCAUS:
                                   OTARBKNO,OTARBKSI,OTARBKCL,OTARBKDT,OTARCLST:
                                   OTARCLSN,OTARCLTM,OTARBKID,OTARCDAT,OTARCTIM:
                                   OTARCUID,OTARCPDT,OTARCPTM,OTARCPID,OTARFSRC:
                                   OTARINTR,OTARLNG1,OTARCMID,OTARSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTART2  MOVE      ZERO,OVRCD                                                  
          READKS    OUTARTA2;OTARURNO,OTARREFN,OTARRQDT,OTARRQTM,OTARRDEP:      
                             OTARADEP,OTARPRDT,OTARPRHS,OTARPRSI,OTARCLTY:      
                             OTARCLID,OTARVIST,OTARTRRQ,OTARPCOM,OTARFINC:      
                             OTARPRIO,OTARSORF,OTARSARR,OTAROOBN,OTARSTAT:      
                             OTARRREQ,OTARRCAN,OTARCADT,OTARCATM,OTARCAUS:      
                             OTARBKNO,OTARBKSI,OTARBKCL,OTARBKDT,OTARCLST:      
                             OTARCLSN,OTARCLTM,OTARBKID,OTARCDAT,OTARCTIM:      
                             OTARCUID,OTARCPDT,OTARCPTM,OTARCPID,OTARFSRC:      
                             OTARINTR,OTARLNG1,OTARCMID,OTARSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTART2  MOVE      ZERO,OVRCD                                                  
          READKP    OUTARTA2;OTARURNO,OTARREFN,OTARRQDT,OTARRQTM,OTARRDEP:      
                             OTARADEP,OTARPRDT,OTARPRHS,OTARPRSI,OTARCLTY:      
                             OTARCLID,OTARVIST,OTARTRRQ,OTARPCOM,OTARFINC:      
                             OTARPRIO,OTARSORF,OTARSARR,OTAROOBN,OTARSTAT:      
                             OTARRREQ,OTARRCAN,OTARCADT,OTARCATM,OTARCAUS:      
                             OTARBKNO,OTARBKSI,OTARBKCL,OTARBKDT,OTARCLST:      
                             OTARCLSN,OTARCLTM,OTARBKID,OTARCDAT,OTARCTIM:      
                             OTARCUID,OTARCPDT,OTARCPTM,OTARCPID,OTARFSRC:      
                             OTARINTR,OTARLNG1,OTARCMID,OTARSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTART2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTARTA2;OTARURNO,OTARREFN,OTARRQDT,OTARRQTM,OTARRDEP:      
                             OTARADEP,OTARPRDT,OTARPRHS,OTARPRSI,OTARCLTY:      
                             OTARCLID,OTARVIST,OTARTRRQ,OTARPCOM,OTARFINC:      
                             OTARPRIO,OTARSORF,OTARSARR,OTAROOBN,OTARSTAT:      
                             OTARRREQ,OTARRCAN,OTARCADT,OTARCATM,OTARCAUS:      
                             OTARBKNO,OTARBKSI,OTARBKCL,OTARBKDT,OTARCLST:      
                             OTARCLSN,OTARCLTM,OTARBKID,OTARCDAT,OTARCTIM:      
                             OTARCUID,OTARCPDT,OTARCPTM,OTARCPID,OTARFSRC:      
                             OTARINTR,OTARLNG1,OTARCMID,OTARSPAR                
          RETURN
.
WROTART2  RESET     KEY33                                                       
          WRITE     OUTARTA2,KEY33;OTARURNO,OTARREFN,OTARRQDT,OTARRQTM,OTARRDEP:
                                   OTARADEP,OTARPRDT,OTARPRHS,OTARPRSI,OTARCLTY:
                                   OTARCLID,OTARVIST,OTARTRRQ,OTARPCOM,OTARFINC:
                                   OTARPRIO,OTARSORF,OTARSARR,OTAROOBN,OTARSTAT:
                                   OTARRREQ,OTARRCAN,OTARCADT,OTARCATM,OTARCAUS:
                                   OTARBKNO,OTARBKSI,OTARBKCL,OTARBKDT,OTARCLST:
                                   OTARCLSN,OTARCLTM,OTARBKID,OTARCDAT,OTARCTIM:
                                   OTARCUID,OTARCPDT,OTARCPTM,OTARCPID,OTARFSRC:
                                   OTARINTR,OTARLNG1,OTARCMID,OTARSPAR          
          RETURN
.
DEOTART2  RESET     KEY33                                                       
          DELETE    OUTARTA2,KEY33                                              
          RETURN
.
RSOTART3  RESET     KEY41                                                       
          READ      OUTARTA3,KEY41;;                                            
          RETURN
.
RAOTART3  RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READ      OUTARTA3,KEY41;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTART3  RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READ      OUTARTA3,KEY41;OTARURNO,OTARREFN,OTARRQDT,OTARRQTM,OTARRDEP:
                                   OTARADEP,OTARPRDT,OTARPRHS,OTARPRSI,OTARCLTY:
                                   OTARCLID,OTARVIST,OTARTRRQ,OTARPCOM,OTARFINC:
                                   OTARPRIO,OTARSORF,OTARSARR,OTAROOBN,OTARSTAT:
                                   OTARRREQ,OTARRCAN,OTARCADT,OTARCATM,OTARCAUS:
                                   OTARBKNO,OTARBKSI,OTARBKCL,OTARBKDT,OTARCLST:
                                   OTARCLSN,OTARCLTM,OTARBKID,OTARCDAT,OTARCTIM:
                                   OTARCUID,OTARCPDT,OTARCPTM,OTARCPID,OTARFSRC:
                                   OTARINTR,OTARLNG1,OTARCMID,OTARSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTART3  MOVE      ZERO,OVRCD                                                  
          READKS    OUTARTA3;OTARURNO,OTARREFN,OTARRQDT,OTARRQTM,OTARRDEP:      
                             OTARADEP,OTARPRDT,OTARPRHS,OTARPRSI,OTARCLTY:      
                             OTARCLID,OTARVIST,OTARTRRQ,OTARPCOM,OTARFINC:      
                             OTARPRIO,OTARSORF,OTARSARR,OTAROOBN,OTARSTAT:      
                             OTARRREQ,OTARRCAN,OTARCADT,OTARCATM,OTARCAUS:      
                             OTARBKNO,OTARBKSI,OTARBKCL,OTARBKDT,OTARCLST:      
                             OTARCLSN,OTARCLTM,OTARBKID,OTARCDAT,OTARCTIM:      
                             OTARCUID,OTARCPDT,OTARCPTM,OTARCPID,OTARFSRC:      
                             OTARINTR,OTARLNG1,OTARCMID,OTARSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTART3  MOVE      ZERO,OVRCD                                                  
          READKP    OUTARTA3;OTARURNO,OTARREFN,OTARRQDT,OTARRQTM,OTARRDEP:      
                             OTARADEP,OTARPRDT,OTARPRHS,OTARPRSI,OTARCLTY:      
                             OTARCLID,OTARVIST,OTARTRRQ,OTARPCOM,OTARFINC:      
                             OTARPRIO,OTARSORF,OTARSARR,OTAROOBN,OTARSTAT:      
                             OTARRREQ,OTARRCAN,OTARCADT,OTARCATM,OTARCAUS:      
                             OTARBKNO,OTARBKSI,OTARBKCL,OTARBKDT,OTARCLST:      
                             OTARCLSN,OTARCLTM,OTARBKID,OTARCDAT,OTARCTIM:      
                             OTARCUID,OTARCPDT,OTARCPTM,OTARCPID,OTARFSRC:      
                             OTARINTR,OTARLNG1,OTARCMID,OTARSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTART3  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTARTA3;OTARURNO,OTARREFN,OTARRQDT,OTARRQTM,OTARRDEP:      
                             OTARADEP,OTARPRDT,OTARPRHS,OTARPRSI,OTARCLTY:      
                             OTARCLID,OTARVIST,OTARTRRQ,OTARPCOM,OTARFINC:      
                             OTARPRIO,OTARSORF,OTARSARR,OTAROOBN,OTARSTAT:      
                             OTARRREQ,OTARRCAN,OTARCADT,OTARCATM,OTARCAUS:      
                             OTARBKNO,OTARBKSI,OTARBKCL,OTARBKDT,OTARCLST:      
                             OTARCLSN,OTARCLTM,OTARBKID,OTARCDAT,OTARCTIM:      
                             OTARCUID,OTARCPDT,OTARCPTM,OTARCPID,OTARFSRC:      
                             OTARINTR,OTARLNG1,OTARCMID,OTARSPAR                
          RETURN
.
WROTART3  RESET     KEY41                                                       
          WRITE     OUTARTA3,KEY41;OTARURNO,OTARREFN,OTARRQDT,OTARRQTM,OTARRDEP:
                                   OTARADEP,OTARPRDT,OTARPRHS,OTARPRSI,OTARCLTY:
                                   OTARCLID,OTARVIST,OTARTRRQ,OTARPCOM,OTARFINC:
                                   OTARPRIO,OTARSORF,OTARSARR,OTAROOBN,OTARSTAT:
                                   OTARRREQ,OTARRCAN,OTARCADT,OTARCATM,OTARCAUS:
                                   OTARBKNO,OTARBKSI,OTARBKCL,OTARBKDT,OTARCLST:
                                   OTARCLSN,OTARCLTM,OTARBKID,OTARCDAT,OTARCTIM:
                                   OTARCUID,OTARCPDT,OTARCPTM,OTARCPID,OTARFSRC:
                                   OTARINTR,OTARLNG1,OTARCMID,OTARSPAR          
          RETURN
.
DEOTART3  RESET     KEY41                                                       
          DELETE    OUTARTA3,KEY41                                              
          RETURN
.
RSOTART4  RESET     KEY42                                                       
          READ      OUTARTA4,KEY42;;                                            
          RETURN
.
RAOTART4  RESET     KEY42                                                       
          MOVE      ZERO,OVRCD
          READ      OUTARTA4,KEY42;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTART4  RESET     KEY42                                                       
          MOVE      ZERO,OVRCD
          READ      OUTARTA4,KEY42;OTARURNO,OTARREFN,OTARRQDT,OTARRQTM,OTARRDEP:
                                   OTARADEP,OTARPRDT,OTARPRHS,OTARPRSI,OTARCLTY:
                                   OTARCLID,OTARVIST,OTARTRRQ,OTARPCOM,OTARFINC:
                                   OTARPRIO,OTARSORF,OTARSARR,OTAROOBN,OTARSTAT:
                                   OTARRREQ,OTARRCAN,OTARCADT,OTARCATM,OTARCAUS:
                                   OTARBKNO,OTARBKSI,OTARBKCL,OTARBKDT,OTARCLST:
                                   OTARCLSN,OTARCLTM,OTARBKID,OTARCDAT,OTARCTIM:
                                   OTARCUID,OTARCPDT,OTARCPTM,OTARCPID,OTARFSRC:
                                   OTARINTR,OTARLNG1,OTARCMID,OTARSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTART4  MOVE      ZERO,OVRCD                                                  
          READKS    OUTARTA4;OTARURNO,OTARREFN,OTARRQDT,OTARRQTM,OTARRDEP:      
                             OTARADEP,OTARPRDT,OTARPRHS,OTARPRSI,OTARCLTY:      
                             OTARCLID,OTARVIST,OTARTRRQ,OTARPCOM,OTARFINC:      
                             OTARPRIO,OTARSORF,OTARSARR,OTAROOBN,OTARSTAT:      
                             OTARRREQ,OTARRCAN,OTARCADT,OTARCATM,OTARCAUS:      
                             OTARBKNO,OTARBKSI,OTARBKCL,OTARBKDT,OTARCLST:      
                             OTARCLSN,OTARCLTM,OTARBKID,OTARCDAT,OTARCTIM:      
                             OTARCUID,OTARCPDT,OTARCPTM,OTARCPID,OTARFSRC:      
                             OTARINTR,OTARLNG1,OTARCMID,OTARSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTART4  MOVE      ZERO,OVRCD                                                  
          READKP    OUTARTA4;OTARURNO,OTARREFN,OTARRQDT,OTARRQTM,OTARRDEP:      
                             OTARADEP,OTARPRDT,OTARPRHS,OTARPRSI,OTARCLTY:      
                             OTARCLID,OTARVIST,OTARTRRQ,OTARPCOM,OTARFINC:      
                             OTARPRIO,OTARSORF,OTARSARR,OTAROOBN,OTARSTAT:      
                             OTARRREQ,OTARRCAN,OTARCADT,OTARCATM,OTARCAUS:      
                             OTARBKNO,OTARBKSI,OTARBKCL,OTARBKDT,OTARCLST:      
                             OTARCLSN,OTARCLTM,OTARBKID,OTARCDAT,OTARCTIM:      
                             OTARCUID,OTARCPDT,OTARCPTM,OTARCPID,OTARFSRC:      
                             OTARINTR,OTARLNG1,OTARCMID,OTARSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTART4  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTARTA4;OTARURNO,OTARREFN,OTARRQDT,OTARRQTM,OTARRDEP:      
                             OTARADEP,OTARPRDT,OTARPRHS,OTARPRSI,OTARCLTY:      
                             OTARCLID,OTARVIST,OTARTRRQ,OTARPCOM,OTARFINC:      
                             OTARPRIO,OTARSORF,OTARSARR,OTAROOBN,OTARSTAT:      
                             OTARRREQ,OTARRCAN,OTARCADT,OTARCATM,OTARCAUS:      
                             OTARBKNO,OTARBKSI,OTARBKCL,OTARBKDT,OTARCLST:      
                             OTARCLSN,OTARCLTM,OTARBKID,OTARCDAT,OTARCTIM:      
                             OTARCUID,OTARCPDT,OTARCPTM,OTARCPID,OTARFSRC:      
                             OTARINTR,OTARLNG1,OTARCMID,OTARSPAR                
          RETURN
.
WROTART4  RESET     KEY42                                                       
          WRITE     OUTARTA4,KEY42;OTARURNO,OTARREFN,OTARRQDT,OTARRQTM,OTARRDEP:
                                   OTARADEP,OTARPRDT,OTARPRHS,OTARPRSI,OTARCLTY:
                                   OTARCLID,OTARVIST,OTARTRRQ,OTARPCOM,OTARFINC:
                                   OTARPRIO,OTARSORF,OTARSARR,OTAROOBN,OTARSTAT:
                                   OTARRREQ,OTARRCAN,OTARCADT,OTARCATM,OTARCAUS:
                                   OTARBKNO,OTARBKSI,OTARBKCL,OTARBKDT,OTARCLST:
                                   OTARCLSN,OTARCLTM,OTARBKID,OTARCDAT,OTARCTIM:
                                   OTARCUID,OTARCPDT,OTARCPTM,OTARCPID,OTARFSRC:
                                   OTARINTR,OTARLNG1,OTARCMID,OTARSPAR          
          RETURN
.
DEOTART4  RESET     KEY42                                                       
          DELETE    OUTARTA4,KEY42                                              
          RETURN
.
