.
. PATDTHIO    
. --------
. Filename     : patdthaf.dat
.
RSPTDH1   RESET     KEY8                                                        
          READ      PATDTHA1,KEY8;;                                             
          RETURN
.
RAPTDH1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PATDTHA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTDH1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PATDTHA1,KEY8;PTDHURNO,PTDHWEBU,PTDHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTDH1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PATDTHA1;PTDHURNO,PTDHWEBU,PTDHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTDH1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PATDTHA1;PTDHURNO,PTDHWEBU,PTDHSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTDH1                                                                         
          UPDATE    PATDTHA1;PTDHURNO,PTDHWEBU,PTDHSPAR
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTDH1   RESET     KEY8                                                        
          WRITE     PATDTHA1,KEY8;PTDHURNO,PTDHWEBU,PTDHSPAR
          RETURN
.
DEPTDH1   RESET     KEY8                                                        
          DELETE    PATDTHA1,KEY8                                               
          RETURN
.
RLPTDH1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     PATDTHA1,KEY8;PTDHURNO,PTDHWEBU,PTDHSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTDH1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   PATDTHA1;PTDHURNO,PTDHWEBU,PTDHSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTDH1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   PATDTHA1;PTDHURNO,PTDHWEBU,PTDHSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTDH1   RESET     KEY8                                                        
          UNLOCK    PATDTHA1                                                    
          RETURN
.
