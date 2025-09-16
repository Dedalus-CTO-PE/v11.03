.
. APSORDIO    
. --------
. Filename     : apsordaf.dat
.
RSAPOD1   RESET     KEY14                                                       
          READ      APSORDA1,KEY14;;                                            
          RETURN
.
RAAPOD1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      APSORDA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPOD1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      APSORDA1,KEY14;APODISC,APODORD,APODCAT,APODLED,APODACC:     
                        APODDIS,APODRES,APODDES,APODAMT,APODGSTA,APODUCT:       
                        APODUGS,APODQTY,APODGST,APODSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPOD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSORDA1;APODISC,APODORD,APODCAT,APODLED,APODACC:           
                        APODDIS,APODRES,APODDES,APODAMT,APODGSTA,APODUCT:       
                        APODUGS,APODQTY,APODGST,APODSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPOD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSORDA1;APODISC,APODORD,APODCAT,APODLED,APODACC:           
                        APODDIS,APODRES,APODDES,APODAMT,APODGSTA,APODUCT:       
                        APODUGS,APODQTY,APODGST,APODSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPOD1                                                                         
          UPDATE    APSORDA1;APODISC,APODORD,APODCAT,APODLED,APODACC:           
                        APODDIS,APODRES,APODDES,APODAMT,APODGSTA,APODUCT:       
                        APODUGS,APODQTY,APODGST,APODSPA                         
          RETURN
.
WRAPOD1   RESET     KEY14                                                       
          WRITE     APSORDA1,KEY14;APODISC,APODORD,APODCAT,APODLED,APODACC:     
                        APODDIS,APODRES,APODDES,APODAMT,APODGSTA,APODUCT:       
                        APODUGS,APODQTY,APODGST,APODSPA                         
          RETURN
.
DEAPOD1   RESET     KEY14                                                       
          DELETE    APSORDA1,KEY14                                              
          RETURN
.
RSAPOD2   RESET     KEY28                                                       
          READ      APSORDA2,KEY28;;                                            
          RETURN
.
RAAPOD2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      APSORDA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPOD2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      APSORDA2,KEY28;APODISC,APODORD,APODCAT,APODLED,APODACC:     
                        APODDIS,APODRES,APODDES,APODAMT,APODGSTA,APODUCT:       
                        APODUGS,APODQTY,APODGST,APODSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPOD2                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSORDA2;APODISC,APODORD,APODCAT,APODLED,APODACC:           
                        APODDIS,APODRES,APODDES,APODAMT,APODGSTA,APODUCT:       
                        APODUGS,APODQTY,APODGST,APODSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPOD2                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSORDA2;APODISC,APODORD,APODCAT,APODLED,APODACC:           
                        APODDIS,APODRES,APODDES,APODAMT,APODGSTA,APODUCT:       
                        APODUGS,APODQTY,APODGST,APODSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPOD2                                                                         
          UPDATE    APSORDA2;APODISC,APODORD,APODCAT,APODLED,APODACC:           
                        APODDIS,APODRES,APODDES,APODAMT,APODGSTA,APODUCT:       
                        APODUGS,APODQTY,APODGST,APODSPA                         
          RETURN
.
WRAPOD2   RESET     KEY28                                                       
          WRITE     APSORDA2,KEY28;APODISC,APODORD,APODCAT,APODLED,APODACC:     
                        APODDIS,APODRES,APODDES,APODAMT,APODGSTA,APODUCT:       
                        APODUGS,APODQTY,APODGST,APODSPA                         
          RETURN
.
DEAPOD2   RESET     KEY28                                                       
          DELETE    APSORDA2,KEY28                                              
          RETURN
.
