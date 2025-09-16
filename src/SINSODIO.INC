.
. SINSODIO    
. --------
. Filename     : sinsodaf.dat
.
RSSIOD1   RESET     KEY12                                                       
          READ      SINSODA1,KEY12;;                                            
          RETURN
.
RASIOD1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SINSODA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIOD1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SINSODA1,KEY12;SIODSID,SIODWAR,SIODCAT,SIODSUP,SIODCST:     
                        SIODGSTA,SIODQTY,SIODSUT,SIODCON,SIODCDT,SIODEDT:       
                        SIODGST,SIODSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIOD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINSODA1;SIODSID,SIODWAR,SIODCAT,SIODSUP,SIODCST:           
                        SIODGSTA,SIODQTY,SIODSUT,SIODCON,SIODCDT,SIODEDT:       
                        SIODGST,SIODSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIOD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINSODA1;SIODSID,SIODWAR,SIODCAT,SIODSUP,SIODCST:           
                        SIODGSTA,SIODQTY,SIODSUT,SIODCON,SIODCDT,SIODEDT:       
                        SIODGST,SIODSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIOD1                                                                         
          UPDATE    SINSODA1;SIODSID,SIODWAR,SIODCAT,SIODSUP,SIODCST:           
                        SIODGSTA,SIODQTY,SIODSUT,SIODCON,SIODCDT,SIODEDT:       
                        SIODGST,SIODSPA                                         
          RETURN
.
WRSIOD1   RESET     KEY12                                                       
          WRITE     SINSODA1,KEY12;SIODSID,SIODWAR,SIODCAT,SIODSUP,SIODCST:     
                        SIODGSTA,SIODQTY,SIODSUT,SIODCON,SIODCDT,SIODEDT:       
                        SIODGST,SIODSPA                                         
          RETURN
.
DESIOD1   RESET     KEY12                                                       
          DELETE    SINSODA1,KEY12                                              
          RETURN
.
RSSIOD2   RESET     KEY20                                                       
          READ      SINSODA2,KEY20;;                                            
          RETURN
.
RASIOD2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SINSODA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIOD2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      SINSODA2,KEY20;SIODSID,SIODWAR,SIODCAT,SIODSUP,SIODCST:     
                        SIODGSTA,SIODQTY,SIODSUT,SIODCON,SIODCDT,SIODEDT:       
                        SIODGST,SIODSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIOD2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINSODA2;SIODSID,SIODWAR,SIODCAT,SIODSUP,SIODCST:           
                        SIODGSTA,SIODQTY,SIODSUT,SIODCON,SIODCDT,SIODEDT:       
                        SIODGST,SIODSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIOD2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINSODA2;SIODSID,SIODWAR,SIODCAT,SIODSUP,SIODCST:           
                        SIODGSTA,SIODQTY,SIODSUT,SIODCON,SIODCDT,SIODEDT:       
                        SIODGST,SIODSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIOD2                                                                         
          UPDATE    SINSODA2;SIODSID,SIODWAR,SIODCAT,SIODSUP,SIODCST:           
                        SIODGSTA,SIODQTY,SIODSUT,SIODCON,SIODCDT,SIODEDT:       
                        SIODGST,SIODSPA                                         
          RETURN
.
WRSIOD2   RESET     KEY20                                                       
          WRITE     SINSODA2,KEY20;SIODSID,SIODWAR,SIODCAT,SIODSUP,SIODCST:     
                        SIODGSTA,SIODQTY,SIODSUT,SIODCON,SIODCDT,SIODEDT:       
                        SIODGST,SIODSPA                                         
          RETURN
.
DESIOD2   RESET     KEY20                                                       
          DELETE    SINSODA2,KEY20                                              
          RETURN
.
