.
. PRIECTIO    
. --------
. Filename     : priectaf.dat
.
RSPRECT1  RESET     KEY35                                                       
          READ      PRIECTA1,KEY35;;                                            
          RETURN
.
RAPRECT1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      PRIECTA1,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRECT1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      PRIECTA1,KEY35;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:
                                   PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:
                                   PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:
                                   PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR          
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
RKPRECT1  MOVE      ZERO,OVRCD                                                  
          READKS    PRIECTA1;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
RPPRECT1  MOVE      ZERO,OVRCD                                                  
          READKP    PRIECTA1;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
UPPRECT1  MOVE      ZERO,OVRCD                                                  
          MOVE      PRECFLAG,DPRECFLG
          UPDATE    PRIECTA1;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          RETURN
.
WRPRECT1  RESET     KEY35                                                       
          MOVE      PRECFLAG,DPRECFLG
          WRITE     PRIECTA1,KEY35;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:
                                   PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:
                                   PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:
                                   PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR          
          RETURN
.
DEPRECT1  RESET     KEY35                                                       
          DELETE    PRIECTA1,KEY35                                              
          RETURN
.
RSPRECT2  RESET     KEY16                                                       
          READ      PRIECTA2,KEY16;;                                            
          RETURN
.
RAPRECT2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PRIECTA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRECT2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PRIECTA2,KEY16;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:
                                   PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:
                                   PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:
                                   PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR          
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
RKPRECT2  MOVE      ZERO,OVRCD                                                  
          READKS    PRIECTA2;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
RPPRECT2  MOVE      ZERO,OVRCD                                                  
          READKP    PRIECTA2;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
UPPRECT2  MOVE      ZERO,OVRCD                                                  
          MOVE      PRECFLAG,DPRECFLG
          UPDATE    PRIECTA2;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          RETURN
.
WRPRECT2  RESET     KEY16                                                       
          MOVE      PRECFLAG,DPRECFLG
          WRITE     PRIECTA2,KEY16;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:
                                   PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:
                                   PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:
                                   PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR          
          RETURN
.
DEPRECT2  RESET     KEY16                                                       
          DELETE    PRIECTA2,KEY16                                              
          RETURN
.
RSPRECT3  RESET     KEY24                                                       
          READ      PRIECTA3,KEY24;;                                            
          RETURN
.
RAPRECT3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PRIECTA3,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRECT3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PRIECTA3,KEY24;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:
                                   PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:
                                   PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:
                                   PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR          
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
RKPRECT3  MOVE      ZERO,OVRCD                                                  
          READKS    PRIECTA3;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
RPPRECT3  MOVE      ZERO,OVRCD                                                  
          READKP    PRIECTA3;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
UPPRECT3  MOVE      ZERO,OVRCD                                                  
          MOVE      PRECFLAG,DPRECFLG
          UPDATE    PRIECTA3;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          RETURN
.
WRPRECT3  RESET     KEY24                                                       
          MOVE      PRECFLAG,DPRECFLG
          WRITE     PRIECTA3,KEY24;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:
                                   PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:
                                   PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:
                                   PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR          
          RETURN
.
DEPRECT3  RESET     KEY24                                                       
          DELETE    PRIECTA3,KEY24                                              
          RETURN
.
RSPRECT4  RESET     KEY24                                                       
          READ      PRIECTA4,KEY24;;                                            
          RETURN
.
RAPRECT4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PRIECTA4,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRECT4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PRIECTA4,KEY24;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:
                                   PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:
                                   PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:
                                   PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR          
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
RKPRECT4  MOVE      ZERO,OVRCD                                                  
          READKS    PRIECTA4;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
RPPRECT4  MOVE      ZERO,OVRCD                                                  
          READKP    PRIECTA4;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
UPPRECT4  MOVE      ZERO,OVRCD                                                  
          MOVE      PRECFLAG,DPRECFLG
          UPDATE    PRIECTA4;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          RETURN
.
WRPRECT4  RESET     KEY24                                                       
          MOVE      PRECFLAG,DPRECFLG
          WRITE     PRIECTA4,KEY24;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:
                                   PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:
                                   PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:
                                   PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR          
          RETURN
.
DEPRECT4  RESET     KEY24                                                       
          DELETE    PRIECTA4,KEY24                                              
          RETURN
.
RSPRECT5  RESET     KEY35                                                       
          READ      PRIECTA5,KEY35;;                                            
          RETURN
.
RAPRECT5  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      PRIECTA5,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRECT5  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      PRIECTA5,KEY35;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:
                                   PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:
                                   PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:
                                   PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR          
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
RKPRECT5  MOVE      ZERO,OVRCD                                                  
          READKS    PRIECTA5;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
RPPRECT5  MOVE      ZERO,OVRCD                                                  
          READKP    PRIECTA5;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
UPPRECT5  MOVE      ZERO,OVRCD                                                  
          MOVE      PRECFLAG,DPRECFLG
          UPDATE    PRIECTA5;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          RETURN
.
WRPRECT5  RESET     KEY35                                                       
          MOVE      PRECFLAG,DPRECFLG
          WRITE     PRIECTA5,KEY35;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:
                                   PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:
                                   PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:
                                   PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR          
          RETURN
.
DEPRECT5  RESET     KEY35                                                       
          DELETE    PRIECTA5,KEY35                                              
          RETURN
.
RSPRECT6  RESET     KEY40                                                       
          READ      PRIECTA6,KEY40;;                                            
          RETURN
.
RAPRECT6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      PRIECTA6,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRECT6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      PRIECTA6,KEY40;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:
                                   PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:
                                   PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:
                                   PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR          
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
RKPRECT6  MOVE      ZERO,OVRCD                                                  
          READKS    PRIECTA6;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
RPPRECT6  MOVE      ZERO,OVRCD                                                  
          READKP    PRIECTA6;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
UPPRECT6  MOVE      ZERO,OVRCD                                                  
          MOVE      PRECFLAG,DPRECFLG
          UPDATE    PRIECTA6;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          RETURN
.
WRPRECT6  RESET     KEY40                                                       
          MOVE      PRECFLAG,DPRECFLG
          WRITE     PRIECTA6,KEY40;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:
                                   PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:
                                   PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:
                                   PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR          
          RETURN
.
DEPRECT6  RESET     KEY40                                                       
          DELETE    PRIECTA6,KEY40                                              
          RETURN
.
RSPRECT7  RESET     KEY45                                                       
          READ      PRIECTA7,KEY45;;                                            
          RETURN
.
RAPRECT7  RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      PRIECTA7,KEY45;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRECT7  RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      PRIECTA7,KEY45;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:
                                   PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:
                                   PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:
                                   PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR          
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
RKPRECT7  MOVE      ZERO,OVRCD                                                  
          READKS    PRIECTA7;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
RPPRECT7  MOVE      ZERO,OVRCD                                                  
          READKP    PRIECTA7;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          GOTO      OVERCOND IF OVER
          MOVE      DPRECFLG,PRECFLAG
          RETURN
.
UPPRECT7  MOVE      ZERO,OVRCD                                                  
          MOVE      PRECFLAG,DPRECFLG
          UPDATE    PRIECTA7;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:      
                             PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:      
                             PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:      
                             PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR                
          RETURN
.
WRPRECT7  RESET     KEY45                                                       
          MOVE      PRECFLAG,DPRECFLG
          WRITE     PRIECTA7,KEY45;PRECHOSP,DPRECFLG,PRECHFND,PRECUNIQ,PRECINVN:
                                   PRECBATN,PRECURNO,PRECPBAT,PRECNBAT,PRECTRID:
                                   PRECEETP,PRECAMTC,PRECAMFP,PRECAMMP,PRECPDAT:
                                   PRECSTAT,PRECFTID,PRECPRAC,PRECSPAR          
          RETURN
.
DEPRECT7  RESET     KEY45                                                       
          DELETE    PRIECTA7,KEY45                                              
          RETURN
.
