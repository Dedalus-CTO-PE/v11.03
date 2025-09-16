.
. ALLMTXIO    
. --------
. Filename     : allmtxaf.dat
.
RSALMTX1  RESET     KEY28                                                       
          READ      ALLMTXA1,KEY28;;                                            
          RETURN
.
RAALMTX1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      ALLMTXA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALMTX1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      ALLMTXA1,KEY28;ALMTVISN,ALMTENCN,ALMTTYPE,ALMTNOTE,ALMTUNIQ:
                        ALMTCMNT,ALMTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALMTX1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLMTXA1;ALMTVISN,ALMTENCN,ALMTTYPE,ALMTNOTE,ALMTUNIQ:      
                        ALMTCMNT,ALMTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALMTX1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLMTXA1;ALMTVISN,ALMTENCN,ALMTTYPE,ALMTNOTE,ALMTUNIQ:      
                        ALMTCMNT,ALMTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALMTX1                                                                        
          UPDATE    ALLMTXA1;ALMTVISN,ALMTENCN,ALMTTYPE,ALMTNOTE,ALMTUNIQ:      
                        ALMTCMNT,ALMTSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALMTX1  RESET     KEY28                                                       
          WRITE     ALLMTXA1,KEY28;ALMTVISN,ALMTENCN,ALMTTYPE,ALMTNOTE,ALMTUNIQ:
                        ALMTCMNT,ALMTSPAR                                       
          RETURN
.
DEALMTX1  RESET     KEY28                                                       
          DELETE    ALLMTXA1,KEY28                                              
          RETURN
.
RLALMTX1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     ALLMTXA1,KEY28;ALMTVISN,ALMTENCN,ALMTTYPE,ALMTNOTE,ALMTUNIQ:
                        ALMTCMNT,ALMTSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALMTX1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLMTXA1;ALMTVISN,ALMTENCN,ALMTTYPE,ALMTNOTE,ALMTUNIQ:      
                        ALMTCMNT,ALMTSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALMTX1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLMTXA1;ALMTVISN,ALMTENCN,ALMTTYPE,ALMTNOTE,ALMTUNIQ:      
                        ALMTCMNT,ALMTSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALMTX1  RESET     KEY28                                                       
          UNLOCK    ALLMTXA1                                                    
          RETURN
.
