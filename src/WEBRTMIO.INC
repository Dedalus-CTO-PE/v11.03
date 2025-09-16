.
. WEBRTMIO    
. --------
. Filename     : webrtmaf.dat
.
RSWBRTM1  RESET     KEY11                                                       
          READ      WEBRTMA1,KEY11;;                                            
          RETURN
.
RAWBRTM1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      WEBRTMA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBRTM1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      WEBRTMA1,KEY11;WBRTPRID,WBRTTMNM,WBRTDESC,WBRTSPID,WBRTSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBRTM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WEBRTMA1;WBRTPRID,WBRTTMNM,WBRTDESC,WBRTSPID,WBRTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBRTM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WEBRTMA1;WBRTPRID,WBRTTMNM,WBRTDESC,WBRTSPID,WBRTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBRTM1                                                                        
          UPDATE    WEBRTMA1;WBRTPRID,WBRTTMNM,WBRTDESC,WBRTSPID,WBRTSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBRTM1  RESET     KEY11                                                       
          WRITE     WEBRTMA1,KEY11;WBRTPRID,WBRTTMNM,WBRTDESC,WBRTSPID,WBRTSPAR 
          RETURN
.
DEWBRTM1  RESET     KEY11                                                       
          DELETE    WEBRTMA1,KEY11                                              
          RETURN
.
RLWBRTM1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     WEBRTMA1,KEY11;WBRTPRID,WBRTTMNM,WBRTDESC,WBRTSPID,WBRTSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBRTM1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WEBRTMA1;WBRTPRID,WBRTTMNM,WBRTDESC,WBRTSPID,WBRTSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBRTM1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WEBRTMA1;WBRTPRID,WBRTTMNM,WBRTDESC,WBRTSPID,WBRTSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBRTM1  RESET     KEY11                                                       
          UNLOCK    WEBRTMA1                                                    
          RETURN
.
