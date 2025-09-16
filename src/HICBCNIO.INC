.
. HICBCNIO    
. --------
. Filename     : hicbcnaf.dat
.
RSHCBCN1  RESET     KEY33                                                       
          READ      HICBCNA1,KEY33;;                                            
          RETURN
.
RAHCBCN1  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      HICBCNA1,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCBCN1  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      HICBCNA1,KEY33;HCBCPMCI,HCBCPYEE,HCBCPSRV,HCBCBTCH,HCBCBCNT:
                        HCBCSTAT,HCBCCDAT,HCBCCTIM,HCBCCUID,HCBCUDAT,HCBCUTIM:  
                        HCBCUUID,HCBCSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCBCN1                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICBCNA1;HCBCPMCI,HCBCPYEE,HCBCPSRV,HCBCBTCH,HCBCBCNT:      
                        HCBCSTAT,HCBCCDAT,HCBCCTIM,HCBCCUID,HCBCUDAT,HCBCUTIM:  
                        HCBCUUID,HCBCSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCBCN1                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICBCNA1;HCBCPMCI,HCBCPYEE,HCBCPSRV,HCBCBTCH,HCBCBCNT:      
                        HCBCSTAT,HCBCCDAT,HCBCCTIM,HCBCCUID,HCBCUDAT,HCBCUTIM:  
                        HCBCUUID,HCBCSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCBCN1  PACK      HCBCUDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCBCUDAT  
          CLOCK     TIME,HCBCUTIM
.
          UPDATE    HICBCNA1;HCBCPMCI,HCBCPYEE,HCBCPSRV,HCBCBTCH,HCBCBCNT:      
                        HCBCSTAT,HCBCCDAT,HCBCCTIM,HCBCCUID,HCBCUDAT,HCBCUTIM:  
                        HCBCUUID,HCBCSPAR                                       
          RETURN
.
WRHCBCN1  PACK      HCBCCDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCBCCDAT  
          CLOCK     TIME,HCBCCTIM
.
          RESET     KEY33                                                       
          WRITE     HICBCNA1,KEY33;HCBCPMCI,HCBCPYEE,HCBCPSRV,HCBCBTCH,HCBCBCNT:
                        HCBCSTAT,HCBCCDAT,HCBCCTIM,HCBCCUID,HCBCUDAT,HCBCUTIM:  
                        HCBCUUID,HCBCSPAR                                       
          RETURN
.
DEHCBCN1  RESET     KEY33                                                       
          DELETE    HICBCNA1,KEY33                                              
          RETURN
.
RSHCBCN2  RESET     KEY33                                                       
          READ      HICBCNA2,KEY33;;                                            
          RETURN
.
RAHCBCN2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      HICBCNA2,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCBCN2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      HICBCNA2,KEY33;HCBCPMCI,HCBCPYEE,HCBCPSRV,HCBCBTCH,HCBCBCNT:
                        HCBCSTAT,HCBCCDAT,HCBCCTIM,HCBCCUID,HCBCUDAT,HCBCUTIM:  
                        HCBCUUID,HCBCSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCBCN2                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICBCNA2;HCBCPMCI,HCBCPYEE,HCBCPSRV,HCBCBTCH,HCBCBCNT:      
                        HCBCSTAT,HCBCCDAT,HCBCCTIM,HCBCCUID,HCBCUDAT,HCBCUTIM:  
                        HCBCUUID,HCBCSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCBCN2                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICBCNA2;HCBCPMCI,HCBCPYEE,HCBCPSRV,HCBCBTCH,HCBCBCNT:      
                        HCBCSTAT,HCBCCDAT,HCBCCTIM,HCBCCUID,HCBCUDAT,HCBCUTIM:  
                        HCBCUUID,HCBCSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCBCN2  PACK      HCBCUDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCBCUDAT  
          CLOCK     TIME,HCBCUTIM
.
          UPDATE    HICBCNA2;HCBCPMCI,HCBCPYEE,HCBCPSRV,HCBCBTCH,HCBCBCNT:      
                        HCBCSTAT,HCBCCDAT,HCBCCTIM,HCBCCUID,HCBCUDAT,HCBCUTIM:  
                        HCBCUUID,HCBCSPAR                                       
          RETURN
.
WRHCBCN2  PACK      HCBCCDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCBCCDAT  
          CLOCK     TIME,HCBCCTIM
.
          RESET     KEY33                                                       
          WRITE     HICBCNA2,KEY33;HCBCPMCI,HCBCPYEE,HCBCPSRV,HCBCBTCH,HCBCBCNT:
                        HCBCSTAT,HCBCCDAT,HCBCCTIM,HCBCCUID,HCBCUDAT,HCBCUTIM:  
                        HCBCUUID,HCBCSPAR                                       
          RETURN
.
DEHCBCN2  RESET     KEY33                                                       
          DELETE    HICBCNA2,KEY33                                              
          RETURN
.
