.
. CSMCUCIO    
. --------
. Filename     : csmcucaf.dat
.
RSCSCU1   RESET     KEY8                                                        
          READ      CSMCUCA1,KEY8;;                                             
          RETURN
.
RACSCU1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      CSMCUCA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCSCU1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      CSMCUCA1,KEY8;CSCUDBS,CSCUCRD,CSCUTYP,CSCUSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCSCU1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CSMCUCA1;CSCUDBS,CSCUCRD,CSCUTYP,CSCUSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCSCU1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CSMCUCA1;CSCUDBS,CSCUCRD,CSCUTYP,CSCUSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCSCU1                                                                         
          UPDATE    CSMCUCA1;CSCUDBS,CSCUCRD,CSCUTYP,CSCUSPA                    
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCSCU1   RESET     KEY8                                                        
          WRITE     CSMCUCA1,KEY8;CSCUDBS,CSCUCRD,CSCUTYP,CSCUSPA               
          RETURN
.
DECSCU1   RESET     KEY8                                                        
          DELETE    CSMCUCA1,KEY8                                               
          RETURN
.
RLCSCU1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     CSMCUCA1,KEY8;CSCUDBS,CSCUCRD,CSCUTYP,CSCUSPA               
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCSCU1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CSMCUCA1;CSCUDBS,CSCUCRD,CSCUTYP,CSCUSPA                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCSCU1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CSMCUCA1;CSCUDBS,CSCUCRD,CSCUTYP,CSCUSPA                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCSCU1   RESET     KEY8                                                        
          UNLOCK    CSMCUCA1                                                    
          RETURN
.
