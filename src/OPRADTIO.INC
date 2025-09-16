.
. OPRADTIO    
. --------
. Filename     : opradtaf.dat
.
RSOPADT1  RESET     KEY39                                                       
          READ      OPRADTA1,KEY39;;                                            
          RETURN
.
RAOPADT1  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      OPRADTA1,KEY39;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPADT1  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      OPRADTA1,KEY39;OPADUNIQ,OPADURNO,OPADVISN,OPADADAT,OPADATIM:
                        OPADWEBU,OPADATYP,OPADCODF,OPADORIG,OPADCHAN,OPADSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPADT1  MOVE      ZERO,OVRCD                                                  
          READKS    OPRADTA1;OPADUNIQ,OPADURNO,OPADVISN,OPADADAT,OPADATIM:      
                        OPADWEBU,OPADATYP,OPADCODF,OPADORIG,OPADCHAN,OPADSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPADT1  MOVE      ZERO,OVRCD                                                  
          READKP    OPRADTA1;OPADUNIQ,OPADURNO,OPADVISN,OPADADAT,OPADATIM:      
                        OPADWEBU,OPADATYP,OPADCODF,OPADORIG,OPADCHAN,OPADSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPADT1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRADTA1;OPADUNIQ,OPADURNO,OPADVISN,OPADADAT,OPADATIM:      
                        OPADWEBU,OPADATYP,OPADCODF,OPADORIG,OPADCHAN,OPADSPAR   
          RETURN
.
WROPADT1  RESET     KEY39                                                       
          WRITE     OPRADTA1,KEY39;OPADUNIQ,OPADURNO,OPADVISN,OPADADAT,OPADATIM:
                        OPADWEBU,OPADATYP,OPADCODF,OPADORIG,OPADCHAN,OPADSPAR   
          RETURN
.
DEOPADT1  RESET     KEY39                                                       
          DELETE    OPRADTA1,KEY39                                              
          RETURN
.
RSOPADT2  RESET     KEY47                                                       
          READ      OPRADTA2,KEY47;;                                            
          RETURN
.
RAOPADT2  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      OPRADTA2,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPADT2  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      OPRADTA2,KEY47;OPADUNIQ,OPADURNO,OPADVISN,OPADADAT,OPADATIM:
                        OPADWEBU,OPADATYP,OPADCODF,OPADORIG,OPADCHAN,OPADSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPADT2  MOVE      ZERO,OVRCD                                                  
          READKS    OPRADTA2;OPADUNIQ,OPADURNO,OPADVISN,OPADADAT,OPADATIM:      
                        OPADWEBU,OPADATYP,OPADCODF,OPADORIG,OPADCHAN,OPADSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPADT2  MOVE      ZERO,OVRCD                                                  
          READKP    OPRADTA2;OPADUNIQ,OPADURNO,OPADVISN,OPADADAT,OPADATIM:      
                        OPADWEBU,OPADATYP,OPADCODF,OPADORIG,OPADCHAN,OPADSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPADT2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRADTA2;OPADUNIQ,OPADURNO,OPADVISN,OPADADAT,OPADATIM:      
                        OPADWEBU,OPADATYP,OPADCODF,OPADORIG,OPADCHAN,OPADSPAR   
          RETURN
.
WROPADT2  RESET     KEY47                                                       
          WRITE     OPRADTA2,KEY47;OPADUNIQ,OPADURNO,OPADVISN,OPADADAT,OPADATIM:
                        OPADWEBU,OPADATYP,OPADCODF,OPADORIG,OPADCHAN,OPADSPAR   
          RETURN
.
DEOPADT2  RESET     KEY47                                                       
          DELETE    OPRADTA2,KEY47                                              
          RETURN
.
