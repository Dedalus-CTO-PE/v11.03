.
. PATCMTIO    
. --------
. Filename     : patcmtaf.dat
.
RSPTCMT1  RESET     KEY18                                                       
          READ      PATCMTA1,KEY18;;                                            
          RETURN
.
RAPTCMT1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PATCMTA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCMT1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PATCMTA1,KEY18;PTCMCCOD,PTCMHFUN,PTCMHFTY,PTCMCNTR,PTCMSPRE 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTCMT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATCMTA1;PTCMCCOD,PTCMHFUN,PTCMHFTY,PTCMCNTR,PTCMSPRE       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTCMT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATCMTA1;PTCMCCOD,PTCMHFUN,PTCMHFTY,PTCMCNTR,PTCMSPRE       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTCMT1                                                                        
          UPDATE    PATCMTA1;PTCMCCOD,PTCMHFUN,PTCMHFTY,PTCMCNTR,PTCMSPRE       
          RETURN
.
WRPTCMT1  RESET     KEY18                                                       
          WRITE     PATCMTA1,KEY18;PTCMCCOD,PTCMHFUN,PTCMHFTY,PTCMCNTR,PTCMSPRE 
          RETURN
.
DEPTCMT1  RESET     KEY18                                                       
          DELETE    PATCMTA1,KEY18                                              
          RETURN
.
RSPTCMT2  RESET     KEY18                                                       
          READ      PATCMTA2,KEY18;;                                            
          RETURN
.
RAPTCMT2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PATCMTA2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCMT2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PATCMTA2,KEY18;PTCMCCOD,PTCMHFUN,PTCMHFTY,PTCMCNTR,PTCMSPRE 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTCMT2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATCMTA2;PTCMCCOD,PTCMHFUN,PTCMHFTY,PTCMCNTR,PTCMSPRE       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTCMT2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATCMTA2;PTCMCCOD,PTCMHFUN,PTCMHFTY,PTCMCNTR,PTCMSPRE       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTCMT2                                                                        
          UPDATE    PATCMTA2;PTCMCCOD,PTCMHFUN,PTCMHFTY,PTCMCNTR,PTCMSPRE       
          RETURN
.
WRPTCMT2  RESET     KEY18                                                       
          WRITE     PATCMTA2,KEY18;PTCMCCOD,PTCMHFUN,PTCMHFTY,PTCMCNTR,PTCMSPRE 
          RETURN
.
DEPTCMT2  RESET     KEY18                                                       
          DELETE    PATCMTA2,KEY18                                              
          RETURN
.
