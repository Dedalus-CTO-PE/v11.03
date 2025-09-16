.
. FMSCSAIO    
. --------
. Filename     : fmscsaaf.dat
.
RSFMCS1   RESET     KEY14                                                       
          READ      FMSCSAA1,KEY14;;                                            
          RETURN
.
RAFMCS1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      FMSCSAA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMCS1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      FMSCSAA1,KEY14;FMCSLED,FMCSACC,FMCSBNK,FMCSCRD,FMCSDIS:     
                        FMCSDEB,FMCSPAY,FMCSCGST,FMCSAGST,FMCSBNK2,FMCSSPA     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMCS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSCSAA1;FMCSLED,FMCSACC,FMCSBNK,FMCSCRD,FMCSDIS:           
                        FMCSDEB,FMCSPAY,FMCSCGST,FMCSAGST,FMCSBNK2,FMCSSPA     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMCS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSCSAA1;FMCSLED,FMCSACC,FMCSBNK,FMCSCRD,FMCSDIS:           
                        FMCSDEB,FMCSPAY,FMCSCGST,FMCSAGST,FMCSBNK2,FMCSSPA     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMCS1                                                                         
          UPDATE    FMSCSAA1;FMCSLED,FMCSACC,FMCSBNK,FMCSCRD,FMCSDIS:           
                        FMCSDEB,FMCSPAY,FMCSCGST,FMCSAGST,FMCSBNK2,FMCSSPA     
          RETURN
.
WRFMCS1   RESET     KEY14                                                       
          WRITE     FMSCSAA1,KEY14;FMCSLED,FMCSACC,FMCSBNK,FMCSCRD,FMCSDIS:     
                        FMCSDEB,FMCSPAY,FMCSCGST,FMCSAGST,FMCSBNK2,FMCSSPA     
          RETURN
.
DEFMCS1   RESET     KEY14                                                       
          DELETE    FMSCSAA1,KEY14                                              
          RETURN
.
