.
. PMSIDEIO    
. --------
. Filename     : pmsideaf.dat
.
RSPMIDE1  RESET     KEY25                                                       
          READ      PMSIDEA1,KEY25;;                                            
          RETURN
.
RAPMIDE1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIDEA1,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIDE1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIDEA1,KEY25;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPMIDDEF,PMIDDEFT                                           
          RETURN
.
RKPMIDE1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIDEA1;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:      
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPMIDDEF,PMIDDEFT                                           
          RETURN
.
RPPMIDE1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIDEA1;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:      
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPMIDDEF,PMIDDEFT                                           
          RETURN
.
UPPMIDE1  MOVE      ZERO,OVRCD                                                  
          MOVE      PMIDDEFT,DPMIDDEF                                           
          UPDATE    PMSIDEA1;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:      
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          RETURN
.
WRPMIDE1  RESET     KEY25                                                       
          MOVE      PMIDDEFT,DPMIDDEF                                           
          WRITE     PMSIDEA1,KEY25;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          RETURN
.
DEPMIDE1  RESET     KEY25                                                       
          DELETE    PMSIDEA1,KEY25                                              
          RETURN
.
RSPMIDE2  RESET     KEY26                                                       
          READ      PMSIDEA2,KEY26;;                                            
          RETURN
.
RAPMIDE2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIDEA2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIDE2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIDEA2,KEY26;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPMIDDEF,PMIDDEFT                                           
          RETURN
.
RKPMIDE2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIDEA2;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:      
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPMIDDEF,PMIDDEFT                                           
          RETURN
.
RPPMIDE2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIDEA2;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:      
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPMIDDEF,PMIDDEFT                                           
          RETURN
.
UPPMIDE2  MOVE      ZERO,OVRCD                                                  
          MOVE      PMIDDEFT,DPMIDDEF                                           
          UPDATE    PMSIDEA2;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:      
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          RETURN
.
WRPMIDE2  RESET     KEY26                                                       
          MOVE      PMIDDEFT,DPMIDDEF                                           
          WRITE     PMSIDEA2,KEY26;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          RETURN
.
DEPMIDE2  RESET     KEY26                                                       
          DELETE    PMSIDEA2,KEY26                                              
          RETURN
.
RSPMIDE3  RESET     KEY34                                                       
          READ      PMSIDEA3,KEY34;;                                            
          RETURN
.
RAPMIDE3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIDEA3,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIDE3  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIDEA3,KEY34;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPMIDDEF,PMIDDEFT                                           
          RETURN
.
RKPMIDE3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIDEA3;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:      
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPMIDDEF,PMIDDEFT                                           
          RETURN
.
RPPMIDE3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIDEA3;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:      
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPMIDDEF,PMIDDEFT                                           
          RETURN
.
UPPMIDE3  MOVE      ZERO,OVRCD                                                  
          MOVE      PMIDDEFT,DPMIDDEF                                           
          UPDATE    PMSIDEA3;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:      
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          RETURN
.
WRPMIDE3  RESET     KEY34                                                       
          MOVE      PMIDDEFT,DPMIDDEF                                           
          WRITE     PMSIDEA3,KEY34;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          RETURN
.
DEPMIDE3  RESET     KEY34                                                       
          DELETE    PMSIDEA3,KEY34                                              
          RETURN
.
RSPMIDE4  RESET     KEY34                                                       
          READ      PMSIDEA4,KEY34;;                                            
          RETURN
.
RAPMIDE4  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIDEA4,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIDE4  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIDEA4,KEY34;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPMIDDEF,PMIDDEFT                                           
          RETURN
.
RKPMIDE4  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIDEA4;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:      
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPMIDDEF,PMIDDEFT                                           
          RETURN
.
RPPMIDE4  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIDEA4;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:      
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPMIDDEF,PMIDDEFT                                           
          RETURN
.
UPPMIDE4  MOVE      ZERO,OVRCD                                                  
          MOVE      PMIDDEFT,DPMIDDEF                                           
          UPDATE    PMSIDEA4;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:      
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          RETURN
.
WRPMIDE4  RESET     KEY34                                                       
          MOVE      PMIDDEFT,DPMIDDEF                                           
          WRITE     PMSIDEA4,KEY34;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          RETURN
.
DEPMIDE4  RESET     KEY34                                                       
          DELETE    PMSIDEA4,KEY34                                              
          RETURN
.
RSPMIDE5  RESET     KEY25                                                       
          READ      PMSIDEA5,KEY25;;                                            
          RETURN
.
RAPMIDE5  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIDEA5,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIDE5  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIDEA5,KEY25;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPMIDDEF,PMIDDEFT                                           
          RETURN
.
RKPMIDE5  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIDEA5;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:      
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPMIDDEF,PMIDDEFT                                           
          RETURN
.
RPPMIDE5  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIDEA5;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:      
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPMIDDEF,PMIDDEFT                                           
          RETURN
.
UPPMIDE5  MOVE      ZERO,OVRCD                                                  
          MOVE      PMIDDEFT,DPMIDDEF                                           
          UPDATE    PMSIDEA5;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:      
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          RETURN
.
WRPMIDE5  RESET     KEY25                                                       
          MOVE      PMIDDEFT,DPMIDDEF                                           
          WRITE     PMSIDEA5,KEY25;PMIDADMN,PMIDCLTY,PMIDINVN,PMIDTRNO,PMIDRTYP:
                        PMIDFDAT,PMIDTDAT,PMIDNDAY,PMIDDESC,PMIDITEM,DPMIDDEF:  
                        PMIDREGM,PMIDAMNT,PMIDGSTM,PMIDSPLT,PMIDCNID,PMIDCUID:  
                        PMIDCDAT,PMIDCTIM,PMIDUUID,PMIDUDAT,PMIDUTIM,PMIDITDT:  
                        PMIDSPAR                                                
          RETURN
.
DEPMIDE5  RESET     KEY25                                                       
          DELETE    PMSIDEA5,KEY25                                              
          RETURN
.
