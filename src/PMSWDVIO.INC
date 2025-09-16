.
. PMSWDVIO    
. --------
. Filename     : pmswdvaf.dat
.
RSPMWD1   RESET     KEY8                                                        
          READ      PMSWDVA1,KEY8;;                                             
          RETURN
.
RAPMWD1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSWDVA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMWD1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSWDVA1,KEY8;PMWDDATE,PMWDVALU,PMWDCDTE,PMWDCTIM,PMWDCUSR: 
                        PMWDUDTE,PMWDUTIM,PMWDUUSR,PMWDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMWD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PMSWDVA1;PMWDDATE,PMWDVALU,PMWDCDTE,PMWDCTIM,PMWDCUSR:      
                        PMWDUDTE,PMWDUTIM,PMWDUUSR,PMWDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMWD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PMSWDVA1;PMWDDATE,PMWDVALU,PMWDCDTE,PMWDCTIM,PMWDCUSR:      
                        PMWDUDTE,PMWDUTIM,PMWDUUSR,PMWDSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMWD1                                                                         
          UPDATE    PMSWDVA1;PMWDDATE,PMWDVALU,PMWDCDTE,PMWDCTIM,PMWDCUSR:      
                        PMWDUDTE,PMWDUTIM,PMWDUUSR,PMWDSPAR                     
          RETURN
.
WRPMWD1   RESET     KEY8                                                        
          WRITE     PMSWDVA1,KEY8;PMWDDATE,PMWDVALU,PMWDCDTE,PMWDCTIM,PMWDCUSR: 
                        PMWDUDTE,PMWDUTIM,PMWDUUSR,PMWDSPAR                     
          RETURN
.
DEPMWD1   RESET     KEY8                                                        
          DELETE    PMSWDVA1,KEY8                                               
          RETURN
.
