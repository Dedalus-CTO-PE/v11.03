.
. WEBOVVIO    
. --------
. Filename     : webovvaf.dat
.
RSWBOVV1  RESET     KEY26                                                       
          READ      WEBOVVA1,KEY26;;                                            
          RETURN
.
RAWBOVV1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOVVA1,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOVV1  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOVVA1,KEY26;WBOVURNO,WBOVDATE,WBOVTIME,DWBOVCNT,WBOVHOSP:
                                   WBOVTRID,WBOVSNAM,WBOVFNAM,WBOVVETN,WBOVPRDT:
                                   WBOVSTAT,WBOVEROR,WBOVVENC,WBOVRESP,WBOVMSID:
                                   WBOVSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      DWBOVCNT,WBOVCNTR
          RETURN
.
RKWBOVV1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOVVA1;WBOVURNO,WBOVDATE,WBOVTIME,DWBOVCNT,WBOVHOSP:      
                             WBOVTRID,WBOVSNAM,WBOVFNAM,WBOVVETN,WBOVPRDT:      
                             WBOVSTAT,WBOVEROR,WBOVVENC,WBOVRESP,WBOVMSID:      
                             WBOVSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBOVCNT,WBOVCNTR
          RETURN
.
RPWBOVV1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOVVA1;WBOVURNO,WBOVDATE,WBOVTIME,DWBOVCNT,WBOVHOSP:      
                             WBOVTRID,WBOVSNAM,WBOVFNAM,WBOVVETN,WBOVPRDT:      
                             WBOVSTAT,WBOVEROR,WBOVVENC,WBOVRESP,WBOVMSID:      
                             WBOVSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBOVCNT,WBOVCNTR
          RETURN
.
UPWBOVV1  MOVE      ZERO,OVRCD                                                  
          MOVE      WBOVCNTR,DWBOVCNT
          UPDATE    WEBOVVA1;WBOVURNO,WBOVDATE,WBOVTIME,DWBOVCNT,WBOVHOSP:      
                             WBOVTRID,WBOVSNAM,WBOVFNAM,WBOVVETN,WBOVPRDT:      
                             WBOVSTAT,WBOVEROR,WBOVVENC,WBOVRESP,WBOVMSID:      
                             WBOVSPAR                                           
          RETURN
.
WRWBOVV1  RESET     KEY26                                                       
          MOVE      WBOVCNTR,DWBOVCNT
          WRITE     WEBOVVA1,KEY26;WBOVURNO,WBOVDATE,WBOVTIME,DWBOVCNT,WBOVHOSP:
                                   WBOVTRID,WBOVSNAM,WBOVFNAM,WBOVVETN,WBOVPRDT:
                                   WBOVSTAT,WBOVEROR,WBOVVENC,WBOVRESP,WBOVMSID:
                                   WBOVSPAR                                     
          RETURN
.
DEWBOVV1  RESET     KEY26                                                       
          DELETE    WEBOVVA1,KEY26                                              
          RETURN
.
RSWBOVV2  RESET     KEY50                                                       
          READ      WEBOVVA2,KEY50;;                                            
          RETURN
.
RAWBOVV2  RESET     KEY50                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOVVA2,KEY50;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOVV2  RESET     KEY50                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOVVA2,KEY50;WBOVURNO,WBOVDATE,WBOVTIME,DWBOVCNT,WBOVHOSP:
                                   WBOVTRID,WBOVSNAM,WBOVFNAM,WBOVVETN,WBOVPRDT:
                                   WBOVSTAT,WBOVEROR,WBOVVENC,WBOVRESP,WBOVMSID:
                                   WBOVSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      DWBOVCNT,WBOVCNTR
          RETURN
.
RKWBOVV2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOVVA2;WBOVURNO,WBOVDATE,WBOVTIME,DWBOVCNT,WBOVHOSP:      
                             WBOVTRID,WBOVSNAM,WBOVFNAM,WBOVVETN,WBOVPRDT:      
                             WBOVSTAT,WBOVEROR,WBOVVENC,WBOVRESP,WBOVMSID:      
                             WBOVSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBOVCNT,WBOVCNTR
          RETURN
.
RPWBOVV2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOVVA2;WBOVURNO,WBOVDATE,WBOVTIME,DWBOVCNT,WBOVHOSP:      
                             WBOVTRID,WBOVSNAM,WBOVFNAM,WBOVVETN,WBOVPRDT:      
                             WBOVSTAT,WBOVEROR,WBOVVENC,WBOVRESP,WBOVMSID:      
                             WBOVSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBOVCNT,WBOVCNTR
          RETURN
.
UPWBOVV2  MOVE      ZERO,OVRCD                                                  
          MOVE      WBOVCNTR,DWBOVCNT
          UPDATE    WEBOVVA2;WBOVURNO,WBOVDATE,WBOVTIME,DWBOVCNT,WBOVHOSP:      
                             WBOVTRID,WBOVSNAM,WBOVFNAM,WBOVVETN,WBOVPRDT:      
                             WBOVSTAT,WBOVEROR,WBOVVENC,WBOVRESP,WBOVMSID:      
                             WBOVSPAR                                           
          RETURN
.
WRWBOVV2  RESET     KEY50                                                       
          MOVE      WBOVCNTR,DWBOVCNT
          WRITE     WEBOVVA2,KEY50;WBOVURNO,WBOVDATE,WBOVTIME,DWBOVCNT,WBOVHOSP:
                                   WBOVTRID,WBOVSNAM,WBOVFNAM,WBOVVETN,WBOVPRDT:
                                   WBOVSTAT,WBOVEROR,WBOVVENC,WBOVRESP,WBOVMSID:
                                   WBOVSPAR                                     
          RETURN
.
DEWBOVV2  RESET     KEY50                                                       
          DELETE    WEBOVVA2,KEY50                                              
          RETURN
.
RSWBOVV3  RESET     KEY27                                                       
          READ      WEBOVVA3,KEY27;;                                            
          RETURN
.
RAWBOVV3  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOVVA3,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOVV3  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOVVA3,KEY27;WBOVURNO,WBOVDATE,WBOVTIME,DWBOVCNT,WBOVHOSP:
                                   WBOVTRID,WBOVSNAM,WBOVFNAM,WBOVVETN,WBOVPRDT:
                                   WBOVSTAT,WBOVEROR,WBOVVENC,WBOVRESP,WBOVMSID:
                                   WBOVSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      DWBOVCNT,WBOVCNTR
          RETURN
.
RKWBOVV3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOVVA3;WBOVURNO,WBOVDATE,WBOVTIME,DWBOVCNT,WBOVHOSP:      
                             WBOVTRID,WBOVSNAM,WBOVFNAM,WBOVVETN,WBOVPRDT:      
                             WBOVSTAT,WBOVEROR,WBOVVENC,WBOVRESP,WBOVMSID:      
                             WBOVSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBOVCNT,WBOVCNTR
          RETURN
.
RPWBOVV3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOVVA3;WBOVURNO,WBOVDATE,WBOVTIME,DWBOVCNT,WBOVHOSP:      
                             WBOVTRID,WBOVSNAM,WBOVFNAM,WBOVVETN,WBOVPRDT:      
                             WBOVSTAT,WBOVEROR,WBOVVENC,WBOVRESP,WBOVMSID:      
                             WBOVSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBOVCNT,WBOVCNTR
          RETURN
.
UPWBOVV3  MOVE      ZERO,OVRCD                                                  
          MOVE      WBOVCNTR,DWBOVCNT
          UPDATE    WEBOVVA3;WBOVURNO,WBOVDATE,WBOVTIME,DWBOVCNT,WBOVHOSP:      
                             WBOVTRID,WBOVSNAM,WBOVFNAM,WBOVVETN,WBOVPRDT:      
                             WBOVSTAT,WBOVEROR,WBOVVENC,WBOVRESP,WBOVMSID:      
                             WBOVSPAR                                           
          RETURN
.
WRWBOVV3  RESET     KEY27                                                       
          MOVE      WBOVCNTR,DWBOVCNT
          WRITE     WEBOVVA3,KEY27;WBOVURNO,WBOVDATE,WBOVTIME,DWBOVCNT,WBOVHOSP:
                                   WBOVTRID,WBOVSNAM,WBOVFNAM,WBOVVETN,WBOVPRDT:
                                   WBOVSTAT,WBOVEROR,WBOVVENC,WBOVRESP,WBOVMSID:
                                   WBOVSPAR                                     
          RETURN
.
DEWBOVV3  RESET     KEY27                                                       
          DELETE    WEBOVVA3,KEY27                                              
          RETURN
.
RSWBOVV4  RESET     KEY62                                                       
          READ      WEBOVVA4,KEY62;;                                            
          RETURN
.
RAWBOVV4  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOVVA4,KEY62;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBOVV4  RESET     KEY62                                                       
          MOVE      ZERO,OVRCD
          READ      WEBOVVA4,KEY62;WBOVURNO,WBOVDATE,WBOVTIME,DWBOVCNT,WBOVHOSP:
                                   WBOVTRID,WBOVSNAM,WBOVFNAM,WBOVVETN,WBOVPRDT:
                                   WBOVSTAT,WBOVEROR,WBOVVENC,WBOVRESP,WBOVMSID:
                                   WBOVSPAR                                     
          GOTO      OVERCOND IF OVER
          MOVE      DWBOVCNT,WBOVCNTR
          RETURN
.
RKWBOVV4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBOVVA4;WBOVURNO,WBOVDATE,WBOVTIME,DWBOVCNT,WBOVHOSP:      
                             WBOVTRID,WBOVSNAM,WBOVFNAM,WBOVVETN,WBOVPRDT:      
                             WBOVSTAT,WBOVEROR,WBOVVENC,WBOVRESP,WBOVMSID:      
                             WBOVSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBOVCNT,WBOVCNTR
          RETURN
.
RPWBOVV4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBOVVA4;WBOVURNO,WBOVDATE,WBOVTIME,DWBOVCNT,WBOVHOSP:      
                             WBOVTRID,WBOVSNAM,WBOVFNAM,WBOVVETN,WBOVPRDT:      
                             WBOVSTAT,WBOVEROR,WBOVVENC,WBOVRESP,WBOVMSID:      
                             WBOVSPAR                                           
          GOTO      OVERCOND IF OVER
          MOVE      DWBOVCNT,WBOVCNTR
          RETURN
.
UPWBOVV4  MOVE      ZERO,OVRCD                                                  
          MOVE      WBOVCNTR,DWBOVCNT
          UPDATE    WEBOVVA4;WBOVURNO,WBOVDATE,WBOVTIME,DWBOVCNT,WBOVHOSP:      
                             WBOVTRID,WBOVSNAM,WBOVFNAM,WBOVVETN,WBOVPRDT:      
                             WBOVSTAT,WBOVEROR,WBOVVENC,WBOVRESP,WBOVMSID:      
                             WBOVSPAR                                           
          RETURN
.
WRWBOVV4  RESET     KEY62                                                       
          MOVE      WBOVCNTR,DWBOVCNT
          WRITE     WEBOVVA4,KEY62;WBOVURNO,WBOVDATE,WBOVTIME,DWBOVCNT,WBOVHOSP:
                                   WBOVTRID,WBOVSNAM,WBOVFNAM,WBOVVETN,WBOVPRDT:
                                   WBOVSTAT,WBOVEROR,WBOVVENC,WBOVRESP,WBOVMSID:
                                   WBOVSPAR                                     
          RETURN
.
DEWBOVV4  RESET     KEY62                                                       
          DELETE    WEBOVVA4,KEY62                                              
          RETURN
.
