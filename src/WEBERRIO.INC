.
. WEBERRIO    
. --------
. Filename     : weberraf.dat
.
RSWBER1   RESET     KEY24                                                       
          READ      WEBERRA1,KEY24;;                                            
          RETURN
.
RAWBER1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERRA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBER1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERRA1,KEY24;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:     
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBER1                                                                         
          MOVE      ZERO,OVRCD
          READKS    WEBERRA1;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:           
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBER1                                                                         
          MOVE      ZERO,OVRCD
          READKP    WEBERRA1;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:           
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBER1                                                                         
          UPDATE    WEBERRA1;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:           
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBER1   RESET     KEY24                                                       
          WRITE     WEBERRA1,KEY24;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:     
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          RETURN
.
DEWBER1   RESET     KEY24                                                       
          DELETE    WEBERRA1,KEY24                                              
          RETURN
.
RLWBER1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     WEBERRA1,KEY24;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:     
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBER1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   WEBERRA1;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:           
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBER1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   WEBERRA1;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:           
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBER1   RESET     KEY24                                                       
          UNLOCK    WEBERRA1                                                    
          RETURN
.
RSWBER2   RESET     KEY24                                                       
          READ      WEBERRA2,KEY24;;                                            
          RETURN
.
RAWBER2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERRA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBER2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERRA2,KEY24;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:     
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBER2                                                                         
          MOVE      ZERO,OVRCD
          READKS    WEBERRA2;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:           
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBER2                                                                         
          MOVE      ZERO,OVRCD
          READKP    WEBERRA2;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:           
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBER2                                                                         
          UPDATE    WEBERRA2;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:           
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBER2   RESET     KEY24                                                       
          WRITE     WEBERRA2,KEY24;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:     
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          RETURN
.
DEWBER2   RESET     KEY24                                                       
          DELETE    WEBERRA2,KEY24                                              
          RETURN
.
RLWBER2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     WEBERRA2,KEY24;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:     
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBER2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   WEBERRA2;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:           
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBER2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   WEBERRA2;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:           
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBER2   RESET     KEY24                                                       
          UNLOCK    WEBERRA2                                                    
          RETURN
.
RSWBER3   RESET     KEY34                                                       
          READ      WEBERRA3,KEY34;;                                            
          RETURN
.
RAWBER3   RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERRA3,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBER3   RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERRA3,KEY34;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:     
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBER3                                                                         
          MOVE      ZERO,OVRCD
          READKS    WEBERRA3;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:           
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBER3                                                                         
          MOVE      ZERO,OVRCD
          READKP    WEBERRA3;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:           
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBER3                                                                         
          UPDATE    WEBERRA3;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:           
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBER3   RESET     KEY34                                                       
          WRITE     WEBERRA3,KEY34;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:     
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          RETURN
.
DEWBER3   RESET     KEY34                                                       
          DELETE    WEBERRA3,KEY34                                              
          RETURN
.
RLWBER3   RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READL     WEBERRA3,KEY34;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:     
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBER3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   WEBERRA3;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:           
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBER3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   WEBERRA3;WBERPID,WBERDAT,WBERTIM,WBERUID,WBERREP:           
                        WBERTMP,WBERURN,WBERVIS,WBERCNT,WBERERR,WBERSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBER3   RESET     KEY34                                                       
          UNLOCK    WEBERRA3                                                    
          RETURN
.
