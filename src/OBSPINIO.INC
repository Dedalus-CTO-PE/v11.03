.
. OBSPINIO    
. --------
. Filename     : obspinaf.dat
.
RSOBPIN1  RESET     KEY8                                                        
          READ      OBSPINA1,KEY8;;                                             
          RETURN
.
RAOBPIN1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      OBSPINA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBPIN1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      OBSPINA1,KEY8;OBPNVISN,OBPNPDIA,OBPNPPRO,OBPNREAA,OBPNSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBPIN1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OBSPINA1;OBPNVISN,OBPNPDIA,OBPNPPRO,OBPNREAA,OBPNSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBPIN1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OBSPINA1;OBPNVISN,OBPNPDIA,OBPNPPRO,OBPNREAA,OBPNSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBPIN1                                                                        
          UPDATE    OBSPINA1;OBPNVISN,OBPNPDIA,OBPNPPRO,OBPNREAA,OBPNSPAR       
          RETURN
.
WROBPIN1  RESET     KEY8                                                        
          WRITE     OBSPINA1,KEY8;OBPNVISN,OBPNPDIA,OBPNPPRO,OBPNREAA,OBPNSPAR  
          RETURN
.
DEOBPIN1  RESET     KEY8                                                        
          DELETE    OBSPINA1,KEY8                                               
          RETURN
.
