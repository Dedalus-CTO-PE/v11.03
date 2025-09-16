.
. SINBATIO    
. --------
. Filename     : sinbataf.dat
.
RSSIBT1   RESET     KEY15                                                       
          READ      SINBATA1,KEY15;;                                            
          RETURN
.
RASIBT1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SINBATA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIBT1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SINBATA1,KEY15;SIBTPON,SIBTREQ,SIBTCST,SIBTQTY,SIBTISS:     
                        SIBTSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIBT1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINBATA1;SIBTPON,SIBTREQ,SIBTCST,SIBTQTY,SIBTISS:           
                        SIBTSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIBT1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINBATA1;SIBTPON,SIBTREQ,SIBTCST,SIBTQTY,SIBTISS:           
                        SIBTSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIBT1                                                                         
          UPDATE    SINBATA1;SIBTPON,SIBTREQ,SIBTCST,SIBTQTY,SIBTISS:           
                        SIBTSPA                                                 
          RETURN
.
WRSIBT1   RESET     KEY15                                                       
          WRITE     SINBATA1,KEY15;SIBTPON,SIBTREQ,SIBTCST,SIBTQTY,SIBTISS:     
                        SIBTSPA                                                 
          RETURN
.
DESIBT1   RESET     KEY15                                                       
          DELETE    SINBATA1,KEY15                                              
          RETURN
.
