.
. WEBECOIO    
. --------
. Filename     : webecoaf.dat
.
RSWBECO1  RESET     KEY31                                                       
          READ      WEBECOA1,KEY31;;                                            
          RETURN
.
RAWBECO1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      WEBECOA1,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBECO1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      WEBECOA1,KEY31;WBEOHFND,WBEODFLG,WBEOTRID,WBEOINVN,WBEOBATN:
                                   WBEOCTYP,WBEOCDAT,WBEOUSER,WBEOSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBECO1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBECOA1;WBEOHFND,WBEODFLG,WBEOTRID,WBEOINVN,WBEOBATN:      
                             WBEOCTYP,WBEOCDAT,WBEOUSER,WBEOSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBECO1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBECOA1;WBEOHFND,WBEODFLG,WBEOTRID,WBEOINVN,WBEOBATN:      
                             WBEOCTYP,WBEOCDAT,WBEOUSER,WBEOSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBECO1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBECOA1;WBEOHFND,WBEODFLG,WBEOTRID,WBEOINVN,WBEOBATN:      
                             WBEOCTYP,WBEOCDAT,WBEOUSER,WBEOSPAR                
          RETURN
.
WRWBECO1  RESET     KEY31                                                       
          WRITE     WEBECOA1,KEY31;WBEOHFND,WBEODFLG,WBEOTRID,WBEOINVN,WBEOBATN:
                                   WBEOCTYP,WBEOCDAT,WBEOUSER,WBEOSPAR          
          RETURN
.
DEWBECO1  RESET     KEY31                                                       
          DELETE    WEBECOA1,KEY31                                              
          RETURN
.
RSWBECO2  RESET     KEY39                                                       
          READ      WEBECOA2,KEY39;;                                            
          RETURN
.
RAWBECO2  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      WEBECOA2,KEY39;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBECO2  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      WEBECOA2,KEY39;WBEOHFND,WBEODFLG,WBEOTRID,WBEOINVN,WBEOBATN:
                                   WBEOCTYP,WBEOCDAT,WBEOUSER,WBEOSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBECO2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBECOA2;WBEOHFND,WBEODFLG,WBEOTRID,WBEOINVN,WBEOBATN:      
                             WBEOCTYP,WBEOCDAT,WBEOUSER,WBEOSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBECO2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBECOA2;WBEOHFND,WBEODFLG,WBEOTRID,WBEOINVN,WBEOBATN:      
                             WBEOCTYP,WBEOCDAT,WBEOUSER,WBEOSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBECO2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBECOA2;WBEOHFND,WBEODFLG,WBEOTRID,WBEOINVN,WBEOBATN:      
                             WBEOCTYP,WBEOCDAT,WBEOUSER,WBEOSPAR                
          RETURN
.
WRWBECO2  RESET     KEY39                                                       
          WRITE     WEBECOA2,KEY39;WBEOHFND,WBEODFLG,WBEOTRID,WBEOINVN,WBEOBATN:
                                   WBEOCTYP,WBEOCDAT,WBEOUSER,WBEOSPAR          
          RETURN
.
DEWBECO2  RESET     KEY39                                                       
          DELETE    WEBECOA2,KEY39                                              
          RETURN
.
RSWBECO3  RESET     KEY31                                                       
          READ      WEBECOA3,KEY31;;                                            
          RETURN
.
RAWBECO3  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      WEBECOA3,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBECO3  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      WEBECOA3,KEY31;WBEOHFND,WBEODFLG,WBEOTRID,WBEOINVN,WBEOBATN:
                                   WBEOCTYP,WBEOCDAT,WBEOUSER,WBEOSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBECO3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBECOA3;WBEOHFND,WBEODFLG,WBEOTRID,WBEOINVN,WBEOBATN:      
                             WBEOCTYP,WBEOCDAT,WBEOUSER,WBEOSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBECO3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBECOA3;WBEOHFND,WBEODFLG,WBEOTRID,WBEOINVN,WBEOBATN:      
                             WBEOCTYP,WBEOCDAT,WBEOUSER,WBEOSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBECO3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBECOA3;WBEOHFND,WBEODFLG,WBEOTRID,WBEOINVN,WBEOBATN:      
                             WBEOCTYP,WBEOCDAT,WBEOUSER,WBEOSPAR                
          RETURN
.
WRWBECO3  RESET     KEY31                                                       
          WRITE     WEBECOA3,KEY31;WBEOHFND,WBEODFLG,WBEOTRID,WBEOINVN,WBEOBATN:
                                   WBEOCTYP,WBEOCDAT,WBEOUSER,WBEOSPAR          
          RETURN
.
DEWBECO3  RESET     KEY31                                                       
          DELETE    WEBECOA3,KEY31                                              
          RETURN
.
