.
. OUTDCOIO    
. --------
. Filename     : outdcoaf.dat
.
RSOTDCO1  RESET     KEY29                                                       
          READ      OUTDCOA1,KEY29;;                                            
          RETURN
.
RAOTDCO1  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      OUTDCOA1,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTDCO1  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      OUTDCOA1,KEY29;OTDOURNO,OTDOADAT,OTDOATIM,OTDOATYP,OTDOCLNO:
                        OTDOCOMM,OTDOCDAT,OTDOCTIM,OTDOCUID,OTDOUDAT,OTDOUTIM:  
                        OTDOUUID,OTDOSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTDCO1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTDCOA1;OTDOURNO,OTDOADAT,OTDOATIM,OTDOATYP,OTDOCLNO:      
                        OTDOCOMM,OTDOCDAT,OTDOCTIM,OTDOCUID,OTDOUDAT,OTDOUTIM:  
                        OTDOUUID,OTDOSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTDCO1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTDCOA1;OTDOURNO,OTDOADAT,OTDOATIM,OTDOATYP,OTDOCLNO:      
                        OTDOCOMM,OTDOCDAT,OTDOCTIM,OTDOCUID,OTDOUDAT,OTDOUTIM:  
                        OTDOUUID,OTDOSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTDCO1                                                                        
          UPDATE    OUTDCOA1;OTDOURNO,OTDOADAT,OTDOATIM,OTDOATYP,OTDOCLNO:      
                        OTDOCOMM,OTDOCDAT,OTDOCTIM,OTDOCUID,OTDOUDAT,OTDOUTIM:  
                        OTDOUUID,OTDOSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTDCO1  RESET     KEY29                                                       
          WRITE     OUTDCOA1,KEY29;OTDOURNO,OTDOADAT,OTDOATIM,OTDOATYP,OTDOCLNO:
                        OTDOCOMM,OTDOCDAT,OTDOCTIM,OTDOCUID,OTDOUDAT,OTDOUTIM:  
                        OTDOUUID,OTDOSPAR                                       
          RETURN
.
DEOTDCO1  RESET     KEY29                                                       
          DELETE    OUTDCOA1,KEY29                                              
          RETURN
.
RLOTDCO1  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READL     OUTDCOA1,KEY29;OTDOURNO,OTDOADAT,OTDOATIM,OTDOATYP,OTDOCLNO:
                        OTDOCOMM,OTDOCDAT,OTDOCTIM,OTDOCUID,OTDOUDAT,OTDOUTIM:  
                        OTDOUUID,OTDOSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTDCO1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OUTDCOA1;OTDOURNO,OTDOADAT,OTDOATIM,OTDOATYP,OTDOCLNO:      
                        OTDOCOMM,OTDOCDAT,OTDOCTIM,OTDOCUID,OTDOUDAT,OTDOUTIM:  
                        OTDOUUID,OTDOSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTDCO1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OUTDCOA1;OTDOURNO,OTDOADAT,OTDOATIM,OTDOATYP,OTDOCLNO:      
                        OTDOCOMM,OTDOCDAT,OTDOCTIM,OTDOCUID,OTDOUDAT,OTDOUTIM:  
                        OTDOUUID,OTDOSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTDCO1  RESET     KEY29                                                       
          UNLOCK    OUTDCOA1                                                    
          RETURN
.
