.
. PMSLRDIO    
. --------
. Filename     : pmslrdaf.dat
.
RSPMLRD1  RESET     KEY27                                                       
          READ      PMSLRDA1,KEY27;;                                            
          RETURN
.
RAPMLRD1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSLRDA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMLRD1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSLRDA1,KEY27;PMLRVISN,PMLRDATE,PMLRTIME,PMLRWARD,PMLRLBED:
                                   PMLRRECS,PMLRCOUN,PMLRACTV,PMLRLRCN,PMLRTLEV:
                                   PMLREXRD,PMLREXRT,PMLRDEST,PMLRRISK,PMLRLARR:
                                   PMLRUDC1,PMLRUDC2,PMLRUDC3,PMLRUDC4,PMLRMEDG:
                                   PMLRBAGS,PMLRBALS,PMLRUDSS,PMLRUDY1,PMLRUDY2:
                                   PMLRUDY3,PMLRVAL1,PMLRVAL2,PMLRVAL3,PMLRCARN:
                                   PMLRCARC,PMLRCART,PMLRCCNT,PMLRCCON,PMLRTXT1:
                                   PMLRTXT2,PMLRTXT3,PMLRREMN,PMLRWEBC,PMLRCDAT:
                                   PMLRCTIM,PMLRWEBD,PMLRDATD,PMLRTIMD,PMLRWEBU:
                                   PMLRDATU,PMLRTIMU,PMLRSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMLRD1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSLRDA1;PMLRVISN,PMLRDATE,PMLRTIME,PMLRWARD,PMLRLBED:      
                             PMLRRECS,PMLRCOUN,PMLRACTV,PMLRLRCN,PMLRTLEV:      
                             PMLREXRD,PMLREXRT,PMLRDEST,PMLRRISK,PMLRLARR:      
                             PMLRUDC1,PMLRUDC2,PMLRUDC3,PMLRUDC4,PMLRMEDG:      
                             PMLRBAGS,PMLRBALS,PMLRUDSS,PMLRUDY1,PMLRUDY2:      
                             PMLRUDY3,PMLRVAL1,PMLRVAL2,PMLRVAL3,PMLRCARN:      
                             PMLRCARC,PMLRCART,PMLRCCNT,PMLRCCON,PMLRTXT1:      
                             PMLRTXT2,PMLRTXT3,PMLRREMN,PMLRWEBC,PMLRCDAT:      
                             PMLRCTIM,PMLRWEBD,PMLRDATD,PMLRTIMD,PMLRWEBU:      
                             PMLRDATU,PMLRTIMU,PMLRSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMLRD1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSLRDA1;PMLRVISN,PMLRDATE,PMLRTIME,PMLRWARD,PMLRLBED:      
                             PMLRRECS,PMLRCOUN,PMLRACTV,PMLRLRCN,PMLRTLEV:      
                             PMLREXRD,PMLREXRT,PMLRDEST,PMLRRISK,PMLRLARR:      
                             PMLRUDC1,PMLRUDC2,PMLRUDC3,PMLRUDC4,PMLRMEDG:      
                             PMLRBAGS,PMLRBALS,PMLRUDSS,PMLRUDY1,PMLRUDY2:      
                             PMLRUDY3,PMLRVAL1,PMLRVAL2,PMLRVAL3,PMLRCARN:      
                             PMLRCARC,PMLRCART,PMLRCCNT,PMLRCCON,PMLRTXT1:      
                             PMLRTXT2,PMLRTXT3,PMLRREMN,PMLRWEBC,PMLRCDAT:      
                             PMLRCTIM,PMLRWEBD,PMLRDATD,PMLRTIMD,PMLRWEBU:      
                             PMLRDATU,PMLRTIMU,PMLRSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMLRD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSLRDA1;PMLRVISN,PMLRDATE,PMLRTIME,PMLRWARD,PMLRLBED:      
                             PMLRRECS,PMLRCOUN,PMLRACTV,PMLRLRCN,PMLRTLEV:      
                             PMLREXRD,PMLREXRT,PMLRDEST,PMLRRISK,PMLRLARR:      
                             PMLRUDC1,PMLRUDC2,PMLRUDC3,PMLRUDC4,PMLRMEDG:      
                             PMLRBAGS,PMLRBALS,PMLRUDSS,PMLRUDY1,PMLRUDY2:      
                             PMLRUDY3,PMLRVAL1,PMLRVAL2,PMLRVAL3,PMLRCARN:      
                             PMLRCARC,PMLRCART,PMLRCCNT,PMLRCCON,PMLRTXT1:      
                             PMLRTXT2,PMLRTXT3,PMLRREMN,PMLRWEBC,PMLRCDAT:      
                             PMLRCTIM,PMLRWEBD,PMLRDATD,PMLRTIMD,PMLRWEBU:      
                             PMLRDATU,PMLRTIMU,PMLRSPAR                         
          RETURN
.
WRPMLRD1  RESET     KEY27                                                       
          WRITE     PMSLRDA1,KEY27;PMLRVISN,PMLRDATE,PMLRTIME,PMLRWARD,PMLRLBED:
                                   PMLRRECS,PMLRCOUN,PMLRACTV,PMLRLRCN,PMLRTLEV:
                                   PMLREXRD,PMLREXRT,PMLRDEST,PMLRRISK,PMLRLARR:
                                   PMLRUDC1,PMLRUDC2,PMLRUDC3,PMLRUDC4,PMLRMEDG:
                                   PMLRBAGS,PMLRBALS,PMLRUDSS,PMLRUDY1,PMLRUDY2:
                                   PMLRUDY3,PMLRVAL1,PMLRVAL2,PMLRVAL3,PMLRCARN:
                                   PMLRCARC,PMLRCART,PMLRCCNT,PMLRCCON,PMLRTXT1:
                                   PMLRTXT2,PMLRTXT3,PMLRREMN,PMLRWEBC,PMLRCDAT:
                                   PMLRCTIM,PMLRWEBD,PMLRDATD,PMLRTIMD,PMLRWEBU:
                                   PMLRDATU,PMLRTIMU,PMLRSPAR                   
          RETURN
.
DEPMLRD1  RESET     KEY27                                                       
          DELETE    PMSLRDA1,KEY27                                              
          RETURN
.
RSPMLRD2  RESET     KEY28                                                       
          READ      PMSLRDA2,KEY28;;                                            
          RETURN
.
RAPMLRD2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSLRDA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMLRD2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSLRDA2,KEY28;PMLRVISN,PMLRDATE,PMLRTIME,PMLRWARD,PMLRLBED:
                                   PMLRRECS,PMLRCOUN,PMLRACTV,PMLRLRCN,PMLRTLEV:
                                   PMLREXRD,PMLREXRT,PMLRDEST,PMLRRISK,PMLRLARR:
                                   PMLRUDC1,PMLRUDC2,PMLRUDC3,PMLRUDC4,PMLRMEDG:
                                   PMLRBAGS,PMLRBALS,PMLRUDSS,PMLRUDY1,PMLRUDY2:
                                   PMLRUDY3,PMLRVAL1,PMLRVAL2,PMLRVAL3,PMLRCARN:
                                   PMLRCARC,PMLRCART,PMLRCCNT,PMLRCCON,PMLRTXT1:
                                   PMLRTXT2,PMLRTXT3,PMLRREMN,PMLRWEBC,PMLRCDAT:
                                   PMLRCTIM,PMLRWEBD,PMLRDATD,PMLRTIMD,PMLRWEBU:
                                   PMLRDATU,PMLRTIMU,PMLRSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMLRD2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSLRDA2;PMLRVISN,PMLRDATE,PMLRTIME,PMLRWARD,PMLRLBED:      
                             PMLRRECS,PMLRCOUN,PMLRACTV,PMLRLRCN,PMLRTLEV:      
                             PMLREXRD,PMLREXRT,PMLRDEST,PMLRRISK,PMLRLARR:      
                             PMLRUDC1,PMLRUDC2,PMLRUDC3,PMLRUDC4,PMLRMEDG:      
                             PMLRBAGS,PMLRBALS,PMLRUDSS,PMLRUDY1,PMLRUDY2:      
                             PMLRUDY3,PMLRVAL1,PMLRVAL2,PMLRVAL3,PMLRCARN:      
                             PMLRCARC,PMLRCART,PMLRCCNT,PMLRCCON,PMLRTXT1:      
                             PMLRTXT2,PMLRTXT3,PMLRREMN,PMLRWEBC,PMLRCDAT:      
                             PMLRCTIM,PMLRWEBD,PMLRDATD,PMLRTIMD,PMLRWEBU:      
                             PMLRDATU,PMLRTIMU,PMLRSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMLRD2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSLRDA2;PMLRVISN,PMLRDATE,PMLRTIME,PMLRWARD,PMLRLBED:      
                             PMLRRECS,PMLRCOUN,PMLRACTV,PMLRLRCN,PMLRTLEV:      
                             PMLREXRD,PMLREXRT,PMLRDEST,PMLRRISK,PMLRLARR:      
                             PMLRUDC1,PMLRUDC2,PMLRUDC3,PMLRUDC4,PMLRMEDG:      
                             PMLRBAGS,PMLRBALS,PMLRUDSS,PMLRUDY1,PMLRUDY2:      
                             PMLRUDY3,PMLRVAL1,PMLRVAL2,PMLRVAL3,PMLRCARN:      
                             PMLRCARC,PMLRCART,PMLRCCNT,PMLRCCON,PMLRTXT1:      
                             PMLRTXT2,PMLRTXT3,PMLRREMN,PMLRWEBC,PMLRCDAT:      
                             PMLRCTIM,PMLRWEBD,PMLRDATD,PMLRTIMD,PMLRWEBU:      
                             PMLRDATU,PMLRTIMU,PMLRSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMLRD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSLRDA2;PMLRVISN,PMLRDATE,PMLRTIME,PMLRWARD,PMLRLBED:      
                             PMLRRECS,PMLRCOUN,PMLRACTV,PMLRLRCN,PMLRTLEV:      
                             PMLREXRD,PMLREXRT,PMLRDEST,PMLRRISK,PMLRLARR:      
                             PMLRUDC1,PMLRUDC2,PMLRUDC3,PMLRUDC4,PMLRMEDG:      
                             PMLRBAGS,PMLRBALS,PMLRUDSS,PMLRUDY1,PMLRUDY2:      
                             PMLRUDY3,PMLRVAL1,PMLRVAL2,PMLRVAL3,PMLRCARN:      
                             PMLRCARC,PMLRCART,PMLRCCNT,PMLRCCON,PMLRTXT1:      
                             PMLRTXT2,PMLRTXT3,PMLRREMN,PMLRWEBC,PMLRCDAT:      
                             PMLRCTIM,PMLRWEBD,PMLRDATD,PMLRTIMD,PMLRWEBU:      
                             PMLRDATU,PMLRTIMU,PMLRSPAR                         
          RETURN
.
WRPMLRD2  RESET     KEY28                                                       
          WRITE     PMSLRDA2,KEY28;PMLRVISN,PMLRDATE,PMLRTIME,PMLRWARD,PMLRLBED:
                                   PMLRRECS,PMLRCOUN,PMLRACTV,PMLRLRCN,PMLRTLEV:
                                   PMLREXRD,PMLREXRT,PMLRDEST,PMLRRISK,PMLRLARR:
                                   PMLRUDC1,PMLRUDC2,PMLRUDC3,PMLRUDC4,PMLRMEDG:
                                   PMLRBAGS,PMLRBALS,PMLRUDSS,PMLRUDY1,PMLRUDY2:
                                   PMLRUDY3,PMLRVAL1,PMLRVAL2,PMLRVAL3,PMLRCARN:
                                   PMLRCARC,PMLRCART,PMLRCCNT,PMLRCCON,PMLRTXT1:
                                   PMLRTXT2,PMLRTXT3,PMLRREMN,PMLRWEBC,PMLRCDAT:
                                   PMLRCTIM,PMLRWEBD,PMLRDATD,PMLRTIMD,PMLRWEBU:
                                   PMLRDATU,PMLRTIMU,PMLRSPAR                   
          RETURN
.
DEPMLRD2  RESET     KEY28                                                       
          DELETE    PMSLRDA2,KEY28                                              
          RETURN
.
RSPMLRD3  RESET     KEY28                                                       
          READ      PMSLRDA3,KEY28;;                                            
          RETURN
.
RAPMLRD3  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSLRDA3,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMLRD3  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSLRDA3,KEY28;PMLRVISN,PMLRDATE,PMLRTIME,PMLRWARD,PMLRLBED:
                                   PMLRRECS,PMLRCOUN,PMLRACTV,PMLRLRCN,PMLRTLEV:
                                   PMLREXRD,PMLREXRT,PMLRDEST,PMLRRISK,PMLRLARR:
                                   PMLRUDC1,PMLRUDC2,PMLRUDC3,PMLRUDC4,PMLRMEDG:
                                   PMLRBAGS,PMLRBALS,PMLRUDSS,PMLRUDY1,PMLRUDY2:
                                   PMLRUDY3,PMLRVAL1,PMLRVAL2,PMLRVAL3,PMLRCARN:
                                   PMLRCARC,PMLRCART,PMLRCCNT,PMLRCCON,PMLRTXT1:
                                   PMLRTXT2,PMLRTXT3,PMLRREMN,PMLRWEBC,PMLRCDAT:
                                   PMLRCTIM,PMLRWEBD,PMLRDATD,PMLRTIMD,PMLRWEBU:
                                   PMLRDATU,PMLRTIMU,PMLRSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMLRD3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSLRDA3;PMLRVISN,PMLRDATE,PMLRTIME,PMLRWARD,PMLRLBED:      
                             PMLRRECS,PMLRCOUN,PMLRACTV,PMLRLRCN,PMLRTLEV:      
                             PMLREXRD,PMLREXRT,PMLRDEST,PMLRRISK,PMLRLARR:      
                             PMLRUDC1,PMLRUDC2,PMLRUDC3,PMLRUDC4,PMLRMEDG:      
                             PMLRBAGS,PMLRBALS,PMLRUDSS,PMLRUDY1,PMLRUDY2:      
                             PMLRUDY3,PMLRVAL1,PMLRVAL2,PMLRVAL3,PMLRCARN:      
                             PMLRCARC,PMLRCART,PMLRCCNT,PMLRCCON,PMLRTXT1:      
                             PMLRTXT2,PMLRTXT3,PMLRREMN,PMLRWEBC,PMLRCDAT:      
                             PMLRCTIM,PMLRWEBD,PMLRDATD,PMLRTIMD,PMLRWEBU:      
                             PMLRDATU,PMLRTIMU,PMLRSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMLRD3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSLRDA3;PMLRVISN,PMLRDATE,PMLRTIME,PMLRWARD,PMLRLBED:      
                             PMLRRECS,PMLRCOUN,PMLRACTV,PMLRLRCN,PMLRTLEV:      
                             PMLREXRD,PMLREXRT,PMLRDEST,PMLRRISK,PMLRLARR:      
                             PMLRUDC1,PMLRUDC2,PMLRUDC3,PMLRUDC4,PMLRMEDG:      
                             PMLRBAGS,PMLRBALS,PMLRUDSS,PMLRUDY1,PMLRUDY2:      
                             PMLRUDY3,PMLRVAL1,PMLRVAL2,PMLRVAL3,PMLRCARN:      
                             PMLRCARC,PMLRCART,PMLRCCNT,PMLRCCON,PMLRTXT1:      
                             PMLRTXT2,PMLRTXT3,PMLRREMN,PMLRWEBC,PMLRCDAT:      
                             PMLRCTIM,PMLRWEBD,PMLRDATD,PMLRTIMD,PMLRWEBU:      
                             PMLRDATU,PMLRTIMU,PMLRSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMLRD3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSLRDA3;PMLRVISN,PMLRDATE,PMLRTIME,PMLRWARD,PMLRLBED:      
                             PMLRRECS,PMLRCOUN,PMLRACTV,PMLRLRCN,PMLRTLEV:      
                             PMLREXRD,PMLREXRT,PMLRDEST,PMLRRISK,PMLRLARR:      
                             PMLRUDC1,PMLRUDC2,PMLRUDC3,PMLRUDC4,PMLRMEDG:      
                             PMLRBAGS,PMLRBALS,PMLRUDSS,PMLRUDY1,PMLRUDY2:      
                             PMLRUDY3,PMLRVAL1,PMLRVAL2,PMLRVAL3,PMLRCARN:      
                             PMLRCARC,PMLRCART,PMLRCCNT,PMLRCCON,PMLRTXT1:      
                             PMLRTXT2,PMLRTXT3,PMLRREMN,PMLRWEBC,PMLRCDAT:      
                             PMLRCTIM,PMLRWEBD,PMLRDATD,PMLRTIMD,PMLRWEBU:      
                             PMLRDATU,PMLRTIMU,PMLRSPAR                         
          RETURN
.
WRPMLRD3  RESET     KEY28                                                       
          WRITE     PMSLRDA3,KEY28;PMLRVISN,PMLRDATE,PMLRTIME,PMLRWARD,PMLRLBED:
                                   PMLRRECS,PMLRCOUN,PMLRACTV,PMLRLRCN,PMLRTLEV:
                                   PMLREXRD,PMLREXRT,PMLRDEST,PMLRRISK,PMLRLARR:
                                   PMLRUDC1,PMLRUDC2,PMLRUDC3,PMLRUDC4,PMLRMEDG:
                                   PMLRBAGS,PMLRBALS,PMLRUDSS,PMLRUDY1,PMLRUDY2:
                                   PMLRUDY3,PMLRVAL1,PMLRVAL2,PMLRVAL3,PMLRCARN:
                                   PMLRCARC,PMLRCART,PMLRCCNT,PMLRCCON,PMLRTXT1:
                                   PMLRTXT2,PMLRTXT3,PMLRREMN,PMLRWEBC,PMLRCDAT:
                                   PMLRCTIM,PMLRWEBD,PMLRDATD,PMLRTIMD,PMLRWEBU:
                                   PMLRDATU,PMLRTIMU,PMLRSPAR                   
          RETURN
.
DEPMLRD3  RESET     KEY28                                                       
          DELETE    PMSLRDA3,KEY28                                              
          RETURN
.
RSPMLRD4  RESET     KEY28                                                       
          READ      PMSLRDA4,KEY28;;                                            
          RETURN
.
RAPMLRD4  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSLRDA4,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMLRD4  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSLRDA4,KEY28;PMLRVISN,PMLRDATE,PMLRTIME,PMLRWARD,PMLRLBED:
                                   PMLRRECS,PMLRCOUN,PMLRACTV,PMLRLRCN,PMLRTLEV:
                                   PMLREXRD,PMLREXRT,PMLRDEST,PMLRRISK,PMLRLARR:
                                   PMLRUDC1,PMLRUDC2,PMLRUDC3,PMLRUDC4,PMLRMEDG:
                                   PMLRBAGS,PMLRBALS,PMLRUDSS,PMLRUDY1,PMLRUDY2:
                                   PMLRUDY3,PMLRVAL1,PMLRVAL2,PMLRVAL3,PMLRCARN:
                                   PMLRCARC,PMLRCART,PMLRCCNT,PMLRCCON,PMLRTXT1:
                                   PMLRTXT2,PMLRTXT3,PMLRREMN,PMLRWEBC,PMLRCDAT:
                                   PMLRCTIM,PMLRWEBD,PMLRDATD,PMLRTIMD,PMLRWEBU:
                                   PMLRDATU,PMLRTIMU,PMLRSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMLRD4  MOVE      ZERO,OVRCD                                                  
          READKS    PMSLRDA4;PMLRVISN,PMLRDATE,PMLRTIME,PMLRWARD,PMLRLBED:      
                             PMLRRECS,PMLRCOUN,PMLRACTV,PMLRLRCN,PMLRTLEV:      
                             PMLREXRD,PMLREXRT,PMLRDEST,PMLRRISK,PMLRLARR:      
                             PMLRUDC1,PMLRUDC2,PMLRUDC3,PMLRUDC4,PMLRMEDG:      
                             PMLRBAGS,PMLRBALS,PMLRUDSS,PMLRUDY1,PMLRUDY2:      
                             PMLRUDY3,PMLRVAL1,PMLRVAL2,PMLRVAL3,PMLRCARN:      
                             PMLRCARC,PMLRCART,PMLRCCNT,PMLRCCON,PMLRTXT1:      
                             PMLRTXT2,PMLRTXT3,PMLRREMN,PMLRWEBC,PMLRCDAT:      
                             PMLRCTIM,PMLRWEBD,PMLRDATD,PMLRTIMD,PMLRWEBU:      
                             PMLRDATU,PMLRTIMU,PMLRSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMLRD4  MOVE      ZERO,OVRCD                                                  
          READKP    PMSLRDA4;PMLRVISN,PMLRDATE,PMLRTIME,PMLRWARD,PMLRLBED:      
                             PMLRRECS,PMLRCOUN,PMLRACTV,PMLRLRCN,PMLRTLEV:      
                             PMLREXRD,PMLREXRT,PMLRDEST,PMLRRISK,PMLRLARR:      
                             PMLRUDC1,PMLRUDC2,PMLRUDC3,PMLRUDC4,PMLRMEDG:      
                             PMLRBAGS,PMLRBALS,PMLRUDSS,PMLRUDY1,PMLRUDY2:      
                             PMLRUDY3,PMLRVAL1,PMLRVAL2,PMLRVAL3,PMLRCARN:      
                             PMLRCARC,PMLRCART,PMLRCCNT,PMLRCCON,PMLRTXT1:      
                             PMLRTXT2,PMLRTXT3,PMLRREMN,PMLRWEBC,PMLRCDAT:      
                             PMLRCTIM,PMLRWEBD,PMLRDATD,PMLRTIMD,PMLRWEBU:      
                             PMLRDATU,PMLRTIMU,PMLRSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMLRD4  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSLRDA4;PMLRVISN,PMLRDATE,PMLRTIME,PMLRWARD,PMLRLBED:      
                             PMLRRECS,PMLRCOUN,PMLRACTV,PMLRLRCN,PMLRTLEV:      
                             PMLREXRD,PMLREXRT,PMLRDEST,PMLRRISK,PMLRLARR:      
                             PMLRUDC1,PMLRUDC2,PMLRUDC3,PMLRUDC4,PMLRMEDG:      
                             PMLRBAGS,PMLRBALS,PMLRUDSS,PMLRUDY1,PMLRUDY2:      
                             PMLRUDY3,PMLRVAL1,PMLRVAL2,PMLRVAL3,PMLRCARN:      
                             PMLRCARC,PMLRCART,PMLRCCNT,PMLRCCON,PMLRTXT1:      
                             PMLRTXT2,PMLRTXT3,PMLRREMN,PMLRWEBC,PMLRCDAT:      
                             PMLRCTIM,PMLRWEBD,PMLRDATD,PMLRTIMD,PMLRWEBU:      
                             PMLRDATU,PMLRTIMU,PMLRSPAR                         
          RETURN
.
WRPMLRD4  RESET     KEY28                                                       
          WRITE     PMSLRDA4,KEY28;PMLRVISN,PMLRDATE,PMLRTIME,PMLRWARD,PMLRLBED:
                                   PMLRRECS,PMLRCOUN,PMLRACTV,PMLRLRCN,PMLRTLEV:
                                   PMLREXRD,PMLREXRT,PMLRDEST,PMLRRISK,PMLRLARR:
                                   PMLRUDC1,PMLRUDC2,PMLRUDC3,PMLRUDC4,PMLRMEDG:
                                   PMLRBAGS,PMLRBALS,PMLRUDSS,PMLRUDY1,PMLRUDY2:
                                   PMLRUDY3,PMLRVAL1,PMLRVAL2,PMLRVAL3,PMLRCARN:
                                   PMLRCARC,PMLRCART,PMLRCCNT,PMLRCCON,PMLRTXT1:
                                   PMLRTXT2,PMLRTXT3,PMLRREMN,PMLRWEBC,PMLRCDAT:
                                   PMLRCTIM,PMLRWEBD,PMLRDATD,PMLRTIMD,PMLRWEBU:
                                   PMLRDATU,PMLRTIMU,PMLRSPAR                   
          RETURN
.
DEPMLRD4  RESET     KEY28                                                       
          DELETE    PMSLRDA4,KEY28                                              
          RETURN
.
