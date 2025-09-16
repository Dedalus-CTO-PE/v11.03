.
. OPRSDTIO    
. --------
. Filename     : oprsdtaf.dat
.
RSOPSDT1  RESET     KEY89                                                       
          READ      OPRSDTA1,KEY89;;                                            
          RETURN
.
RAOPSDT1  RESET     KEY89                                                       
          MOVE      ZERO,OVRCD
          READ      OPRSDTA1,KEY89;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPSDT1  RESET     KEY89                                                       
          MOVE      ZERO,OVRCD
          READ      OPRSDTA1,KEY89;OPSDUNIQ,OPSDTNUM,OPSDSTYP,OPSDSNAM,OPSDSDAT:
                                   OPSDSTIM,OPSDEDAT,OPSDETIM,OPSDSLEV,OPSDSTCC:
                                   OPSDFICT,OPSDUYN1,OPSDSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPSDT1  MOVE      ZERO,OVRCD                                                  
          READKS    OPRSDTA1;OPSDUNIQ,OPSDTNUM,OPSDSTYP,OPSDSNAM,OPSDSDAT:      
                             OPSDSTIM,OPSDEDAT,OPSDETIM,OPSDSLEV,OPSDSTCC:      
                             OPSDFICT,OPSDUYN1,OPSDSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPSDT1  MOVE      ZERO,OVRCD                                                  
          READKP    OPRSDTA1;OPSDUNIQ,OPSDTNUM,OPSDSTYP,OPSDSNAM,OPSDSDAT:      
                             OPSDSTIM,OPSDEDAT,OPSDETIM,OPSDSLEV,OPSDSTCC:      
                             OPSDFICT,OPSDUYN1,OPSDSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPSDT1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRSDTA1;OPSDUNIQ,OPSDTNUM,OPSDSTYP,OPSDSNAM,OPSDSDAT:      
                             OPSDSTIM,OPSDEDAT,OPSDETIM,OPSDSLEV,OPSDSTCC:      
                             OPSDFICT,OPSDUYN1,OPSDSPAR                         
          RETURN
.
WROPSDT1  RESET     KEY89                                                       
          WRITE     OPRSDTA1,KEY89;OPSDUNIQ,OPSDTNUM,OPSDSTYP,OPSDSNAM,OPSDSDAT:
                                   OPSDSTIM,OPSDEDAT,OPSDETIM,OPSDSLEV,OPSDSTCC:
                                   OPSDFICT,OPSDUYN1,OPSDSPAR                   
          RETURN
.
DEOPSDT1  RESET     KEY89                                                       
          DELETE    OPRSDTA1,KEY89                                              
          RETURN
.
