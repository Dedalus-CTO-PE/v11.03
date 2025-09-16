.
. RCPDBPIO    
. --------
. Filename     : rcpdbpaf.dat
.
RSRCDBP1  RESET     KEY32                                                       
          READ      RCPDBPA1,KEY32;;                                            
          RETURN
.
RARCDBP1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDBPA1,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCDBP1  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDBPA1,KEY32;RCDBRECN,RCDBTCNT,RCDBINVN,RCDBILNE,RCDBPAMT:
                                   RCDBSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCDBP1  MOVE      ZERO,OVRCD                                                  
          READKS    RCPDBPA1;RCDBRECN,RCDBTCNT,RCDBINVN,RCDBILNE,RCDBPAMT:      
                             RCDBSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCDBP1  MOVE      ZERO,OVRCD                                                  
          READKP    RCPDBPA1;RCDBRECN,RCDBTCNT,RCDBINVN,RCDBILNE,RCDBPAMT:      
                             RCDBSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCDBP1  MOVE      ZERO,OVRCD                                                  
          UPDATE    RCPDBPA1;RCDBRECN,RCDBTCNT,RCDBINVN,RCDBILNE,RCDBPAMT:      
                             RCDBSPAR                                           
          RETURN
.
WRRCDBP1  RESET     KEY32                                                       
          WRITE     RCPDBPA1,KEY32;RCDBRECN,RCDBTCNT,RCDBINVN,RCDBILNE,RCDBPAMT:
                                   RCDBSPAR                                     
          RETURN
.
DERCDBP1  RESET     KEY32                                                       
          DELETE    RCPDBPA1,KEY32                                              
          RETURN
.
RSRCDBP2  RESET     KEY32                                                       
          READ      RCPDBPA2,KEY32;;                                            
          RETURN
.
RARCDBP2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDBPA2,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCDBP2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      RCPDBPA2,KEY32;RCDBRECN,RCDBTCNT,RCDBINVN,RCDBILNE,RCDBPAMT:
                                   RCDBSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCDBP2  MOVE      ZERO,OVRCD                                                  
          READKS    RCPDBPA2;RCDBRECN,RCDBTCNT,RCDBINVN,RCDBILNE,RCDBPAMT:      
                             RCDBSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCDBP2  MOVE      ZERO,OVRCD                                                  
          READKP    RCPDBPA2;RCDBRECN,RCDBTCNT,RCDBINVN,RCDBILNE,RCDBPAMT:      
                             RCDBSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCDBP2  MOVE      ZERO,OVRCD                                                  
          UPDATE    RCPDBPA2;RCDBRECN,RCDBTCNT,RCDBINVN,RCDBILNE,RCDBPAMT:      
                             RCDBSPAR                                           
          RETURN
.
WRRCDBP2  RESET     KEY32                                                       
          WRITE     RCPDBPA2,KEY32;RCDBRECN,RCDBTCNT,RCDBINVN,RCDBILNE,RCDBPAMT:
                                   RCDBSPAR                                     
          RETURN
.
DERCDBP2  RESET     KEY32                                                       
          DELETE    RCPDBPA2,KEY32                                              
          RETURN
.
