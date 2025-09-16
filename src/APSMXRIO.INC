.
. APSMXRIO    
. --------
. Filename     : apsmxraf.dat
.
RSAPMX1   RESET     KEY35                                                       
          READ      APSMXRA1,KEY35;;                                            
          RETURN
.
RAAPMX1   RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      APSMXRA1,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPMX1   RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      APSMXRA1,KEY35;APMXCRD,APMXREF,APMXTYP,APMXSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPMX1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSMXRA1;APMXCRD,APMXREF,APMXTYP,APMXSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPMX1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSMXRA1;APMXCRD,APMXREF,APMXTYP,APMXSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPMX1                                                                         
          UPDATE    APSMXRA1;APMXCRD,APMXREF,APMXTYP,APMXSPA                    
          RETURN
.
WRAPMX1   RESET     KEY35                                                       
          WRITE     APSMXRA1,KEY35;APMXCRD,APMXREF,APMXTYP,APMXSPA              
          RETURN
.
DEAPMX1   RESET     KEY35                                                       
          DELETE    APSMXRA1,KEY35                                              
          RETURN
.
RSAPMX2   RESET     KEY35                                                       
          READ      APSMXRA2,KEY35;;                                            
          RETURN
.
RAAPMX2   RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      APSMXRA2,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPMX2   RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      APSMXRA2,KEY35;APMXCRD,APMXREF,APMXTYP,APMXSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPMX2                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSMXRA2;APMXCRD,APMXREF,APMXTYP,APMXSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPMX2                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSMXRA2;APMXCRD,APMXREF,APMXTYP,APMXSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPMX2                                                                         
          UPDATE    APSMXRA2;APMXCRD,APMXREF,APMXTYP,APMXSPA                    
          RETURN
.
WRAPMX2   RESET     KEY35                                                       
          WRITE     APSMXRA2,KEY35;APMXCRD,APMXREF,APMXTYP,APMXSPA              
          RETURN
.
DEAPMX2   RESET     KEY35                                                       
          DELETE    APSMXRA2,KEY35                                              
          RETURN
.
