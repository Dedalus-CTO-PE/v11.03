.
. WEBIHHIO    
. --------
. Filename     : webihhaf.dat
.
RSWBIHH1  RESET     KEY45                                                       
          READ      WEBIHHA1,KEY45;;                                            
          RETURN
.
RAWBIHH1  RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHHA1,KEY45;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHH1  RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHHA1,KEY45;WBIPFBID,WBIPARID,WBIPFRID,WBIPRPTC,WBIPSECN:
                                   WBIPEXCN,WBIPEXCD,WBIPEXTX,WBIPTRID,WBIPMSID:
                                   WBIPSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIHH1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHHA1;WBIPFBID,WBIPARID,WBIPFRID,WBIPRPTC,WBIPSECN:      
                             WBIPEXCN,WBIPEXCD,WBIPEXTX,WBIPTRID,WBIPMSID:      
                             WBIPSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIHH1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHHA1;WBIPFBID,WBIPARID,WBIPFRID,WBIPRPTC,WBIPSECN:      
                             WBIPEXCN,WBIPEXCD,WBIPEXTX,WBIPTRID,WBIPMSID:      
                             WBIPSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIHH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHHA1;WBIPFBID,WBIPARID,WBIPFRID,WBIPRPTC,WBIPSECN:      
                             WBIPEXCN,WBIPEXCD,WBIPEXTX,WBIPTRID,WBIPMSID:      
                             WBIPSPAR                                           
          RETURN
.
WRWBIHH1  RESET     KEY45                                                       
          WRITE     WEBIHHA1,KEY45;WBIPFBID,WBIPARID,WBIPFRID,WBIPRPTC,WBIPSECN:
                                   WBIPEXCN,WBIPEXCD,WBIPEXTX,WBIPTRID,WBIPMSID:
                                   WBIPSPAR                                     
          RETURN
.
DEWBIHH1  RESET     KEY45                                                       
          DELETE    WEBIHHA1,KEY45                                              
          RETURN
.
RSWBIHH2  RESET     KEY69                                                       
          READ      WEBIHHA2,KEY69;;                                            
          RETURN
.
RAWBIHH2  RESET     KEY69                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHHA2,KEY69;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHH2  RESET     KEY69                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHHA2,KEY69;WBIPFBID,WBIPARID,WBIPFRID,WBIPRPTC,WBIPSECN:
                                   WBIPEXCN,WBIPEXCD,WBIPEXTX,WBIPTRID,WBIPMSID:
                                   WBIPSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIHH2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHHA2;WBIPFBID,WBIPARID,WBIPFRID,WBIPRPTC,WBIPSECN:      
                             WBIPEXCN,WBIPEXCD,WBIPEXTX,WBIPTRID,WBIPMSID:      
                             WBIPSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIHH2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHHA2;WBIPFBID,WBIPARID,WBIPFRID,WBIPRPTC,WBIPSECN:      
                             WBIPEXCN,WBIPEXCD,WBIPEXTX,WBIPTRID,WBIPMSID:      
                             WBIPSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIHH2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHHA2;WBIPFBID,WBIPARID,WBIPFRID,WBIPRPTC,WBIPSECN:      
                             WBIPEXCN,WBIPEXCD,WBIPEXTX,WBIPTRID,WBIPMSID:      
                             WBIPSPAR                                           
          RETURN
.
WRWBIHH2  RESET     KEY69                                                       
          WRITE     WEBIHHA2,KEY69;WBIPFBID,WBIPARID,WBIPFRID,WBIPRPTC,WBIPSECN:
                                   WBIPEXCN,WBIPEXCD,WBIPEXTX,WBIPTRID,WBIPMSID:
                                   WBIPSPAR                                     
          RETURN
.
DEWBIHH2  RESET     KEY69                                                       
          DELETE    WEBIHHA2,KEY69                                              
          RETURN
.
RSWBIHH3  RESET     KEY81                                                       
          READ      WEBIHHA3,KEY81;;                                            
          RETURN
.
RAWBIHH3  RESET     KEY81                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHHA3,KEY81;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHH3  RESET     KEY81                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHHA3,KEY81;WBIPFBID,WBIPARID,WBIPFRID,WBIPRPTC,WBIPSECN:
                                   WBIPEXCN,WBIPEXCD,WBIPEXTX,WBIPTRID,WBIPMSID:
                                   WBIPSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIHH3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHHA3;WBIPFBID,WBIPARID,WBIPFRID,WBIPRPTC,WBIPSECN:      
                             WBIPEXCN,WBIPEXCD,WBIPEXTX,WBIPTRID,WBIPMSID:      
                             WBIPSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIHH3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHHA3;WBIPFBID,WBIPARID,WBIPFRID,WBIPRPTC,WBIPSECN:      
                             WBIPEXCN,WBIPEXCD,WBIPEXTX,WBIPTRID,WBIPMSID:      
                             WBIPSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIHH3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHHA3;WBIPFBID,WBIPARID,WBIPFRID,WBIPRPTC,WBIPSECN:      
                             WBIPEXCN,WBIPEXCD,WBIPEXTX,WBIPTRID,WBIPMSID:      
                             WBIPSPAR                                           
          RETURN
.
WRWBIHH3  RESET     KEY81                                                       
          WRITE     WEBIHHA3,KEY81;WBIPFBID,WBIPARID,WBIPFRID,WBIPRPTC,WBIPSECN:
                                   WBIPEXCN,WBIPEXCD,WBIPEXTX,WBIPTRID,WBIPMSID:
                                   WBIPSPAR                                     
          RETURN
.
DEWBIHH3  RESET     KEY81                                                       
          DELETE    WEBIHHA3,KEY81                                              
          RETURN
.
