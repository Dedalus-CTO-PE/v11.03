.
. OBSAUDIO    
. --------
. Filename     : obsaudaf.dat
.
RSOBAUD1  RESET     KEY47                                                       
          READ      OBSAUDA1,KEY47;;                                            
          RETURN
.
RAOBAUD1  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      OBSAUDA1,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBAUD1  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      OBSAUDA1,KEY47;OBAUURNO,OBAUVISN,OBAUCORR,OBAUDATE,OBAUTIME:
                        OBAUWEBU,OBAUTYPE,OBAUREAS,OBAUSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBAUD1  MOVE      ZERO,OVRCD                                                  
          READKS    OBSAUDA1;OBAUURNO,OBAUVISN,OBAUCORR,OBAUDATE,OBAUTIME:      
                        OBAUWEBU,OBAUTYPE,OBAUREAS,OBAUSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBAUD1  MOVE      ZERO,OVRCD                                                  
          READKP    OBSAUDA1;OBAUURNO,OBAUVISN,OBAUCORR,OBAUDATE,OBAUTIME:      
                        OBAUWEBU,OBAUTYPE,OBAUREAS,OBAUSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBAUD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OBSAUDA1;OBAUURNO,OBAUVISN,OBAUCORR,OBAUDATE,OBAUTIME:      
                        OBAUWEBU,OBAUTYPE,OBAUREAS,OBAUSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROBAUD1  RESET     KEY47                                                       
          WRITE     OBSAUDA1,KEY47;OBAUURNO,OBAUVISN,OBAUCORR,OBAUDATE,OBAUTIME:
                        OBAUWEBU,OBAUTYPE,OBAUREAS,OBAUSPAR                     
          RETURN
.
DEOBAUD1  RESET     KEY47                                                       
          DELETE    OBSAUDA1,KEY47                                              
          RETURN
.
RLOBAUD1  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READL     OBSAUDA1,KEY47;OBAUURNO,OBAUVISN,OBAUCORR,OBAUDATE,OBAUTIME:
                        OBAUWEBU,OBAUTYPE,OBAUREAS,OBAUSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOBAUD1  MOVE      ZERO,OVRCD                                                  
          READLKS   OBSAUDA1;OBAUURNO,OBAUVISN,OBAUCORR,OBAUDATE,OBAUTIME:      
                        OBAUWEBU,OBAUTYPE,OBAUREAS,OBAUSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOBAUD1  MOVE      ZERO,OVRCD                                                  
          READLKP   OBSAUDA1;OBAUURNO,OBAUVISN,OBAUCORR,OBAUDATE,OBAUTIME:      
                        OBAUWEBU,OBAUTYPE,OBAUREAS,OBAUSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOBAUD1  RESET     KEY47                                                       
          UNLOCK    OBSAUDA1                                                    
          RETURN
.
RSOBAUD2  RESET     KEY47                                                       
          READ      OBSAUDA2,KEY47;;                                            
          RETURN
.
RAOBAUD2  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      OBSAUDA2,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBAUD2  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      OBSAUDA2,KEY47;OBAUURNO,OBAUVISN,OBAUCORR,OBAUDATE,OBAUTIME:
                        OBAUWEBU,OBAUTYPE,OBAUREAS,OBAUSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBAUD2  MOVE      ZERO,OVRCD                                                  
          READKS    OBSAUDA2;OBAUURNO,OBAUVISN,OBAUCORR,OBAUDATE,OBAUTIME:      
                        OBAUWEBU,OBAUTYPE,OBAUREAS,OBAUSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBAUD2  MOVE      ZERO,OVRCD                                                  
          READKP    OBSAUDA2;OBAUURNO,OBAUVISN,OBAUCORR,OBAUDATE,OBAUTIME:      
                        OBAUWEBU,OBAUTYPE,OBAUREAS,OBAUSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBAUD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OBSAUDA2;OBAUURNO,OBAUVISN,OBAUCORR,OBAUDATE,OBAUTIME:      
                        OBAUWEBU,OBAUTYPE,OBAUREAS,OBAUSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROBAUD2  RESET     KEY47                                                       
          WRITE     OBSAUDA2,KEY47;OBAUURNO,OBAUVISN,OBAUCORR,OBAUDATE,OBAUTIME:
                        OBAUWEBU,OBAUTYPE,OBAUREAS,OBAUSPAR                     
          RETURN
.
DEOBAUD2  RESET     KEY47                                                       
          DELETE    OBSAUDA2,KEY47                                              
          RETURN
.
RLOBAUD2  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READL     OBSAUDA2,KEY47;OBAUURNO,OBAUVISN,OBAUCORR,OBAUDATE,OBAUTIME:
                        OBAUWEBU,OBAUTYPE,OBAUREAS,OBAUSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOBAUD2  MOVE      ZERO,OVRCD                                                  
          READLKS   OBSAUDA2;OBAUURNO,OBAUVISN,OBAUCORR,OBAUDATE,OBAUTIME:      
                        OBAUWEBU,OBAUTYPE,OBAUREAS,OBAUSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOBAUD2  MOVE      ZERO,OVRCD                                                  
          READLKP   OBSAUDA2;OBAUURNO,OBAUVISN,OBAUCORR,OBAUDATE,OBAUTIME:      
                        OBAUWEBU,OBAUTYPE,OBAUREAS,OBAUSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOBAUD2  RESET     KEY47                                                       
          UNLOCK    OBSAUDA2                                                    
          RETURN
.
