.
. DEBFNOIO    
. --------
. Filename     : debfnoaf.dat
.
RSDBFN1   RESET     KEY27                                                       
          READ      DEBFNOA1,KEY27;;                                            
          RETURN
.
RADBFN1   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFNOA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBFN1   RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFNOA1,KEY27;DBFNDEB,DBFNDTY,DBFNDOC,DBFNDLN,DBFNLIN:     
                        DBFNCOM,DBFNSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBFN1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBFNOA1;DBFNDEB,DBFNDTY,DBFNDOC,DBFNDLN,DBFNLIN:           
                        DBFNCOM,DBFNSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBFN1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBFNOA1;DBFNDEB,DBFNDTY,DBFNDOC,DBFNDLN,DBFNLIN:           
                        DBFNCOM,DBFNSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBFN1                                                                         
          UPDATE    DEBFNOA1;DBFNDEB,DBFNDTY,DBFNDOC,DBFNDLN,DBFNLIN:           
                        DBFNCOM,DBFNSPA                                         
          RETURN
.
WRDBFN1   RESET     KEY27                                                       
          WRITE     DEBFNOA1,KEY27;DBFNDEB,DBFNDTY,DBFNDOC,DBFNDLN,DBFNLIN:     
                        DBFNCOM,DBFNSPA                                         
          RETURN
.
DEDBFN1   RESET     KEY27                                                       
          DELETE    DEBFNOA1,KEY27                                              
          RETURN
.
