.
. WEBBBSIO    
. --------
. Filename     : webbbsaf.dat
.
RSWBBBS1  RESET     KEY30                                                       
          READ      WEBBBSA1,KEY30;;                                            
          RETURN
.
RAWBBBS1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBSA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBS1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBSA1,KEY30;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:
                                   WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:
                                   WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:
                                   WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:
                                   WBBSSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
RKWBBBS1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBSA1;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
RPWBBBS1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBSA1;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
UPWBBBS1  MOVE      ZERO,OVRCD                                                  
          MOVE      WBBSFLAG,DWBBSFLG
          UPDATE    WEBBBSA1;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          RETURN
.
WRWBBBS1  RESET     KEY30                                                       
          MOVE      WBBSFLAG,DWBBSFLG
          WRITE     WEBBBSA1,KEY30;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:
                                   WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:
                                   WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:
                                   WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:
                                   WBBSSPAR                                     
          RETURN
.
DEWBBBS1  RESET     KEY30                                                       
          DELETE    WEBBBSA1,KEY30                                              
          RETURN
.
RSWBBBS2  RESET     KEY17                                                       
          READ      WEBBBSA2,KEY17;;                                            
          RETURN
.
RAWBBBS2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBSA2,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBS2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBSA2,KEY17;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:
                                   WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:
                                   WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:
                                   WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:
                                   WBBSSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
RKWBBBS2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBSA2;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
RPWBBBS2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBSA2;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
UPWBBBS2  MOVE      ZERO,OVRCD                                                  
          MOVE      WBBSFLAG,DWBBSFLG
          UPDATE    WEBBBSA2;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          RETURN
.
WRWBBBS2  RESET     KEY17                                                       
          MOVE      WBBSFLAG,DWBBSFLG
          WRITE     WEBBBSA2,KEY17;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:
                                   WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:
                                   WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:
                                   WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:
                                   WBBSSPAR                                     
          RETURN
.
DEWBBBS2  RESET     KEY17                                                       
          DELETE    WEBBBSA2,KEY17                                              
          RETURN
.
RSWBBBS3  RESET     KEY24                                                       
          READ      WEBBBSA3,KEY24;;                                            
          RETURN
.
RAWBBBS3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBSA3,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBS3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBSA3,KEY24;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:
                                   WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:
                                   WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:
                                   WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:
                                   WBBSSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
RKWBBBS3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBSA3;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
RPWBBBS3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBSA3;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
UPWBBBS3  MOVE      ZERO,OVRCD                                                  
          MOVE      WBBSFLAG,DWBBSFLG
          UPDATE    WEBBBSA3;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          RETURN
.
WRWBBBS3  RESET     KEY24                                                       
          MOVE      WBBSFLAG,DWBBSFLG
          WRITE     WEBBBSA3,KEY24;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:
                                   WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:
                                   WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:
                                   WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:
                                   WBBSSPAR                                     
          RETURN
.
DEWBBBS3  RESET     KEY24                                                       
          DELETE    WEBBBSA3,KEY24                                              
          RETURN
.
RSWBBBS4  RESET     KEY24                                                       
          READ      WEBBBSA4,KEY24;;                                            
          RETURN
.
RAWBBBS4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBSA4,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBS4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBSA4,KEY24;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:
                                   WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:
                                   WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:
                                   WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:
                                   WBBSSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
RKWBBBS4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBSA4;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
RPWBBBS4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBSA4;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
UPWBBBS4  MOVE      ZERO,OVRCD                                                  
          MOVE      WBBSFLAG,DWBBSFLG
          UPDATE    WEBBBSA4;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          RETURN
.
WRWBBBS4  RESET     KEY24                                                       
          MOVE      WBBSFLAG,DWBBSFLG
          WRITE     WEBBBSA4,KEY24;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:
                                   WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:
                                   WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:
                                   WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:
                                   WBBSSPAR                                     
          RETURN
.
DEWBBBS4  RESET     KEY24                                                       
          DELETE    WEBBBSA4,KEY24                                              
          RETURN
.
RSWBBBS5  RESET     KEY35                                                       
          READ      WEBBBSA5,KEY35;;                                            
          RETURN
.
RAWBBBS5  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBSA5,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBS5  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBSA5,KEY35;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:
                                   WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:
                                   WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:
                                   WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:
                                   WBBSSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
RKWBBBS5  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBSA5;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
RPWBBBS5  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBSA5;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
UPWBBBS5  MOVE      ZERO,OVRCD                                                  
          MOVE      WBBSFLAG,DWBBSFLG
          UPDATE    WEBBBSA5;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          RETURN
.
WRWBBBS5  RESET     KEY35                                                       
          MOVE      WBBSFLAG,DWBBSFLG
          WRITE     WEBBBSA5,KEY35;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:
                                   WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:
                                   WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:
                                   WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:
                                   WBBSSPAR                                     
          RETURN
.
DEWBBBS5  RESET     KEY35                                                       
          DELETE    WEBBBSA5,KEY35                                              
          RETURN
.
RSWBBBS6  RESET     KEY40                                                       
          READ      WEBBBSA6,KEY40;;                                            
          RETURN
.
RAWBBBS6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBSA6,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBS6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBSA6,KEY40;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:
                                   WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:
                                   WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:
                                   WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:
                                   WBBSSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
RKWBBBS6  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBSA6;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
RPWBBBS6  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBSA6;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
UPWBBBS6  MOVE      ZERO,OVRCD                                                  
          MOVE      WBBSFLAG,DWBBSFLG
          UPDATE    WEBBBSA6;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          RETURN
.
WRWBBBS6  RESET     KEY40                                                       
          MOVE      WBBSFLAG,DWBBSFLG
          WRITE     WEBBBSA6,KEY40;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:
                                   WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:
                                   WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:
                                   WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:
                                   WBBSSPAR                                     
          RETURN
.
DEWBBBS6  RESET     KEY40                                                       
          DELETE    WEBBBSA6,KEY40                                              
          RETURN
.
RSWBBBS7  RESET     KEY53                                                       
          READ      WEBBBSA7,KEY53;;                                            
          RETURN
.
RAWBBBS7  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBSA7,KEY53;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBS7  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBSA7,KEY53;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:
                                   WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:
                                   WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:
                                   WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:
                                   WBBSSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
RKWBBBS7  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBSA7;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
RPWBBBS7  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBSA7;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
UPWBBBS7  MOVE      ZERO,OVRCD                                                  
          MOVE      WBBSFLAG,DWBBSFLG
          UPDATE    WEBBBSA7;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          RETURN
.
WRWBBBS7  RESET     KEY53                                                       
          MOVE      WBBSFLAG,DWBBSFLG
          WRITE     WEBBBSA7,KEY53;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:
                                   WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:
                                   WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:
                                   WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:
                                   WBBSSPAR                                     
          RETURN
.
DEWBBBS7  RESET     KEY53                                                       
          DELETE    WEBBBSA7,KEY53                                              
          RETURN
.
RSWBBBS8  RESET     KEY30                                                       
          READ      WEBBBSA8,KEY30;;                                            
          RETURN
.
RAWBBBS8  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBSA8,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBS8  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBSA8,KEY30;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:
                                   WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:
                                   WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:
                                   WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:
                                   WBBSSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
RKWBBBS8  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBSA8;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
RPWBBBS8  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBSA8;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBBSFLG,WBBSFLAG
          RETURN
.
UPWBBBS8  MOVE      ZERO,OVRCD                                                  
          MOVE      WBBSFLAG,DWBBSFLG
          UPDATE    WEBBBSA8;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:      
                             WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:      
                             WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:      
                             WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:      
                             WBBSSPAR                                           
          RETURN
.
WRWBBBS8  RESET     KEY30                                                       
          MOVE      WBBSFLAG,DWBBSFLG
          WRITE     WEBBBSA8,KEY30;WBBSHOSP,DWBBSFLG,WBBSMODL,WBBSUNIQ,WBBSINVN:
                                   WBBSBATN,WBBSURNO,WBBSPBAT,WBBSNBAT,WBBSTRID:
                                   WBBSAMTC,WBBSAMTP,WBBSPDAT,WBBSSTAT,WBBSCLID:
                                   WBBSRKEY,WBBSOKEY,WBBSMSID,WBBSPROV,WBBSSTYP:
                                   WBBSSPAR                                     
          RETURN
.
DEWBBBS8  RESET     KEY30                                                       
          DELETE    WEBBBSA8,KEY30                                              
          RETURN
.
