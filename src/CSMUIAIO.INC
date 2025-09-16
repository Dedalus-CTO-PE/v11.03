.
. CSMUIAIO    
. --------
. Filename     : csmuiaaf.dat
.
RSCSUA1   RESET     KEY10                                                       
          READ      CSMUIAA1,KEY10;;                                            
          RETURN
.
RACSUA1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      CSMUIAA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCSUA1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      CSMUIAA1,KEY10;CSUADBS,CSUACAT,CSUATYP,CSUASPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCSUA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CSMUIAA1;CSUADBS,CSUACAT,CSUATYP,CSUASPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCSUA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CSMUIAA1;CSUADBS,CSUACAT,CSUATYP,CSUASPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCSUA1                                                                         
          UPDATE    CSMUIAA1;CSUADBS,CSUACAT,CSUATYP,CSUASPA                    
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCSUA1   RESET     KEY10                                                       
          WRITE     CSMUIAA1,KEY10;CSUADBS,CSUACAT,CSUATYP,CSUASPA              
          RETURN
.
DECSUA1   RESET     KEY10                                                       
          DELETE    CSMUIAA1,KEY10                                              
          RETURN
.
RLCSUA1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     CSMUIAA1,KEY10;CSUADBS,CSUACAT,CSUATYP,CSUASPA              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCSUA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CSMUIAA1;CSUADBS,CSUACAT,CSUATYP,CSUASPA                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCSUA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CSMUIAA1;CSUADBS,CSUACAT,CSUATYP,CSUASPA                    
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCSUA1   RESET     KEY10                                                       
          UNLOCK    CSMUIAA1                                                    
          RETURN
.
