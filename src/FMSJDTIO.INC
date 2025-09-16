.
. FMSJDTIO    
. --------
. Filename     : fmsjdtaf.dat
.
RSFMJD1   RESET     KEY10                                                       
          READ      FMSJDTA1,KEY10;;                                            
          RETURN
.
RAFMJD1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      FMSJDTA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMJD1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      FMSJDTA1,KEY10;FMJDJTY,FMJDJID,FMJDLNO,FMJDDRCR,FMJDDESC:   
                        FMJDACC,FMJDDIS,FMJDRES,FMJDTAMT,FMJDPERC,FMJDPAMT:     
                        FMJDBASC,FMJDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMJD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSJDTA1;FMJDJTY,FMJDJID,FMJDLNO,FMJDDRCR,FMJDDESC:         
                        FMJDACC,FMJDDIS,FMJDRES,FMJDTAMT,FMJDPERC,FMJDPAMT:     
                        FMJDBASC,FMJDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMJD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSJDTA1;FMJDJTY,FMJDJID,FMJDLNO,FMJDDRCR,FMJDDESC:         
                        FMJDACC,FMJDDIS,FMJDRES,FMJDTAMT,FMJDPERC,FMJDPAMT:     
                        FMJDBASC,FMJDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMJD1                                                                         
          UPDATE    FMSJDTA1;FMJDJTY,FMJDJID,FMJDLNO,FMJDDRCR,FMJDDESC:         
                        FMJDACC,FMJDDIS,FMJDRES,FMJDTAMT,FMJDPERC,FMJDPAMT:     
                        FMJDBASC,FMJDSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRFMJD1   RESET     KEY10                                                       
          WRITE     FMSJDTA1,KEY10;FMJDJTY,FMJDJID,FMJDLNO,FMJDDRCR,FMJDDESC:   
                        FMJDACC,FMJDDIS,FMJDRES,FMJDTAMT,FMJDPERC,FMJDPAMT:     
                        FMJDBASC,FMJDSPAR                                       
          RETURN
.
DEFMJD1   RESET     KEY10                                                       
          DELETE    FMSJDTA1,KEY10                                              
          RETURN
.
RLFMJD1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     FMSJDTA1,KEY10;FMJDJTY,FMJDJID,FMJDLNO,FMJDDRCR,FMJDDESC:   
                        FMJDACC,FMJDDIS,FMJDRES,FMJDTAMT,FMJDPERC,FMJDPAMT:     
                        FMJDBASC,FMJDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLFMJD1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   FMSJDTA1;FMJDJTY,FMJDJID,FMJDLNO,FMJDDRCR,FMJDDESC:         
                        FMJDACC,FMJDDIS,FMJDRES,FMJDTAMT,FMJDPERC,FMJDPAMT:     
                        FMJDBASC,FMJDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLFMJD1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   FMSJDTA1;FMJDJTY,FMJDJID,FMJDLNO,FMJDDRCR,FMJDDESC:         
                        FMJDACC,FMJDDIS,FMJDRES,FMJDTAMT,FMJDPERC,FMJDPAMT:     
                        FMJDBASC,FMJDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUFMJD1   RESET     KEY10                                                       
          UNLOCK    FMSJDTA1                                                    
          RETURN
.
