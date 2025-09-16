.
. LEGACMIO    
. --------
. Filename     : legacmaf.dat
.
RSLGACM1  RESET     KEY35                                                       
          READ      LEGACMA1,KEY35;;                                            
          RETURN
.
RALGACM1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      LEGACMA1,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGACM1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      LEGACMA1,KEY35;LGACURNO,LGACADAT,LGACATIM,LGACEVNO,LGACLINE:
                        LGACCOMM,LGACSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKLGACM1  MOVE      ZERO,OVRCD                                                  
          READKS    LEGACMA1;LGACURNO,LGACADAT,LGACATIM,LGACEVNO,LGACLINE:      
                        LGACCOMM,LGACSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPLGACM1  MOVE      ZERO,OVRCD                                                  
          READKP    LEGACMA1;LGACURNO,LGACADAT,LGACATIM,LGACEVNO,LGACLINE:      
                        LGACCOMM,LGACSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPLGACM1  MOVE      ZERO,OVRCD                                                  
          UPDATE    LEGACMA1;LGACURNO,LGACADAT,LGACATIM,LGACEVNO,LGACLINE:      
                        LGACCOMM,LGACSPAR                                       
          RETURN
.
WRLGACM1  RESET     KEY35                                                       
          WRITE     LEGACMA1,KEY35;LGACURNO,LGACADAT,LGACATIM,LGACEVNO,LGACLINE:
                        LGACCOMM,LGACSPAR                                       
          RETURN
.
DELGACM1  RESET     KEY35                                                       
          DELETE    LEGACMA1,KEY35                                              
          RETURN
.
