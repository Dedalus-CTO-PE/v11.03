.
. OUTBITIO    
. --------
. Filename     : outbitaf.dat
.
RSOTBIT1  RESET     KEY10                                                       
          READ      OUTBITA1,KEY10;;                                            
          RETURN
.
RAOTBIT1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      OUTBITA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTBIT1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      OUTBITA1,KEY10;OTBIVISN,OTBIITMC,OTBIURNO,OTBIDATE,OTBIIFLG:
                        OTBIITMN,OTBISUBN,OTBICDAT,OTBICTIM,OTBICUID,OTBIUDAT:  
                        OTBIUTIM,OTBIUUID,OTBISTAT,OTBIPUSE,OTBISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTBIT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTBITA1;OTBIVISN,OTBIITMC,OTBIURNO,OTBIDATE,OTBIIFLG:      
                        OTBIITMN,OTBISUBN,OTBICDAT,OTBICTIM,OTBICUID,OTBIUDAT:  
                        OTBIUTIM,OTBIUUID,OTBISTAT,OTBIPUSE,OTBISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTBIT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTBITA1;OTBIVISN,OTBIITMC,OTBIURNO,OTBIDATE,OTBIIFLG:      
                        OTBIITMN,OTBISUBN,OTBICDAT,OTBICTIM,OTBICUID,OTBIUDAT:  
                        OTBIUTIM,OTBIUUID,OTBISTAT,OTBIPUSE,OTBISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTBIT1  PACK      OTBIUDAT,CCC,CYY,CMM,CDD
          REP       " 0",OTBIUDAT  
          CLOCK     TIME,OTBIUTIM
.
          UPDATE    OUTBITA1;OTBIVISN,OTBIITMC,OTBIURNO,OTBIDATE,OTBIIFLG:      
                        OTBIITMN,OTBISUBN,OTBICDAT,OTBICTIM,OTBICUID,OTBIUDAT:  
                        OTBIUTIM,OTBIUUID,OTBISTAT,OTBIPUSE,OTBISPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTBIT1  PACK      OTBICDAT,CCC,CYY,CMM,CDD
          REP       " 0",OTBICDAT  
          CLOCK     TIME,OTBICTIM
.
          RESET     KEY10                                                       
          WRITE     OUTBITA1,KEY10;OTBIVISN,OTBIITMC,OTBIURNO,OTBIDATE,OTBIIFLG:
                        OTBIITMN,OTBISUBN,OTBICDAT,OTBICTIM,OTBICUID,OTBIUDAT:  
                        OTBIUTIM,OTBIUUID,OTBISTAT,OTBIPUSE,OTBISPAR            
          RETURN
.
DEOTBIT1  RESET     KEY10                                                       
          DELETE    OUTBITA1,KEY10                                              
          RETURN
.
RLOTBIT1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     OUTBITA1,KEY10;OTBIVISN,OTBIITMC,OTBIURNO,OTBIDATE,OTBIIFLG:
                        OTBIITMN,OTBISUBN,OTBICDAT,OTBICTIM,OTBICUID,OTBIUDAT:  
                        OTBIUTIM,OTBIUUID,OTBISTAT,OTBIPUSE,OTBISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTBIT1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OUTBITA1;OTBIVISN,OTBIITMC,OTBIURNO,OTBIDATE,OTBIIFLG:      
                        OTBIITMN,OTBISUBN,OTBICDAT,OTBICTIM,OTBICUID,OTBIUDAT:  
                        OTBIUTIM,OTBIUUID,OTBISTAT,OTBIPUSE,OTBISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTBIT1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OUTBITA1;OTBIVISN,OTBIITMC,OTBIURNO,OTBIDATE,OTBIIFLG:      
                        OTBIITMN,OTBISUBN,OTBICDAT,OTBICTIM,OTBICUID,OTBIUDAT:  
                        OTBIUTIM,OTBIUUID,OTBISTAT,OTBIPUSE,OTBISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTBIT1  RESET     KEY10                                                       
          UNLOCK    OUTBITA1                                                    
          RETURN
.
RSOTBIT2  RESET     KEY24                                                       
          READ      OUTBITA2,KEY24;;                                            
          RETURN
.
RAOTBIT2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      OUTBITA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTBIT2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      OUTBITA2,KEY24;OTBIVISN,OTBIITMC,OTBIURNO,OTBIDATE,OTBIIFLG:
                        OTBIITMN,OTBISUBN,OTBICDAT,OTBICTIM,OTBICUID,OTBIUDAT:  
                        OTBIUTIM,OTBIUUID,OTBISTAT,OTBIPUSE,OTBISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTBIT2                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTBITA2;OTBIVISN,OTBIITMC,OTBIURNO,OTBIDATE,OTBIIFLG:      
                        OTBIITMN,OTBISUBN,OTBICDAT,OTBICTIM,OTBICUID,OTBIUDAT:  
                        OTBIUTIM,OTBIUUID,OTBISTAT,OTBIPUSE,OTBISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTBIT2                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTBITA2;OTBIVISN,OTBIITMC,OTBIURNO,OTBIDATE,OTBIIFLG:      
                        OTBIITMN,OTBISUBN,OTBICDAT,OTBICTIM,OTBICUID,OTBIUDAT:  
                        OTBIUTIM,OTBIUUID,OTBISTAT,OTBIPUSE,OTBISPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTBIT2  PACK      OTBIUDAT,CCC,CYY,CMM,CDD
          REP       " 0",OTBIUDAT  
          CLOCK     TIME,OTBIUTIM
.
          UPDATE    OUTBITA2;OTBIVISN,OTBIITMC,OTBIURNO,OTBIDATE,OTBIIFLG:      
                        OTBIITMN,OTBISUBN,OTBICDAT,OTBICTIM,OTBICUID,OTBIUDAT:  
                        OTBIUTIM,OTBIUUID,OTBISTAT,OTBIPUSE,OTBISPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTBIT2  PACK      OTBICDAT,CCC,CYY,CMM,CDD
          REP       " 0",OTBICDAT  
          CLOCK     TIME,OTBICTIM
.
          RESET     KEY24                                                       
          WRITE     OUTBITA2,KEY24;OTBIVISN,OTBIITMC,OTBIURNO,OTBIDATE,OTBIIFLG:
                        OTBIITMN,OTBISUBN,OTBICDAT,OTBICTIM,OTBICUID,OTBIUDAT:  
                        OTBIUTIM,OTBIUUID,OTBISTAT,OTBIPUSE,OTBISPAR            
          RETURN
.
DEOTBIT2  RESET     KEY24                                                       
          DELETE    OUTBITA2,KEY24                                              
          RETURN
.
RLOTBIT2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     OUTBITA2,KEY24;OTBIVISN,OTBIITMC,OTBIURNO,OTBIDATE,OTBIIFLG:
                        OTBIITMN,OTBISUBN,OTBICDAT,OTBICTIM,OTBICUID,OTBIUDAT:  
                        OTBIUTIM,OTBIUUID,OTBISTAT,OTBIPUSE,OTBISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTBIT2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OUTBITA2;OTBIVISN,OTBIITMC,OTBIURNO,OTBIDATE,OTBIIFLG:      
                        OTBIITMN,OTBISUBN,OTBICDAT,OTBICTIM,OTBICUID,OTBIUDAT:  
                        OTBIUTIM,OTBIUUID,OTBISTAT,OTBIPUSE,OTBISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTBIT2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OUTBITA2;OTBIVISN,OTBIITMC,OTBIURNO,OTBIDATE,OTBIIFLG:      
                        OTBIITMN,OTBISUBN,OTBICDAT,OTBICTIM,OTBICUID,OTBIUDAT:  
                        OTBIUTIM,OTBIUUID,OTBISTAT,OTBIPUSE,OTBISPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTBIT2  RESET     KEY24                                                       
          UNLOCK    OUTBITA2                                                    
          RETURN
.
