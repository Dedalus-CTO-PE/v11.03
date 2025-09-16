.
. TMPDTEIO    
. --------
. Filename     : tmpdteaf.dat
.
RSTMDTE1  RESET     KEY17                                                       
          READ      TMPDTEA1,KEY17;;                                            
          RETURN
.
RATMDTE1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      TMPDTEA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDTMDTE1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      TMPDTEA1,KEY17;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:
                                   TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:
                                   TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:
                                   TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:
                                   TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:
                                   TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:
                                   TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:
                                   TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTMDTE1  MOVE      ZERO,OVRCD                                                  
          READKS    TMPDTEA1;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:      
                             TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:      
                             TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:      
                             TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:      
                             TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:      
                             TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:      
                             TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:      
                             TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPTMDTE1  MOVE      ZERO,OVRCD                                                  
          READKP    TMPDTEA1;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:      
                             TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:      
                             TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:      
                             TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:      
                             TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:      
                             TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:      
                             TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:      
                             TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPTMDTE1  MOVE      ZERO,OVRCD                                                  
          UPDATE    TMPDTEA1;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:      
                             TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:      
                             TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:      
                             TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:      
                             TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:      
                             TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:      
                             TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:      
                             TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR                
          RETURN
.
WRTMDTE1  RESET     KEY17                                                       
          WRITE     TMPDTEA1,KEY17;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:
                                   TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:
                                   TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:
                                   TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:
                                   TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:
                                   TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:
                                   TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:
                                   TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR          
          RETURN
.
DETMDTE1  RESET     KEY17                                                       
          DELETE    TMPDTEA1,KEY17                                              
          RETURN
.
RSTMDTE2  RESET     KEY25                                                       
          READ      TMPDTEA2,KEY25;;                                            
          RETURN
.
RATMDTE2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      TMPDTEA2,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDTMDTE2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      TMPDTEA2,KEY25;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:
                                   TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:
                                   TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:
                                   TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:
                                   TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:
                                   TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:
                                   TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:
                                   TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTMDTE2  MOVE      ZERO,OVRCD                                                  
          READKS    TMPDTEA2;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:      
                             TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:      
                             TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:      
                             TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:      
                             TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:      
                             TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:      
                             TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:      
                             TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPTMDTE2  MOVE      ZERO,OVRCD                                                  
          READKP    TMPDTEA2;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:      
                             TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:      
                             TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:      
                             TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:      
                             TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:      
                             TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:      
                             TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:      
                             TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPTMDTE2  MOVE      ZERO,OVRCD                                                  
          UPDATE    TMPDTEA2;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:      
                             TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:      
                             TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:      
                             TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:      
                             TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:      
                             TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:      
                             TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:      
                             TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR                
          RETURN
.
WRTMDTE2  RESET     KEY25                                                       
          WRITE     TMPDTEA2,KEY25;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:
                                   TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:
                                   TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:
                                   TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:
                                   TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:
                                   TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:
                                   TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:
                                   TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR          
          RETURN
.
DETMDTE2  RESET     KEY25                                                       
          DELETE    TMPDTEA2,KEY25                                              
          RETURN
.
RSTMDTE3  RESET     KEY29                                                       
          READ      TMPDTEA3,KEY29;;                                            
          RETURN
.
RATMDTE3  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      TMPDTEA3,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDTMDTE3  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      TMPDTEA3,KEY29;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:
                                   TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:
                                   TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:
                                   TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:
                                   TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:
                                   TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:
                                   TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:
                                   TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTMDTE3  MOVE      ZERO,OVRCD                                                  
          READKS    TMPDTEA3;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:      
                             TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:      
                             TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:      
                             TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:      
                             TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:      
                             TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:      
                             TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:      
                             TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPTMDTE3  MOVE      ZERO,OVRCD                                                  
          READKP    TMPDTEA3;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:      
                             TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:      
                             TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:      
                             TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:      
                             TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:      
                             TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:      
                             TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:      
                             TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPTMDTE3  MOVE      ZERO,OVRCD                                                  
          UPDATE    TMPDTEA3;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:      
                             TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:      
                             TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:      
                             TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:      
                             TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:      
                             TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:      
                             TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:      
                             TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR                
          RETURN
.
WRTMDTE3  RESET     KEY29                                                       
          WRITE     TMPDTEA3,KEY29;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:
                                   TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:
                                   TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:
                                   TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:
                                   TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:
                                   TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:
                                   TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:
                                   TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR          
          RETURN
.
DETMDTE3  RESET     KEY29                                                       
          DELETE    TMPDTEA3,KEY29                                              
          RETURN
.
RSTMDTE4  RESET     KEY18                                                       
          READ      TMPDTEA4,KEY18;;                                            
          RETURN
.
RATMDTE4  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      TMPDTEA4,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDTMDTE4  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      TMPDTEA4,KEY18;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:
                                   TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:
                                   TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:
                                   TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:
                                   TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:
                                   TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:
                                   TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:
                                   TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTMDTE4  MOVE      ZERO,OVRCD                                                  
          READKS    TMPDTEA4;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:      
                             TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:      
                             TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:      
                             TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:      
                             TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:      
                             TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:      
                             TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:      
                             TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPTMDTE4  MOVE      ZERO,OVRCD                                                  
          READKP    TMPDTEA4;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:      
                             TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:      
                             TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:      
                             TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:      
                             TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:      
                             TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:      
                             TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:      
                             TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPTMDTE4  MOVE      ZERO,OVRCD                                                  
          UPDATE    TMPDTEA4;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:      
                             TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:      
                             TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:      
                             TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:      
                             TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:      
                             TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:      
                             TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:      
                             TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR                
          RETURN
.
WRTMDTE4  RESET     KEY18                                                       
          WRITE     TMPDTEA4,KEY18;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:
                                   TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:
                                   TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:
                                   TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:
                                   TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:
                                   TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:
                                   TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:
                                   TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR          
          RETURN
.
DETMDTE4  RESET     KEY18                                                       
          DELETE    TMPDTEA4,KEY18                                              
          RETURN
.
RSTMDTE5  RESET     KEY25                                                       
          READ      TMPDTEA5,KEY25;;                                            
          RETURN
.
RATMDTE5  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      TMPDTEA5,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDTMDTE5  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      TMPDTEA5,KEY25;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:
                                   TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:
                                   TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:
                                   TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:
                                   TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:
                                   TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:
                                   TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:
                                   TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKTMDTE5  MOVE      ZERO,OVRCD                                                  
          READKS    TMPDTEA5;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:      
                             TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:      
                             TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:      
                             TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:      
                             TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:      
                             TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:      
                             TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:      
                             TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPTMDTE5  MOVE      ZERO,OVRCD                                                  
          READKP    TMPDTEA5;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:      
                             TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:      
                             TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:      
                             TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:      
                             TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:      
                             TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:      
                             TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:      
                             TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPTMDTE5  MOVE      ZERO,OVRCD                                                  
          UPDATE    TMPDTEA5;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:      
                             TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:      
                             TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:      
                             TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:      
                             TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:      
                             TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:      
                             TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:      
                             TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR                
          RETURN
.
WRTMDTE5  RESET     KEY25                                                       
          WRITE     TMPDTEA5,KEY25;TMDTTDAT,TMDTRECN,TMDTTCNT,TMDTREGI,TMDTINVN:
                                   TMDTVIST,TMDTURNO,TMDTNAME,TMDTADD1,TMDTADD2:
                                   TMDTADD3,TMDTADD4,TMDTPOST,TMDTSFLG,TMDTREFR:
                                   TMDTINCA,TMDTBNKA,TMDTAMNT,TMDTDISC,TMDTMHOS:
                                   TMDTMDHS,TMDTGSTC,TMDTGSTA,TMDTALLO,TMDTRELD:
                                   TMDTRELT,TMDTPRAC,TMDTCDAT,TMDTCTIM,TMDTCUID:
                                   TMDTUDAT,TMDTUTIM,TMDTUUID,TMDTDPTY,TMDTPRIN:
                                   TMDTPRNT,TMDTTAMT,TMDTSDOC,TMDTSPAR          
          RETURN
.
DETMDTE5  RESET     KEY25                                                       
          DELETE    TMPDTEA5,KEY25                                              
          RETURN
.
