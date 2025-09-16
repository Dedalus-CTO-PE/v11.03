.
. PATRBLIO    
. --------
. Filename     : patrblaf.dat
.
RSPTRBL1  RESET     KEY19                                                       
          READ      PATRBLA1,KEY19;;                                            
          RETURN
.
RAPTRBL1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PATRBLA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTRBL1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PATRBLA1,KEY19;PTRBADMN,PTRBINVN,PTRBBRCD,PTRBAMNT,PTRBGAMN:
                        PTRBBTCH,PTRBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTRBL1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATRBLA1;PTRBADMN,PTRBINVN,PTRBBRCD,PTRBAMNT,PTRBGAMN:      
                        PTRBBTCH,PTRBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTRBL1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATRBLA1;PTRBADMN,PTRBINVN,PTRBBRCD,PTRBAMNT,PTRBGAMN:      
                        PTRBBTCH,PTRBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTRBL1                                                                        
          UPDATE    PATRBLA1;PTRBADMN,PTRBINVN,PTRBBRCD,PTRBAMNT,PTRBGAMN:      
                        PTRBBTCH,PTRBSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTRBL1  RESET     KEY19                                                       
          WRITE     PATRBLA1,KEY19;PTRBADMN,PTRBINVN,PTRBBRCD,PTRBAMNT,PTRBGAMN:
                        PTRBBTCH,PTRBSPAR                                       
          RETURN
.
DEPTRBL1  RESET     KEY19                                                       
          DELETE    PATRBLA1,KEY19                                              
          RETURN
.
RLPTRBL1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READL     PATRBLA1,KEY19;PTRBADMN,PTRBINVN,PTRBBRCD,PTRBAMNT,PTRBGAMN:
                        PTRBBTCH,PTRBSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTRBL1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATRBLA1;PTRBADMN,PTRBINVN,PTRBBRCD,PTRBAMNT,PTRBGAMN:      
                        PTRBBTCH,PTRBSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTRBL1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATRBLA1;PTRBADMN,PTRBINVN,PTRBBRCD,PTRBAMNT,PTRBGAMN:      
                        PTRBBTCH,PTRBSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTRBL1  RESET     KEY19                                                       
          UNLOCK    PATRBLA1                                                    
          RETURN
.
