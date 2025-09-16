.
. WATNBHIO    
. --------
. Filename     : watnbhaf.dat
.
RSWTNBH1  RESET     KEY17                                                       
          READ      WATNBHA1,KEY17;;                                            
          RETURN
.
RAWTNBH1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      WATNBHA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTNBH1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      WATNBHA1,KEY17;WTNHXDAT,WTNHDHBC,WTNHAGEN,WTNHBTCH,WTNHPENV:
                        WTNHSTAT,WTNHFDAT,WTNHFTIM,WTNHFVER,WTNHFNAM,WTNHRECS:  
                        WTNHPROC,WTNHRDEL,WTNHRINS,WTNHRERR,WTNHRWRN,WTNHLDAT:  
                        WTNHUSRS,WTNHUDAT,WTNHUTIM,WTNHSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTNBH1  MOVE      ZERO,OVRCD                                                  
          READKS    WATNBHA1;WTNHXDAT,WTNHDHBC,WTNHAGEN,WTNHBTCH,WTNHPENV:      
                        WTNHSTAT,WTNHFDAT,WTNHFTIM,WTNHFVER,WTNHFNAM,WTNHRECS:  
                        WTNHPROC,WTNHRDEL,WTNHRINS,WTNHRERR,WTNHRWRN,WTNHLDAT:  
                        WTNHUSRS,WTNHUDAT,WTNHUTIM,WTNHSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTNBH1  MOVE      ZERO,OVRCD                                                  
          READKP    WATNBHA1;WTNHXDAT,WTNHDHBC,WTNHAGEN,WTNHBTCH,WTNHPENV:      
                        WTNHSTAT,WTNHFDAT,WTNHFTIM,WTNHFVER,WTNHFNAM,WTNHRECS:  
                        WTNHPROC,WTNHRDEL,WTNHRINS,WTNHRERR,WTNHRWRN,WTNHLDAT:  
                        WTNHUSRS,WTNHUDAT,WTNHUTIM,WTNHSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTNBH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WATNBHA1;WTNHXDAT,WTNHDHBC,WTNHAGEN,WTNHBTCH,WTNHPENV:      
                        WTNHSTAT,WTNHFDAT,WTNHFTIM,WTNHFVER,WTNHFNAM,WTNHRECS:  
                        WTNHPROC,WTNHRDEL,WTNHRINS,WTNHRERR,WTNHRWRN,WTNHLDAT:  
                        WTNHUSRS,WTNHUDAT,WTNHUTIM,WTNHSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTNBH1  RESET     KEY17                                                       
          WRITE     WATNBHA1,KEY17;WTNHXDAT,WTNHDHBC,WTNHAGEN,WTNHBTCH,WTNHPENV:
                        WTNHSTAT,WTNHFDAT,WTNHFTIM,WTNHFVER,WTNHFNAM,WTNHRECS:  
                        WTNHPROC,WTNHRDEL,WTNHRINS,WTNHRERR,WTNHRWRN,WTNHLDAT:  
                        WTNHUSRS,WTNHUDAT,WTNHUTIM,WTNHSPAR                     
          RETURN
.
DEWTNBH1  RESET     KEY17                                                       
          DELETE    WATNBHA1,KEY17                                              
          RETURN
.
RLWTNBH1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     WATNBHA1,KEY17;WTNHXDAT,WTNHDHBC,WTNHAGEN,WTNHBTCH,WTNHPENV:
                        WTNHSTAT,WTNHFDAT,WTNHFTIM,WTNHFVER,WTNHFNAM,WTNHRECS:  
                        WTNHPROC,WTNHRDEL,WTNHRINS,WTNHRERR,WTNHRWRN,WTNHLDAT:  
                        WTNHUSRS,WTNHUDAT,WTNHUTIM,WTNHSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTNBH1  MOVE      ZERO,OVRCD                                                  
          READLKS   WATNBHA1;WTNHXDAT,WTNHDHBC,WTNHAGEN,WTNHBTCH,WTNHPENV:      
                        WTNHSTAT,WTNHFDAT,WTNHFTIM,WTNHFVER,WTNHFNAM,WTNHRECS:  
                        WTNHPROC,WTNHRDEL,WTNHRINS,WTNHRERR,WTNHRWRN,WTNHLDAT:  
                        WTNHUSRS,WTNHUDAT,WTNHUTIM,WTNHSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTNBH1  MOVE      ZERO,OVRCD                                                  
          READLKP   WATNBHA1;WTNHXDAT,WTNHDHBC,WTNHAGEN,WTNHBTCH,WTNHPENV:      
                        WTNHSTAT,WTNHFDAT,WTNHFTIM,WTNHFVER,WTNHFNAM,WTNHRECS:  
                        WTNHPROC,WTNHRDEL,WTNHRINS,WTNHRERR,WTNHRWRN,WTNHLDAT:  
                        WTNHUSRS,WTNHUDAT,WTNHUTIM,WTNHSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTNBH1  RESET     KEY17                                                       
          UNLOCK    WATNBHA1                                                    
          RETURN
.
