.
. WEBPCAIO    
. --------
. Filename     : webpcaaf.dat
.
RSWBPCA1  RESET     KEY27                                                       
          READ      WEBPCAA1,KEY27;;                                            
          RETURN
.
RAWBPCA1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCAA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCA1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCAA1,KEY27;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:
                                   WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:
                                   WBPHMODL,WBPHMSID,WBPHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPCA1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCAA1;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:      
                             WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:      
                             WBPHMODL,WBPHMSID,WBPHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPCA1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCAA1;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:      
                             WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:      
                             WBPHMODL,WBPHMSID,WBPHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPCA1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPCAA1;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:      
                             WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:      
                             WBPHMODL,WBPHMSID,WBPHSPAR                         
          RETURN
.
WRWBPCA1  RESET     KEY27                                                       
          WRITE     WEBPCAA1,KEY27;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:
                                   WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:
                                   WBPHMODL,WBPHMSID,WBPHSPAR                   
          RETURN
.
DEWBPCA1  RESET     KEY27                                                       
          DELETE    WEBPCAA1,KEY27                                              
          RETURN
.
RSWBPCA2  RESET     KEY27                                                       
          READ      WEBPCAA2,KEY27;;                                            
          RETURN
.
RAWBPCA2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCAA2,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCA2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCAA2,KEY27;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:
                                   WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:
                                   WBPHMODL,WBPHMSID,WBPHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPCA2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCAA2;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:      
                             WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:      
                             WBPHMODL,WBPHMSID,WBPHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPCA2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCAA2;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:      
                             WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:      
                             WBPHMODL,WBPHMSID,WBPHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPCA2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPCAA2;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:      
                             WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:      
                             WBPHMODL,WBPHMSID,WBPHSPAR                         
          RETURN
.
WRWBPCA2  RESET     KEY27                                                       
          WRITE     WEBPCAA2,KEY27;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:
                                   WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:
                                   WBPHMODL,WBPHMSID,WBPHSPAR                   
          RETURN
.
DEWBPCA2  RESET     KEY27                                                       
          DELETE    WEBPCAA2,KEY27                                              
          RETURN
.
RSWBPCA3  RESET     KEY35                                                       
          READ      WEBPCAA3,KEY35;;                                            
          RETURN
.
RAWBPCA3  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCAA3,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCA3  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCAA3,KEY35;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:
                                   WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:
                                   WBPHMODL,WBPHMSID,WBPHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPCA3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCAA3;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:      
                             WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:      
                             WBPHMODL,WBPHMSID,WBPHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPCA3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCAA3;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:      
                             WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:      
                             WBPHMODL,WBPHMSID,WBPHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPCA3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPCAA3;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:      
                             WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:      
                             WBPHMODL,WBPHMSID,WBPHSPAR                         
          RETURN
.
WRWBPCA3  RESET     KEY35                                                       
          WRITE     WEBPCAA3,KEY35;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:
                                   WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:
                                   WBPHMODL,WBPHMSID,WBPHSPAR                   
          RETURN
.
DEWBPCA3  RESET     KEY35                                                       
          DELETE    WEBPCAA3,KEY35                                              
          RETURN
.
RSWBPCA4  RESET     KEY51                                                       
          READ      WEBPCAA4,KEY51;;                                            
          RETURN
.
RAWBPCA4  RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCAA4,KEY51;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCA4  RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCAA4,KEY51;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:
                                   WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:
                                   WBPHMODL,WBPHMSID,WBPHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPCA4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCAA4;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:      
                             WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:      
                             WBPHMODL,WBPHMSID,WBPHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPCA4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCAA4;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:      
                             WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:      
                             WBPHMODL,WBPHMSID,WBPHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPCA4  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPCAA4;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:      
                             WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:      
                             WBPHMODL,WBPHMSID,WBPHSPAR                         
          RETURN
.
WRWBPCA4  RESET     KEY51                                                       
          WRITE     WEBPCAA4,KEY51;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:
                                   WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:
                                   WBPHMODL,WBPHMSID,WBPHSPAR                   
          RETURN
.
DEWBPCA4  RESET     KEY51                                                       
          DELETE    WEBPCAA4,KEY51                                              
          RETURN
.
RSWBPCA5  RESET     KEY63                                                       
          READ      WEBPCAA5,KEY63;;                                            
          RETURN
.
RAWBPCA5  RESET     KEY63                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCAA5,KEY63;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPCA5  RESET     KEY63                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPCAA5,KEY63;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:
                                   WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:
                                   WBPHMODL,WBPHMSID,WBPHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPCA5  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPCAA5;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:      
                             WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:      
                             WBPHMODL,WBPHMSID,WBPHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPCA5  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPCAA5;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:      
                             WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:      
                             WBPHMODL,WBPHMSID,WBPHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPCA5  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPCAA5;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:      
                             WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:      
                             WBPHMODL,WBPHMSID,WBPHSPAR                         
          RETURN
.
WRWBPCA5  RESET     KEY63                                                       
          WRITE     WEBPCAA5,KEY63;WBPHINVN,WBPHDATE,WBPHTIME,WBPHBATN,WBPHSTAT:
                                   WBPHTYPE,WBPHOPER,WBPHTRID,WBPHEROR,WBPHEROT:
                                   WBPHMODL,WBPHMSID,WBPHSPAR                   
          RETURN
.
DEWBPCA5  RESET     KEY63                                                       
          DELETE    WEBPCAA5,KEY63                                              
          RETURN
.
