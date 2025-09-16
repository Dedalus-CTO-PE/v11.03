.
. OPREXPIO    
. --------
. Filename     : oprexpaf.dat
.
RSOPEXP1  RESET     KEY6                                                        
          READ      OPREXPA1,KEY6;;                                             
          RETURN
.
RAOPEXP1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      OPREXPA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPEXP1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      OPREXPA1,KEY6;OPEXCODE,OPEXDESC,OPEXRUS,OPEXMCHG,OPEXSICD:  
                        OPEXACTV,OPEXSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPEXP1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OPREXPA1;OPEXCODE,OPEXDESC,OPEXRUS,OPEXMCHG,OPEXSICD:       
                        OPEXACTV,OPEXSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPEXP1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OPREXPA1;OPEXCODE,OPEXDESC,OPEXRUS,OPEXMCHG,OPEXSICD:       
                        OPEXACTV,OPEXSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPEXP1                                                                        
          UPDATE    OPREXPA1;OPEXCODE,OPEXDESC,OPEXRUS,OPEXMCHG,OPEXSICD:       
                        OPEXACTV,OPEXSPAR                                       
          RETURN
.
WROPEXP1  RESET     KEY6                                                        
          WRITE     OPREXPA1,KEY6;OPEXCODE,OPEXDESC,OPEXRUS,OPEXMCHG,OPEXSICD:  
                        OPEXACTV,OPEXSPAR                                       
          RETURN
.
DEOPEXP1  RESET     KEY6                                                        
          DELETE    OPREXPA1,KEY6                                               
          RETURN
.
RSOPEXP2  RESET     KEY36                                                       
          READ      OPREXPA2,KEY36;;                                            
          RETURN
.
RAOPEXP2  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      OPREXPA2,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPEXP2  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      OPREXPA2,KEY36;OPEXCODE,OPEXDESC,OPEXRUS,OPEXMCHG,OPEXSICD: 
                        OPEXACTV,OPEXSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPEXP2                                                                        
          MOVE      ZERO,OVRCD
          READKS    OPREXPA2;OPEXCODE,OPEXDESC,OPEXRUS,OPEXMCHG,OPEXSICD:       
                        OPEXACTV,OPEXSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPEXP2                                                                        
          MOVE      ZERO,OVRCD
          READKP    OPREXPA2;OPEXCODE,OPEXDESC,OPEXRUS,OPEXMCHG,OPEXSICD:       
                        OPEXACTV,OPEXSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPEXP2                                                                        
          UPDATE    OPREXPA2;OPEXCODE,OPEXDESC,OPEXRUS,OPEXMCHG,OPEXSICD:       
                        OPEXACTV,OPEXSPAR                                       
          RETURN
.
WROPEXP2  RESET     KEY36                                                       
          WRITE     OPREXPA2,KEY36;OPEXCODE,OPEXDESC,OPEXRUS,OPEXMCHG,OPEXSICD: 
                        OPEXACTV,OPEXSPAR                                       
          RETURN
.
DEOPEXP2  RESET     KEY36                                                       
          DELETE    OPREXPA2,KEY36                                              
          RETURN
.
