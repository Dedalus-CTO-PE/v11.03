.
. AMSRVAIO    
. --------
. Filename     : amsrvaaf.dat
.
RSAMRV1   RESET     KEY22                                                       
          READ      AMSRVAA1,KEY22;;                                            
          RETURN
.
RAAMRV1   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      AMSRVAA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMRV1   RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      AMSRVAA1,KEY22;AMRVREG,AMRVASS,AMRVRDT,AMRVYEAR,AMRVPER:    
                        AMRVRTY,AMRVREF,AMRVDES,AMRVAMT,AMRVAAD,AMRVRVR:        
                        AMRVPVR,AMRVUR1,AMRVUR2,AMRVUD1,AMRVUD2,AMRVUY1:        
                        AMRVUY2,AMRVSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMRV1                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSRVAA1;AMRVREG,AMRVASS,AMRVRDT,AMRVYEAR,AMRVPER:          
                        AMRVRTY,AMRVREF,AMRVDES,AMRVAMT,AMRVAAD,AMRVRVR:        
                        AMRVPVR,AMRVUR1,AMRVUR2,AMRVUD1,AMRVUD2,AMRVUY1:        
                        AMRVUY2,AMRVSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMRV1                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSRVAA1;AMRVREG,AMRVASS,AMRVRDT,AMRVYEAR,AMRVPER:          
                        AMRVRTY,AMRVREF,AMRVDES,AMRVAMT,AMRVAAD,AMRVRVR:        
                        AMRVPVR,AMRVUR1,AMRVUR2,AMRVUD1,AMRVUD2,AMRVUY1:        
                        AMRVUY2,AMRVSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMRV1                                                                         
          UPDATE    AMSRVAA1;AMRVREG,AMRVASS,AMRVRDT,AMRVYEAR,AMRVPER:          
                        AMRVRTY,AMRVREF,AMRVDES,AMRVAMT,AMRVAAD,AMRVRVR:        
                        AMRVPVR,AMRVUR1,AMRVUR2,AMRVUD1,AMRVUD2,AMRVUY1:        
                        AMRVUY2,AMRVSPA                                         
          RETURN
.
WRAMRV1   RESET     KEY22                                                       
          WRITE     AMSRVAA1,KEY22;AMRVREG,AMRVASS,AMRVRDT,AMRVYEAR,AMRVPER:    
                        AMRVRTY,AMRVREF,AMRVDES,AMRVAMT,AMRVAAD,AMRVRVR:        
                        AMRVPVR,AMRVUR1,AMRVUR2,AMRVUD1,AMRVUD2,AMRVUY1:        
                        AMRVUY2,AMRVSPA                                         
          RETURN
.
DEAMRV1   RESET     KEY22                                                       
          DELETE    AMSRVAA1,KEY22                                              
          RETURN
.
RSAMRV2   RESET     KEY26                                                       
          READ      AMSRVAA2,KEY26;;                                            
          RETURN
.
RAAMRV2   RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      AMSRVAA2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMRV2   RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      AMSRVAA2,KEY26;AMRVREG,AMRVASS,AMRVRDT,AMRVYEAR,AMRVPER:    
                        AMRVRTY,AMRVREF,AMRVDES,AMRVAMT,AMRVAAD,AMRVRVR:        
                        AMRVPVR,AMRVUR1,AMRVUR2,AMRVUD1,AMRVUD2,AMRVUY1:        
                        AMRVUY2,AMRVSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMRV2                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSRVAA2;AMRVREG,AMRVASS,AMRVRDT,AMRVYEAR,AMRVPER:          
                        AMRVRTY,AMRVREF,AMRVDES,AMRVAMT,AMRVAAD,AMRVRVR:        
                        AMRVPVR,AMRVUR1,AMRVUR2,AMRVUD1,AMRVUD2,AMRVUY1:        
                        AMRVUY2,AMRVSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMRV2                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSRVAA2;AMRVREG,AMRVASS,AMRVRDT,AMRVYEAR,AMRVPER:          
                        AMRVRTY,AMRVREF,AMRVDES,AMRVAMT,AMRVAAD,AMRVRVR:        
                        AMRVPVR,AMRVUR1,AMRVUR2,AMRVUD1,AMRVUD2,AMRVUY1:        
                        AMRVUY2,AMRVSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMRV2                                                                         
          UPDATE    AMSRVAA2;AMRVREG,AMRVASS,AMRVRDT,AMRVYEAR,AMRVPER:          
                        AMRVRTY,AMRVREF,AMRVDES,AMRVAMT,AMRVAAD,AMRVRVR:        
                        AMRVPVR,AMRVUR1,AMRVUR2,AMRVUD1,AMRVUD2,AMRVUY1:        
                        AMRVUY2,AMRVSPA                                         
          RETURN
.
WRAMRV2   RESET     KEY26                                                       
          WRITE     AMSRVAA2,KEY26;AMRVREG,AMRVASS,AMRVRDT,AMRVYEAR,AMRVPER:    
                        AMRVRTY,AMRVREF,AMRVDES,AMRVAMT,AMRVAAD,AMRVRVR:        
                        AMRVPVR,AMRVUR1,AMRVUR2,AMRVUD1,AMRVUD2,AMRVUY1:        
                        AMRVUY2,AMRVSPA                                         
          RETURN
.
DEAMRV2   RESET     KEY26                                                       
          DELETE    AMSRVAA2,KEY26                                              
          RETURN
.
