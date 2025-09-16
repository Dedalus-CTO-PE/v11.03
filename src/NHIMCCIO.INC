.
. NHIMCCIO    
. --------
. Filename     : nhimccaf.dat
.
RSNHMC1   RESET     KEY8                                                        
          READ      NHIMCCA1,KEY8;;                                             
          RETURN
.
RANHMC1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      NHIMCCA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNHMC1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      NHIMCCA1,KEY8;NHMCCSYS,NHMCCOD,NHMCDES,NHMCSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNHMC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    NHIMCCA1;NHMCCSYS,NHMCCOD,NHMCDES,NHMCSPA                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNHMC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    NHIMCCA1;NHMCCSYS,NHMCCOD,NHMCDES,NHMCSPA                   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNHMC1                                                                         
          UPDATE    NHIMCCA1;NHMCCSYS,NHMCCOD,NHMCDES,NHMCSPA                   
          RETURN
.
WRNHMC1   RESET     KEY8                                                        
          WRITE     NHIMCCA1,KEY8;NHMCCSYS,NHMCCOD,NHMCDES,NHMCSPA              
          RETURN
.
DENHMC1   RESET     KEY8                                                        
          DELETE    NHIMCCA1,KEY8                                               
          RETURN
.
