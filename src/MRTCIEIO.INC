.
. MRTCIEIO    
. --------
. Filename     : mrtcieaf.dat
.
RSMRCIE1  RESET     KEY24                                                       
          READ      MRTCIEA1,KEY24;;                                            
          RETURN
.
RAMRCIE1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      MRTCIEA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRCIE1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      MRTCIEA1,KEY24;MRCEDATE,MRCETIME,MRCEURNO,MRCEVISN,MRCEFNAM:
                        MRCEERRM,MRCEPROC,MRCEUFAP,MRCEDFAP,MRCETFAP,MRCESPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRCIE1  MOVE      ZERO,OVRCD                                                  
          READKS    MRTCIEA1;MRCEDATE,MRCETIME,MRCEURNO,MRCEVISN,MRCEFNAM:      
                        MRCEERRM,MRCEPROC,MRCEUFAP,MRCEDFAP,MRCETFAP,MRCESPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRCIE1  MOVE      ZERO,OVRCD                                                  
          READKP    MRTCIEA1;MRCEDATE,MRCETIME,MRCEURNO,MRCEVISN,MRCEFNAM:      
                        MRCEERRM,MRCEPROC,MRCEUFAP,MRCEDFAP,MRCETFAP,MRCESPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRCIE1  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTCIEA1;MRCEDATE,MRCETIME,MRCEURNO,MRCEVISN,MRCEFNAM:      
                        MRCEERRM,MRCEPROC,MRCEUFAP,MRCEDFAP,MRCETFAP,MRCESPAR   
          RETURN
.
WRMRCIE1  RESET     KEY24                                                       
          WRITE     MRTCIEA1,KEY24;MRCEDATE,MRCETIME,MRCEURNO,MRCEVISN,MRCEFNAM:
                        MRCEERRM,MRCEPROC,MRCEUFAP,MRCEDFAP,MRCETFAP,MRCESPAR   
          RETURN
.
DEMRCIE1  RESET     KEY24                                                       
          DELETE    MRTCIEA1,KEY24                                              
          RETURN
.
RSMRCIE2  RESET     KEY24                                                       
          READ      MRTCIEA2,KEY24;;                                            
          RETURN
.
RAMRCIE2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      MRTCIEA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRCIE2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      MRTCIEA2,KEY24;MRCEDATE,MRCETIME,MRCEURNO,MRCEVISN,MRCEFNAM:
                        MRCEERRM,MRCEPROC,MRCEUFAP,MRCEDFAP,MRCETFAP,MRCESPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRCIE2  MOVE      ZERO,OVRCD                                                  
          READKS    MRTCIEA2;MRCEDATE,MRCETIME,MRCEURNO,MRCEVISN,MRCEFNAM:      
                        MRCEERRM,MRCEPROC,MRCEUFAP,MRCEDFAP,MRCETFAP,MRCESPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRCIE2  MOVE      ZERO,OVRCD                                                  
          READKP    MRTCIEA2;MRCEDATE,MRCETIME,MRCEURNO,MRCEVISN,MRCEFNAM:      
                        MRCEERRM,MRCEPROC,MRCEUFAP,MRCEDFAP,MRCETFAP,MRCESPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRCIE2  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTCIEA2;MRCEDATE,MRCETIME,MRCEURNO,MRCEVISN,MRCEFNAM:      
                        MRCEERRM,MRCEPROC,MRCEUFAP,MRCEDFAP,MRCETFAP,MRCESPAR   
          RETURN
.
WRMRCIE2  RESET     KEY24                                                       
          WRITE     MRTCIEA2,KEY24;MRCEDATE,MRCETIME,MRCEURNO,MRCEVISN,MRCEFNAM:
                        MRCEERRM,MRCEPROC,MRCEUFAP,MRCEDFAP,MRCETFAP,MRCESPAR   
          RETURN
.
DEMRCIE2  RESET     KEY24                                                       
          DELETE    MRTCIEA2,KEY24                                              
          RETURN
.
