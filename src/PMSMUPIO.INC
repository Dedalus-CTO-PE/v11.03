.
. PMSMUPIO    
. --------
. Filename     : pmsmupaf.dat
.
RSPMMUP1  RESET     KEY8                                                        
          READ      PMSMUPA1,KEY8;;                                             
          RETURN
.
RAPMMUP1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSMUPA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMMUP1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSMUPA1,KEY8;PMMUURNO,PMMUCUID,PMMUCDAT,PMMUCTIM,PMMUUASS: 
                                  PMMUDASS,PMMUTASS,PMMUSPAR                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMMUP1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSMUPA1;PMMUURNO,PMMUCUID,PMMUCDAT,PMMUCTIM,PMMUUASS:      
                             PMMUDASS,PMMUTASS,PMMUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMMUP1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSMUPA1;PMMUURNO,PMMUCUID,PMMUCDAT,PMMUCTIM,PMMUUASS:      
                             PMMUDASS,PMMUTASS,PMMUSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMMUP1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSMUPA1;PMMUURNO,PMMUCUID,PMMUCDAT,PMMUCTIM,PMMUUASS:      
                             PMMUDASS,PMMUTASS,PMMUSPAR                         
          RETURN
.
WRPMMUP1  RESET     KEY8                                                        
          WRITE     PMSMUPA1,KEY8;PMMUURNO,PMMUCUID,PMMUCDAT,PMMUCTIM,PMMUUASS: 
                                  PMMUDASS,PMMUTASS,PMMUSPAR                    
          RETURN
.
DEPMMUP1  RESET     KEY8                                                        
          DELETE    PMSMUPA1,KEY8                                               
          RETURN
.
