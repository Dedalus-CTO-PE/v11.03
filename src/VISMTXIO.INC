.
. VISMTXIO    
. --------
. Filename     : vismtxaf.dat
.
RSVSMTX1  RESET     KEY20                                                       
          READ      VISMTXA1,KEY20;;                                            
          RETURN
.
RAVSMTX1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      VISMTXA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDVSMTX1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      VISMTXA1,KEY20;VSMTVISN,VSMTTYPE,VSMTNOTE,VSMTUNIQ,VSMTCMNT:
                                   VSMTSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKVSMTX1  MOVE      ZERO,OVRCD                                                  
          READKS    VISMTXA1;VSMTVISN,VSMTTYPE,VSMTNOTE,VSMTUNIQ,VSMTCMNT:      
                             VSMTSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPVSMTX1  MOVE      ZERO,OVRCD                                                  
          READKP    VISMTXA1;VSMTVISN,VSMTTYPE,VSMTNOTE,VSMTUNIQ,VSMTCMNT:      
                             VSMTSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPVSMTX1  MOVE      ZERO,OVRCD                                                  
          UPDATE    VISMTXA1;VSMTVISN,VSMTTYPE,VSMTNOTE,VSMTUNIQ,VSMTCMNT:      
                             VSMTSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRVSMTX1  RESET     KEY20                                                       
          WRITE     VISMTXA1,KEY20;VSMTVISN,VSMTTYPE,VSMTNOTE,VSMTUNIQ,VSMTCMNT:
                                   VSMTSPAR                                     
          RETURN
.
DEVSMTX1  RESET     KEY20                                                       
          DELETE    VISMTXA1,KEY20                                              
          RETURN
.
RLVSMTX1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     VISMTXA1,KEY20;VSMTVISN,VSMTTYPE,VSMTNOTE,VSMTUNIQ,VSMTCMNT:
                                   VSMTSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLVSMTX1  MOVE      ZERO,OVRCD                                                  
          READLKS   VISMTXA1;VSMTVISN,VSMTTYPE,VSMTNOTE,VSMTUNIQ,VSMTCMNT:      
                             VSMTSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLVSMTX1  MOVE      ZERO,OVRCD                                                  
          READLKP   VISMTXA1;VSMTVISN,VSMTTYPE,VSMTNOTE,VSMTUNIQ,VSMTCMNT:      
                             VSMTSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUVSMTX1  RESET     KEY20                                                       
          UNLOCK    VISMTXA1                                                    
          RETURN
.
