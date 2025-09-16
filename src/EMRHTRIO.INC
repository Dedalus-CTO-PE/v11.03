.
. EMRHTRIO    
. --------
. Filename     : emrhtraf.dat
.
RSEMHTR1  RESET     KEY22                                                       
          READ      EMRHTRA1,KEY22;;                                            
          RETURN
.
RAEMHTR1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      EMRHTRA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMHTR1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      EMRHTRA1,KEY22;EMHTNUMB,EMHTINVN,EMHTTRNS,EMHTDESC,EMHTAMTT:
                                   EMHTDATE,EMHTITEM,EMHTTTYP,EMHTPAYT,EMHTRECP:
                                   EMHTINVP,EMHTRTYP,EMHTMISG,EMHTDTYP,EMHTBATC:
                                   EMHTPPOR,EMHTRPOR,EMHTNINV,EMHTSERV,EMHTEFFD:
                                   EMHTPDTM,EMHTGSTA,EMHTGSTC,EMHTGSTM,EMHTCRST:
                                   EMHTBTCH,EMHTSUBN,EMHTEDAD,EMHTSVTM,EMHTSCHF:
                                   EMHTITYP,EMHTRBRS,EMHTPCOD,EMHTACOI,EMHTDSOV:
                                   EMHTSTXT,EMHTLSPN,EMHTMPOV,EMHTNMPT,EMHTSDCD:
                                   EMHTTDUR,EMHTROVR,EMHTPINV,EMHTPTRN,EMHTSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMHTR1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRHTRA1;EMHTNUMB,EMHTINVN,EMHTTRNS,EMHTDESC,EMHTAMTT:      
                             EMHTDATE,EMHTITEM,EMHTTTYP,EMHTPAYT,EMHTRECP:      
                             EMHTINVP,EMHTRTYP,EMHTMISG,EMHTDTYP,EMHTBATC:      
                             EMHTPPOR,EMHTRPOR,EMHTNINV,EMHTSERV,EMHTEFFD:      
                             EMHTPDTM,EMHTGSTA,EMHTGSTC,EMHTGSTM,EMHTCRST:      
                             EMHTBTCH,EMHTSUBN,EMHTEDAD,EMHTSVTM,EMHTSCHF:      
                             EMHTITYP,EMHTRBRS,EMHTPCOD,EMHTACOI,EMHTDSOV:      
                             EMHTSTXT,EMHTLSPN,EMHTMPOV,EMHTNMPT,EMHTSDCD:      
                             EMHTTDUR,EMHTROVR,EMHTPINV,EMHTPTRN,EMHTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMHTR1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRHTRA1;EMHTNUMB,EMHTINVN,EMHTTRNS,EMHTDESC,EMHTAMTT:      
                             EMHTDATE,EMHTITEM,EMHTTTYP,EMHTPAYT,EMHTRECP:      
                             EMHTINVP,EMHTRTYP,EMHTMISG,EMHTDTYP,EMHTBATC:      
                             EMHTPPOR,EMHTRPOR,EMHTNINV,EMHTSERV,EMHTEFFD:      
                             EMHTPDTM,EMHTGSTA,EMHTGSTC,EMHTGSTM,EMHTCRST:      
                             EMHTBTCH,EMHTSUBN,EMHTEDAD,EMHTSVTM,EMHTSCHF:      
                             EMHTITYP,EMHTRBRS,EMHTPCOD,EMHTACOI,EMHTDSOV:      
                             EMHTSTXT,EMHTLSPN,EMHTMPOV,EMHTNMPT,EMHTSDCD:      
                             EMHTTDUR,EMHTROVR,EMHTPINV,EMHTPTRN,EMHTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMHTR1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRHTRA1;EMHTNUMB,EMHTINVN,EMHTTRNS,EMHTDESC,EMHTAMTT:      
                             EMHTDATE,EMHTITEM,EMHTTTYP,EMHTPAYT,EMHTRECP:      
                             EMHTINVP,EMHTRTYP,EMHTMISG,EMHTDTYP,EMHTBATC:      
                             EMHTPPOR,EMHTRPOR,EMHTNINV,EMHTSERV,EMHTEFFD:      
                             EMHTPDTM,EMHTGSTA,EMHTGSTC,EMHTGSTM,EMHTCRST:      
                             EMHTBTCH,EMHTSUBN,EMHTEDAD,EMHTSVTM,EMHTSCHF:      
                             EMHTITYP,EMHTRBRS,EMHTPCOD,EMHTACOI,EMHTDSOV:      
                             EMHTSTXT,EMHTLSPN,EMHTMPOV,EMHTNMPT,EMHTSDCD:      
                             EMHTTDUR,EMHTROVR,EMHTPINV,EMHTPTRN,EMHTSPAR       
          RETURN
.
WREMHTR1  RESET     KEY22                                                       
          WRITE     EMRHTRA1,KEY22;EMHTNUMB,EMHTINVN,EMHTTRNS,EMHTDESC,EMHTAMTT:
                                   EMHTDATE,EMHTITEM,EMHTTTYP,EMHTPAYT,EMHTRECP:
                                   EMHTINVP,EMHTRTYP,EMHTMISG,EMHTDTYP,EMHTBATC:
                                   EMHTPPOR,EMHTRPOR,EMHTNINV,EMHTSERV,EMHTEFFD:
                                   EMHTPDTM,EMHTGSTA,EMHTGSTC,EMHTGSTM,EMHTCRST:
                                   EMHTBTCH,EMHTSUBN,EMHTEDAD,EMHTSVTM,EMHTSCHF:
                                   EMHTITYP,EMHTRBRS,EMHTPCOD,EMHTACOI,EMHTDSOV:
                                   EMHTSTXT,EMHTLSPN,EMHTMPOV,EMHTNMPT,EMHTSDCD:
                                   EMHTTDUR,EMHTROVR,EMHTPINV,EMHTPTRN,EMHTSPAR 
          RETURN
.
DEEMHTR1  RESET     KEY22                                                       
          DELETE    EMRHTRA1,KEY22                                              
          RETURN
.
RSEMHTR2  RESET     KEY36                                                       
          READ      EMRHTRA2,KEY36;;                                            
          RETURN
.
RAEMHTR2  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      EMRHTRA2,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMHTR2  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      EMRHTRA2,KEY36;EMHTNUMB,EMHTINVN,EMHTTRNS,EMHTDESC,EMHTAMTT:
                                   EMHTDATE,EMHTITEM,EMHTTTYP,EMHTPAYT,EMHTRECP:
                                   EMHTINVP,EMHTRTYP,EMHTMISG,EMHTDTYP,EMHTBATC:
                                   EMHTPPOR,EMHTRPOR,EMHTNINV,EMHTSERV,EMHTEFFD:
                                   EMHTPDTM,EMHTGSTA,EMHTGSTC,EMHTGSTM,EMHTCRST:
                                   EMHTBTCH,EMHTSUBN,EMHTEDAD,EMHTSVTM,EMHTSCHF:
                                   EMHTITYP,EMHTRBRS,EMHTPCOD,EMHTACOI,EMHTDSOV:
                                   EMHTSTXT,EMHTLSPN,EMHTMPOV,EMHTNMPT,EMHTSDCD:
                                   EMHTTDUR,EMHTROVR,EMHTPINV,EMHTPTRN,EMHTSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMHTR2  MOVE      ZERO,OVRCD                                                  
          READKS    EMRHTRA2;EMHTNUMB,EMHTINVN,EMHTTRNS,EMHTDESC,EMHTAMTT:      
                             EMHTDATE,EMHTITEM,EMHTTTYP,EMHTPAYT,EMHTRECP:      
                             EMHTINVP,EMHTRTYP,EMHTMISG,EMHTDTYP,EMHTBATC:      
                             EMHTPPOR,EMHTRPOR,EMHTNINV,EMHTSERV,EMHTEFFD:      
                             EMHTPDTM,EMHTGSTA,EMHTGSTC,EMHTGSTM,EMHTCRST:      
                             EMHTBTCH,EMHTSUBN,EMHTEDAD,EMHTSVTM,EMHTSCHF:      
                             EMHTITYP,EMHTRBRS,EMHTPCOD,EMHTACOI,EMHTDSOV:      
                             EMHTSTXT,EMHTLSPN,EMHTMPOV,EMHTNMPT,EMHTSDCD:      
                             EMHTTDUR,EMHTROVR,EMHTPINV,EMHTPTRN,EMHTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMHTR2  MOVE      ZERO,OVRCD                                                  
          READKP    EMRHTRA2;EMHTNUMB,EMHTINVN,EMHTTRNS,EMHTDESC,EMHTAMTT:      
                             EMHTDATE,EMHTITEM,EMHTTTYP,EMHTPAYT,EMHTRECP:      
                             EMHTINVP,EMHTRTYP,EMHTMISG,EMHTDTYP,EMHTBATC:      
                             EMHTPPOR,EMHTRPOR,EMHTNINV,EMHTSERV,EMHTEFFD:      
                             EMHTPDTM,EMHTGSTA,EMHTGSTC,EMHTGSTM,EMHTCRST:      
                             EMHTBTCH,EMHTSUBN,EMHTEDAD,EMHTSVTM,EMHTSCHF:      
                             EMHTITYP,EMHTRBRS,EMHTPCOD,EMHTACOI,EMHTDSOV:      
                             EMHTSTXT,EMHTLSPN,EMHTMPOV,EMHTNMPT,EMHTSDCD:      
                             EMHTTDUR,EMHTROVR,EMHTPINV,EMHTPTRN,EMHTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMHTR2  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRHTRA2;EMHTNUMB,EMHTINVN,EMHTTRNS,EMHTDESC,EMHTAMTT:      
                             EMHTDATE,EMHTITEM,EMHTTTYP,EMHTPAYT,EMHTRECP:      
                             EMHTINVP,EMHTRTYP,EMHTMISG,EMHTDTYP,EMHTBATC:      
                             EMHTPPOR,EMHTRPOR,EMHTNINV,EMHTSERV,EMHTEFFD:      
                             EMHTPDTM,EMHTGSTA,EMHTGSTC,EMHTGSTM,EMHTCRST:      
                             EMHTBTCH,EMHTSUBN,EMHTEDAD,EMHTSVTM,EMHTSCHF:      
                             EMHTITYP,EMHTRBRS,EMHTPCOD,EMHTACOI,EMHTDSOV:      
                             EMHTSTXT,EMHTLSPN,EMHTMPOV,EMHTNMPT,EMHTSDCD:      
                             EMHTTDUR,EMHTROVR,EMHTPINV,EMHTPTRN,EMHTSPAR       
          RETURN
.
WREMHTR2  RESET     KEY36                                                       
          WRITE     EMRHTRA2,KEY36;EMHTNUMB,EMHTINVN,EMHTTRNS,EMHTDESC,EMHTAMTT:
                                   EMHTDATE,EMHTITEM,EMHTTTYP,EMHTPAYT,EMHTRECP:
                                   EMHTINVP,EMHTRTYP,EMHTMISG,EMHTDTYP,EMHTBATC:
                                   EMHTPPOR,EMHTRPOR,EMHTNINV,EMHTSERV,EMHTEFFD:
                                   EMHTPDTM,EMHTGSTA,EMHTGSTC,EMHTGSTM,EMHTCRST:
                                   EMHTBTCH,EMHTSUBN,EMHTEDAD,EMHTSVTM,EMHTSCHF:
                                   EMHTITYP,EMHTRBRS,EMHTPCOD,EMHTACOI,EMHTDSOV:
                                   EMHTSTXT,EMHTLSPN,EMHTMPOV,EMHTNMPT,EMHTSDCD:
                                   EMHTTDUR,EMHTROVR,EMHTPINV,EMHTPTRN,EMHTSPAR 
          RETURN
.
DEEMHTR2  RESET     KEY36                                                       
          DELETE    EMRHTRA2,KEY36                                              
          RETURN
.
