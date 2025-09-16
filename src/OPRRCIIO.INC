.
. OPRRCIIO    
. --------
. Filename     : oprrciaf.dat
.
RSOPRCI1  RESET     KEY22                                                       
          READ      OPRRCIA1,KEY22;;                                            
          RETURN
.
RAOPRCI1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      OPRRCIA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPRCI1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      OPRRCIA1,KEY22;OPRCLOCN,OPRCSDAT,OPRCSTIM,OPRCEDAT,OPRCETIM:
                                   OPRCREAS,OPRCCSUI,OPRCCDAT,OPRCCTIM,OPRCCEUI:
                                   OPRCCEDT,OPRCCETM,OPRCHOSP,OPRCSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPRCI1  MOVE      ZERO,OVRCD                                                  
          READKS    OPRRCIA1;OPRCLOCN,OPRCSDAT,OPRCSTIM,OPRCEDAT,OPRCETIM:      
                             OPRCREAS,OPRCCSUI,OPRCCDAT,OPRCCTIM,OPRCCEUI:      
                             OPRCCEDT,OPRCCETM,OPRCHOSP,OPRCSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPRCI1  MOVE      ZERO,OVRCD                                                  
          READKP    OPRRCIA1;OPRCLOCN,OPRCSDAT,OPRCSTIM,OPRCEDAT,OPRCETIM:      
                             OPRCREAS,OPRCCSUI,OPRCCDAT,OPRCCTIM,OPRCCEUI:      
                             OPRCCEDT,OPRCCETM,OPRCHOSP,OPRCSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPRCI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRRCIA1;OPRCLOCN,OPRCSDAT,OPRCSTIM,OPRCEDAT,OPRCETIM:      
                             OPRCREAS,OPRCCSUI,OPRCCDAT,OPRCCTIM,OPRCCEUI:      
                             OPRCCEDT,OPRCCETM,OPRCHOSP,OPRCSPAR                
          RETURN
.
WROPRCI1  RESET     KEY22                                                       
          WRITE     OPRRCIA1,KEY22;OPRCLOCN,OPRCSDAT,OPRCSTIM,OPRCEDAT,OPRCETIM:
                                   OPRCREAS,OPRCCSUI,OPRCCDAT,OPRCCTIM,OPRCCEUI:
                                   OPRCCEDT,OPRCCETM,OPRCHOSP,OPRCSPAR          
          RETURN
.
DEOPRCI1  RESET     KEY22                                                       
          DELETE    OPRRCIA1,KEY22                                              
          RETURN
.
RSOPRCI2  RESET     KEY22                                                       
          READ      OPRRCIA2,KEY22;;                                            
          RETURN
.
RAOPRCI2  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      OPRRCIA2,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPRCI2  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      OPRRCIA2,KEY22;OPRCLOCN,OPRCSDAT,OPRCSTIM,OPRCEDAT,OPRCETIM:
                                   OPRCREAS,OPRCCSUI,OPRCCDAT,OPRCCTIM,OPRCCEUI:
                                   OPRCCEDT,OPRCCETM,OPRCHOSP,OPRCSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPRCI2  MOVE      ZERO,OVRCD                                                  
          READKS    OPRRCIA2;OPRCLOCN,OPRCSDAT,OPRCSTIM,OPRCEDAT,OPRCETIM:      
                             OPRCREAS,OPRCCSUI,OPRCCDAT,OPRCCTIM,OPRCCEUI:      
                             OPRCCEDT,OPRCCETM,OPRCHOSP,OPRCSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPRCI2  MOVE      ZERO,OVRCD                                                  
          READKP    OPRRCIA2;OPRCLOCN,OPRCSDAT,OPRCSTIM,OPRCEDAT,OPRCETIM:      
                             OPRCREAS,OPRCCSUI,OPRCCDAT,OPRCCTIM,OPRCCEUI:      
                             OPRCCEDT,OPRCCETM,OPRCHOSP,OPRCSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPRCI2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRRCIA2;OPRCLOCN,OPRCSDAT,OPRCSTIM,OPRCEDAT,OPRCETIM:      
                             OPRCREAS,OPRCCSUI,OPRCCDAT,OPRCCTIM,OPRCCEUI:      
                             OPRCCEDT,OPRCCETM,OPRCHOSP,OPRCSPAR                
          RETURN
.
WROPRCI2  RESET     KEY22                                                       
          WRITE     OPRRCIA2,KEY22;OPRCLOCN,OPRCSDAT,OPRCSTIM,OPRCEDAT,OPRCETIM:
                                   OPRCREAS,OPRCCSUI,OPRCCDAT,OPRCCTIM,OPRCCEUI:
                                   OPRCCEDT,OPRCCETM,OPRCHOSP,OPRCSPAR          
          RETURN
.
DEOPRCI2  RESET     KEY22                                                       
          DELETE    OPRRCIA2,KEY22                                              
          RETURN
.
