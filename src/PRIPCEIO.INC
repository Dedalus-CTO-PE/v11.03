.
. PRIPCEIO    
. --------
. Filename     : pripceaf.dat
.
RSPRPCE1  RESET     KEY31                                                       
          READ      PRIPCEA1,KEY31;;                                            
          RETURN
.
RAPRPCE1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PRIPCEA1,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRPCE1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PRIPCEA1,KEY31;PRPCFTYP,PRPCDOCT,PRPCFCOD,PRPCPORT,PRPCPCEN:
                                   PRPCDSEC,PRPCRESP,PRPCLEDG,PRPCCRAC,PRPCDBAC:
                                   PRPCSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRPCE1  MOVE      ZERO,OVRCD                                                  
          READKS    PRIPCEA1;PRPCFTYP,PRPCDOCT,PRPCFCOD,PRPCPORT,PRPCPCEN:      
                             PRPCDSEC,PRPCRESP,PRPCLEDG,PRPCCRAC,PRPCDBAC:      
                             PRPCSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRPCE1  MOVE      ZERO,OVRCD                                                  
          READKP    PRIPCEA1;PRPCFTYP,PRPCDOCT,PRPCFCOD,PRPCPORT,PRPCPCEN:      
                             PRPCDSEC,PRPCRESP,PRPCLEDG,PRPCCRAC,PRPCDBAC:      
                             PRPCSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRPCE1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PRIPCEA1;PRPCFTYP,PRPCDOCT,PRPCFCOD,PRPCPORT,PRPCPCEN:      
                             PRPCDSEC,PRPCRESP,PRPCLEDG,PRPCCRAC,PRPCDBAC:      
                             PRPCSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPRPCE1  RESET     KEY31                                                       
          WRITE     PRIPCEA1,KEY31;PRPCFTYP,PRPCDOCT,PRPCFCOD,PRPCPORT,PRPCPCEN:
                                   PRPCDSEC,PRPCRESP,PRPCLEDG,PRPCCRAC,PRPCDBAC:
                                   PRPCSPAR                                     
          RETURN
.
DEPRPCE1  RESET     KEY31                                                       
          DELETE    PRIPCEA1,KEY31                                              
          RETURN
.
RLPRPCE1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READL     PRIPCEA1,KEY31;PRPCFTYP,PRPCDOCT,PRPCFCOD,PRPCPORT,PRPCPCEN:
                                   PRPCDSEC,PRPCRESP,PRPCLEDG,PRPCCRAC,PRPCDBAC:
                                   PRPCSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPRPCE1  MOVE      ZERO,OVRCD                                                  
          READLKS   PRIPCEA1;PRPCFTYP,PRPCDOCT,PRPCFCOD,PRPCPORT,PRPCPCEN:      
                             PRPCDSEC,PRPCRESP,PRPCLEDG,PRPCCRAC,PRPCDBAC:      
                             PRPCSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPRPCE1  MOVE      ZERO,OVRCD                                                  
          READLKP   PRIPCEA1;PRPCFTYP,PRPCDOCT,PRPCFCOD,PRPCPORT,PRPCPCEN:      
                             PRPCDSEC,PRPCRESP,PRPCLEDG,PRPCCRAC,PRPCDBAC:      
                             PRPCSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPRPCE1  RESET     KEY31                                                       
          UNLOCK    PRIPCEA1                                                    
          RETURN
.
