.
. OUTECTIO    
. --------
. Filename     : outectaf.dat
.
RSOTECT1  RESET     KEY30                                                       
          READ      OUTECTA1,KEY30;;                                            
          RETURN
.
RAOTECT1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECTA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTECT1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECTA1,KEY30;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:
                                   OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:
                                   OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:
                                   OTECRKEY,OTECOKEY,OTECSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      DOTECFLG,OTECFLAG
          RETURN
.
RKOTECT1  MOVE      ZERO,OVRCD                                                  
          READKS    OUTECTA1;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:      
                             OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:      
                             OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:      
                             OTECRKEY,OTECOKEY,OTECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DOTECFLG,OTECFLAG
          RETURN
.
RPOTECT1  MOVE      ZERO,OVRCD                                                  
          READKP    OUTECTA1;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:      
                             OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:      
                             OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:      
                             OTECRKEY,OTECOKEY,OTECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DOTECFLG,OTECFLAG
          RETURN
.
UPOTECT1  MOVE      ZERO,OVRCD                                                  
          MOVE      OTECFLAG,DOTECFLG
          UPDATE    OUTECTA1;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:      
                             OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:      
                             OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:      
                             OTECRKEY,OTECOKEY,OTECSPAR                         
          RETURN
.
WROTECT1  RESET     KEY30                                                       
          MOVE      OTECFLAG,DOTECFLG
          WRITE     OUTECTA1,KEY30;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:
                                   OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:
                                   OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:
                                   OTECRKEY,OTECOKEY,OTECSPAR                   
          RETURN
.
DEOTECT1  RESET     KEY30                                                       
          DELETE    OUTECTA1,KEY30                                              
          RETURN
.
RSOTECT2  RESET     KEY17                                                       
          READ      OUTECTA2,KEY17;;                                            
          RETURN
.
RAOTECT2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECTA2,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTECT2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECTA2,KEY17;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:
                                   OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:
                                   OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:
                                   OTECRKEY,OTECOKEY,OTECSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      DOTECFLG,OTECFLAG
          RETURN
.
RKOTECT2  MOVE      ZERO,OVRCD                                                  
          READKS    OUTECTA2;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:      
                             OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:      
                             OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:      
                             OTECRKEY,OTECOKEY,OTECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DOTECFLG,OTECFLAG
          RETURN
.
RPOTECT2  MOVE      ZERO,OVRCD                                                  
          READKP    OUTECTA2;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:      
                             OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:      
                             OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:      
                             OTECRKEY,OTECOKEY,OTECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DOTECFLG,OTECFLAG
          RETURN
.
UPOTECT2  MOVE      ZERO,OVRCD                                                  
          MOVE      OTECFLAG,DOTECFLG
          UPDATE    OUTECTA2;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:      
                             OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:      
                             OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:      
                             OTECRKEY,OTECOKEY,OTECSPAR                         
          RETURN
.
WROTECT2  RESET     KEY17                                                       
          MOVE      OTECFLAG,DOTECFLG
          WRITE     OUTECTA2,KEY17;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:
                                   OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:
                                   OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:
                                   OTECRKEY,OTECOKEY,OTECSPAR                   
          RETURN
.
DEOTECT2  RESET     KEY17                                                       
          DELETE    OUTECTA2,KEY17                                              
          RETURN
.
RSOTECT3  RESET     KEY24                                                       
          READ      OUTECTA3,KEY24;;                                            
          RETURN
.
RAOTECT3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECTA3,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTECT3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECTA3,KEY24;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:
                                   OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:
                                   OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:
                                   OTECRKEY,OTECOKEY,OTECSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      DOTECFLG,OTECFLAG
          RETURN
.
RKOTECT3  MOVE      ZERO,OVRCD                                                  
          READKS    OUTECTA3;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:      
                             OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:      
                             OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:      
                             OTECRKEY,OTECOKEY,OTECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DOTECFLG,OTECFLAG
          RETURN
.
RPOTECT3  MOVE      ZERO,OVRCD                                                  
          READKP    OUTECTA3;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:      
                             OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:      
                             OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:      
                             OTECRKEY,OTECOKEY,OTECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DOTECFLG,OTECFLAG
          RETURN
.
UPOTECT3  MOVE      ZERO,OVRCD                                                  
          MOVE      OTECFLAG,DOTECFLG
          UPDATE    OUTECTA3;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:      
                             OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:      
                             OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:      
                             OTECRKEY,OTECOKEY,OTECSPAR                         
          RETURN
.
WROTECT3  RESET     KEY24                                                       
          MOVE      OTECFLAG,DOTECFLG
          WRITE     OUTECTA3,KEY24;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:
                                   OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:
                                   OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:
                                   OTECRKEY,OTECOKEY,OTECSPAR                   
          RETURN
.
DEOTECT3  RESET     KEY24                                                       
          DELETE    OUTECTA3,KEY24                                              
          RETURN
.
RSOTECT4  RESET     KEY24                                                       
          READ      OUTECTA4,KEY24;;                                            
          RETURN
.
RAOTECT4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECTA4,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTECT4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECTA4,KEY24;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:
                                   OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:
                                   OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:
                                   OTECRKEY,OTECOKEY,OTECSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      DOTECFLG,OTECFLAG
          RETURN
.
RKOTECT4  MOVE      ZERO,OVRCD                                                  
          READKS    OUTECTA4;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:      
                             OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:      
                             OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:      
                             OTECRKEY,OTECOKEY,OTECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DOTECFLG,OTECFLAG
          RETURN
.
RPOTECT4  MOVE      ZERO,OVRCD                                                  
          READKP    OUTECTA4;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:      
                             OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:      
                             OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:      
                             OTECRKEY,OTECOKEY,OTECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DOTECFLG,OTECFLAG
          RETURN
.
UPOTECT4  MOVE      ZERO,OVRCD                                                  
          MOVE      OTECFLAG,DOTECFLG
          UPDATE    OUTECTA4;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:      
                             OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:      
                             OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:      
                             OTECRKEY,OTECOKEY,OTECSPAR                         
          RETURN
.
WROTECT4  RESET     KEY24                                                       
          MOVE      OTECFLAG,DOTECFLG
          WRITE     OUTECTA4,KEY24;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:
                                   OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:
                                   OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:
                                   OTECRKEY,OTECOKEY,OTECSPAR                   
          RETURN
.
DEOTECT4  RESET     KEY24                                                       
          DELETE    OUTECTA4,KEY24                                              
          RETURN
.
RSOTECT5  RESET     KEY35                                                       
          READ      OUTECTA5,KEY35;;                                            
          RETURN
.
RAOTECT5  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECTA5,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTECT5  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECTA5,KEY35;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:
                                   OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:
                                   OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:
                                   OTECRKEY,OTECOKEY,OTECSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      DOTECFLG,OTECFLAG
          RETURN
.
RKOTECT5  MOVE      ZERO,OVRCD                                                  
          READKS    OUTECTA5;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:      
                             OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:      
                             OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:      
                             OTECRKEY,OTECOKEY,OTECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DOTECFLG,OTECFLAG
          RETURN
.
RPOTECT5  MOVE      ZERO,OVRCD                                                  
          READKP    OUTECTA5;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:      
                             OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:      
                             OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:      
                             OTECRKEY,OTECOKEY,OTECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DOTECFLG,OTECFLAG
          RETURN
.
UPOTECT5  MOVE      ZERO,OVRCD                                                  
          MOVE      OTECFLAG,DOTECFLG
          UPDATE    OUTECTA5;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:      
                             OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:      
                             OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:      
                             OTECRKEY,OTECOKEY,OTECSPAR                         
          RETURN
.
WROTECT5  RESET     KEY35                                                       
          MOVE      OTECFLAG,DOTECFLG
          WRITE     OUTECTA5,KEY35;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:
                                   OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:
                                   OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:
                                   OTECRKEY,OTECOKEY,OTECSPAR                   
          RETURN
.
DEOTECT5  RESET     KEY35                                                       
          DELETE    OUTECTA5,KEY35                                              
          RETURN
.
RSOTECT6  RESET     KEY40                                                       
          READ      OUTECTA6,KEY40;;                                            
          RETURN
.
RAOTECT6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECTA6,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTECT6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECTA6,KEY40;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:
                                   OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:
                                   OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:
                                   OTECRKEY,OTECOKEY,OTECSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      DOTECFLG,OTECFLAG
          RETURN
.
RKOTECT6  MOVE      ZERO,OVRCD                                                  
          READKS    OUTECTA6;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:      
                             OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:      
                             OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:      
                             OTECRKEY,OTECOKEY,OTECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DOTECFLG,OTECFLAG
          RETURN
.
RPOTECT6  MOVE      ZERO,OVRCD                                                  
          READKP    OUTECTA6;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:      
                             OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:      
                             OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:      
                             OTECRKEY,OTECOKEY,OTECSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DOTECFLG,OTECFLAG
          RETURN
.
UPOTECT6  MOVE      ZERO,OVRCD                                                  
          MOVE      OTECFLAG,DOTECFLG
          UPDATE    OUTECTA6;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:      
                             OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:      
                             OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:      
                             OTECRKEY,OTECOKEY,OTECSPAR                         
          RETURN
.
WROTECT6  RESET     KEY40                                                       
          MOVE      OTECFLAG,DOTECFLG
          WRITE     OUTECTA6,KEY40;OTECHOSP,DOTECFLG,OTECMODL,OTECUNIQ,OTECINVN:
                                   OTECBATN,OTECURNO,OTECPBAT,OTECNBAT,OTECTRID:
                                   OTECAMTC,OTECAMTP,OTECPDAT,OTECSTAT,OTECCLID:
                                   OTECRKEY,OTECOKEY,OTECSPAR                   
          RETURN
.
DEOTECT6  RESET     KEY40                                                       
          DELETE    OUTECTA6,KEY40                                              
          RETURN
.
