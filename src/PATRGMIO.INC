.
. PATRGMIO    
. --------
. Filename     : patrgmaf.dat
.
RSPTRGM1  RESET     KEY10                                                       
          READ      PATRGMA1,KEY10;;                                            
          RETURN
.
RAPTRGM1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PATRGMA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTRGM1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PATRGMA1,KEY10;PTRGADMN,PTRGREGM,PTRGCNTR,PTRGCUID,PTRGCDAT:
                        PTRGCTIM,PTRGSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTRGM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATRGMA1;PTRGADMN,PTRGREGM,PTRGCNTR,PTRGCUID,PTRGCDAT:      
                        PTRGCTIM,PTRGSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTRGM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATRGMA1;PTRGADMN,PTRGREGM,PTRGCNTR,PTRGCUID,PTRGCDAT:      
                        PTRGCTIM,PTRGSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTRGM1                                                                        
          UPDATE    PATRGMA1;PTRGADMN,PTRGREGM,PTRGCNTR,PTRGCUID,PTRGCDAT:      
                        PTRGCTIM,PTRGSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTRGM1  RESET     KEY10                                                       
          WRITE     PATRGMA1,KEY10;PTRGADMN,PTRGREGM,PTRGCNTR,PTRGCUID,PTRGCDAT:
                        PTRGCTIM,PTRGSPAR                                       
          RETURN
.
DEPTRGM1  RESET     KEY10                                                       
          DELETE    PATRGMA1,KEY10                                              
          RETURN
.
RLPTRGM1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     PATRGMA1,KEY10;PTRGADMN,PTRGREGM,PTRGCNTR,PTRGCUID,PTRGCDAT:
                        PTRGCTIM,PTRGSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTRGM1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATRGMA1;PTRGADMN,PTRGREGM,PTRGCNTR,PTRGCUID,PTRGCDAT:      
                        PTRGCTIM,PTRGSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTRGM1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATRGMA1;PTRGADMN,PTRGREGM,PTRGCNTR,PTRGCUID,PTRGCDAT:      
                        PTRGCTIM,PTRGSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTRGM1  RESET     KEY10                                                       
          UNLOCK    PATRGMA1                                                    
          RETURN
.
RSPTRGM2  RESET     KEY20                                                       
          READ      PATRGMA2,KEY20;;                                            
          RETURN
.
RAPTRGM2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PATRGMA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTRGM2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PATRGMA2,KEY20;PTRGADMN,PTRGREGM,PTRGCNTR,PTRGCUID,PTRGCDAT:
                        PTRGCTIM,PTRGSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTRGM2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATRGMA2;PTRGADMN,PTRGREGM,PTRGCNTR,PTRGCUID,PTRGCDAT:      
                        PTRGCTIM,PTRGSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTRGM2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATRGMA2;PTRGADMN,PTRGREGM,PTRGCNTR,PTRGCUID,PTRGCDAT:      
                        PTRGCTIM,PTRGSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTRGM2                                                                        
          UPDATE    PATRGMA2;PTRGADMN,PTRGREGM,PTRGCNTR,PTRGCUID,PTRGCDAT:      
                        PTRGCTIM,PTRGSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTRGM2  RESET     KEY20                                                       
          WRITE     PATRGMA2,KEY20;PTRGADMN,PTRGREGM,PTRGCNTR,PTRGCUID,PTRGCDAT:
                        PTRGCTIM,PTRGSPAR                                       
          RETURN
.
DEPTRGM2  RESET     KEY20                                                       
          DELETE    PATRGMA2,KEY20                                              
          RETURN
.
RLPTRGM2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     PATRGMA2,KEY20;PTRGADMN,PTRGREGM,PTRGCNTR,PTRGCUID,PTRGCDAT:
                        PTRGCTIM,PTRGSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTRGM2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATRGMA2;PTRGADMN,PTRGREGM,PTRGCNTR,PTRGCUID,PTRGCDAT:      
                        PTRGCTIM,PTRGSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTRGM2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATRGMA2;PTRGADMN,PTRGREGM,PTRGCNTR,PTRGCUID,PTRGCDAT:      
                        PTRGCTIM,PTRGSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTRGM2  RESET     KEY20                                                       
          UNLOCK    PATRGMA2                                                    
          RETURN
.
