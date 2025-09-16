.
. PATHTRIO    
. --------
. Filename     : pathtraf.dat
.
RSPTHTR1  RESET     KEY22                                                       
          READ      PATHTRA1,KEY22;;                                            
          RETURN
.
RAPTHTR1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PATHTRA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTHTR1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PATHTRA1,KEY22;PTHTADMN,PTHTTRNS,PTHTTDEB,PTHTDCOD,PTHTAMTT:
                                   PTHTAMTG,PTHTAMTH,PTHTAMTI,PTHTAMTP,PTHTFCEN:
                                   PTHTFYER,PTHTFMON,PTHTFDAY,PTHTTCEN,PTHTTYER:
                                   PTHTTMON,PTHTTDAY,PTHTTTYP,PTHTITEM,PTHTTREF:
                                   PTHTPAYT,PTHTRCPT,PTHTDESC,PTHTINVP,PTHTRECT:
                                   PTHTNDAY,PTHTCLMD,PTHTRBAT,PTHTDOCT,PTHTSERV:
                                   PTHTDOCO,PTHTPINV,PTHTPTRN,PTHTSESS,PTHTMISG:
                                   PTHTDEPT,PTHTWARD,PTHTCLMT,PTHTADMT,PTHTBTCH:
                                   PTHTNINV,PTHTLSPT,PTHTLSRB,PTHTDTYP,PTHTDES2:
                                   PTHTEPSD,PTHTTCCU,PTHTGSTA,PTHTGSTC,PTHTGSTM:
                                   PTHTEFFD,PTHTGSTL,PTHTTTIM,PTHTCRST,PTHTUNIQ:
                                   PTHTBTYP,PTHTCNTR,PTHTSUNQ,PTHTBATC,PTHTADPT:
                                   PTHTADRB,PTHTCNID,PTHTLSD1,PTHTLSD2,PTHTTMNO:
                                   PTHTPMBS,PTHTPCOD,PTHTSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      PTHTTRNS,PTHTTRN1
          RETURN
.
RKPTHTR1  MOVE      ZERO,OVRCD                                                  
          READKS    PATHTRA1;PTHTADMN,PTHTTRNS,PTHTTDEB,PTHTDCOD,PTHTAMTT:      
                             PTHTAMTG,PTHTAMTH,PTHTAMTI,PTHTAMTP,PTHTFCEN:      
                             PTHTFYER,PTHTFMON,PTHTFDAY,PTHTTCEN,PTHTTYER:      
                             PTHTTMON,PTHTTDAY,PTHTTTYP,PTHTITEM,PTHTTREF:      
                             PTHTPAYT,PTHTRCPT,PTHTDESC,PTHTINVP,PTHTRECT:      
                             PTHTNDAY,PTHTCLMD,PTHTRBAT,PTHTDOCT,PTHTSERV:      
                             PTHTDOCO,PTHTPINV,PTHTPTRN,PTHTSESS,PTHTMISG:      
                             PTHTDEPT,PTHTWARD,PTHTCLMT,PTHTADMT,PTHTBTCH:      
                             PTHTNINV,PTHTLSPT,PTHTLSRB,PTHTDTYP,PTHTDES2:      
                             PTHTEPSD,PTHTTCCU,PTHTGSTA,PTHTGSTC,PTHTGSTM:      
                             PTHTEFFD,PTHTGSTL,PTHTTTIM,PTHTCRST,PTHTUNIQ:      
                             PTHTBTYP,PTHTCNTR,PTHTSUNQ,PTHTBATC,PTHTADPT:      
                             PTHTADRB,PTHTCNID,PTHTLSD1,PTHTLSD2,PTHTTMNO:      
                             PTHTPMBS,PTHTPCOD,PTHTSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      PTHTTRNS,PTHTTRN1
          RETURN
.
RPPTHTR1  MOVE      ZERO,OVRCD                                                  
          READKP    PATHTRA1;PTHTADMN,PTHTTRNS,PTHTTDEB,PTHTDCOD,PTHTAMTT:      
                             PTHTAMTG,PTHTAMTH,PTHTAMTI,PTHTAMTP,PTHTFCEN:      
                             PTHTFYER,PTHTFMON,PTHTFDAY,PTHTTCEN,PTHTTYER:      
                             PTHTTMON,PTHTTDAY,PTHTTTYP,PTHTITEM,PTHTTREF:      
                             PTHTPAYT,PTHTRCPT,PTHTDESC,PTHTINVP,PTHTRECT:      
                             PTHTNDAY,PTHTCLMD,PTHTRBAT,PTHTDOCT,PTHTSERV:      
                             PTHTDOCO,PTHTPINV,PTHTPTRN,PTHTSESS,PTHTMISG:      
                             PTHTDEPT,PTHTWARD,PTHTCLMT,PTHTADMT,PTHTBTCH:      
                             PTHTNINV,PTHTLSPT,PTHTLSRB,PTHTDTYP,PTHTDES2:      
                             PTHTEPSD,PTHTTCCU,PTHTGSTA,PTHTGSTC,PTHTGSTM:      
                             PTHTEFFD,PTHTGSTL,PTHTTTIM,PTHTCRST,PTHTUNIQ:      
                             PTHTBTYP,PTHTCNTR,PTHTSUNQ,PTHTBATC,PTHTADPT:      
                             PTHTADRB,PTHTCNID,PTHTLSD1,PTHTLSD2,PTHTTMNO:      
                             PTHTPMBS,PTHTPCOD,PTHTSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      PTHTTRNS,PTHTTRN1
          RETURN
.
UPPTHTR1  MOVE      ZERO,OVRCD                                                  
          MOVE      PTHTTRN1,PTHTTRNS
          UPDATE    PATHTRA1;PTHTADMN,PTHTTRNS,PTHTTDEB,PTHTDCOD,PTHTAMTT:      
                             PTHTAMTG,PTHTAMTH,PTHTAMTI,PTHTAMTP,PTHTFCEN:      
                             PTHTFYER,PTHTFMON,PTHTFDAY,PTHTTCEN,PTHTTYER:      
                             PTHTTMON,PTHTTDAY,PTHTTTYP,PTHTITEM,PTHTTREF:      
                             PTHTPAYT,PTHTRCPT,PTHTDESC,PTHTINVP,PTHTRECT:      
                             PTHTNDAY,PTHTCLMD,PTHTRBAT,PTHTDOCT,PTHTSERV:      
                             PTHTDOCO,PTHTPINV,PTHTPTRN,PTHTSESS,PTHTMISG:      
                             PTHTDEPT,PTHTWARD,PTHTCLMT,PTHTADMT,PTHTBTCH:      
                             PTHTNINV,PTHTLSPT,PTHTLSRB,PTHTDTYP,PTHTDES2:      
                             PTHTEPSD,PTHTTCCU,PTHTGSTA,PTHTGSTC,PTHTGSTM:      
                             PTHTEFFD,PTHTGSTL,PTHTTTIM,PTHTCRST,PTHTUNIQ:      
                             PTHTBTYP,PTHTCNTR,PTHTSUNQ,PTHTBATC,PTHTADPT:      
                             PTHTADRB,PTHTCNID,PTHTLSD1,PTHTLSD2,PTHTTMNO:      
                             PTHTPMBS,PTHTPCOD,PTHTSPAR                         
          RETURN
.
WRPTHTR1  RESET     KEY22                                                       
          MOVE      PTHTTRN1,PTHTTRNS
          WRITE     PATHTRA1,KEY22;PTHTADMN,PTHTTRNS,PTHTTDEB,PTHTDCOD,PTHTAMTT:
                                   PTHTAMTG,PTHTAMTH,PTHTAMTI,PTHTAMTP,PTHTFCEN:
                                   PTHTFYER,PTHTFMON,PTHTFDAY,PTHTTCEN,PTHTTYER:
                                   PTHTTMON,PTHTTDAY,PTHTTTYP,PTHTITEM,PTHTTREF:
                                   PTHTPAYT,PTHTRCPT,PTHTDESC,PTHTINVP,PTHTRECT:
                                   PTHTNDAY,PTHTCLMD,PTHTRBAT,PTHTDOCT,PTHTSERV:
                                   PTHTDOCO,PTHTPINV,PTHTPTRN,PTHTSESS,PTHTMISG:
                                   PTHTDEPT,PTHTWARD,PTHTCLMT,PTHTADMT,PTHTBTCH:
                                   PTHTNINV,PTHTLSPT,PTHTLSRB,PTHTDTYP,PTHTDES2:
                                   PTHTEPSD,PTHTTCCU,PTHTGSTA,PTHTGSTC,PTHTGSTM:
                                   PTHTEFFD,PTHTGSTL,PTHTTTIM,PTHTCRST,PTHTUNIQ:
                                   PTHTBTYP,PTHTCNTR,PTHTSUNQ,PTHTBATC,PTHTADPT:
                                   PTHTADRB,PTHTCNID,PTHTLSD1,PTHTLSD2,PTHTTMNO:
                                   PTHTPMBS,PTHTPCOD,PTHTSPAR                   
          RETURN
.
DEPTHTR1  RESET     KEY22                                                       
          DELETE    PATHTRA1,KEY22                                              
          RETURN
.
RSPTHTR2  RESET     KEY36                                                       
          READ      PATHTRA2,KEY36;;                                            
          RETURN
.
RAPTHTR2  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      PATHTRA2,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTHTR2  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      PATHTRA2,KEY36;PTHTADMN,PTHTTRNS,PTHTTDEB,PTHTDCOD,PTHTAMTT:
                                   PTHTAMTG,PTHTAMTH,PTHTAMTI,PTHTAMTP,PTHTFCEN:
                                   PTHTFYER,PTHTFMON,PTHTFDAY,PTHTTCEN,PTHTTYER:
                                   PTHTTMON,PTHTTDAY,PTHTTTYP,PTHTITEM,PTHTTREF:
                                   PTHTPAYT,PTHTRCPT,PTHTDESC,PTHTINVP,PTHTRECT:
                                   PTHTNDAY,PTHTCLMD,PTHTRBAT,PTHTDOCT,PTHTSERV:
                                   PTHTDOCO,PTHTPINV,PTHTPTRN,PTHTSESS,PTHTMISG:
                                   PTHTDEPT,PTHTWARD,PTHTCLMT,PTHTADMT,PTHTBTCH:
                                   PTHTNINV,PTHTLSPT,PTHTLSRB,PTHTDTYP,PTHTDES2:
                                   PTHTEPSD,PTHTTCCU,PTHTGSTA,PTHTGSTC,PTHTGSTM:
                                   PTHTEFFD,PTHTGSTL,PTHTTTIM,PTHTCRST,PTHTUNIQ:
                                   PTHTBTYP,PTHTCNTR,PTHTSUNQ,PTHTBATC,PTHTADPT:
                                   PTHTADRB,PTHTCNID,PTHTLSD1,PTHTLSD2,PTHTTMNO:
                                   PTHTPMBS,PTHTPCOD,PTHTSPAR                   
          GOTO      OVERCOND IF OVER
          MOVE      PTHTTRNS,PTHTTRN1
          RETURN
.
RKPTHTR2  MOVE      ZERO,OVRCD                                                  
          READKS    PATHTRA2;PTHTADMN,PTHTTRNS,PTHTTDEB,PTHTDCOD,PTHTAMTT:      
                             PTHTAMTG,PTHTAMTH,PTHTAMTI,PTHTAMTP,PTHTFCEN:      
                             PTHTFYER,PTHTFMON,PTHTFDAY,PTHTTCEN,PTHTTYER:      
                             PTHTTMON,PTHTTDAY,PTHTTTYP,PTHTITEM,PTHTTREF:      
                             PTHTPAYT,PTHTRCPT,PTHTDESC,PTHTINVP,PTHTRECT:      
                             PTHTNDAY,PTHTCLMD,PTHTRBAT,PTHTDOCT,PTHTSERV:      
                             PTHTDOCO,PTHTPINV,PTHTPTRN,PTHTSESS,PTHTMISG:      
                             PTHTDEPT,PTHTWARD,PTHTCLMT,PTHTADMT,PTHTBTCH:      
                             PTHTNINV,PTHTLSPT,PTHTLSRB,PTHTDTYP,PTHTDES2:      
                             PTHTEPSD,PTHTTCCU,PTHTGSTA,PTHTGSTC,PTHTGSTM:      
                             PTHTEFFD,PTHTGSTL,PTHTTTIM,PTHTCRST,PTHTUNIQ:      
                             PTHTBTYP,PTHTCNTR,PTHTSUNQ,PTHTBATC,PTHTADPT:      
                             PTHTADRB,PTHTCNID,PTHTLSD1,PTHTLSD2,PTHTTMNO:      
                             PTHTPMBS,PTHTPCOD,PTHTSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      PTHTTRNS,PTHTTRN1
          RETURN
.
RPPTHTR2  MOVE      ZERO,OVRCD                                                  
          READKP    PATHTRA2;PTHTADMN,PTHTTRNS,PTHTTDEB,PTHTDCOD,PTHTAMTT:      
                             PTHTAMTG,PTHTAMTH,PTHTAMTI,PTHTAMTP,PTHTFCEN:      
                             PTHTFYER,PTHTFMON,PTHTFDAY,PTHTTCEN,PTHTTYER:      
                             PTHTTMON,PTHTTDAY,PTHTTTYP,PTHTITEM,PTHTTREF:      
                             PTHTPAYT,PTHTRCPT,PTHTDESC,PTHTINVP,PTHTRECT:      
                             PTHTNDAY,PTHTCLMD,PTHTRBAT,PTHTDOCT,PTHTSERV:      
                             PTHTDOCO,PTHTPINV,PTHTPTRN,PTHTSESS,PTHTMISG:      
                             PTHTDEPT,PTHTWARD,PTHTCLMT,PTHTADMT,PTHTBTCH:      
                             PTHTNINV,PTHTLSPT,PTHTLSRB,PTHTDTYP,PTHTDES2:      
                             PTHTEPSD,PTHTTCCU,PTHTGSTA,PTHTGSTC,PTHTGSTM:      
                             PTHTEFFD,PTHTGSTL,PTHTTTIM,PTHTCRST,PTHTUNIQ:      
                             PTHTBTYP,PTHTCNTR,PTHTSUNQ,PTHTBATC,PTHTADPT:      
                             PTHTADRB,PTHTCNID,PTHTLSD1,PTHTLSD2,PTHTTMNO:      
                             PTHTPMBS,PTHTPCOD,PTHTSPAR                         
          GOTO      OVERCOND IF OVER
          MOVE      PTHTTRNS,PTHTTRN1
          RETURN
.
UPPTHTR2  MOVE      ZERO,OVRCD                                                  
          MOVE      PTHTTRN1,PTHTTRNS
          UPDATE    PATHTRA2;PTHTADMN,PTHTTRNS,PTHTTDEB,PTHTDCOD,PTHTAMTT:      
                             PTHTAMTG,PTHTAMTH,PTHTAMTI,PTHTAMTP,PTHTFCEN:      
                             PTHTFYER,PTHTFMON,PTHTFDAY,PTHTTCEN,PTHTTYER:      
                             PTHTTMON,PTHTTDAY,PTHTTTYP,PTHTITEM,PTHTTREF:      
                             PTHTPAYT,PTHTRCPT,PTHTDESC,PTHTINVP,PTHTRECT:      
                             PTHTNDAY,PTHTCLMD,PTHTRBAT,PTHTDOCT,PTHTSERV:      
                             PTHTDOCO,PTHTPINV,PTHTPTRN,PTHTSESS,PTHTMISG:      
                             PTHTDEPT,PTHTWARD,PTHTCLMT,PTHTADMT,PTHTBTCH:      
                             PTHTNINV,PTHTLSPT,PTHTLSRB,PTHTDTYP,PTHTDES2:      
                             PTHTEPSD,PTHTTCCU,PTHTGSTA,PTHTGSTC,PTHTGSTM:      
                             PTHTEFFD,PTHTGSTL,PTHTTTIM,PTHTCRST,PTHTUNIQ:      
                             PTHTBTYP,PTHTCNTR,PTHTSUNQ,PTHTBATC,PTHTADPT:      
                             PTHTADRB,PTHTCNID,PTHTLSD1,PTHTLSD2,PTHTTMNO:      
                             PTHTPMBS,PTHTPCOD,PTHTSPAR                         
          RETURN
.
WRPTHTR2  RESET     KEY36                                                       
          MOVE      PTHTTRN1,PTHTTRNS
          WRITE     PATHTRA2,KEY36;PTHTADMN,PTHTTRNS,PTHTTDEB,PTHTDCOD,PTHTAMTT:
                                   PTHTAMTG,PTHTAMTH,PTHTAMTI,PTHTAMTP,PTHTFCEN:
                                   PTHTFYER,PTHTFMON,PTHTFDAY,PTHTTCEN,PTHTTYER:
                                   PTHTTMON,PTHTTDAY,PTHTTTYP,PTHTITEM,PTHTTREF:
                                   PTHTPAYT,PTHTRCPT,PTHTDESC,PTHTINVP,PTHTRECT:
                                   PTHTNDAY,PTHTCLMD,PTHTRBAT,PTHTDOCT,PTHTSERV:
                                   PTHTDOCO,PTHTPINV,PTHTPTRN,PTHTSESS,PTHTMISG:
                                   PTHTDEPT,PTHTWARD,PTHTCLMT,PTHTADMT,PTHTBTCH:
                                   PTHTNINV,PTHTLSPT,PTHTLSRB,PTHTDTYP,PTHTDES2:
                                   PTHTEPSD,PTHTTCCU,PTHTGSTA,PTHTGSTC,PTHTGSTM:
                                   PTHTEFFD,PTHTGSTL,PTHTTTIM,PTHTCRST,PTHTUNIQ:
                                   PTHTBTYP,PTHTCNTR,PTHTSUNQ,PTHTBATC,PTHTADPT:
                                   PTHTADRB,PTHTCNID,PTHTLSD1,PTHTLSD2,PTHTTMNO:
                                   PTHTPMBS,PTHTPCOD,PTHTSPAR                   
          RETURN
.
DEPTHTR2  RESET     KEY36                                                       
          DELETE    PATHTRA2,KEY36                                              
          RETURN
.
