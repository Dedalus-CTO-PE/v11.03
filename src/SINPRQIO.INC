.
. SINPRQIO    
. --------
. Filename     : sinprqaf.dat
.
RSSIPR1   RESET     KEY83                                                       
          READ      SINPRQA1,KEY83;;                                            
          RETURN
.
RASIPR1   RESET     KEY83                                                       
          MOVE      ZERO,OVRCD
          READ      SINPRQA1,KEY83;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPR1   RESET     KEY83                                                       
          MOVE      ZERO,OVRCD
          READ      SINPRQA1,KEY83;SIPRWAR,SIPRCST,SIPRDEL,SIPRRAC,SIPRCAT:     
                        SIPRTYP,SIPRREQ,SIPRRQT,SIPRAQT,SIPRBQT,SIPRPFL:        
                        SIPRSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPR1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPRQA1;SIPRWAR,SIPRCST,SIPRDEL,SIPRRAC,SIPRCAT:           
                        SIPRTYP,SIPRREQ,SIPRRQT,SIPRAQT,SIPRBQT,SIPRPFL:        
                        SIPRSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPR1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPRQA1;SIPRWAR,SIPRCST,SIPRDEL,SIPRRAC,SIPRCAT:           
                        SIPRTYP,SIPRREQ,SIPRRQT,SIPRAQT,SIPRBQT,SIPRPFL:        
                        SIPRSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPR1                                                                         
          UPDATE    SINPRQA1;SIPRWAR,SIPRCST,SIPRDEL,SIPRRAC,SIPRCAT:           
                        SIPRTYP,SIPRREQ,SIPRRQT,SIPRAQT,SIPRBQT,SIPRPFL:        
                        SIPRSPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIPR1   RESET     KEY83                                                       
          WRITE     SINPRQA1,KEY83;SIPRWAR,SIPRCST,SIPRDEL,SIPRRAC,SIPRCAT:     
                        SIPRTYP,SIPRREQ,SIPRRQT,SIPRAQT,SIPRBQT,SIPRPFL:        
                        SIPRSPA                                                 
          RETURN
.
DESIPR1   RESET     KEY83                                                       
          DELETE    SINPRQA1,KEY83                                              
          RETURN
.
RLSIPR1   RESET     KEY83                                                       
          MOVE      ZERO,OVRCD
          READL     SINPRQA1,KEY83;SIPRWAR,SIPRCST,SIPRDEL,SIPRRAC,SIPRCAT:     
                        SIPRTYP,SIPRREQ,SIPRRQT,SIPRAQT,SIPRBQT,SIPRPFL:        
                        SIPRSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIPR1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINPRQA1;SIPRWAR,SIPRCST,SIPRDEL,SIPRRAC,SIPRCAT:           
                        SIPRTYP,SIPRREQ,SIPRRQT,SIPRAQT,SIPRBQT,SIPRPFL:        
                        SIPRSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIPR1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINPRQA1;SIPRWAR,SIPRCST,SIPRDEL,SIPRRAC,SIPRCAT:           
                        SIPRTYP,SIPRREQ,SIPRRQT,SIPRAQT,SIPRBQT,SIPRPFL:        
                        SIPRSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIPR1   RESET     KEY83                                                       
          UNLOCK    SINPRQA1                                                    
          RETURN
.
RSSIPR2   RESET     KEY83                                                       
          READ      SINPRQA2,KEY83;;                                            
          RETURN
.
RASIPR2   RESET     KEY83                                                       
          MOVE      ZERO,OVRCD
          READ      SINPRQA2,KEY83;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPR2   RESET     KEY83                                                       
          MOVE      ZERO,OVRCD
          READ      SINPRQA2,KEY83;SIPRWAR,SIPRCST,SIPRDEL,SIPRRAC,SIPRCAT:     
                        SIPRTYP,SIPRREQ,SIPRRQT,SIPRAQT,SIPRBQT,SIPRPFL:        
                        SIPRSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPR2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPRQA2;SIPRWAR,SIPRCST,SIPRDEL,SIPRRAC,SIPRCAT:           
                        SIPRTYP,SIPRREQ,SIPRRQT,SIPRAQT,SIPRBQT,SIPRPFL:        
                        SIPRSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPR2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPRQA2;SIPRWAR,SIPRCST,SIPRDEL,SIPRRAC,SIPRCAT:           
                        SIPRTYP,SIPRREQ,SIPRRQT,SIPRAQT,SIPRBQT,SIPRPFL:        
                        SIPRSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPR2                                                                         
          UPDATE    SINPRQA2;SIPRWAR,SIPRCST,SIPRDEL,SIPRRAC,SIPRCAT:           
                        SIPRTYP,SIPRREQ,SIPRRQT,SIPRAQT,SIPRBQT,SIPRPFL:        
                        SIPRSPA                                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIPR2   RESET     KEY83                                                       
          WRITE     SINPRQA2,KEY83;SIPRWAR,SIPRCST,SIPRDEL,SIPRRAC,SIPRCAT:     
                        SIPRTYP,SIPRREQ,SIPRRQT,SIPRAQT,SIPRBQT,SIPRPFL:        
                        SIPRSPA                                                 
          RETURN
.
DESIPR2   RESET     KEY83                                                       
          DELETE    SINPRQA2,KEY83                                              
          RETURN
.
RLSIPR2   RESET     KEY83                                                       
          MOVE      ZERO,OVRCD
          READL     SINPRQA2,KEY83;SIPRWAR,SIPRCST,SIPRDEL,SIPRRAC,SIPRCAT:     
                        SIPRTYP,SIPRREQ,SIPRRQT,SIPRAQT,SIPRBQT,SIPRPFL:        
                        SIPRSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIPR2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINPRQA2;SIPRWAR,SIPRCST,SIPRDEL,SIPRRAC,SIPRCAT:           
                        SIPRTYP,SIPRREQ,SIPRRQT,SIPRAQT,SIPRBQT,SIPRPFL:        
                        SIPRSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIPR2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINPRQA2;SIPRWAR,SIPRCST,SIPRDEL,SIPRRAC,SIPRCAT:           
                        SIPRTYP,SIPRREQ,SIPRRQT,SIPRAQT,SIPRBQT,SIPRPFL:        
                        SIPRSPA                                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIPR2   RESET     KEY83                                                       
          UNLOCK    SINPRQA2                                                    
          RETURN
.
