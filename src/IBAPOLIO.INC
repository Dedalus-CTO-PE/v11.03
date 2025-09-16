.
. IBAPOLIO    
. --------
. Filename     : ibapolaf.dat
.
RSIBPOL1  RESET     KEY10                                                       
          READ      IBAPOLA1,KEY10;;                                            
          RETURN
.
RAIBPOL1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      IBAPOLA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBPOL1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      IBAPOLA1,KEY10;IBPLUNIQ,IBPLTYPE,IBPLURNO,IBPLVISN,IBPLSKEY:
                        IBPLPSCD,IBPLSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBPOL1  MOVE      ZERO,OVRCD                                                  
          READKS    IBAPOLA1;IBPLUNIQ,IBPLTYPE,IBPLURNO,IBPLVISN,IBPLSKEY:      
                        IBPLPSCD,IBPLSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBPOL1  MOVE      ZERO,OVRCD                                                  
          READKP    IBAPOLA1;IBPLUNIQ,IBPLTYPE,IBPLURNO,IBPLVISN,IBPLSKEY:      
                        IBPLPSCD,IBPLSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBPOL1  MOVE      ZERO,OVRCD                                                  
          UPDATE    IBAPOLA1;IBPLUNIQ,IBPLTYPE,IBPLURNO,IBPLVISN,IBPLSKEY:      
                        IBPLPSCD,IBPLSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBPOL1  RESET     KEY10                                                       
          WRITE     IBAPOLA1,KEY10;IBPLUNIQ,IBPLTYPE,IBPLURNO,IBPLVISN,IBPLSKEY:
                        IBPLPSCD,IBPLSPAR                                       
          RETURN
.
DEIBPOL1  RESET     KEY10                                                       
          DELETE    IBAPOLA1,KEY10                                              
          RETURN
.
RLIBPOL1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     IBAPOLA1,KEY10;IBPLUNIQ,IBPLTYPE,IBPLURNO,IBPLVISN,IBPLSKEY:
                        IBPLPSCD,IBPLSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBPOL1  MOVE      ZERO,OVRCD                                                  
          READLKS   IBAPOLA1;IBPLUNIQ,IBPLTYPE,IBPLURNO,IBPLVISN,IBPLSKEY:      
                        IBPLPSCD,IBPLSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBPOL1  MOVE      ZERO,OVRCD                                                  
          READLKP   IBAPOLA1;IBPLUNIQ,IBPLTYPE,IBPLURNO,IBPLVISN,IBPLSKEY:      
                        IBPLPSCD,IBPLSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBPOL1  RESET     KEY10                                                       
          UNLOCK    IBAPOLA1                                                    
          RETURN
.
