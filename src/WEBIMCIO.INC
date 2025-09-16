.
. WEBIMCIO    
. --------
. Filename     : webimcaf.dat
.
RSWBIMC1  RESET     KEY35                                                       
          READ      WEBIMCA1,KEY35;;                                            
          RETURN
.
RAWBIMC1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMCA1,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMC1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMCA1,KEY35;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:
                                   WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:
                                   WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:
                                   WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                                   WBIMSPAR 
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
RKWBIMC1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMCA1;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
RPWBIMC1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMCA1;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
UPWBIMC1  MOVE      ZERO,OVRCD                                                  
          MOVE      WBIMFLAG,DWBIMFLG
          UPDATE    WEBIMCA1;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          RETURN
.
WRWBIMC1  RESET     KEY35                                                       
          MOVE      WBIMFLAG,DWBIMFLG
          WRITE     WEBIMCA1,KEY35;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:
                                   WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:
                                   WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:
                                   WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                                   WBIMSPAR 
          RETURN
.
DEWBIMC1  RESET     KEY35                                                       
          DELETE    WEBIMCA1,KEY35                                              
          RETURN
.
RSWBIMC2  RESET     KEY16                                                       
          READ      WEBIMCA2,KEY16;;                                            
          RETURN
.
RAWBIMC2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMCA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMC2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMCA2,KEY16;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:
                                   WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:
                                   WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:
                                   WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                                   WBIMSPAR 
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
RKWBIMC2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMCA2;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
RPWBIMC2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMCA2;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
UPWBIMC2  MOVE      ZERO,OVRCD                                                  
          MOVE      WBIMFLAG,DWBIMFLG
          UPDATE    WEBIMCA2;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          RETURN
.
WRWBIMC2  RESET     KEY16                                                       
          MOVE      WBIMFLAG,DWBIMFLG
          WRITE     WEBIMCA2,KEY16;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:
                                   WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:
                                   WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:
                                   WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                                   WBIMSPAR 
          RETURN
.
DEWBIMC2  RESET     KEY16                                                       
          DELETE    WEBIMCA2,KEY16                                              
          RETURN
.
RSWBIMC3  RESET     KEY24                                                       
          READ      WEBIMCA3,KEY24;;                                            
          RETURN
.
RAWBIMC3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMCA3,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMC3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMCA3,KEY24;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:
                                   WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:
                                   WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:
                                   WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                                   WBIMSPAR 
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
RKWBIMC3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMCA3;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
RPWBIMC3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMCA3;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
UPWBIMC3  MOVE      ZERO,OVRCD                                                  
          MOVE      WBIMFLAG,DWBIMFLG
          UPDATE    WEBIMCA3;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          RETURN
.
WRWBIMC3  RESET     KEY24                                                       
          MOVE      WBIMFLAG,DWBIMFLG
          WRITE     WEBIMCA3,KEY24;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:
                                   WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:
                                   WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:
                                   WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                                   WBIMSPAR 
          RETURN
.
DEWBIMC3  RESET     KEY24                                                       
          DELETE    WEBIMCA3,KEY24                                              
          RETURN
.
RSWBIMC4  RESET     KEY24                                                       
          READ      WEBIMCA4,KEY24;;                                            
          RETURN
.
RAWBIMC4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMCA4,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMC4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMCA4,KEY24;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:
                                   WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:
                                   WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:
                                   WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                                   WBIMSPAR 
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
RKWBIMC4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMCA4;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
RPWBIMC4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMCA4;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
UPWBIMC4  MOVE      ZERO,OVRCD                                                  
          MOVE      WBIMFLAG,DWBIMFLG
          UPDATE    WEBIMCA4;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          RETURN
.
WRWBIMC4  RESET     KEY24                                                       
          MOVE      WBIMFLAG,DWBIMFLG
          WRITE     WEBIMCA4,KEY24;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:
                                   WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:
                                   WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:
                                   WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                                   WBIMSPAR 
          RETURN
.
DEWBIMC4  RESET     KEY24                                                       
          DELETE    WEBIMCA4,KEY24                                              
          RETURN
.
RSWBIMC5  RESET     KEY35                                                       
          READ      WEBIMCA5,KEY35;;                                            
          RETURN
.
RAWBIMC5  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMCA5,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMC5  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMCA5,KEY35;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:
                                   WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:
                                   WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:
                                   WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                                   WBIMSPAR 
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
RKWBIMC5  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMCA5;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
RPWBIMC5  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMCA5;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
UPWBIMC5  MOVE      ZERO,OVRCD                                                  
          MOVE      WBIMFLAG,DWBIMFLG
          UPDATE    WEBIMCA5;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          RETURN
.
WRWBIMC5  RESET     KEY35                                                       
          MOVE      WBIMFLAG,DWBIMFLG
          WRITE     WEBIMCA5,KEY35;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:
                                   WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:
                                   WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:
                                   WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                                   WBIMSPAR 
          RETURN
.
DEWBIMC5  RESET     KEY35                                                       
          DELETE    WEBIMCA5,KEY35                                              
          RETURN
.
RSWBIMC6  RESET     KEY40                                                       
          READ      WEBIMCA6,KEY40;;                                            
          RETURN
.
RAWBIMC6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMCA6,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMC6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMCA6,KEY40;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:
                                   WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:
                                   WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:
                                   WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                                   WBIMSPAR 
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
RKWBIMC6  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMCA6;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
RPWBIMC6  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMCA6;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
UPWBIMC6  MOVE      ZERO,OVRCD                                                  
          MOVE      WBIMFLAG,DWBIMFLG
          UPDATE    WEBIMCA6;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          RETURN
.
WRWBIMC6  RESET     KEY40                                                       
          MOVE      WBIMFLAG,DWBIMFLG
          WRITE     WEBIMCA6,KEY40;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:
                                   WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:
                                   WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:
                                   WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                                   WBIMSPAR 
          RETURN
.
DEWBIMC6  RESET     KEY40                                                       
          DELETE    WEBIMCA6,KEY40                                              
          RETURN
.
RSWBIMC7  RESET     KEY45                                                       
          READ      WEBIMCA7,KEY45;;                                            
          RETURN
.
RAWBIMC7  RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMCA7,KEY45;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMC7  RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMCA7,KEY45;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:
                                   WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:
                                   WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:
                                   WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                                   WBIMSPAR 
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
RKWBIMC7  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMCA7;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
RPWBIMC7  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMCA7;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
UPWBIMC7  MOVE      ZERO,OVRCD                                                  
          MOVE      WBIMFLAG,DWBIMFLG
          UPDATE    WEBIMCA7;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          RETURN
.
WRWBIMC7  RESET     KEY45                                                       
          MOVE      WBIMFLAG,DWBIMFLG
          WRITE     WEBIMCA7,KEY45;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:
                                   WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:
                                   WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:
                                   WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                                   WBIMSPAR 
          RETURN
.
DEWBIMC7  RESET     KEY45                                                       
          DELETE    WEBIMCA7,KEY45                                              
          RETURN
.
RSWBIMC8  RESET     KEY35                                                       
          READ      WEBIMCA8,KEY35;;                                            
          RETURN
.
RAWBIMC8  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMCA8,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIMC8  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIMCA8,KEY35;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:
                                   WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:
                                   WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:
                                   WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                                   WBIMSPAR 
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
RKWBIMC8  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIMCA8;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
RPWBIMC8  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIMCA8;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DWBIMFLG,WBIMFLAG
          RETURN
.
UPWBIMC8  MOVE      ZERO,OVRCD                                                  
          MOVE      WBIMFLAG,DWBIMFLG
          UPDATE    WEBIMCA8;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:      
                             WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:      
                             WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:      
                             WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                             WBIMSPAR       
          RETURN
.
WRWBIMC8  RESET     KEY35                                                       
          MOVE      WBIMFLAG,DWBIMFLG
          WRITE     WEBIMCA8,KEY35;WBIMHOSP,DWBIMFLG,WBIMHFND,WBIMUNIQ,WBIMINVN:
                                   WBIMBATN,WBIMURNO,WBIMPBAT,WBIMNBAT,WBIMTRID:
                                   WBIMEETP,WBIMAMTC,WBIMAMFP,WBIMAMMP,WBIMPDAT:
                                   WBIMSTAT,WBIMFTID,WBIMPRAC,WBIMMSID,WBIMCTYP:
                                   WBIMSPAR 
          RETURN
.
DEWBIMC8  RESET     KEY35                                                       
          DELETE    WEBIMCA8,KEY35                                              
          RETURN
.
