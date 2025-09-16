.
. WEBSDDIO    
. --------
. Filename     : websddaf.dat
.
RSWBSDD1  RESET     KEY30                                                       
          READ      WEBSDDA1,KEY30;;                                            
          RETURN
.
RAWBSDD1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSDDA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSDD1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSDDA1,KEY30;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:
                                   WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:
                                   WBSWTEXT,WBSWRESC,WBSWSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
RKWBSDD1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBSDDA1;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
RPWBSDD1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBSDDA1;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
UPWBSDD1  MOVE      ZERO,OVRCD                                                  
          MOVE      WBSWFLAG,DWBSWFLG
          UPDATE    WEBSDDA1;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          RETURN
.
WRWBSDD1  RESET     KEY30                                                       
          MOVE      WBSWFLAG,DWBSWFLG
          WRITE     WEBSDDA1,KEY30;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:
                                   WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:
                                   WBSWTEXT,WBSWRESC,WBSWSPAR                   
          RETURN
.
DEWBSDD1  RESET     KEY30                                                       
          DELETE    WEBSDDA1,KEY30                                              
          RETURN
.
RSWBSDD2  RESET     KEY17                                                       
          READ      WEBSDDA2,KEY17;;                                            
          RETURN
.
RAWBSDD2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSDDA2,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSDD2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSDDA2,KEY17;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:
                                   WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:
                                   WBSWTEXT,WBSWRESC,WBSWSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
RKWBSDD2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBSDDA2;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
RPWBSDD2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBSDDA2;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
UPWBSDD2  MOVE      ZERO,OVRCD                                                  
          MOVE      WBSWFLAG,DWBSWFLG
          UPDATE    WEBSDDA2;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          RETURN
.
WRWBSDD2  RESET     KEY17                                                       
          MOVE      WBSWFLAG,DWBSWFLG
          WRITE     WEBSDDA2,KEY17;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:
                                   WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:
                                   WBSWTEXT,WBSWRESC,WBSWSPAR                   
          RETURN
.
DEWBSDD2  RESET     KEY17                                                       
          DELETE    WEBSDDA2,KEY17                                              
          RETURN
.
RSWBSDD3  RESET     KEY24                                                       
          READ      WEBSDDA3,KEY24;;                                            
          RETURN
.
RAWBSDD3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSDDA3,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSDD3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSDDA3,KEY24;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:
                                   WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:
                                   WBSWTEXT,WBSWRESC,WBSWSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
RKWBSDD3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBSDDA3;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
RPWBSDD3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBSDDA3;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
UPWBSDD3  MOVE      ZERO,OVRCD                                                  
          MOVE      WBSWFLAG,DWBSWFLG
          UPDATE    WEBSDDA3;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          RETURN
.
WRWBSDD3  RESET     KEY24                                                       
          MOVE      WBSWFLAG,DWBSWFLG
          WRITE     WEBSDDA3,KEY24;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:
                                   WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:
                                   WBSWTEXT,WBSWRESC,WBSWSPAR                   
          RETURN
.
DEWBSDD3  RESET     KEY24                                                       
          DELETE    WEBSDDA3,KEY24                                              
          RETURN
.
RSWBSDD4  RESET     KEY24                                                       
          READ      WEBSDDA4,KEY24;;                                            
          RETURN
.
RAWBSDD4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSDDA4,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSDD4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSDDA4,KEY24;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:
                                   WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:
                                   WBSWTEXT,WBSWRESC,WBSWSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
RKWBSDD4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBSDDA4;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
RPWBSDD4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBSDDA4;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
UPWBSDD4  MOVE      ZERO,OVRCD                                                  
          MOVE      WBSWFLAG,DWBSWFLG
          UPDATE    WEBSDDA4;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          RETURN
.
WRWBSDD4  RESET     KEY24                                                       
          MOVE      WBSWFLAG,DWBSWFLG
          WRITE     WEBSDDA4,KEY24;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:
                                   WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:
                                   WBSWTEXT,WBSWRESC,WBSWSPAR                   
          RETURN
.
DEWBSDD4  RESET     KEY24                                                       
          DELETE    WEBSDDA4,KEY24                                              
          RETURN
.
RSWBSDD5  RESET     KEY35                                                       
          READ      WEBSDDA5,KEY35;;                                            
          RETURN
.
RAWBSDD5  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSDDA5,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSDD5  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSDDA5,KEY35;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:
                                   WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:
                                   WBSWTEXT,WBSWRESC,WBSWSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
RKWBSDD5  MOVE      ZERO,OVRCD                                                  
          READKS    WEBSDDA5;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
RPWBSDD5  MOVE      ZERO,OVRCD                                                  
          READKP    WEBSDDA5;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
UPWBSDD5  MOVE      ZERO,OVRCD                                                  
          MOVE      WBSWFLAG,DWBSWFLG
          UPDATE    WEBSDDA5;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          RETURN
.
WRWBSDD5  RESET     KEY35                                                       
          MOVE      WBSWFLAG,DWBSWFLG
          WRITE     WEBSDDA5,KEY35;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:
                                   WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:
                                   WBSWTEXT,WBSWRESC,WBSWSPAR                   
          RETURN
.
DEWBSDD5  RESET     KEY35                                                       
          DELETE    WEBSDDA5,KEY35                                              
          RETURN
.
RSWBSDD6  RESET     KEY40                                                       
          READ      WEBSDDA6,KEY40;;                                            
          RETURN
.
RAWBSDD6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSDDA6,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSDD6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSDDA6,KEY40;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:
                                   WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:
                                   WBSWTEXT,WBSWRESC,WBSWSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
RKWBSDD6  MOVE      ZERO,OVRCD                                                  
          READKS    WEBSDDA6;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
RPWBSDD6  MOVE      ZERO,OVRCD                                                  
          READKP    WEBSDDA6;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
UPWBSDD6  MOVE      ZERO,OVRCD                                                  
          MOVE      WBSWFLAG,DWBSWFLG
          UPDATE    WEBSDDA6;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          RETURN
.
WRWBSDD6  RESET     KEY40                                                       
          MOVE      WBSWFLAG,DWBSWFLG
          WRITE     WEBSDDA6,KEY40;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:
                                   WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:
                                   WBSWTEXT,WBSWRESC,WBSWSPAR                   
          RETURN
.
DEWBSDD6  RESET     KEY40                                                       
          DELETE    WEBSDDA6,KEY40                                              
          RETURN
.
RSWBSDD7  RESET     KEY53                                                       
          READ      WEBSDDA7,KEY53;;                                            
          RETURN
.
RAWBSDD7  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSDDA7,KEY53;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSDD7  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSDDA7,KEY53;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:
                                   WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:
                                   WBSWTEXT,WBSWRESC,WBSWSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
RKWBSDD7  MOVE      ZERO,OVRCD                                                  
          READKS    WEBSDDA7;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
RPWBSDD7  MOVE      ZERO,OVRCD                                                  
          READKP    WEBSDDA7;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
UPWBSDD7  MOVE      ZERO,OVRCD                                                  
          MOVE      WBSWFLAG,DWBSWFLG
          UPDATE    WEBSDDA7;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          RETURN
.
WRWBSDD7  RESET     KEY53                                                       
          MOVE      WBSWFLAG,DWBSWFLG
          WRITE     WEBSDDA7,KEY53;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:
                                   WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:
                                   WBSWTEXT,WBSWRESC,WBSWSPAR                   
          RETURN
.
DEWBSDD7  RESET     KEY53                                                       
          DELETE    WEBSDDA7,KEY53                                              
          RETURN
.
RSWBSDD8  RESET     KEY30                                                       
          READ      WEBSDDA8,KEY30;;                                            
          RETURN
.
RAWBSDD8  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSDDA8,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSDD8  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSDDA8,KEY30;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:
                                   WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:
                                   WBSWTEXT,WBSWRESC,WBSWSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
RKWBSDD8  MOVE      ZERO,OVRCD                                                  
          READKS    WEBSDDA8;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
RPWBSDD8  MOVE      ZERO,OVRCD                                                  
          READKP    WEBSDDA8;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      DWBSWFLG,WBSWFLAG
          RETURN
.
UPWBSDD8  MOVE      ZERO,OVRCD                                                  
          MOVE      WBSWFLAG,DWBSWFLG
          UPDATE    WEBSDDA8;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:      
                             WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:      
                             WBSWTEXT,WBSWRESC,WBSWSPAR                         
          RETURN
.
WRWBSDD8  RESET     KEY30                                                       
          MOVE      WBSWFLAG,DWBSWFLG
          WRITE     WEBSDDA8,KEY30;WBSWHOSP,DWBSWFLG,WBSWMODL,WBSWUNIQ,WBSWINVN:
                                   WBSWBATN,WBSWURNO,WBSWTRID,WBSWMSID,WBSWEROR:
                                   WBSWTEXT,WBSWRESC,WBSWSPAR                   
          RETURN
.
DEWBSDD8  RESET     KEY30                                                       
          DELETE    WEBSDDA8,KEY30                                              
          RETURN
.
