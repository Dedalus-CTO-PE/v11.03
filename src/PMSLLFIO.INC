.
. PMSLLFIO    
. --------
. Filename     : pmsllfaf.dat
.
RSPMLLF1  RESET     KEY12                                                       
          READ      PMSLLFA1,KEY12;;                                            
          RETURN
.
RAPMLLF1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSLLFA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMLLF1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSLLFA1,KEY12;PMLLSEID,PMLLVISN,PMLLOSMT,PMLLSTAT,PMLLSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMLLF1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSLLFA1;PMLLSEID,PMLLVISN,PMLLOSMT,PMLLSTAT,PMLLSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMLLF1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSLLFA1;PMLLSEID,PMLLVISN,PMLLOSMT,PMLLSTAT,PMLLSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMLLF1                                                                        
          UPDATE    PMSLLFA1;PMLLSEID,PMLLVISN,PMLLOSMT,PMLLSTAT,PMLLSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMLLF1  RESET     KEY12                                                       
          WRITE     PMSLLFA1,KEY12;PMLLSEID,PMLLVISN,PMLLOSMT,PMLLSTAT,PMLLSPAR 
          RETURN
.
DEPMLLF1  RESET     KEY12                                                       
          DELETE    PMSLLFA1,KEY12                                              
          RETURN
.
RLPMLLF1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     PMSLLFA1,KEY12;PMLLSEID,PMLLVISN,PMLLOSMT,PMLLSTAT,PMLLSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMLLF1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSLLFA1;PMLLSEID,PMLLVISN,PMLLOSMT,PMLLSTAT,PMLLSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMLLF1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSLLFA1;PMLLSEID,PMLLVISN,PMLLOSMT,PMLLSTAT,PMLLSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMLLF1  RESET     KEY12                                                       
          UNLOCK    PMSLLFA1                                                    
          RETURN
.
