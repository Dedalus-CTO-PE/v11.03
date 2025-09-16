.
. OBSECOIO    
. --------
. Filename     : obsecoaf.dat
.
RSOBECO1  RESET     KEY24                                                       
          READ      OBSECOA1,KEY24;;                                            
          RETURN
.
RAOBECO1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      OBSECOA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBECO1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      OBSECOA1,KEY24;OBECEAID,OBECCPID,OBECINDT,OBECCTYP,OBECINTM:
                        OBECINUS,OBECFEXT,OBECSLID,OBECURNO,OBECSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBECO1  MOVE      ZERO,OVRCD                                                  
          READKS    OBSECOA1;OBECEAID,OBECCPID,OBECINDT,OBECCTYP,OBECINTM:      
                        OBECINUS,OBECFEXT,OBECSLID,OBECURNO,OBECSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBECO1  MOVE      ZERO,OVRCD                                                  
          READKP    OBSECOA1;OBECEAID,OBECCPID,OBECINDT,OBECCTYP,OBECINTM:      
                        OBECINUS,OBECFEXT,OBECSLID,OBECURNO,OBECSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBECO1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OBSECOA1;OBECEAID,OBECCPID,OBECINDT,OBECCTYP,OBECINTM:      
                        OBECINUS,OBECFEXT,OBECSLID,OBECURNO,OBECSPAR            
          RETURN
.
WROBECO1  RESET     KEY24                                                       
          WRITE     OBSECOA1,KEY24;OBECEAID,OBECCPID,OBECINDT,OBECCTYP,OBECINTM:
                        OBECINUS,OBECFEXT,OBECSLID,OBECURNO,OBECSPAR            
          RETURN
.
DEOBECO1  RESET     KEY24                                                       
          DELETE    OBSECOA1,KEY24                                              
          RETURN
.
RSOBECO2  RESET     KEY32                                                       
          READ      OBSECOA2,KEY32;;                                            
          RETURN
.
RAOBECO2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      OBSECOA2,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBECO2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      OBSECOA2,KEY32;OBECEAID,OBECCPID,OBECINDT,OBECCTYP,OBECINTM:
                        OBECINUS,OBECFEXT,OBECSLID,OBECURNO,OBECSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBECO2  MOVE      ZERO,OVRCD                                                  
          READKS    OBSECOA2;OBECEAID,OBECCPID,OBECINDT,OBECCTYP,OBECINTM:      
                        OBECINUS,OBECFEXT,OBECSLID,OBECURNO,OBECSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBECO2  MOVE      ZERO,OVRCD                                                  
          READKP    OBSECOA2;OBECEAID,OBECCPID,OBECINDT,OBECCTYP,OBECINTM:      
                        OBECINUS,OBECFEXT,OBECSLID,OBECURNO,OBECSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBECO2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OBSECOA2;OBECEAID,OBECCPID,OBECINDT,OBECCTYP,OBECINTM:      
                        OBECINUS,OBECFEXT,OBECSLID,OBECURNO,OBECSPAR            
          RETURN
.
WROBECO2  RESET     KEY32                                                       
          WRITE     OBSECOA2,KEY32;OBECEAID,OBECCPID,OBECINDT,OBECCTYP,OBECINTM:
                        OBECINUS,OBECFEXT,OBECSLID,OBECURNO,OBECSPAR            
          RETURN
.
DEOBECO2  RESET     KEY32                                                       
          DELETE    OBSECOA2,KEY32                                              
          RETURN
.
