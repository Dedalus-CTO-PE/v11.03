.
. CCSCMEIO    
. --------
. Filename     : ccscmeaf.dat
.
RSCCME1   RESET     KEY24                                                       
          READ      CCSCMEA1,KEY24;;                                            
          RETURN
.
RACCME1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCMEA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCME1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCMEA1,KEY24;CCMEHCD,CCMEDPT,CCMEYEAR,CCMEPER,CCMEPCD:    
                        CCMEQTY,CCMECST,CCMEFLX,CCMESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCME1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCMEA1;CCMEHCD,CCMEDPT,CCMEYEAR,CCMEPER,CCMEPCD:          
                        CCMEQTY,CCMECST,CCMEFLX,CCMESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCME1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCMEA1;CCMEHCD,CCMEDPT,CCMEYEAR,CCMEPER,CCMEPCD:          
                        CCMEQTY,CCMECST,CCMEFLX,CCMESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCME1                                                                         
          UPDATE    CCSCMEA1;CCMEHCD,CCMEDPT,CCMEYEAR,CCMEPER,CCMEPCD:          
                        CCMEQTY,CCMECST,CCMEFLX,CCMESPA                         
          RETURN
.
WRCCME1   RESET     KEY24                                                       
          WRITE     CCSCMEA1,KEY24;CCMEHCD,CCMEDPT,CCMEYEAR,CCMEPER,CCMEPCD:    
                        CCMEQTY,CCMECST,CCMEFLX,CCMESPA                         
          RETURN
.
DECCME1   RESET     KEY24                                                       
          DELETE    CCSCMEA1,KEY24                                              
          RETURN
.
RSCCME2   RESET     KEY24                                                       
          READ      CCSCMEA2,KEY24;;                                            
          RETURN
.
RACCME2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCMEA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCME2   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCMEA2,KEY24;CCMEHCD,CCMEDPT,CCMEYEAR,CCMEPER,CCMEPCD:    
                        CCMEQTY,CCMECST,CCMEFLX,CCMESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCME2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCMEA2;CCMEHCD,CCMEDPT,CCMEYEAR,CCMEPER,CCMEPCD:          
                        CCMEQTY,CCMECST,CCMEFLX,CCMESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCME2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCMEA2;CCMEHCD,CCMEDPT,CCMEYEAR,CCMEPER,CCMEPCD:          
                        CCMEQTY,CCMECST,CCMEFLX,CCMESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCME2                                                                         
          UPDATE    CCSCMEA2;CCMEHCD,CCMEDPT,CCMEYEAR,CCMEPER,CCMEPCD:          
                        CCMEQTY,CCMECST,CCMEFLX,CCMESPA                         
          RETURN
.
WRCCME2   RESET     KEY24                                                       
          WRITE     CCSCMEA2,KEY24;CCMEHCD,CCMEDPT,CCMEYEAR,CCMEPER,CCMEPCD:    
                        CCMEQTY,CCMECST,CCMEFLX,CCMESPA                         
          RETURN
.
DECCME2   RESET     KEY24                                                       
          DELETE    CCSCMEA2,KEY24                                              
          RETURN
.
