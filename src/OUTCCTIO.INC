.
. OUTCCTIO    
. --------
. Filename     : outcctaf.dat
.
RSOTCCT1  RESET     KEY15                                                       
          READ      OUTCCTA1,KEY15;;                                            
          RETURN
.
RAOTCCT1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      OUTCCTA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTCCT1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      OUTCCTA1,KEY15;OTCCSITE,OTCCCTYP,OTCCCONT,OTCCCDAT,OTCCCTIM:
                        OTCCCUID,OTCCUDAT,OTCCUTIM,OTCCUUID,OTCCSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTCCT1  MOVE      ZERO,OVRCD                                                  
          READKS    OUTCCTA1;OTCCSITE,OTCCCTYP,OTCCCONT,OTCCCDAT,OTCCCTIM:      
                        OTCCCUID,OTCCUDAT,OTCCUTIM,OTCCUUID,OTCCSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTCCT1  MOVE      ZERO,OVRCD                                                  
          READKP    OUTCCTA1;OTCCSITE,OTCCCTYP,OTCCCONT,OTCCCDAT,OTCCCTIM:      
                        OTCCCUID,OTCCUDAT,OTCCUTIM,OTCCUUID,OTCCSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTCCT1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTCCTA1;OTCCSITE,OTCCCTYP,OTCCCONT,OTCCCDAT,OTCCCTIM:      
                        OTCCCUID,OTCCUDAT,OTCCUTIM,OTCCUUID,OTCCSPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTCCT1  RESET     KEY15                                                       
          WRITE     OUTCCTA1,KEY15;OTCCSITE,OTCCCTYP,OTCCCONT,OTCCCDAT,OTCCCTIM:
                        OTCCCUID,OTCCUDAT,OTCCUTIM,OTCCUUID,OTCCSPAR            
          RETURN
.
DEOTCCT1  RESET     KEY15                                                       
          DELETE    OUTCCTA1,KEY15                                              
          RETURN
.
RLOTCCT1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READL     OUTCCTA1,KEY15;OTCCSITE,OTCCCTYP,OTCCCONT,OTCCCDAT,OTCCCTIM:
                        OTCCCUID,OTCCUDAT,OTCCUTIM,OTCCUUID,OTCCSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTCCT1  MOVE      ZERO,OVRCD                                                  
          READLKS   OUTCCTA1;OTCCSITE,OTCCCTYP,OTCCCONT,OTCCCDAT,OTCCCTIM:      
                        OTCCCUID,OTCCUDAT,OTCCUTIM,OTCCUUID,OTCCSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTCCT1  MOVE      ZERO,OVRCD                                                  
          READLKP   OUTCCTA1;OTCCSITE,OTCCCTYP,OTCCCONT,OTCCCDAT,OTCCCTIM:      
                        OTCCCUID,OTCCUDAT,OTCCUTIM,OTCCUUID,OTCCSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTCCT1  RESET     KEY15                                                       
          UNLOCK    OUTCCTA1                                                    
          RETURN
.
