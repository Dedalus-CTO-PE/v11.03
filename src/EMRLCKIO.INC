.
. EMRLCKIO    
. --------
. Filename     : emrlckaf.dat
.
RSEMLCK1  RESET     KEY11                                                       
          READ      EMRLCKA1,KEY11;;                                            
          RETURN
.
RAEMLCK1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      EMRLCKA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMLCK1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      EMRLCKA1,KEY11;EMLOVIST,EMLOTYPS,EMLOUSER,EMLOEXTR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMLCK1                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRLCKA1;EMLOVIST,EMLOTYPS,EMLOUSER,EMLOEXTR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMLCK1                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRLCKA1;EMLOVIST,EMLOTYPS,EMLOUSER,EMLOEXTR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMLCK1                                                                        
          UPDATE    EMRLCKA1;EMLOVIST,EMLOTYPS,EMLOUSER,EMLOEXTR                
          RETURN
.
WREMLCK1  RESET     KEY11                                                       
          WRITE     EMRLCKA1,KEY11;EMLOVIST,EMLOTYPS,EMLOUSER,EMLOEXTR          
          RETURN
.
DEEMLCK1  RESET     KEY11                                                       
          DELETE    EMRLCKA1,KEY11                                              
          RETURN
.
