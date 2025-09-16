.
. OBSMDTIO    
. --------
. Filename     : obsmdtaf.dat
.
RSOBMDT1  RESET     KEY14                                                       
          READ      OBSMDTA1,KEY14;;                                            
          RETURN
.
RAOBMDT1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      OBSMDTA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBMDT1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      OBSMDTA1,KEY14;OBMDURNO,OBMDNOTE,OBMDDATE,OBMDTIME,OBMDUSER:
                        OBMDOCCG,OBMDDELT,OBMDDDAT,OBMDDTIM,OBMDDUSE,OBMDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBMDT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OBSMDTA1;OBMDURNO,OBMDNOTE,OBMDDATE,OBMDTIME,OBMDUSER:      
                        OBMDOCCG,OBMDDELT,OBMDDDAT,OBMDDTIM,OBMDDUSE,OBMDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBMDT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OBSMDTA1;OBMDURNO,OBMDNOTE,OBMDDATE,OBMDTIME,OBMDUSER:      
                        OBMDOCCG,OBMDDELT,OBMDDDAT,OBMDDTIM,OBMDDUSE,OBMDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBMDT1                                                                        
          UPDATE    OBSMDTA1;OBMDURNO,OBMDNOTE,OBMDDATE,OBMDTIME,OBMDUSER:      
                        OBMDOCCG,OBMDDELT,OBMDDDAT,OBMDDTIM,OBMDDUSE,OBMDSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROBMDT1  RESET     KEY14                                                       
          WRITE     OBSMDTA1,KEY14;OBMDURNO,OBMDNOTE,OBMDDATE,OBMDTIME,OBMDUSER:
                        OBMDOCCG,OBMDDELT,OBMDDDAT,OBMDDTIM,OBMDDUSE,OBMDSPAR   
          RETURN
.
DEOBMDT1  RESET     KEY14                                                       
          DELETE    OBSMDTA1,KEY14                                              
          RETURN
.
RLOBMDT1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     OBSMDTA1,KEY14;OBMDURNO,OBMDNOTE,OBMDDATE,OBMDTIME,OBMDUSER:
                        OBMDOCCG,OBMDDELT,OBMDDDAT,OBMDDTIM,OBMDDUSE,OBMDSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOBMDT1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OBSMDTA1;OBMDURNO,OBMDNOTE,OBMDDATE,OBMDTIME,OBMDUSER:      
                        OBMDOCCG,OBMDDELT,OBMDDDAT,OBMDDTIM,OBMDDUSE,OBMDSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOBMDT1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OBSMDTA1;OBMDURNO,OBMDNOTE,OBMDDATE,OBMDTIME,OBMDUSER:      
                        OBMDOCCG,OBMDDELT,OBMDDDAT,OBMDDTIM,OBMDDUSE,OBMDSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOBMDT1  RESET     KEY14                                                       
          UNLOCK    OBSMDTA1                                                    
          RETURN
.
