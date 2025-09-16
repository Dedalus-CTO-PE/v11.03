.
. CORTYPIO    
. --------
. Filename     : cortypaf.dat
.
RSCOTY1   RESET     KEY5                                                        
          READ      CORTYPA1,KEY5;;                                             
          RETURN
.
RACOTY1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      CORTYPA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCOTY1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      CORTYPA1,KEY5;COTYCTYP,COTYCDSC,COTYCSEC,COTYCSPA           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCOTY1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CORTYPA1;COTYCTYP,COTYCDSC,COTYCSEC,COTYCSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCOTY1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CORTYPA1;COTYCTYP,COTYCDSC,COTYCSEC,COTYCSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCOTY1                                                                         
          UPDATE    CORTYPA1;COTYCTYP,COTYCDSC,COTYCSEC,COTYCSPA                
          RETURN
.
WRCOTY1   RESET     KEY5                                                        
          WRITE     CORTYPA1,KEY5;COTYCTYP,COTYCDSC,COTYCSEC,COTYCSPA           
          RETURN
.
DECOTY1   RESET     KEY5                                                        
          DELETE    CORTYPA1,KEY5                                               
          RETURN
.
