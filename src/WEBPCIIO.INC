.
. WEBPCIIO    
. --------
. Filename     : webpciaf.dat
.
RSWBPCI1  RESET     KEY30                                                       
          READ      WEBPCIA1,KEY30;;                                            
          RETURN
.
RAWBPCI1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCIA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCI1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCIA1,KEY30;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:
                                   WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:
                                   WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:
                                   WBPIRESN,WBPISPAR                            
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
RKWBPCI1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCIA1;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
RPWBPCI1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCIA1;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
UPWBPCI1  MOVE      ZERO,OVRCD                                                  
          MOVE      WBPIFLAG,DWBPIFLG
          UPDATE    WEBPCIA1;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          RETURN
.
WRWBPCI1  RESET     KEY30                                                       
          MOVE      WBPIFLAG,DWBPIFLG
          WRITE     WEBPCIA1,KEY30;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:
                                   WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:
                                   WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:
                                   WBPIRESN,WBPISPAR                            
          RETURN
.
DEWBPCI1  RESET     KEY30                                                       
          DELETE    WEBPCIA1,KEY30                                              
          RETURN
.
RSWBPCI2  RESET     KEY17                                                       
          READ      WEBPCIA2,KEY17;;                                            
          RETURN
.
RAWBPCI2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCIA2,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCI2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCIA2,KEY17;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:
                                   WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:
                                   WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:
                                   WBPIRESN,WBPISPAR                            
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
RKWBPCI2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCIA2;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
RPWBPCI2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCIA2;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
UPWBPCI2  MOVE      ZERO,OVRCD       
          MOVE      WBPIFLAG,DWBPIFLG                                           
          UPDATE    WEBPCIA2;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          RETURN
.
WRWBPCI2  RESET     KEY17            
          MOVE      WBPIFLAG,DWBPIFLG                                           
          WRITE     WEBPCIA2,KEY17;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:
                                   WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:
                                   WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:
                                   WBPIRESN,WBPISPAR                            
          RETURN
.
DEWBPCI2  RESET     KEY17                                                       
          DELETE    WEBPCIA2,KEY17                                              
          RETURN
.
RSWBPCI3  RESET     KEY24                                                       
          READ      WEBPCIA3,KEY24;;                                            
          RETURN
.
RAWBPCI3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCIA3,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCI3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCIA3,KEY24;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:
                                   WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:
                                   WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:
                                   WBPIRESN,WBPISPAR                            
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
RKWBPCI3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCIA3;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
RPWBPCI3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCIA3;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
UPWBPCI3  MOVE      ZERO,OVRCD       
          MOVE      WBPIFLAG,DWBPIFLG                                           
          UPDATE    WEBPCIA3;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          RETURN
.
WRWBPCI3  RESET     KEY24            
          MOVE      WBPIFLAG,DWBPIFLG                                           
          WRITE     WEBPCIA3,KEY24;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:
                                   WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:
                                   WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:
                                   WBPIRESN,WBPISPAR                            
          RETURN
.
DEWBPCI3  RESET     KEY24                                                       
          DELETE    WEBPCIA3,KEY24                                              
          RETURN
.
RSWBPCI4  RESET     KEY24                                                       
          READ      WEBPCIA4,KEY24;;                                            
          RETURN
.
RAWBPCI4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCIA4,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCI4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCIA4,KEY24;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:
                                   WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:
                                   WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:
                                   WBPIRESN,WBPISPAR                            
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
RKWBPCI4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCIA4;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
RPWBPCI4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCIA4;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
UPWBPCI4  MOVE      ZERO,OVRCD       
          MOVE      WBPIFLAG,DWBPIFLG                                           
          UPDATE    WEBPCIA4;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          RETURN
.
WRWBPCI4  RESET     KEY24            
          MOVE      WBPIFLAG,DWBPIFLG                                           
          WRITE     WEBPCIA4,KEY24;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:
                                   WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:
                                   WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:
                                   WBPIRESN,WBPISPAR                            
          RETURN
.
DEWBPCI4  RESET     KEY24                                                       
          DELETE    WEBPCIA4,KEY24                                              
          RETURN
.
RSWBPCI5  RESET     KEY35                                                       
          READ      WEBPCIA5,KEY35;;                                            
          RETURN
.
RAWBPCI5  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCIA5,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCI5  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCIA5,KEY35;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:
                                   WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:
                                   WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:
                                   WBPIRESN,WBPISPAR                            
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
RKWBPCI5  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCIA5;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
RPWBPCI5  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCIA5;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
UPWBPCI5  MOVE      ZERO,OVRCD       
          MOVE      WBPIFLAG,DWBPIFLG                                           
          UPDATE    WEBPCIA5;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          RETURN
.
WRWBPCI5  RESET     KEY35            
          MOVE      WBPIFLAG,DWBPIFLG                                           
          WRITE     WEBPCIA5,KEY35;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:
                                   WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:
                                   WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:
                                   WBPIRESN,WBPISPAR                            
          RETURN
.
DEWBPCI5  RESET     KEY35                                                       
          DELETE    WEBPCIA5,KEY35                                              
          RETURN
.
RSWBPCI6  RESET     KEY40                                                       
          READ      WEBPCIA6,KEY40;;                                            
          RETURN
.
RAWBPCI6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCIA6,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCI6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCIA6,KEY40;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:
                                   WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:
                                   WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:
                                   WBPIRESN,WBPISPAR                            
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
RKWBPCI6  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCIA6;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
RPWBPCI6  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCIA6;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
UPWBPCI6  MOVE      ZERO,OVRCD       
          MOVE      WBPIFLAG,DWBPIFLG                                           
          UPDATE    WEBPCIA6;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          RETURN
.
WRWBPCI6  RESET     KEY40            
          MOVE      WBPIFLAG,DWBPIFLG                                           
          WRITE     WEBPCIA6,KEY40;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:
                                   WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:
                                   WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:
                                   WBPIRESN,WBPISPAR                            
          RETURN
.
DEWBPCI6  RESET     KEY40                                                       
          DELETE    WEBPCIA6,KEY40                                              
          RETURN
.
RSWBPCI7  RESET     KEY53                                                       
          READ      WEBPCIA7,KEY53;;                                            
          RETURN
.
RAWBPCI7  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCIA7,KEY53;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCI7  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCIA7,KEY53;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:
                                   WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:
                                   WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:
                                   WBPIRESN,WBPISPAR                            
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
RKWBPCI7  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCIA7;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
RPWBPCI7  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCIA7;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
UPWBPCI7  MOVE      ZERO,OVRCD       
          MOVE      WBPIFLAG,DWBPIFLG                                           
          UPDATE    WEBPCIA7;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          RETURN
.
WRWBPCI7  RESET     KEY53            
          MOVE      WBPIFLAG,DWBPIFLG                                           
          WRITE     WEBPCIA7,KEY53;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:
                                   WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:
                                   WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:
                                   WBPIRESN,WBPISPAR                            
          RETURN
.
DEWBPCI7  RESET     KEY53                                                       
          DELETE    WEBPCIA7,KEY53                                              
          RETURN
.
RSWBPCI8  RESET     KEY30                                                       
          READ      WEBPCIA8,KEY30;;                                            
          RETURN
.
RAWBPCI8  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCIA8,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCI8  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCIA8,KEY30;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:
                                   WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:
                                   WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:
                                   WBPIRESN,WBPISPAR                            
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
RKWBPCI8  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCIA8;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
RPWBPCI8  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCIA8;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DWBPIFLG,WBPIFLAG
          RETURN
.
UPWBPCI8  MOVE      ZERO,OVRCD       
          MOVE      WBPIFLAG,DWBPIFLG                                           
          UPDATE    WEBPCIA8;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:      
                             WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:      
                             WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:      
                             WBPIRESN,WBPISPAR                                  
          RETURN
.
WRWBPCI8  RESET     KEY30            
          MOVE      WBPIFLAG,DWBPIFLG                                           
          WRITE     WEBPCIA8,KEY30;WBPIHOSP,DWBPIFLG,WBPIMODL,WBPIUNIQ,WBPIINVN:
                                   WBPIBATN,WBPIURNO,WBPIPBAT,WBPINBAT,WBPITRID:
                                   WBPIAMTC,WBPISTAT,WBPIMSID,WBPICTYP,WBPIEROR:
                                   WBPIRESN,WBPISPAR                            
          RETURN
.
DEWBPCI8  RESET     KEY30                                                       
          DELETE    WEBPCIA8,KEY30                                              
          RETURN
.
