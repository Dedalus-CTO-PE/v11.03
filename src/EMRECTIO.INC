.
. EMRECTIO    
. --------
. Filename     : emrectaf.dat
.
RSEMECT1  RESET     KEY30                                                       
          READ      EMRECTA1,KEY30;;                                            
          RETURN
.
RAEMECT1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECTA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMECT1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECTA1,KEY30;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:
                                   EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:
                                   EMECAMTC,EMECSTAT,EMECSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      DEMECFLG,EMECFLAG
          RETURN
.
RKEMECT1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRECTA1;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:      
                             EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:      
                             EMECAMTC,EMECSTAT,EMECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DEMECFLG,EMECFLAG
          RETURN
.
RPEMECT1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRECTA1;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:      
                             EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:      
                             EMECAMTC,EMECSTAT,EMECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DEMECFLG,EMECFLAG
          RETURN
.
UPEMECT1  MOVE      ZERO,OVRCD                                                  
          MOVE      EMECFLAG,DEMECFLG
          UPDATE    EMRECTA1;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:      
                             EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:      
                             EMECAMTC,EMECSTAT,EMECSPAR                         
          RETURN
.
WREMECT1  RESET     KEY30                                                       
          MOVE      EMECFLAG,DEMECFLG
          WRITE     EMRECTA1,KEY30;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:
                                   EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:
                                   EMECAMTC,EMECSTAT,EMECSPAR                   
          RETURN
.
DEEMECT1  RESET     KEY30                                                       
          DELETE    EMRECTA1,KEY30                                              
          RETURN
.
RSEMECT2  RESET     KEY17                                                       
          READ      EMRECTA2,KEY17;;                                            
          RETURN
.
RAEMECT2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECTA2,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMECT2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECTA2,KEY17;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:
                                   EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:
                                   EMECAMTC,EMECSTAT,EMECSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      DEMECFLG,EMECFLAG
          RETURN
.
RKEMECT2  MOVE      ZERO,OVRCD                                                  
          READKS    EMRECTA2;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:      
                             EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:      
                             EMECAMTC,EMECSTAT,EMECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DEMECFLG,EMECFLAG
          RETURN
.
RPEMECT2  MOVE      ZERO,OVRCD                                                  
          READKP    EMRECTA2;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:      
                             EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:      
                             EMECAMTC,EMECSTAT,EMECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DEMECFLG,EMECFLAG
          RETURN
.
UPEMECT2  MOVE      ZERO,OVRCD                                                  
          MOVE      EMECFLAG,DEMECFLG
          UPDATE    EMRECTA2;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:      
                             EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:      
                             EMECAMTC,EMECSTAT,EMECSPAR                         
          RETURN
.
WREMECT2  RESET     KEY17                                                       
          MOVE      EMECFLAG,DEMECFLG
          WRITE     EMRECTA2,KEY17;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:
                                   EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:
                                   EMECAMTC,EMECSTAT,EMECSPAR                   
          RETURN
.
DEEMECT2  RESET     KEY17                                                       
          DELETE    EMRECTA2,KEY17                                              
          RETURN
.
RSEMECT3  RESET     KEY24                                                       
          READ      EMRECTA3,KEY24;;                                            
          RETURN
.
RAEMECT3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECTA3,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMECT3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECTA3,KEY24;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:
                                   EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:
                                   EMECAMTC,EMECSTAT,EMECSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      DEMECFLG,EMECFLAG
          RETURN
.
RKEMECT3  MOVE      ZERO,OVRCD                                                  
          READKS    EMRECTA3;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:      
                             EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:      
                             EMECAMTC,EMECSTAT,EMECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DEMECFLG,EMECFLAG
          RETURN
.
RPEMECT3  MOVE      ZERO,OVRCD                                                  
          READKP    EMRECTA3;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:      
                             EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:      
                             EMECAMTC,EMECSTAT,EMECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DEMECFLG,EMECFLAG
          RETURN
.
UPEMECT3  MOVE      ZERO,OVRCD                                                  
          MOVE      EMECFLAG,DEMECFLG
          UPDATE    EMRECTA3;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:      
                             EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:      
                             EMECAMTC,EMECSTAT,EMECSPAR                         
          RETURN
.
WREMECT3  RESET     KEY24                                                       
          MOVE      EMECFLAG,DEMECFLG
          WRITE     EMRECTA3,KEY24;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:
                                   EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:
                                   EMECAMTC,EMECSTAT,EMECSPAR                   
          RETURN
.
DEEMECT3  RESET     KEY24                                                       
          DELETE    EMRECTA3,KEY24                                              
          RETURN
.
RSEMECT4  RESET     KEY24                                                       
          READ      EMRECTA4,KEY24;;                                            
          RETURN
.
RAEMECT4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECTA4,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMECT4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECTA4,KEY24;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:
                                   EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:
                                   EMECAMTC,EMECSTAT,EMECSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      DEMECFLG,EMECFLAG
          RETURN
.
RKEMECT4  MOVE      ZERO,OVRCD                                                  
          READKS    EMRECTA4;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:      
                             EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:      
                             EMECAMTC,EMECSTAT,EMECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DEMECFLG,EMECFLAG
          RETURN
.
RPEMECT4  MOVE      ZERO,OVRCD                                                  
          READKP    EMRECTA4;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:      
                             EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:      
                             EMECAMTC,EMECSTAT,EMECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DEMECFLG,EMECFLAG
          RETURN
.
UPEMECT4  MOVE      ZERO,OVRCD                                                  
          MOVE      EMECFLAG,DEMECFLG
          UPDATE    EMRECTA4;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:      
                             EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:      
                             EMECAMTC,EMECSTAT,EMECSPAR                         
          RETURN
.
WREMECT4  RESET     KEY24                                                       
          MOVE      EMECFLAG,DEMECFLG
          WRITE     EMRECTA4,KEY24;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:
                                   EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:
                                   EMECAMTC,EMECSTAT,EMECSPAR                   
          RETURN
.
DEEMECT4  RESET     KEY24                                                       
          DELETE    EMRECTA4,KEY24                                              
          RETURN
.
RSEMECT5  RESET     KEY35                                                       
          READ      EMRECTA5,KEY35;;                                            
          RETURN
.
RAEMECT5  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECTA5,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMECT5  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECTA5,KEY35;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:
                                   EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:
                                   EMECAMTC,EMECSTAT,EMECSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      DEMECFLG,EMECFLAG
          RETURN
.
RKEMECT5  MOVE      ZERO,OVRCD                                                  
          READKS    EMRECTA5;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:      
                             EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:      
                             EMECAMTC,EMECSTAT,EMECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DEMECFLG,EMECFLAG
          RETURN
.
RPEMECT5  MOVE      ZERO,OVRCD                                                  
          READKP    EMRECTA5;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:      
                             EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:      
                             EMECAMTC,EMECSTAT,EMECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DEMECFLG,EMECFLAG
          RETURN
.
UPEMECT5  MOVE      ZERO,OVRCD                                                  
          MOVE      EMECFLAG,DEMECFLG
          UPDATE    EMRECTA5;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:      
                             EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:      
                             EMECAMTC,EMECSTAT,EMECSPAR                         
          RETURN
.
WREMECT5  RESET     KEY35                                                       
          MOVE      EMECFLAG,DEMECFLG
          WRITE     EMRECTA5,KEY35;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:
                                   EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:
                                   EMECAMTC,EMECSTAT,EMECSPAR                   
          RETURN
.
DEEMECT5  RESET     KEY35                                                       
          DELETE    EMRECTA5,KEY35                                              
          RETURN
.
RSEMECT6  RESET     KEY40                                                       
          READ      EMRECTA6,KEY40;;                                            
          RETURN
.
RAEMECT6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECTA6,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMECT6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECTA6,KEY40;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:
                                   EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:
                                   EMECAMTC,EMECSTAT,EMECSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      DEMECFLG,EMECFLAG
          RETURN
.
RKEMECT6  MOVE      ZERO,OVRCD                                                  
          READKS    EMRECTA6;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:      
                             EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:      
                             EMECAMTC,EMECSTAT,EMECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DEMECFLG,EMECFLAG
          RETURN
.
RPEMECT6  MOVE      ZERO,OVRCD                                                  
          READKP    EMRECTA6;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:      
                             EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:      
                             EMECAMTC,EMECSTAT,EMECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DEMECFLG,EMECFLAG
          RETURN
.
UPEMECT6  MOVE      ZERO,OVRCD                                                  
          MOVE      EMECFLAG,DEMECFLG
          UPDATE    EMRECTA6;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:      
                             EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:      
                             EMECAMTC,EMECSTAT,EMECSPAR                         
          RETURN
.
WREMECT6  RESET     KEY40                                                       
          MOVE      EMECFLAG,DEMECFLG
          WRITE     EMRECTA6,KEY40;EMECHOSP,DEMECFLG,EMECMODL,EMECUNIQ,EMECINVN:
                                   EMECBATN,EMECURNO,EMECPBAT,EMECNBAT,EMECTRID:
                                   EMECAMTC,EMECSTAT,EMECSPAR                   
          RETURN
.
DEEMECT6  RESET     KEY40                                                       
          DELETE    EMRECTA6,KEY40                                              
          RETURN
.
