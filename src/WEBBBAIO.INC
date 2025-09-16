.
. WEBBBAIO    
. --------
. Filename     : webbbaaf.dat
.
RSWBBBA1  RESET     KEY27                                                       
          READ      WEBBBAA1,KEY27;;                                            
          RETURN
.
RAWBBBA1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBAA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBA1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBAA1,KEY27;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:
                                   WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:
                                   WBBAMODL,WBBAMSID,WBBASPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBBA1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBAA1;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:      
                             WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:      
                             WBBAMODL,WBBAMSID,WBBASPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBBA1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBAA1;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:      
                             WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:      
                             WBBAMODL,WBBAMSID,WBBASPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBBA1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBBAA1;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:      
                             WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:      
                             WBBAMODL,WBBAMSID,WBBASPAR                         
          RETURN
.
WRWBBBA1  RESET     KEY27                                                       
          WRITE     WEBBBAA1,KEY27;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:
                                   WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:
                                   WBBAMODL,WBBAMSID,WBBASPAR                   
          RETURN
.
DEWBBBA1  RESET     KEY27                                                       
          DELETE    WEBBBAA1,KEY27                                              
          RETURN
.
RSWBBBA2  RESET     KEY27                                                       
          READ      WEBBBAA2,KEY27;;                                            
          RETURN
.
RAWBBBA2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBAA2,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBA2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBAA2,KEY27;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:
                                   WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:
                                   WBBAMODL,WBBAMSID,WBBASPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBBA2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBAA2;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:      
                             WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:      
                             WBBAMODL,WBBAMSID,WBBASPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBBA2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBAA2;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:      
                             WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:      
                             WBBAMODL,WBBAMSID,WBBASPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBBA2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBBAA2;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:      
                             WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:      
                             WBBAMODL,WBBAMSID,WBBASPAR                         
          RETURN
.
WRWBBBA2  RESET     KEY27                                                       
          WRITE     WEBBBAA2,KEY27;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:
                                   WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:
                                   WBBAMODL,WBBAMSID,WBBASPAR                   
          RETURN
.
DEWBBBA2  RESET     KEY27                                                       
          DELETE    WEBBBAA2,KEY27                                              
          RETURN
.
RSWBBBA3  RESET     KEY35                                                       
          READ      WEBBBAA3,KEY35;;                                            
          RETURN
.
RAWBBBA3  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBAA3,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBA3  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBAA3,KEY35;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:
                                   WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:
                                   WBBAMODL,WBBAMSID,WBBASPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBBA3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBAA3;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:      
                             WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:      
                             WBBAMODL,WBBAMSID,WBBASPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBBA3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBAA3;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:      
                             WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:      
                             WBBAMODL,WBBAMSID,WBBASPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBBA3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBBAA3;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:      
                             WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:      
                             WBBAMODL,WBBAMSID,WBBASPAR                         
          RETURN
.
WRWBBBA3  RESET     KEY35                                                       
          WRITE     WEBBBAA3,KEY35;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:
                                   WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:
                                   WBBAMODL,WBBAMSID,WBBASPAR                   
          RETURN
.
DEWBBBA3  RESET     KEY35                                                       
          DELETE    WEBBBAA3,KEY35                                              
          RETURN
.
RSWBBBA4  RESET     KEY51                                                       
          READ      WEBBBAA4,KEY51;;                                            
          RETURN
.
RAWBBBA4  RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBAA4,KEY51;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBA4  RESET     KEY51                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBAA4,KEY51;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:
                                   WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:
                                   WBBAMODL,WBBAMSID,WBBASPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBBA4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBAA4;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:      
                             WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:      
                             WBBAMODL,WBBAMSID,WBBASPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBBA4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBAA4;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:      
                             WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:      
                             WBBAMODL,WBBAMSID,WBBASPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBBA4  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBBAA4;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:      
                             WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:      
                             WBBAMODL,WBBAMSID,WBBASPAR                         
          RETURN
.
WRWBBBA4  RESET     KEY51                                                       
          WRITE     WEBBBAA4,KEY51;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:
                                   WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:
                                   WBBAMODL,WBBAMSID,WBBASPAR                   
          RETURN
.
DEWBBBA4  RESET     KEY51                                                       
          DELETE    WEBBBAA4,KEY51                                              
          RETURN
.
RSWBBBA5  RESET     KEY63                                                       
          READ      WEBBBAA5,KEY63;;                                            
          RETURN
.
RAWBBBA5  RESET     KEY63                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBAA5,KEY63;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBBA5  RESET     KEY63                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBBAA5,KEY63;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:
                                   WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:
                                   WBBAMODL,WBBAMSID,WBBASPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBBA5  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBBAA5;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:      
                             WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:      
                             WBBAMODL,WBBAMSID,WBBASPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBBA5  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBBAA5;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:      
                             WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:      
                             WBBAMODL,WBBAMSID,WBBASPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBBA5  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBBAA5;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:      
                             WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:      
                             WBBAMODL,WBBAMSID,WBBASPAR                         
          RETURN
.
WRWBBBA5  RESET     KEY63                                                       
          WRITE     WEBBBAA5,KEY63;WBBAINVN,WBBADATE,WBBATIME,WBBABATN,WBBASTAT:
                                   WBBATYPE,WBBAOPER,WBBATRID,WBBAEROR,WBBAEROT:
                                   WBBAMODL,WBBAMSID,WBBASPAR                   
          RETURN
.
DEWBBBA5  RESET     KEY63                                                       
          DELETE    WEBBBAA5,KEY63                                              
          RETURN
.
