.
. APSSCXIO    
. --------
. Filename     : apsscxaf.dat
.
RSAPSC1   RESET     KEY26                                                       
          READ      APSSCXA1,KEY26;;                                            
          RETURN
.
RAAPSC1   RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      APSSCXA1,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPSC1   RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      APSSCXA1,KEY26;APSCCOD,APSCLED,APSCSUB,APSCTYP,APSCSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPSC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSSCXA1;APSCCOD,APSCLED,APSCSUB,APSCTYP,APSCSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPSC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSSCXA1;APSCCOD,APSCLED,APSCSUB,APSCTYP,APSCSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPSC1                                                                         
          UPDATE    APSSCXA1;APSCCOD,APSCLED,APSCSUB,APSCTYP,APSCSPA            
          RETURN
.
WRAPSC1   RESET     KEY26                                                       
          WRITE     APSSCXA1,KEY26;APSCCOD,APSCLED,APSCSUB,APSCTYP,APSCSPA      
          RETURN
.
DEAPSC1   RESET     KEY26                                                       
          DELETE    APSSCXA1,KEY26                                              
          RETURN
.
RSAPSC2   RESET     KEY26                                                       
          READ      APSSCXA2,KEY26;;                                            
          RETURN
.
RAAPSC2   RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      APSSCXA2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPSC2   RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      APSSCXA2,KEY26;APSCCOD,APSCLED,APSCSUB,APSCTYP,APSCSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPSC2                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSSCXA2;APSCCOD,APSCLED,APSCSUB,APSCTYP,APSCSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPSC2                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSSCXA2;APSCCOD,APSCLED,APSCSUB,APSCTYP,APSCSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPSC2                                                                         
          UPDATE    APSSCXA2;APSCCOD,APSCLED,APSCSUB,APSCTYP,APSCSPA            
          RETURN
.
WRAPSC2   RESET     KEY26                                                       
          WRITE     APSSCXA2,KEY26;APSCCOD,APSCLED,APSCSUB,APSCTYP,APSCSPA      
          RETURN
.
DEAPSC2   RESET     KEY26                                                       
          DELETE    APSSCXA2,KEY26                                              
          RETURN
.
