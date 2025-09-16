.
. WEBOMSIO    
. --------
. Filename     : webomsaf.dat
.
RSWBOMS1  RESET     KEY14                                                       
          READ      WEBOMSA1,KEY14;;                                            
          RETURN
.
RAWBOMS1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMSA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOMS1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMSA1,KEY14;WBOMVISN,WBOMCNTR,WBOMSCNT,WBOMRTYP,WBOMITEM:
                                   WBOMQUAN,WBOMPDTE,WBOMCDTE,WBOMCTIM,WBOMTRID:
                                   WBOMMSID,WBOMELEG,WBOMACOI,WBOMDSOI,WBOMFQNT:
                                   WBOMITMN,WBOMNOPT,WBOMRSOI,WBOMTDOI,WBOMSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOMS1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOMSA1;WBOMVISN,WBOMCNTR,WBOMSCNT,WBOMRTYP,WBOMITEM:      
                             WBOMQUAN,WBOMPDTE,WBOMCDTE,WBOMCTIM,WBOMTRID:      
                             WBOMMSID,WBOMELEG,WBOMACOI,WBOMDSOI,WBOMFQNT:      
                             WBOMITMN,WBOMNOPT,WBOMRSOI,WBOMTDOI,WBOMSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOMS1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOMSA1;WBOMVISN,WBOMCNTR,WBOMSCNT,WBOMRTYP,WBOMITEM:      
                             WBOMQUAN,WBOMPDTE,WBOMCDTE,WBOMCTIM,WBOMTRID:      
                             WBOMMSID,WBOMELEG,WBOMACOI,WBOMDSOI,WBOMFQNT:      
                             WBOMITMN,WBOMNOPT,WBOMRSOI,WBOMTDOI,WBOMSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOMS1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOMSA1;WBOMVISN,WBOMCNTR,WBOMSCNT,WBOMRTYP,WBOMITEM:      
                             WBOMQUAN,WBOMPDTE,WBOMCDTE,WBOMCTIM,WBOMTRID:      
                             WBOMMSID,WBOMELEG,WBOMACOI,WBOMDSOI,WBOMFQNT:      
                             WBOMITMN,WBOMNOPT,WBOMRSOI,WBOMTDOI,WBOMSPAR       
          RETURN
.
WRWBOMS1  RESET     KEY14                                                       
          WRITE     WEBOMSA1,KEY14;WBOMVISN,WBOMCNTR,WBOMSCNT,WBOMRTYP,WBOMITEM:
                                   WBOMQUAN,WBOMPDTE,WBOMCDTE,WBOMCTIM,WBOMTRID:
                                   WBOMMSID,WBOMELEG,WBOMACOI,WBOMDSOI,WBOMFQNT:
                                   WBOMITMN,WBOMNOPT,WBOMRSOI,WBOMTDOI,WBOMSPAR 
          RETURN
.
DEWBOMS1  RESET     KEY14                                                       
          DELETE    WEBOMSA1,KEY14                                              
          RETURN
.
RSWBOMS2  RESET     KEY38                                                       
          READ      WEBOMSA2,KEY38;;                                            
          RETURN
.
RAWBOMS2  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMSA2,KEY38;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOMS2  RESET     KEY38                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMSA2,KEY38;WBOMVISN,WBOMCNTR,WBOMSCNT,WBOMRTYP,WBOMITEM:
                                   WBOMQUAN,WBOMPDTE,WBOMCDTE,WBOMCTIM,WBOMTRID:
                                   WBOMMSID,WBOMELEG,WBOMACOI,WBOMDSOI,WBOMFQNT:
                                   WBOMITMN,WBOMNOPT,WBOMRSOI,WBOMTDOI,WBOMSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOMS2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOMSA2;WBOMVISN,WBOMCNTR,WBOMSCNT,WBOMRTYP,WBOMITEM:      
                             WBOMQUAN,WBOMPDTE,WBOMCDTE,WBOMCTIM,WBOMTRID:      
                             WBOMMSID,WBOMELEG,WBOMACOI,WBOMDSOI,WBOMFQNT:      
                             WBOMITMN,WBOMNOPT,WBOMRSOI,WBOMTDOI,WBOMSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOMS2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOMSA2;WBOMVISN,WBOMCNTR,WBOMSCNT,WBOMRTYP,WBOMITEM:      
                             WBOMQUAN,WBOMPDTE,WBOMCDTE,WBOMCTIM,WBOMTRID:      
                             WBOMMSID,WBOMELEG,WBOMACOI,WBOMDSOI,WBOMFQNT:      
                             WBOMITMN,WBOMNOPT,WBOMRSOI,WBOMTDOI,WBOMSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOMS2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOMSA2;WBOMVISN,WBOMCNTR,WBOMSCNT,WBOMRTYP,WBOMITEM:      
                             WBOMQUAN,WBOMPDTE,WBOMCDTE,WBOMCTIM,WBOMTRID:      
                             WBOMMSID,WBOMELEG,WBOMACOI,WBOMDSOI,WBOMFQNT:      
                             WBOMITMN,WBOMNOPT,WBOMRSOI,WBOMTDOI,WBOMSPAR       
          RETURN
.
WRWBOMS2  RESET     KEY38                                                       
          WRITE     WEBOMSA2,KEY38;WBOMVISN,WBOMCNTR,WBOMSCNT,WBOMRTYP,WBOMITEM:
                                   WBOMQUAN,WBOMPDTE,WBOMCDTE,WBOMCTIM,WBOMTRID:
                                   WBOMMSID,WBOMELEG,WBOMACOI,WBOMDSOI,WBOMFQNT:
                                   WBOMITMN,WBOMNOPT,WBOMRSOI,WBOMTDOI,WBOMSPAR 
          RETURN
.
DEWBOMS2  RESET     KEY38                                                       
          DELETE    WEBOMSA2,KEY38                                              
          RETURN
.
RSWBOMS3  RESET     KEY50                                                       
          READ      WEBOMSA3,KEY50;;                                            
          RETURN
.
RAWBOMS3  RESET     KEY50                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMSA3,KEY50;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOMS3  RESET     KEY50                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMSA3,KEY50;WBOMVISN,WBOMCNTR,WBOMSCNT,WBOMRTYP,WBOMITEM:
                                   WBOMQUAN,WBOMPDTE,WBOMCDTE,WBOMCTIM,WBOMTRID:
                                   WBOMMSID,WBOMELEG,WBOMACOI,WBOMDSOI,WBOMFQNT:
                                   WBOMITMN,WBOMNOPT,WBOMRSOI,WBOMTDOI,WBOMSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOMS3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOMSA3;WBOMVISN,WBOMCNTR,WBOMSCNT,WBOMRTYP,WBOMITEM:      
                             WBOMQUAN,WBOMPDTE,WBOMCDTE,WBOMCTIM,WBOMTRID:      
                             WBOMMSID,WBOMELEG,WBOMACOI,WBOMDSOI,WBOMFQNT:      
                             WBOMITMN,WBOMNOPT,WBOMRSOI,WBOMTDOI,WBOMSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOMS3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOMSA3;WBOMVISN,WBOMCNTR,WBOMSCNT,WBOMRTYP,WBOMITEM:      
                             WBOMQUAN,WBOMPDTE,WBOMCDTE,WBOMCTIM,WBOMTRID:      
                             WBOMMSID,WBOMELEG,WBOMACOI,WBOMDSOI,WBOMFQNT:      
                             WBOMITMN,WBOMNOPT,WBOMRSOI,WBOMTDOI,WBOMSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOMS3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOMSA3;WBOMVISN,WBOMCNTR,WBOMSCNT,WBOMRTYP,WBOMITEM:      
                             WBOMQUAN,WBOMPDTE,WBOMCDTE,WBOMCTIM,WBOMTRID:      
                             WBOMMSID,WBOMELEG,WBOMACOI,WBOMDSOI,WBOMFQNT:      
                             WBOMITMN,WBOMNOPT,WBOMRSOI,WBOMTDOI,WBOMSPAR       
          RETURN
.
WRWBOMS3  RESET     KEY50                                                       
          WRITE     WEBOMSA3,KEY50;WBOMVISN,WBOMCNTR,WBOMSCNT,WBOMRTYP,WBOMITEM:
                                   WBOMQUAN,WBOMPDTE,WBOMCDTE,WBOMCTIM,WBOMTRID:
                                   WBOMMSID,WBOMELEG,WBOMACOI,WBOMDSOI,WBOMFQNT:
                                   WBOMITMN,WBOMNOPT,WBOMRSOI,WBOMTDOI,WBOMSPAR 
          RETURN
.
DEWBOMS3  RESET     KEY50                                                       
          DELETE    WEBOMSA3,KEY50                                              
          RETURN
.
RSWBOMS4  RESET     KEY22                                                       
          READ      WEBOMSA4,KEY22;;                                            
          RETURN
.
RAWBOMS4  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMSA4,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOMS4  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOMSA4,KEY22;WBOMVISN,WBOMCNTR,WBOMSCNT,WBOMRTYP,WBOMITEM:
                                   WBOMQUAN,WBOMPDTE,WBOMCDTE,WBOMCTIM,WBOMTRID:
                                   WBOMMSID,WBOMELEG,WBOMACOI,WBOMDSOI,WBOMFQNT:
                                   WBOMITMN,WBOMNOPT,WBOMRSOI,WBOMTDOI,WBOMSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBOMS4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOMSA4;WBOMVISN,WBOMCNTR,WBOMSCNT,WBOMRTYP,WBOMITEM:      
                             WBOMQUAN,WBOMPDTE,WBOMCDTE,WBOMCTIM,WBOMTRID:      
                             WBOMMSID,WBOMELEG,WBOMACOI,WBOMDSOI,WBOMFQNT:      
                             WBOMITMN,WBOMNOPT,WBOMRSOI,WBOMTDOI,WBOMSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBOMS4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOMSA4;WBOMVISN,WBOMCNTR,WBOMSCNT,WBOMRTYP,WBOMITEM:      
                             WBOMQUAN,WBOMPDTE,WBOMCDTE,WBOMCTIM,WBOMTRID:      
                             WBOMMSID,WBOMELEG,WBOMACOI,WBOMDSOI,WBOMFQNT:      
                             WBOMITMN,WBOMNOPT,WBOMRSOI,WBOMTDOI,WBOMSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBOMS4  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBOMSA4;WBOMVISN,WBOMCNTR,WBOMSCNT,WBOMRTYP,WBOMITEM:      
                             WBOMQUAN,WBOMPDTE,WBOMCDTE,WBOMCTIM,WBOMTRID:      
                             WBOMMSID,WBOMELEG,WBOMACOI,WBOMDSOI,WBOMFQNT:      
                             WBOMITMN,WBOMNOPT,WBOMRSOI,WBOMTDOI,WBOMSPAR       
          RETURN
.
WRWBOMS4  RESET     KEY22                                                       
          WRITE     WEBOMSA4,KEY22;WBOMVISN,WBOMCNTR,WBOMSCNT,WBOMRTYP,WBOMITEM:
                                   WBOMQUAN,WBOMPDTE,WBOMCDTE,WBOMCTIM,WBOMTRID:
                                   WBOMMSID,WBOMELEG,WBOMACOI,WBOMDSOI,WBOMFQNT:
                                   WBOMITMN,WBOMNOPT,WBOMRSOI,WBOMTDOI,WBOMSPAR 
          RETURN
.
DEWBOMS4  RESET     KEY22                                                       
          DELETE    WEBOMSA4,KEY22                                              
          RETURN
.
