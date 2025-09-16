.
. HICBTCIO    
. --------
. Filename     : hicbtcaf.dat
.
RSHCBTC1  RESET     KEY33                                                       
          READ      HICBTCA1,KEY33;;                                            
          RETURN
.
RAHCBTC1  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      HICBTCA1,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCBTC1  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      HICBTCA1,KEY33;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCBTC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICBTCA1;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:      
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCBTC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICBTCA1;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:      
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCBTC1  PACK      HCBTUDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCBTUDAT  
          CLOCK     TIME,HCBTUTIM
.
          UPDATE    HICBTCA1;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:      
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          RETURN
.
WRHCBTC1  PACK      HCBTCDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCBTCDAT  
          CLOCK     TIME,HCBTCTIM
.
          RESET     KEY33                                                       
          WRITE     HICBTCA1,KEY33;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          RETURN
.
DEHCBTC1  RESET     KEY33                                                       
          DELETE    HICBTCA1,KEY33                                              
          RETURN
.
RSHCBTC2  RESET     KEY43                                                       
          READ      HICBTCA2,KEY43;;                                            
          RETURN
.
RAHCBTC2  RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      HICBTCA2,KEY43;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCBTC2  RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      HICBTCA2,KEY43;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCBTC2                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICBTCA2;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:      
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCBTC2                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICBTCA2;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:      
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCBTC2  PACK      HCBTUDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCBTUDAT  
          CLOCK     TIME,HCBTUTIM
.
          UPDATE    HICBTCA2;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:      
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          RETURN
.
WRHCBTC2  PACK      HCBTCDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCBTCDAT  
          CLOCK     TIME,HCBTCTIM
.
          RESET     KEY43                                                       
          WRITE     HICBTCA2,KEY43;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          RETURN
.
DEHCBTC2  RESET     KEY43                                                       
          DELETE    HICBTCA2,KEY43                                              
          RETURN
.
RSHCBTC3  RESET     KEY55                                                       
          READ      HICBTCA3,KEY55;;                                            
          RETURN
.
RAHCBTC3  RESET     KEY55                                                       
          MOVE      ZERO,OVRCD
          READ      HICBTCA3,KEY55;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCBTC3  RESET     KEY55                                                       
          MOVE      ZERO,OVRCD
          READ      HICBTCA3,KEY55;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCBTC3                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICBTCA3;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:      
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCBTC3                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICBTCA3;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:      
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCBTC3  PACK      HCBTUDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCBTUDAT  
          CLOCK     TIME,HCBTUTIM
.
          UPDATE    HICBTCA3;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:      
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          RETURN
.
WRHCBTC3  PACK      HCBTCDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCBTCDAT  
          CLOCK     TIME,HCBTCTIM
.
          RESET     KEY55                                                       
          WRITE     HICBTCA3,KEY55;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          RETURN
.
DEHCBTC3  RESET     KEY55                                                       
          DELETE    HICBTCA3,KEY55                                              
          RETURN
.
RSHCBTC4  RESET     KEY43                                                       
          READ      HICBTCA4,KEY43;;                                            
          RETURN
.
RAHCBTC4  RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      HICBTCA4,KEY43;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCBTC4  RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      HICBTCA4,KEY43;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCBTC4                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICBTCA4;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:      
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCBTC4                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICBTCA4;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:      
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCBTC4  PACK      HCBTUDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCBTUDAT  
          CLOCK     TIME,HCBTUTIM
.
          UPDATE    HICBTCA4;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:      
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          RETURN
.
WRHCBTC4  PACK      HCBTCDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCBTCDAT  
          CLOCK     TIME,HCBTCTIM
.
          RESET     KEY43                                                       
          WRITE     HICBTCA4,KEY43;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          RETURN
.
DEHCBTC4  RESET     KEY43                                                       
          DELETE    HICBTCA4,KEY43                                              
          RETURN
.
RSHCBTC5  RESET     KEY35                                                       
          READ      HICBTCA5,KEY35;;                                            
          RETURN
.
RAHCBTC5  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      HICBTCA5,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCBTC5  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      HICBTCA5,KEY35;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCBTC5                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICBTCA5;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:      
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCBTC5                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICBTCA5;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:      
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCBTC5  PACK      HCBTUDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCBTUDAT  
          CLOCK     TIME,HCBTUTIM
.
          UPDATE    HICBTCA5;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:      
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          RETURN
.
WRHCBTC5  PACK      HCBTCDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCBTCDAT  
          CLOCK     TIME,HCBTCTIM
.
          RESET     KEY35                                                       
          WRITE     HICBTCA5,KEY35;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          RETURN
.
DEHCBTC5  RESET     KEY35                                                       
          DELETE    HICBTCA5,KEY35                                              
          RETURN
.
RSHCBTC6  RESET     KEY39                                                       
          READ      HICBTCA6,KEY39;;                                            
          RETURN
.
RAHCBTC6  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      HICBTCA6,KEY39;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCBTC6  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      HICBTCA6,KEY39;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCBTC6                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICBTCA6;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:      
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCBTC6                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICBTCA6;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:      
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCBTC6  PACK      HCBTUDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCBTUDAT  
          CLOCK     TIME,HCBTUTIM
.
          UPDATE    HICBTCA6;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:      
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          RETURN
.
WRHCBTC6  PACK      HCBTCDAT,CCC,CYY,CMM,CDD
          REP       " 0",HCBTCDAT  
          CLOCK     TIME,HCBTCTIM
.
          RESET     KEY39                                                       
          WRITE     HICBTCA6,KEY39;HCBTBTCH,HCBTPMCI,HCBTPYEE,HCBTPSRV,HCBTMPRA:
                        HCBTDATE,HCBTSITE,HCBTCTYP,HCBTCLID,HCBTCAMT,HCBTAMTR:  
                        HCBTREJA,HCBTWOFF,HCBTTRIN,HCBTSIZE,HCBTSTAT,HCBTADJM:  
                        HCBTCMNT,HCBTHCOP,HCBTFNDR,HCBTDEPD,HCBTCDAT,HCBTCTIM:  
                        HCBTCUID,HCBTUDAT,HCBTUTIM,HCBTUUID,HCBTEFNM,HCBTSENT:  
                        HCBTTDAT,HCBTSPAR                                       
          RETURN
.
DEHCBTC6  RESET     KEY39                                                       
          DELETE    HICBTCA6,KEY39                                              
          RETURN
.
