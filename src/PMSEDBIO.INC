.
. PMSEDBIO    
. --------
. Filename     : pmsedbaf.dat
.
RSPMEDB1  RESET     KEY28                                                       
          READ      PMSEDBA1,KEY28;;                                            
          RETURN
.
RAPMEDB1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEDBA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEDB1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEDBA1,KEY28;PMDBUNIQ,PMDBPRID,PMDBWBID,PMDBNVAL,PMDBDVAL:
                        PMDBVALU,PMDBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEDB1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSEDBA1;PMDBUNIQ,PMDBPRID,PMDBWBID,PMDBNVAL,PMDBDVAL:      
                        PMDBVALU,PMDBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEDB1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSEDBA1;PMDBUNIQ,PMDBPRID,PMDBWBID,PMDBNVAL,PMDBDVAL:      
                        PMDBVALU,PMDBSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEDB1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSEDBA1;PMDBUNIQ,PMDBPRID,PMDBWBID,PMDBNVAL,PMDBDVAL:      
                        PMDBVALU,PMDBSPAR                                       
          RETURN
.
WRPMEDB1  RESET     KEY28                                                       
          WRITE     PMSEDBA1,KEY28;PMDBUNIQ,PMDBPRID,PMDBWBID,PMDBNVAL,PMDBDVAL:
                        PMDBVALU,PMDBSPAR                                       
          RETURN
.
DEPMEDB1  RESET     KEY28                                                       
          DELETE    PMSEDBA1,KEY28                                              
          RETURN
.
