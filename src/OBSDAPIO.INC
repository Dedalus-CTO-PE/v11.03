.
. OBSDAPIO    
. --------
. Filename     : obsdapaf.dat
.
RSOBDAP1  RESET     KEY14                                                       
          READ      OBSDAPA1,KEY14;;                                            
          RETURN
.
RAOBDAP1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      OBSDAPA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBDAP1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      OBSDAPA1,KEY14;OBDPVIST,OBDPCTYP,OBDPUNIQ,OBDPCODE,OBDPDATE:
                        OBDPTIME,OBDPREAS,OBDPOREA,OBDPSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBDAP1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OBSDAPA1;OBDPVIST,OBDPCTYP,OBDPUNIQ,OBDPCODE,OBDPDATE:      
                        OBDPTIME,OBDPREAS,OBDPOREA,OBDPSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBDAP1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OBSDAPA1;OBDPVIST,OBDPCTYP,OBDPUNIQ,OBDPCODE,OBDPDATE:      
                        OBDPTIME,OBDPREAS,OBDPOREA,OBDPSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBDAP1                                                                        
          UPDATE    OBSDAPA1;OBDPVIST,OBDPCTYP,OBDPUNIQ,OBDPCODE,OBDPDATE:      
                        OBDPTIME,OBDPREAS,OBDPOREA,OBDPSPAR                     
          RETURN
.
WROBDAP1  RESET     KEY14                                                       
          WRITE     OBSDAPA1,KEY14;OBDPVIST,OBDPCTYP,OBDPUNIQ,OBDPCODE,OBDPDATE:
                        OBDPTIME,OBDPREAS,OBDPOREA,OBDPSPAR                     
          RETURN
.
DEOBDAP1  RESET     KEY14                                                       
          DELETE    OBSDAPA1,KEY14                                              
          RETURN
.
