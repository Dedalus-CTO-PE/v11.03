.
. PMSAUPIO    
. --------
. Filename     : pmsaupaf.dat
.
RSPMAUP1  RESET     KEY36                                                       
          READ      PMSAUPA1,KEY36;;                                            
          RETURN
.
RAPMAUP1  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAUPA1,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMAUP1  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      PMSAUPA1,KEY36;PMAPURNO,PMAPPNUM,PMAPWUID,PMAPDATE,PMAPTIME:
                        PMAPACTY,PMAPACCD,PMAPCOMM,PMAPSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMAUP1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSAUPA1;PMAPURNO,PMAPPNUM,PMAPWUID,PMAPDATE,PMAPTIME:      
                        PMAPACTY,PMAPACCD,PMAPCOMM,PMAPSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMAUP1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSAUPA1;PMAPURNO,PMAPPNUM,PMAPWUID,PMAPDATE,PMAPTIME:      
                        PMAPACTY,PMAPACCD,PMAPCOMM,PMAPSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMAUP1                                                                        
          UPDATE    PMSAUPA1;PMAPURNO,PMAPPNUM,PMAPWUID,PMAPDATE,PMAPTIME:      
                        PMAPACTY,PMAPACCD,PMAPCOMM,PMAPSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMAUP1  RESET     KEY36                                                       
          WRITE     PMSAUPA1,KEY36;PMAPURNO,PMAPPNUM,PMAPWUID,PMAPDATE,PMAPTIME:
                        PMAPACTY,PMAPACCD,PMAPCOMM,PMAPSPAR                     
          RETURN
.
DEPMAUP1  RESET     KEY36                                                       
          DELETE    PMSAUPA1,KEY36                                              
          RETURN
.
RLPMAUP1  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READL     PMSAUPA1,KEY36;PMAPURNO,PMAPPNUM,PMAPWUID,PMAPDATE,PMAPTIME:
                        PMAPACTY,PMAPACCD,PMAPCOMM,PMAPSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMAUP1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSAUPA1;PMAPURNO,PMAPPNUM,PMAPWUID,PMAPDATE,PMAPTIME:      
                        PMAPACTY,PMAPACCD,PMAPCOMM,PMAPSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMAUP1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSAUPA1;PMAPURNO,PMAPPNUM,PMAPWUID,PMAPDATE,PMAPTIME:      
                        PMAPACTY,PMAPACCD,PMAPCOMM,PMAPSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMAUP1  RESET     KEY36                                                       
          UNLOCK    PMSAUPA1                                                    
          RETURN
.
