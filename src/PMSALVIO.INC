.
. PMSALVIO    
. --------
. Filename     : pmsalvaf.dat
.
RSPMALV1  RESET     KEY24                                                       
          READ      PMSALVA1,KEY24;;                                            
          RETURN
.
RAPMALV1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSALVA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMALV1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSALVA1,KEY24;PMVAVISN,PMVAAVIS,PMVATYPE,PMVADATE,PMVATIME:
                                   PMVACUID,PMVAACTN,PMVACOMM,PMVASPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMALV1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSALVA1;PMVAVISN,PMVAAVIS,PMVATYPE,PMVADATE,PMVATIME:      
                             PMVACUID,PMVAACTN,PMVACOMM,PMVASPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMALV1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSALVA1;PMVAVISN,PMVAAVIS,PMVATYPE,PMVADATE,PMVATIME:      
                             PMVACUID,PMVAACTN,PMVACOMM,PMVASPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMALV1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSALVA1;PMVAVISN,PMVAAVIS,PMVATYPE,PMVADATE,PMVATIME:      
                             PMVACUID,PMVAACTN,PMVACOMM,PMVASPAR                
          RETURN
.
WRPMALV1  RESET     KEY24                                                       
          WRITE     PMSALVA1,KEY24;PMVAVISN,PMVAAVIS,PMVATYPE,PMVADATE,PMVATIME:
                                   PMVACUID,PMVAACTN,PMVACOMM,PMVASPAR          
          RETURN
.
DEPMALV1  RESET     KEY24                                                       
          DELETE    PMSALVA1,KEY24                                              
          RETURN
.
RSPMALV2  RESET     KEY44                                                       
          READ      PMSALVA2,KEY44;;                                            
          RETURN
.
RAPMALV2  RESET     KEY44                                                       
          MOVE      ZERO,OVRCD
          READ      PMSALVA2,KEY44;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMALV2  RESET     KEY44                                                       
          MOVE      ZERO,OVRCD
          READ      PMSALVA2,KEY44;PMVAVISN,PMVAAVIS,PMVATYPE,PMVADATE,PMVATIME:
                                   PMVACUID,PMVAACTN,PMVACOMM,PMVASPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMALV2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSALVA2;PMVAVISN,PMVAAVIS,PMVATYPE,PMVADATE,PMVATIME:      
                             PMVACUID,PMVAACTN,PMVACOMM,PMVASPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMALV2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSALVA2;PMVAVISN,PMVAAVIS,PMVATYPE,PMVADATE,PMVATIME:      
                             PMVACUID,PMVAACTN,PMVACOMM,PMVASPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMALV2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSALVA2;PMVAVISN,PMVAAVIS,PMVATYPE,PMVADATE,PMVATIME:      
                             PMVACUID,PMVAACTN,PMVACOMM,PMVASPAR                
          RETURN
.
WRPMALV2  RESET     KEY44                                                       
          WRITE     PMSALVA2,KEY44;PMVAVISN,PMVAAVIS,PMVATYPE,PMVADATE,PMVATIME:
                                   PMVACUID,PMVAACTN,PMVACOMM,PMVASPAR          
          RETURN
.
DEPMALV2  RESET     KEY44                                                       
          DELETE    PMSALVA2,KEY44                                              
          RETURN
.
