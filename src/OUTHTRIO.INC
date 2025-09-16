.
. OUTHTRIO    
. --------
. Filename     : outhtraf.dat
.
RSOTHTR1  RESET     KEY22                                                       
          READ      OUTHTRA1,KEY22;;                                            
          RETURN
.
RAOTHTR1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      OUTHTRA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTHTR1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      OUTHTRA1,KEY22;OTHTNUMB,OTHTINVN,OTHTTRAN,OTHTDESC,OTHTAMTT:
                                   OTHTDATE,OTHTITEM,OTHTTTYP,OTHTPTYP,OTHTRECP:
                                   OTHTIPRT,OTHTRTYP,OTHTMGRP,OTHTDTYP,OTHTBATC:
                                   OTHTPPOR,OTHTRPOR,OTHTNINV,OTHTSERV,OTHTGSTA:
                                   OTHTGSTC,OTHTGSTM,OTHTEFFD,OTHTCRST,OTHTBTCH:
                                   OTHTPCOD,OTHTACAO,OTHTDSRO,OTHTSRTX,OTHTLSPN:
                                   OTHTMPRO,OTHTNPAT,OTHTSFDM,OTHTTDUR,OTHTNCAT:
                                   OTHTPINV,OTHTPTRN,OTHTSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTHTR1  MOVE      ZERO,OVRCD                                                  
          READKS    OUTHTRA1;OTHTNUMB,OTHTINVN,OTHTTRAN,OTHTDESC,OTHTAMTT:      
                             OTHTDATE,OTHTITEM,OTHTTTYP,OTHTPTYP,OTHTRECP:      
                             OTHTIPRT,OTHTRTYP,OTHTMGRP,OTHTDTYP,OTHTBATC:      
                             OTHTPPOR,OTHTRPOR,OTHTNINV,OTHTSERV,OTHTGSTA:      
                             OTHTGSTC,OTHTGSTM,OTHTEFFD,OTHTCRST,OTHTBTCH:      
                             OTHTPCOD,OTHTACAO,OTHTDSRO,OTHTSRTX,OTHTLSPN:      
                             OTHTMPRO,OTHTNPAT,OTHTSFDM,OTHTTDUR,OTHTNCAT:      
                             OTHTPINV,OTHTPTRN,OTHTSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTHTR1  MOVE      ZERO,OVRCD                                                  
          READKP    OUTHTRA1;OTHTNUMB,OTHTINVN,OTHTTRAN,OTHTDESC,OTHTAMTT:      
                             OTHTDATE,OTHTITEM,OTHTTTYP,OTHTPTYP,OTHTRECP:      
                             OTHTIPRT,OTHTRTYP,OTHTMGRP,OTHTDTYP,OTHTBATC:      
                             OTHTPPOR,OTHTRPOR,OTHTNINV,OTHTSERV,OTHTGSTA:      
                             OTHTGSTC,OTHTGSTM,OTHTEFFD,OTHTCRST,OTHTBTCH:      
                             OTHTPCOD,OTHTACAO,OTHTDSRO,OTHTSRTX,OTHTLSPN:      
                             OTHTMPRO,OTHTNPAT,OTHTSFDM,OTHTTDUR,OTHTNCAT:      
                             OTHTPINV,OTHTPTRN,OTHTSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTHTR1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTHTRA1;OTHTNUMB,OTHTINVN,OTHTTRAN,OTHTDESC,OTHTAMTT:      
                             OTHTDATE,OTHTITEM,OTHTTTYP,OTHTPTYP,OTHTRECP:      
                             OTHTIPRT,OTHTRTYP,OTHTMGRP,OTHTDTYP,OTHTBATC:      
                             OTHTPPOR,OTHTRPOR,OTHTNINV,OTHTSERV,OTHTGSTA:      
                             OTHTGSTC,OTHTGSTM,OTHTEFFD,OTHTCRST,OTHTBTCH:      
                             OTHTPCOD,OTHTACAO,OTHTDSRO,OTHTSRTX,OTHTLSPN:      
                             OTHTMPRO,OTHTNPAT,OTHTSFDM,OTHTTDUR,OTHTNCAT:      
                             OTHTPINV,OTHTPTRN,OTHTSPAR                         
          RETURN
.
WROTHTR1  RESET     KEY22                                                       
          WRITE     OUTHTRA1,KEY22;OTHTNUMB,OTHTINVN,OTHTTRAN,OTHTDESC,OTHTAMTT:
                                   OTHTDATE,OTHTITEM,OTHTTTYP,OTHTPTYP,OTHTRECP:
                                   OTHTIPRT,OTHTRTYP,OTHTMGRP,OTHTDTYP,OTHTBATC:
                                   OTHTPPOR,OTHTRPOR,OTHTNINV,OTHTSERV,OTHTGSTA:
                                   OTHTGSTC,OTHTGSTM,OTHTEFFD,OTHTCRST,OTHTBTCH:
                                   OTHTPCOD,OTHTACAO,OTHTDSRO,OTHTSRTX,OTHTLSPN:
                                   OTHTMPRO,OTHTNPAT,OTHTSFDM,OTHTTDUR,OTHTNCAT:
                                   OTHTPINV,OTHTPTRN,OTHTSPAR                   
          RETURN
.
DEOTHTR1  RESET     KEY22                                                       
          DELETE    OUTHTRA1,KEY22                                              
          RETURN
.
RSOTHTR2  RESET     KEY36                                                       
          READ      OUTHTRA2,KEY36;;                                            
          RETURN
.
RAOTHTR2  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      OUTHTRA2,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTHTR2  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      OUTHTRA2,KEY36;OTHTNUMB,OTHTINVN,OTHTTRAN,OTHTDESC,OTHTAMTT:
                                   OTHTDATE,OTHTITEM,OTHTTTYP,OTHTPTYP,OTHTRECP:
                                   OTHTIPRT,OTHTRTYP,OTHTMGRP,OTHTDTYP,OTHTBATC:
                                   OTHTPPOR,OTHTRPOR,OTHTNINV,OTHTSERV,OTHTGSTA:
                                   OTHTGSTC,OTHTGSTM,OTHTEFFD,OTHTCRST,OTHTBTCH:
                                   OTHTPCOD,OTHTACAO,OTHTDSRO,OTHTSRTX,OTHTLSPN:
                                   OTHTMPRO,OTHTNPAT,OTHTSFDM,OTHTTDUR,OTHTNCAT:
                                   OTHTPINV,OTHTPTRN,OTHTSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTHTR2  MOVE      ZERO,OVRCD                                                  
          READKS    OUTHTRA2;OTHTNUMB,OTHTINVN,OTHTTRAN,OTHTDESC,OTHTAMTT:      
                             OTHTDATE,OTHTITEM,OTHTTTYP,OTHTPTYP,OTHTRECP:      
                             OTHTIPRT,OTHTRTYP,OTHTMGRP,OTHTDTYP,OTHTBATC:      
                             OTHTPPOR,OTHTRPOR,OTHTNINV,OTHTSERV,OTHTGSTA:      
                             OTHTGSTC,OTHTGSTM,OTHTEFFD,OTHTCRST,OTHTBTCH:      
                             OTHTPCOD,OTHTACAO,OTHTDSRO,OTHTSRTX,OTHTLSPN:      
                             OTHTMPRO,OTHTNPAT,OTHTSFDM,OTHTTDUR,OTHTNCAT:      
                             OTHTPINV,OTHTPTRN,OTHTSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTHTR2  MOVE      ZERO,OVRCD                                                  
          READKP    OUTHTRA2;OTHTNUMB,OTHTINVN,OTHTTRAN,OTHTDESC,OTHTAMTT:      
                             OTHTDATE,OTHTITEM,OTHTTTYP,OTHTPTYP,OTHTRECP:      
                             OTHTIPRT,OTHTRTYP,OTHTMGRP,OTHTDTYP,OTHTBATC:      
                             OTHTPPOR,OTHTRPOR,OTHTNINV,OTHTSERV,OTHTGSTA:      
                             OTHTGSTC,OTHTGSTM,OTHTEFFD,OTHTCRST,OTHTBTCH:      
                             OTHTPCOD,OTHTACAO,OTHTDSRO,OTHTSRTX,OTHTLSPN:      
                             OTHTMPRO,OTHTNPAT,OTHTSFDM,OTHTTDUR,OTHTNCAT:      
                             OTHTPINV,OTHTPTRN,OTHTSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTHTR2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTHTRA2;OTHTNUMB,OTHTINVN,OTHTTRAN,OTHTDESC,OTHTAMTT:      
                             OTHTDATE,OTHTITEM,OTHTTTYP,OTHTPTYP,OTHTRECP:      
                             OTHTIPRT,OTHTRTYP,OTHTMGRP,OTHTDTYP,OTHTBATC:      
                             OTHTPPOR,OTHTRPOR,OTHTNINV,OTHTSERV,OTHTGSTA:      
                             OTHTGSTC,OTHTGSTM,OTHTEFFD,OTHTCRST,OTHTBTCH:      
                             OTHTPCOD,OTHTACAO,OTHTDSRO,OTHTSRTX,OTHTLSPN:      
                             OTHTMPRO,OTHTNPAT,OTHTSFDM,OTHTTDUR,OTHTNCAT:      
                             OTHTPINV,OTHTPTRN,OTHTSPAR                         
          RETURN
.
WROTHTR2  RESET     KEY36                                                       
          WRITE     OUTHTRA2,KEY36;OTHTNUMB,OTHTINVN,OTHTTRAN,OTHTDESC,OTHTAMTT:
                                   OTHTDATE,OTHTITEM,OTHTTTYP,OTHTPTYP,OTHTRECP:
                                   OTHTIPRT,OTHTRTYP,OTHTMGRP,OTHTDTYP,OTHTBATC:
                                   OTHTPPOR,OTHTRPOR,OTHTNINV,OTHTSERV,OTHTGSTA:
                                   OTHTGSTC,OTHTGSTM,OTHTEFFD,OTHTCRST,OTHTBTCH:
                                   OTHTPCOD,OTHTACAO,OTHTDSRO,OTHTSRTX,OTHTLSPN:
                                   OTHTMPRO,OTHTNPAT,OTHTSFDM,OTHTTDUR,OTHTNCAT:
                                   OTHTPINV,OTHTPTRN,OTHTSPAR                   
          RETURN
.
DEOTHTR2  RESET     KEY36                                                       
          DELETE    OUTHTRA2,KEY36                                              
          RETURN
.
