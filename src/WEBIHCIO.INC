.
. WEBIHCIO    
. --------
. Filename     : webihcaf.dat
.
RSWBIHC1  RESET     KEY35                                                       
          READ      WEBIHCA1,KEY35;;                                            
          RETURN
.
RAWBIHC1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHCA1,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHC1  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHCA1,KEY35;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:
                                   WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:
                                   DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:
                                   WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:
                                   WBICSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
RKWBIHC1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHCA1;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
RPWBIHC1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHCA1;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
UPWBIHC1  MOVE      WBICFLAG,DWBICFLG
          MOVE      WBICEETP,DWBICEET
          MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHCA1;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          RETURN
.
WRWBIHC1  MOVE      WBICFLAG,DWBICFLG
          MOVE      WBICEETP,DWBICEET
          RESET     KEY35                                                       
          WRITE     WEBIHCA1,KEY35;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:
                                   WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:
                                   DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:
                                   WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:
                                   WBICSPAR                                     
          RETURN
.
DEWBIHC1  RESET     KEY35                                                       
          DELETE    WEBIHCA1,KEY35                                              
          RETURN
.
RSWBIHC2  RESET     KEY16                                                       
          READ      WEBIHCA2,KEY16;;                                            
          RETURN
.
RAWBIHC2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHCA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHC2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHCA2,KEY16;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:
                                   WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:
                                   DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:
                                   WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:
                                   WBICSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
RKWBIHC2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHCA2;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
RPWBIHC2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHCA2;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
UPWBIHC2  MOVE      WBICFLAG,DWBICFLG
          MOVE      WBICEETP,DWBICEET
          MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHCA2;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          RETURN
.
WRWBIHC2  MOVE      WBICFLAG,DWBICFLG
          MOVE      WBICEETP,DWBICEET
          RESET     KEY16                                                       
          WRITE     WEBIHCA2,KEY16;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:
                                   WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:
                                   DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:
                                   WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:
                                   WBICSPAR                                     
          RETURN
.
DEWBIHC2  RESET     KEY16                                                       
          DELETE    WEBIHCA2,KEY16                                              
          RETURN
.
RSWBIHC3  RESET     KEY24                                                       
          READ      WEBIHCA3,KEY24;;                                            
          RETURN
.
RAWBIHC3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHCA3,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHC3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHCA3,KEY24;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:
                                   WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:
                                   DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:
                                   WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:
                                   WBICSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
RKWBIHC3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHCA3;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
RPWBIHC3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHCA3;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
UPWBIHC3  MOVE      WBICFLAG,DWBICFLG
          MOVE      WBICEETP,DWBICEET
          MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHCA3;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          RETURN
.
WRWBIHC3  MOVE      WBICFLAG,DWBICFLG
          MOVE      WBICEETP,DWBICEET
          RESET     KEY24                                                       
          WRITE     WEBIHCA3,KEY24;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:
                                   WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:
                                   DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:
                                   WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:
                                   WBICSPAR                                     
          RETURN
.
DEWBIHC3  RESET     KEY24                                                       
          DELETE    WEBIHCA3,KEY24                                              
          RETURN
.
RSWBIHC4  RESET     KEY24                                                       
          READ      WEBIHCA4,KEY24;;                                            
          RETURN
.
RAWBIHC4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHCA4,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHC4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHCA4,KEY24;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:
                                   WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:
                                   DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:
                                   WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:
                                   WBICSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
RKWBIHC4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHCA4;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
RPWBIHC4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHCA4;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
UPWBIHC4  MOVE      WBICFLAG,DWBICFLG
          MOVE      WBICEETP,DWBICEET
          MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHCA4;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          RETURN
.
WRWBIHC4  MOVE      WBICFLAG,DWBICFLG
          MOVE      WBICEETP,DWBICEET
          RESET     KEY24                                                       
          WRITE     WEBIHCA4,KEY24;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:
                                   WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:
                                   DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:
                                   WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:
                                   WBICSPAR                                     
          RETURN
.
DEWBIHC4  RESET     KEY24                                                       
          DELETE    WEBIHCA4,KEY24                                              
          RETURN
.
RSWBIHC5  RESET     KEY35                                                       
          READ      WEBIHCA5,KEY35;;                                            
          RETURN
.
RAWBIHC5  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHCA5,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHC5  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHCA5,KEY35;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:
                                   WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:
                                   DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:
                                   WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:
                                   WBICSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
RKWBIHC5  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHCA5;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
RPWBIHC5  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHCA5;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
UPWBIHC5  MOVE      WBICFLAG,DWBICFLG
          MOVE      WBICEETP,DWBICEET
          MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHCA5;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          RETURN
.
WRWBIHC5  MOVE      WBICFLAG,DWBICFLG
          MOVE      WBICEETP,DWBICEET
          RESET     KEY35                                                       
          WRITE     WEBIHCA5,KEY35;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:
                                   WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:
                                   DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:
                                   WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:
                                   WBICSPAR                                     
          RETURN
.
DEWBIHC5  RESET     KEY35                                                       
          DELETE    WEBIHCA5,KEY35                                              
          RETURN
.
RSWBIHC6  RESET     KEY40                                                       
          READ      WEBIHCA6,KEY40;;                                            
          RETURN
.
RAWBIHC6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHCA6,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHC6  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHCA6,KEY40;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:
                                   WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:
                                   DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:
                                   WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:
                                   WBICSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
RKWBIHC6  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHCA6;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
RPWBIHC6  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHCA6;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
UPWBIHC6  MOVE      WBICFLAG,DWBICFLG
          MOVE      WBICEETP,DWBICEET
          MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHCA6;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          RETURN
.
WRWBIHC6  MOVE      WBICFLAG,DWBICFLG
          MOVE      WBICEETP,DWBICEET
          RESET     KEY40                                                       
          WRITE     WEBIHCA6,KEY40;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:
                                   WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:
                                   DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:
                                   WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:
                                   WBICSPAR                                     
          RETURN
.
DEWBIHC6  RESET     KEY40                                                       
          DELETE    WEBIHCA6,KEY40                                              
          RETURN
.
RSWBIHC7  RESET     KEY52                                                       
          READ      WEBIHCA7,KEY52;;                                            
          RETURN
.
RAWBIHC7  RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHCA7,KEY52;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHC7  RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHCA7,KEY52;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:
                                   WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:
                                   DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:
                                   WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:
                                   WBICSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
RKWBIHC7  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHCA7;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
RPWBIHC7  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHCA7;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
UPWBIHC7  MOVE      WBICFLAG,DWBICFLG
          MOVE      WBICEETP,DWBICEET
          MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHCA7;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:      
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:      
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:      
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:      
                             WBICSPAR                                           
          RETURN
.
WRWBIHC7  MOVE      WBICFLAG,DWBICFLG
          MOVE      WBICEETP,DWBICEET
          RESET     KEY52                                                       
          WRITE     WEBIHCA7,KEY52;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:
                                   WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:
                                   DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:
                                   WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:
                                   WBICSPAR                                     
          RETURN
.
DEWBIHC7  RESET     KEY52                                                       
          DELETE    WEBIHCA7,KEY52                                              
          RETURN
.
RSWBIHC8  RESET     KEY35
          READ      WEBIHCA8,KEY35;;
          RETURN
.
RAWBIHC8  RESET     KEY35
          MOVE      ZERO,OVRCD
          READ      WEBIHCA8,KEY35;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHC8  RESET     KEY35
          MOVE      ZERO,OVRCD
          READ      WEBIHCA8,KEY35;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:
                                   WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:
                                   DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:
                                   WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:
                                   WBICSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
RKWBIHC8  MOVE      ZERO,OVRCD
          READKS    WEBIHCA8;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:
                             WBICSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
RPWBIHC8  MOVE      ZERO,OVRCD
          READKP    WEBIHCA8;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:
                             WBICSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DWBICFLG,WBICFLAG
          MOVE      DWBICEET,WBICEETP
          RETURN
.
UPWBIHC8  MOVE      WBICFLAG,DWBICFLG
          MOVE      WBICEETP,DWBICEET
          MOVE      ZERO,OVRCD
          UPDATE    WEBIHCA8;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:
                             WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:
                             DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:
                             WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:
                             WBICSPAR
          RETURN
.
WRWBIHC8  MOVE      WBICFLAG,DWBICFLG
          MOVE      WBICEETP,DWBICEET
          RESET     KEY35
          WRITE     WEBIHCA8,KEY35;DWBICFLG,WBICHFND,WBICADMN,WBICINVN,WBICBATN:
                                   WBICURNO,WBICPBAT,WBICNBAT,WBICCCFL,WBICTRID:
                                   DWBICEET,WBICAMTC,WBICAMTP,WBICPDAT,WBICSTAT:
                                   WBICFTID,WBICHOSP,WBICPCTI,WBICCTYP,WBICMSID:
                                   WBICSPAR
          RETURN
.
DEWBIHC8  RESET     KEY35
          DELETE    WEBIHCA8,KEY35
          RETURN
.
