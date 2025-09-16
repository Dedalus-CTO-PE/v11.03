.
. CCSDRGIO    
. --------
. Filename     : ccsdrgaf.dat
.
RSCCDG1   RESET     KEY4                                                        
          READ      CCSDRGA1,KEY4;;                                             
          RETURN
.
RACCDG1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSDRGA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCDG1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSDRGA1,KEY4;CCDGDRGC,CCDGDES,CCDGMDC,CCDGWAR,CCDGTYP:     
                        CCDGSDR,CCDGSDT,CCDGLOW,CCDGHIG,CCDGSLOS,CCDGSWGT:      
                        CCDGNAT,CCDGNLOS,CCDGSPA                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCDG1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSDRGA1;CCDGDRGC,CCDGDES,CCDGMDC,CCDGWAR,CCDGTYP:          
                        CCDGSDR,CCDGSDT,CCDGLOW,CCDGHIG,CCDGSLOS,CCDGSWGT:      
                        CCDGNAT,CCDGNLOS,CCDGSPA                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCDG1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSDRGA1;CCDGDRGC,CCDGDES,CCDGMDC,CCDGWAR,CCDGTYP:          
                        CCDGSDR,CCDGSDT,CCDGLOW,CCDGHIG,CCDGSLOS,CCDGSWGT:      
                        CCDGNAT,CCDGNLOS,CCDGSPA                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCDG1                                                                         
          UPDATE    CCSDRGA1;CCDGDRGC,CCDGDES,CCDGMDC,CCDGWAR,CCDGTYP:          
                        CCDGSDR,CCDGSDT,CCDGLOW,CCDGHIG,CCDGSLOS,CCDGSWGT:      
                        CCDGNAT,CCDGNLOS,CCDGSPA                                
          RETURN
.
WRCCDG1   RESET     KEY4                                                        
          WRITE     CCSDRGA1,KEY4;CCDGDRGC,CCDGDES,CCDGMDC,CCDGWAR,CCDGTYP:     
                        CCDGSDR,CCDGSDT,CCDGLOW,CCDGHIG,CCDGSLOS,CCDGSWGT:      
                        CCDGNAT,CCDGNLOS,CCDGSPA                                
          RETURN
.
DECCDG1   RESET     KEY4                                                        
          DELETE    CCSDRGA1,KEY4                                               
          RETURN
.
