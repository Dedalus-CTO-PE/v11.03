.V9.03.001 09/07/2004 PV  CAR 50359 Added PMMDDDAT, PMMDDTIM, PMMDDUSE, PMMDDOCC
.
. PMSMDTIO    
. --------
. Filename     : pmsmdtaf.dat
.
RSPMMDT1  RESET     KEY14                                                       
          READ      PMSMDTA1,KEY14;;                                            
          RETURN
.
RAPMMDT1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMDTA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMMDT1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PMSMDTA1,KEY14;PMMDURNO,PMMDNOTE,PMMDDATE,PMMDTIME,PMMDUSER:
                        PMMDOCCG,PMMDDELT,PMMDDDAT,PMMDDTIM,PMMDDUSE,PMMDDOCC:
                        PMMDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMMDT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSMDTA1;PMMDURNO,PMMDNOTE,PMMDDATE,PMMDTIME,PMMDUSER:      
                        PMMDOCCG,PMMDDELT,PMMDDDAT,PMMDDTIM,PMMDDUSE,PMMDDOCC:
                        PMMDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMMDT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSMDTA1;PMMDURNO,PMMDNOTE,PMMDDATE,PMMDTIME,PMMDUSER:      
                        PMMDOCCG,PMMDDELT,PMMDDDAT,PMMDDTIM,PMMDDUSE,PMMDDOCC:
                        PMMDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMMDT1                                                                        
          UPDATE    PMSMDTA1;PMMDURNO,PMMDNOTE,PMMDDATE,PMMDTIME,PMMDUSER:      
                        PMMDOCCG,PMMDDELT,PMMDDDAT,PMMDDTIM,PMMDDUSE,PMMDDOCC:
                        PMMDSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMMDT1  RESET     KEY14                                                       
          WRITE     PMSMDTA1,KEY14;PMMDURNO,PMMDNOTE,PMMDDATE,PMMDTIME,PMMDUSER:
                        PMMDOCCG,PMMDDELT,PMMDDDAT,PMMDDTIM,PMMDDUSE,PMMDDOCC:
                        PMMDSPAR                              
          RETURN
.
DEPMMDT1  RESET     KEY14                                                       
          DELETE    PMSMDTA1,KEY14                                              
          RETURN
.
RLPMMDT1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     PMSMDTA1,KEY14;PMMDURNO,PMMDNOTE,PMMDDATE,PMMDTIME,PMMDUSER:
                        PMMDOCCG,PMMDDELT,PMMDDDAT,PMMDDTIM,PMMDDUSE,PMMDDOCC:
                        PMMDSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMMDT1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSMDTA1;PMMDURNO,PMMDNOTE,PMMDDATE,PMMDTIME,PMMDUSER:      
                        PMMDOCCG,PMMDDELT,PMMDDDAT,PMMDDTIM,PMMDDUSE,PMMDDOCC:
                        PMMDSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMMDT1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSMDTA1;PMMDURNO,PMMDNOTE,PMMDDATE,PMMDTIME,PMMDUSER:      
                        PMMDOCCG,PMMDDELT,PMMDDDAT,PMMDDTIM,PMMDDUSE,PMMDDOCC:
                        PMMDSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMMDT1  RESET     KEY14                                                       
          UNLOCK    PMSMDTA1                                                    
          RETURN
.
