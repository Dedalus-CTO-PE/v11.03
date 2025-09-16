.
. FMSWCFIO    
. --------
. Filename     : fmswcfaf.dat
.
RSFMWC1   RESET     KEY14                                                       
          READ      FMSWCFA1,KEY14;;                                            
          RETURN
.
RAFMWC1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      FMSWCFA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMWC1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      FMSWCFA1,KEY14;FMWCLEDG,FMWCACCT,FMWCUR1,FMWCUR2,FMWCUD1:   
                        FMWCUD2,FMWCUY1,FMWCUY2,FMWCSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMWC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSWCFA1;FMWCLEDG,FMWCACCT,FMWCUR1,FMWCUR2,FMWCUD1:         
                        FMWCUD2,FMWCUY1,FMWCUY2,FMWCSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMWC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSWCFA1;FMWCLEDG,FMWCACCT,FMWCUR1,FMWCUR2,FMWCUD1:         
                        FMWCUD2,FMWCUY1,FMWCUY2,FMWCSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMWC1                                                                         
          UPDATE    FMSWCFA1;FMWCLEDG,FMWCACCT,FMWCUR1,FMWCUR2,FMWCUD1:         
                        FMWCUD2,FMWCUY1,FMWCUY2,FMWCSPA                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRFMWC1   RESET     KEY14                                                       
          WRITE     FMSWCFA1,KEY14;FMWCLEDG,FMWCACCT,FMWCUR1,FMWCUR2,FMWCUD1:   
                        FMWCUD2,FMWCUY1,FMWCUY2,FMWCSPA                         
          RETURN
.
DEFMWC1   RESET     KEY14                                                       
          DELETE    FMSWCFA1,KEY14                                              
          RETURN
.
RLFMWC1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     FMSWCFA1,KEY14;FMWCLEDG,FMWCACCT,FMWCUR1,FMWCUR2,FMWCUD1:   
                        FMWCUD2,FMWCUY1,FMWCUY2,FMWCSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLFMWC1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   FMSWCFA1;FMWCLEDG,FMWCACCT,FMWCUR1,FMWCUR2,FMWCUD1:         
                        FMWCUD2,FMWCUY1,FMWCUY2,FMWCSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLFMWC1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   FMSWCFA1;FMWCLEDG,FMWCACCT,FMWCUR1,FMWCUR2,FMWCUD1:         
                        FMWCUD2,FMWCUY1,FMWCUY2,FMWCSPA                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUFMWC1   RESET     KEY14                                                       
          UNLOCK    FMSWCFA1                                                    
          RETURN
.
