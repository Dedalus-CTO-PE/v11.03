.
. DEBCREIO    
. --------
. Filename     : debcreaf.dat
.
RSDBCR1   RESET     KEY12                                                       
          READ      DEBCREA1,KEY12;;                                            
          RETURN
.
RADBCR1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      DEBCREA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBCR1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      DEBCREA1,KEY12;DBCRDEB,DBCRREC,DBCRTYP,DBCRRST,DBCRDDT:     
                        DBCRDTM,DBCRDRW,DBCRCHQ,DBCRBNK,DBCRBRA,DBCRAMT:        
                        DBCRDAT,DBCRUSR,DBCRIDT,DBCRITM,DBCRUR1,DBCRUR2:        
                        DBCRUD1,DBCRUD2,DBCRUY1,DBCRUY2,DBCRUC1,DBCRUC2:        
                        DBCRSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBCR1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBCREA1;DBCRDEB,DBCRREC,DBCRTYP,DBCRRST,DBCRDDT:           
                        DBCRDTM,DBCRDRW,DBCRCHQ,DBCRBNK,DBCRBRA,DBCRAMT:        
                        DBCRDAT,DBCRUSR,DBCRIDT,DBCRITM,DBCRUR1,DBCRUR2:        
                        DBCRUD1,DBCRUD2,DBCRUY1,DBCRUY2,DBCRUC1,DBCRUC2:        
                        DBCRSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBCR1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBCREA1;DBCRDEB,DBCRREC,DBCRTYP,DBCRRST,DBCRDDT:           
                        DBCRDTM,DBCRDRW,DBCRCHQ,DBCRBNK,DBCRBRA,DBCRAMT:        
                        DBCRDAT,DBCRUSR,DBCRIDT,DBCRITM,DBCRUR1,DBCRUR2:        
                        DBCRUD1,DBCRUD2,DBCRUY1,DBCRUY2,DBCRUC1,DBCRUC2:        
                        DBCRSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBCR1                                                                         
          UPDATE    DEBCREA1;DBCRDEB,DBCRREC,DBCRTYP,DBCRRST,DBCRDDT:           
                        DBCRDTM,DBCRDRW,DBCRCHQ,DBCRBNK,DBCRBRA,DBCRAMT:        
                        DBCRDAT,DBCRUSR,DBCRIDT,DBCRITM,DBCRUR1,DBCRUR2:        
                        DBCRUD1,DBCRUD2,DBCRUY1,DBCRUY2,DBCRUC1,DBCRUC2:        
                        DBCRSPA                                                 
          RETURN
.
WRDBCR1   RESET     KEY12                                                       
          WRITE     DEBCREA1,KEY12;DBCRDEB,DBCRREC,DBCRTYP,DBCRRST,DBCRDDT:     
                        DBCRDTM,DBCRDRW,DBCRCHQ,DBCRBNK,DBCRBRA,DBCRAMT:        
                        DBCRDAT,DBCRUSR,DBCRIDT,DBCRITM,DBCRUR1,DBCRUR2:        
                        DBCRUD1,DBCRUD2,DBCRUY1,DBCRUY2,DBCRUC1,DBCRUC2:        
                        DBCRSPA                                                 
          RETURN
.
DEDBCR1   RESET     KEY12                                                       
          DELETE    DEBCREA1,KEY12                                              
          RETURN
.
RSDBCR2   RESET     KEY13                                                       
          READ      DEBCREA2,KEY13;;                                            
          RETURN
.
RADBCR2   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      DEBCREA2,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBCR2   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      DEBCREA2,KEY13;DBCRDEB,DBCRREC,DBCRTYP,DBCRRST,DBCRDDT:     
                        DBCRDTM,DBCRDRW,DBCRCHQ,DBCRBNK,DBCRBRA,DBCRAMT:        
                        DBCRDAT,DBCRUSR,DBCRIDT,DBCRITM,DBCRUR1,DBCRUR2:        
                        DBCRUD1,DBCRUD2,DBCRUY1,DBCRUY2,DBCRUC1,DBCRUC2:        
                        DBCRSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBCR2                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBCREA2;DBCRDEB,DBCRREC,DBCRTYP,DBCRRST,DBCRDDT:           
                        DBCRDTM,DBCRDRW,DBCRCHQ,DBCRBNK,DBCRBRA,DBCRAMT:        
                        DBCRDAT,DBCRUSR,DBCRIDT,DBCRITM,DBCRUR1,DBCRUR2:        
                        DBCRUD1,DBCRUD2,DBCRUY1,DBCRUY2,DBCRUC1,DBCRUC2:        
                        DBCRSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBCR2                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBCREA2;DBCRDEB,DBCRREC,DBCRTYP,DBCRRST,DBCRDDT:           
                        DBCRDTM,DBCRDRW,DBCRCHQ,DBCRBNK,DBCRBRA,DBCRAMT:        
                        DBCRDAT,DBCRUSR,DBCRIDT,DBCRITM,DBCRUR1,DBCRUR2:        
                        DBCRUD1,DBCRUD2,DBCRUY1,DBCRUY2,DBCRUC1,DBCRUC2:        
                        DBCRSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBCR2                                                                         
          UPDATE    DEBCREA2;DBCRDEB,DBCRREC,DBCRTYP,DBCRRST,DBCRDDT:           
                        DBCRDTM,DBCRDRW,DBCRCHQ,DBCRBNK,DBCRBRA,DBCRAMT:        
                        DBCRDAT,DBCRUSR,DBCRIDT,DBCRITM,DBCRUR1,DBCRUR2:        
                        DBCRUD1,DBCRUD2,DBCRUY1,DBCRUY2,DBCRUC1,DBCRUC2:        
                        DBCRSPA                                                 
          RETURN
.
WRDBCR2   RESET     KEY13                                                       
          WRITE     DEBCREA2,KEY13;DBCRDEB,DBCRREC,DBCRTYP,DBCRRST,DBCRDDT:     
                        DBCRDTM,DBCRDRW,DBCRCHQ,DBCRBNK,DBCRBRA,DBCRAMT:        
                        DBCRDAT,DBCRUSR,DBCRIDT,DBCRITM,DBCRUR1,DBCRUR2:        
                        DBCRUD1,DBCRUD2,DBCRUY1,DBCRUY2,DBCRUC1,DBCRUC2:        
                        DBCRSPA                                                 
          RETURN
.
DEDBCR2   RESET     KEY13                                                       
          DELETE    DEBCREA2,KEY13                                              
          RETURN
.
RSDBCR3   RESET     KEY26                                                       
          READ      DEBCREA3,KEY26;;                                            
          RETURN
.
RADBCR3   RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      DEBCREA3,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBCR3   RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      DEBCREA3,KEY26;DBCRDEB,DBCRREC,DBCRTYP,DBCRRST,DBCRDDT:     
                        DBCRDTM,DBCRDRW,DBCRCHQ,DBCRBNK,DBCRBRA,DBCRAMT:        
                        DBCRDAT,DBCRUSR,DBCRIDT,DBCRITM,DBCRUR1,DBCRUR2:        
                        DBCRUD1,DBCRUD2,DBCRUY1,DBCRUY2,DBCRUC1,DBCRUC2:        
                        DBCRSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBCR3                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBCREA3;DBCRDEB,DBCRREC,DBCRTYP,DBCRRST,DBCRDDT:           
                        DBCRDTM,DBCRDRW,DBCRCHQ,DBCRBNK,DBCRBRA,DBCRAMT:        
                        DBCRDAT,DBCRUSR,DBCRIDT,DBCRITM,DBCRUR1,DBCRUR2:        
                        DBCRUD1,DBCRUD2,DBCRUY1,DBCRUY2,DBCRUC1,DBCRUC2:        
                        DBCRSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBCR3                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBCREA3;DBCRDEB,DBCRREC,DBCRTYP,DBCRRST,DBCRDDT:           
                        DBCRDTM,DBCRDRW,DBCRCHQ,DBCRBNK,DBCRBRA,DBCRAMT:        
                        DBCRDAT,DBCRUSR,DBCRIDT,DBCRITM,DBCRUR1,DBCRUR2:        
                        DBCRUD1,DBCRUD2,DBCRUY1,DBCRUY2,DBCRUC1,DBCRUC2:        
                        DBCRSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBCR3                                                                         
          UPDATE    DEBCREA3;DBCRDEB,DBCRREC,DBCRTYP,DBCRRST,DBCRDDT:           
                        DBCRDTM,DBCRDRW,DBCRCHQ,DBCRBNK,DBCRBRA,DBCRAMT:        
                        DBCRDAT,DBCRUSR,DBCRIDT,DBCRITM,DBCRUR1,DBCRUR2:        
                        DBCRUD1,DBCRUD2,DBCRUY1,DBCRUY2,DBCRUC1,DBCRUC2:        
                        DBCRSPA                                                 
          RETURN
.
WRDBCR3   RESET     KEY26                                                       
          WRITE     DEBCREA3,KEY26;DBCRDEB,DBCRREC,DBCRTYP,DBCRRST,DBCRDDT:     
                        DBCRDTM,DBCRDRW,DBCRCHQ,DBCRBNK,DBCRBRA,DBCRAMT:        
                        DBCRDAT,DBCRUSR,DBCRIDT,DBCRITM,DBCRUR1,DBCRUR2:        
                        DBCRUD1,DBCRUD2,DBCRUY1,DBCRUY2,DBCRUC1,DBCRUC2:        
                        DBCRSPA                                                 
          RETURN
.
DEDBCR3   RESET     KEY26                                                       
          DELETE    DEBCREA3,KEY26                                              
          RETURN
.
