.
. CASAMEIO    
. --------
. Filename     : casameaf.dat
.
RSCAAM1   RESET     KEY6                                                        
          READ      CASAMEA1,KEY6;;                                             
          RETURN
.
RACAAM1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      CASAMEA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCAAM1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      CASAMEA1,KEY6;CAAMTOE,CAAMAM,CAAMDES,CAAMDEC,CAAMUNT:       
                        CAAMSDEC,CAAMSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCAAM1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CASAMEA1;CAAMTOE,CAAMAM,CAAMDES,CAAMDEC,CAAMUNT:            
                        CAAMSDEC,CAAMSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCAAM1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CASAMEA1;CAAMTOE,CAAMAM,CAAMDES,CAAMDEC,CAAMUNT:            
                        CAAMSDEC,CAAMSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCAAM1                                                                         
          UPDATE    CASAMEA1;CAAMTOE,CAAMAM,CAAMDES,CAAMDEC,CAAMUNT:            
                        CAAMSDEC,CAAMSPA                                        
          RETURN
.
WRCAAM1   RESET     KEY6                                                        
          WRITE     CASAMEA1,KEY6;CAAMTOE,CAAMAM,CAAMDES,CAAMDEC,CAAMUNT:       
                        CAAMSDEC,CAAMSPA                                        
          RETURN
.
DECAAM1   RESET     KEY6                                                        
          DELETE    CASAMEA1,KEY6                                               
          RETURN
.
