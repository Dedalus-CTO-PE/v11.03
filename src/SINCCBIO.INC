.
. SINCCBIO    
. --------
. Filename     : sinccbaf.dat
.
RSSICB1   RESET     KEY11                                                       
          READ      SINCCBA1,KEY11;;                                            
          RETURN
.
RASICB1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCBA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICB1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      SINCCBA1,KEY11;SICBCST,SICBDAT,SICBAMT,SICBBUD,SICBSPAR     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCCBA1;SICBCST,SICBDAT,SICBAMT,SICBBUD,SICBSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCCBA1;SICBCST,SICBDAT,SICBAMT,SICBBUD,SICBSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICB1                                                                         
          UPDATE    SINCCBA1;SICBCST,SICBDAT,SICBAMT,SICBBUD,SICBSPAR           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSICB1   RESET     KEY11                                                       
          WRITE     SINCCBA1,KEY11;SICBCST,SICBDAT,SICBAMT,SICBBUD,SICBSPAR     
          RETURN
.
DESICB1   RESET     KEY11                                                       
          DELETE    SINCCBA1,KEY11                                              
          RETURN
.
RLSICB1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     SINCCBA1,KEY11;SICBCST,SICBDAT,SICBAMT,SICBBUD,SICBSPAR     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSICB1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINCCBA1;SICBCST,SICBDAT,SICBAMT,SICBBUD,SICBSPAR           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSICB1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINCCBA1;SICBCST,SICBDAT,SICBAMT,SICBBUD,SICBSPAR           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSICB1   RESET     KEY11                                                       
          UNLOCK    SINCCBA1                                                    
          RETURN
.
