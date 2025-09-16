.
. CCSMTSIO    
. --------
. Filename     : ccsmtsaf.dat
.
RSCCMT1   RESET     KEY26                                                       
          READ      CCSMTSA1,KEY26;;                                            
          RETURN
.
RACCMT1   RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      CCSMTSA1,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCMT1   RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      CCSMTSA1,KEY26;CCMTYEAR,CCMTCOM,CCMTHCD,CCMTDPT,CCMTPCD:    
                        CCMTUCT,CCMTQTY,CCMTCST,CCMTFIX,CCMTFUC,CCMTSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCMT1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSMTSA1;CCMTYEAR,CCMTCOM,CCMTHCD,CCMTDPT,CCMTPCD:          
                        CCMTUCT,CCMTQTY,CCMTCST,CCMTFIX,CCMTFUC,CCMTSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCMT1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSMTSA1;CCMTYEAR,CCMTCOM,CCMTHCD,CCMTDPT,CCMTPCD:          
                        CCMTUCT,CCMTQTY,CCMTCST,CCMTFIX,CCMTFUC,CCMTSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCMT1                                                                         
          UPDATE    CCSMTSA1;CCMTYEAR,CCMTCOM,CCMTHCD,CCMTDPT,CCMTPCD:          
                        CCMTUCT,CCMTQTY,CCMTCST,CCMTFIX,CCMTFUC,CCMTSPA         
          RETURN
.
WRCCMT1   RESET     KEY26                                                       
          WRITE     CCSMTSA1,KEY26;CCMTYEAR,CCMTCOM,CCMTHCD,CCMTDPT,CCMTPCD:    
                        CCMTUCT,CCMTQTY,CCMTCST,CCMTFIX,CCMTFUC,CCMTSPA         
          RETURN
.
DECCMT1   RESET     KEY26                                                       
          DELETE    CCSMTSA1,KEY26                                              
          RETURN
.
