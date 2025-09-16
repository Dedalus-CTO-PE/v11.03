.
. OBSCNBIO    
. --------
. Filename     : obscnbaf.dat
.
RSOBCB1   RESET     KEY15                                                       
          READ      OBSCNBA1,KEY15;;                                            
          RETURN
.
RAOBCB1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      OBSCNBA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBCB1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      OBSCNBA1,KEY15;OBCBVIS,OBCBCID,OBCBLNO,OBCBLDT              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBCB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    OBSCNBA1;OBCBVIS,OBCBCID,OBCBLNO,OBCBLDT                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBCB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    OBSCNBA1;OBCBVIS,OBCBCID,OBCBLNO,OBCBLDT                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBCB1                                                                         
          UPDATE    OBSCNBA1;OBCBVIS,OBCBCID,OBCBLNO,OBCBLDT                    
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROBCB1   RESET     KEY15                                                       
          WRITE     OBSCNBA1,KEY15;OBCBVIS,OBCBCID,OBCBLNO,OBCBLDT              
          RETURN
.
DEOBCB1   RESET     KEY15                                                       
          DELETE    OBSCNBA1,KEY15                                              
          RETURN
.
RLOBCB1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READL     OBSCNBA1,KEY15;OBCBVIS,OBCBCID,OBCBLNO,OBCBLDT              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOBCB1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   OBSCNBA1;OBCBVIS,OBCBCID,OBCBLNO,OBCBLDT                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOBCB1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   OBSCNBA1;OBCBVIS,OBCBCID,OBCBLNO,OBCBLDT                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOBCB1   RESET     KEY15                                                       
          UNLOCK    OBSCNBA1                                                    
          RETURN
.
