.
. RCPDTEIO    
. --------
. Filename     : rcpdteaf.dat
.
RSRCDTE1  RESET     KEY17                                                       
          READ      RCPDTEA1,KEY17;;                                            
          RETURN
.
RARCDTE1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDTEA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCDTE1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDTEA1,KEY17;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:
                                   RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:
                                   RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:
                                   RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:
                                   RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:
                                   RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:
                                   RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:
                                   RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:
                                   RCDTSDOC,RCDTEADN,RCDTSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCDTE1  MOVE      ZERO,OVRCD                                                  
          READKS    RCPDTEA1;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCDTE1  MOVE      ZERO,OVRCD                                                  
          READKP    RCPDTEA1;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCDTE1  MOVE      ZERO,OVRCD                                                  
          UPDATE    RCPDTEA1;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRCDTE1  RESET     KEY17                                                       
          WRITE     RCPDTEA1,KEY17;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:
                                   RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:
                                   RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:
                                   RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:
                                   RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:
                                   RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:
                                   RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:
                                   RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:
                                   RCDTSDOC,RCDTEADN,RCDTSPAR                   
          RETURN
.
DERCDTE1  RESET     KEY17                                                       
          DELETE    RCPDTEA1,KEY17                                              
          RETURN
.
RLRCDTE1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     RCPDTEA1,KEY17;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:
                                   RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:
                                   RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:
                                   RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:
                                   RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:
                                   RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:
                                   RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:
                                   RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:
                                   RCDTSDOC,RCDTEADN,RCDTSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRCDTE1  MOVE      ZERO,OVRCD                                                  
          READLKS   RCPDTEA1;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRCDTE1  MOVE      ZERO,OVRCD                                                  
          READLKP   RCPDTEA1;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURCDTE1  RESET     KEY17                                                       
          UNLOCK    RCPDTEA1                                                    
          RETURN
.
RSRCDTE2  RESET     KEY25                                                       
          READ      RCPDTEA2,KEY25;;                                            
          RETURN
.
RARCDTE2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDTEA2,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCDTE2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDTEA2,KEY25;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:
                                   RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:
                                   RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:
                                   RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:
                                   RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:
                                   RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:
                                   RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:
                                   RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:
                                   RCDTSDOC,RCDTEADN,RCDTSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCDTE2  MOVE      ZERO,OVRCD                                                  
          READKS    RCPDTEA2;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCDTE2  MOVE      ZERO,OVRCD                                                  
          READKP    RCPDTEA2;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCDTE2  MOVE      ZERO,OVRCD                                                  
          UPDATE    RCPDTEA2;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRCDTE2  RESET     KEY25                                                       
          WRITE     RCPDTEA2,KEY25;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:
                                   RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:
                                   RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:
                                   RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:
                                   RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:
                                   RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:
                                   RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:
                                   RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:
                                   RCDTSDOC,RCDTEADN,RCDTSPAR                   
          RETURN
.
DERCDTE2  RESET     KEY25                                                       
          DELETE    RCPDTEA2,KEY25                                              
          RETURN
.
RLRCDTE2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     RCPDTEA2,KEY25;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:
                                   RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:
                                   RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:
                                   RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:
                                   RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:
                                   RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:
                                   RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:
                                   RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:
                                   RCDTSDOC,RCDTEADN,RCDTSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRCDTE2  MOVE      ZERO,OVRCD                                                  
          READLKS   RCPDTEA2;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRCDTE2  MOVE      ZERO,OVRCD                                                  
          READLKP   RCPDTEA2;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURCDTE2  RESET     KEY25                                                       
          UNLOCK    RCPDTEA2                                                    
          RETURN
.
RSRCDTE3  RESET     KEY29                                                       
          READ      RCPDTEA3,KEY29;;                                            
          RETURN
.
RARCDTE3  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDTEA3,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCDTE3  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDTEA3,KEY29;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:
                                   RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:
                                   RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:
                                   RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:
                                   RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:
                                   RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:
                                   RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:
                                   RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:
                                   RCDTSDOC,RCDTEADN,RCDTSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCDTE3  MOVE      ZERO,OVRCD                                                  
          READKS    RCPDTEA3;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCDTE3  MOVE      ZERO,OVRCD                                                  
          READKP    RCPDTEA3;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCDTE3  MOVE      ZERO,OVRCD                                                  
          UPDATE    RCPDTEA3;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRCDTE3  RESET     KEY29                                                       
          WRITE     RCPDTEA3,KEY29;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:
                                   RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:
                                   RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:
                                   RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:
                                   RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:
                                   RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:
                                   RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:
                                   RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:
                                   RCDTSDOC,RCDTEADN,RCDTSPAR                   
          RETURN
.
DERCDTE3  RESET     KEY29                                                       
          DELETE    RCPDTEA3,KEY29                                              
          RETURN
.
RLRCDTE3  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READL     RCPDTEA3,KEY29;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:
                                   RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:
                                   RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:
                                   RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:
                                   RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:
                                   RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:
                                   RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:
                                   RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:
                                   RCDTSDOC,RCDTEADN,RCDTSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRCDTE3  MOVE      ZERO,OVRCD                                                  
          READLKS   RCPDTEA3;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRCDTE3  MOVE      ZERO,OVRCD                                                  
          READLKP   RCPDTEA3;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURCDTE3  RESET     KEY29                                                       
          UNLOCK    RCPDTEA3                                                    
          RETURN
.
RSRCDTE4  RESET     KEY18                                                       
          READ      RCPDTEA4,KEY18;;                                            
          RETURN
.
RARCDTE4  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDTEA4,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCDTE4  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDTEA4,KEY18;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:
                                   RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:
                                   RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:
                                   RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:
                                   RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:
                                   RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:
                                   RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:
                                   RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:
                                   RCDTSDOC,RCDTEADN,RCDTSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCDTE4  MOVE      ZERO,OVRCD                                                  
          READKS    RCPDTEA4;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCDTE4  MOVE      ZERO,OVRCD                                                  
          READKP    RCPDTEA4;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCDTE4  MOVE      ZERO,OVRCD                                                  
          UPDATE    RCPDTEA4;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRCDTE4  RESET     KEY18                                                       
          WRITE     RCPDTEA4,KEY18;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:
                                   RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:
                                   RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:
                                   RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:
                                   RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:
                                   RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:
                                   RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:
                                   RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:
                                   RCDTSDOC,RCDTEADN,RCDTSPAR                   
          RETURN
.
DERCDTE4  RESET     KEY18                                                       
          DELETE    RCPDTEA4,KEY18                                              
          RETURN
.
RLRCDTE4  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READL     RCPDTEA4,KEY18;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:
                                   RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:
                                   RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:
                                   RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:
                                   RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:
                                   RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:
                                   RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:
                                   RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:
                                   RCDTSDOC,RCDTEADN,RCDTSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRCDTE4  MOVE      ZERO,OVRCD                                                  
          READLKS   RCPDTEA4;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRCDTE4  MOVE      ZERO,OVRCD                                                  
          READLKP   RCPDTEA4;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURCDTE4  RESET     KEY18                                                       
          UNLOCK    RCPDTEA4                                                    
          RETURN
.
RSRCDTE5  RESET     KEY25                                                       
          READ      RCPDTEA5,KEY25;;                                            
          RETURN
.
RARCDTE5  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDTEA5,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCDTE5  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDTEA5,KEY25;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:
                                   RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:
                                   RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:
                                   RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:
                                   RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:
                                   RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:
                                   RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:
                                   RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:
                                   RCDTSDOC,RCDTEADN,RCDTSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCDTE5  MOVE      ZERO,OVRCD                                                  
          READKS    RCPDTEA5;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCDTE5  MOVE      ZERO,OVRCD                                                  
          READKP    RCPDTEA5;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCDTE5  MOVE      ZERO,OVRCD                                                  
          UPDATE    RCPDTEA5;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRCDTE5  RESET     KEY25                                                       
          WRITE     RCPDTEA5,KEY25;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:
                                   RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:
                                   RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:
                                   RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:
                                   RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:
                                   RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:
                                   RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:
                                   RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:
                                   RCDTSDOC,RCDTEADN,RCDTSPAR                   
          RETURN
.
DERCDTE5  RESET     KEY25                                                       
          DELETE    RCPDTEA5,KEY25                                              
          RETURN
.
RLRCDTE5  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     RCPDTEA5,KEY25;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:
                                   RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:
                                   RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:
                                   RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:
                                   RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:
                                   RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:
                                   RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:
                                   RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:
                                   RCDTSDOC,RCDTEADN,RCDTSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRCDTE5  MOVE      ZERO,OVRCD                                                  
          READLKS   RCPDTEA5;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRCDTE5  MOVE      ZERO,OVRCD                                                  
          READLKP   RCPDTEA5;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURCDTE5  RESET     KEY25                                                       
          UNLOCK    RCPDTEA5                                                    
          RETURN
.
RSRCDTE6  RESET     KEY25                                                       
          READ      RCPDTEA6,KEY25;;                                            
          RETURN
.
RARCDTE6  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDTEA6,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCDTE6  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDTEA6,KEY25;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:
                                   RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:
                                   RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:
                                   RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:
                                   RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:
                                   RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:
                                   RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:
                                   RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:
                                   RCDTSDOC,RCDTEADN,RCDTSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCDTE6  MOVE      ZERO,OVRCD                                                  
          READKS    RCPDTEA6;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCDTE6  MOVE      ZERO,OVRCD                                                  
          READKP    RCPDTEA6;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCDTE6  MOVE      ZERO,OVRCD                                                  
          UPDATE    RCPDTEA6;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRCDTE6  RESET     KEY25                                                       
          WRITE     RCPDTEA6,KEY25;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:
                                   RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:
                                   RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:
                                   RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:
                                   RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:
                                   RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:
                                   RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:
                                   RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:
                                   RCDTSDOC,RCDTEADN,RCDTSPAR                   
          RETURN
.
DERCDTE6  RESET     KEY25                                                       
          DELETE    RCPDTEA6,KEY25                                              
          RETURN
.
RLRCDTE6  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     RCPDTEA6,KEY25;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:
                                   RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:
                                   RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:
                                   RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:
                                   RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:
                                   RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:
                                   RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:
                                   RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:
                                   RCDTSDOC,RCDTEADN,RCDTSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRCDTE6  MOVE      ZERO,OVRCD                                                  
          READLKS   RCPDTEA6;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRCDTE6  MOVE      ZERO,OVRCD                                                  
          READLKP   RCPDTEA6;RCDTTDAT,RCDTRECN,RCDTTCNT,RCDTREGI,RCDTINVN:      
                             RCDTVIST,RCDTURNO,RCDTNAME,RCDTADD1,RCDTADD2:      
                             RCDTADD3,RCDTADD4,RCDTPOST,RCDTSFLG,RCDTREFR:      
                             RCDTINCA,RCDTBNKA,RCDTAMNT,RCDTDISC,RCDTMHOS:      
                             RCDTMDHS,RCDTGSTC,RCDTGSTA,RCDTALLO,RCDTRELD:      
                             RCDTRELT,RCDTPRAC,RCDTCDAT,RCDTCTIM,RCDTCUID:      
                             RCDTUDAT,RCDTUTIM,RCDTUUID,RCDTDPTY,RCDTGLEX:      
                             RCDTBATN,RCDTRELU,RCDTSPUI,RCDTSPDT,RCDTSPTM:      
                             RCDTSDOC,RCDTEADN,RCDTSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURCDTE6  RESET     KEY25                                                       
          UNLOCK    RCPDTEA6                                                    
          RETURN
.
