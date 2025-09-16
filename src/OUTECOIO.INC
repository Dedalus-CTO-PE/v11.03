.
. OUTECOIO    
. --------
. Filename     : outecoaf.dat
.
RSOTECO1  RESET     KEY26                                                       
          READ      OUTECOA1,KEY26;;                                            
          RETURN
.
RAOTECO1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECOA1,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTECO1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECOA1,KEY26;OTEOMODL,OTEODFLG,OTEOTRID,OTEOINVN,OTEOBATN:
                                   OTEOCDAT,OTEOUSER,OTEOSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTECO1  MOVE      ZERO,OVRCD                                                  
          READKS    OUTECOA1;OTEOMODL,OTEODFLG,OTEOTRID,OTEOINVN,OTEOBATN:      
                             OTEOCDAT,OTEOUSER,OTEOSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTECO1  MOVE      ZERO,OVRCD                                                  
          READKP    OUTECOA1;OTEOMODL,OTEODFLG,OTEOTRID,OTEOINVN,OTEOBATN:      
                             OTEOCDAT,OTEOUSER,OTEOSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTECO1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTECOA1;OTEOMODL,OTEODFLG,OTEOTRID,OTEOINVN,OTEOBATN:      
                             OTEOCDAT,OTEOUSER,OTEOSPAR                         
          RETURN
.
WROTECO1  RESET     KEY26                                                       
          WRITE     OUTECOA1,KEY26;OTEOMODL,OTEODFLG,OTEOTRID,OTEOINVN,OTEOBATN:
                                   OTEOCDAT,OTEOUSER,OTEOSPAR                   
          RETURN
.
DEOTECO1  RESET     KEY26                                                       
          DELETE    OUTECOA1,KEY26                                              
          RETURN
.
RSOTECO2  RESET     KEY34                                                       
          READ      OUTECOA2,KEY34;;                                            
          RETURN
.
RAOTECO2  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECOA2,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTECO2  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECOA2,KEY34;OTEOMODL,OTEODFLG,OTEOTRID,OTEOINVN,OTEOBATN:
                                   OTEOCDAT,OTEOUSER,OTEOSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTECO2  MOVE      ZERO,OVRCD                                                  
          READKS    OUTECOA2;OTEOMODL,OTEODFLG,OTEOTRID,OTEOINVN,OTEOBATN:      
                             OTEOCDAT,OTEOUSER,OTEOSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTECO2  MOVE      ZERO,OVRCD                                                  
          READKP    OUTECOA2;OTEOMODL,OTEODFLG,OTEOTRID,OTEOINVN,OTEOBATN:      
                             OTEOCDAT,OTEOUSER,OTEOSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTECO2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTECOA2;OTEOMODL,OTEODFLG,OTEOTRID,OTEOINVN,OTEOBATN:      
                             OTEOCDAT,OTEOUSER,OTEOSPAR                         
          RETURN
.
WROTECO2  RESET     KEY34                                                       
          WRITE     OUTECOA2,KEY34;OTEOMODL,OTEODFLG,OTEOTRID,OTEOINVN,OTEOBATN:
                                   OTEOCDAT,OTEOUSER,OTEOSPAR                   
          RETURN
.
DEOTECO2  RESET     KEY34                                                       
          DELETE    OUTECOA2,KEY34                                              
          RETURN
.
