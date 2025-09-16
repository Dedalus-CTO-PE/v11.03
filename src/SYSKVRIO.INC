.
. SYSKVRIO    
. --------
. Filename     : syskvraf.dat
.
RSSYKV1   RESET     KEY5                                                        
          READ      SYSKVRA1,KEY5;;                                             
          RETURN
.
RASYKV1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      SYSKVRA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSYKV1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      SYSKVRA1,KEY5;SYKVSYS,SYKVFIL,SYKVRID,SYKVKFLD,SYKVKDES:    
                        SYKVKTYP,SYKVIDX,SYKVHID,SYKVSPAR                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSYKV1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SYSKVRA1;SYKVSYS,SYKVFIL,SYKVRID,SYKVKFLD,SYKVKDES:         
                        SYKVKTYP,SYKVIDX,SYKVHID,SYKVSPAR                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSYKV1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SYSKVRA1;SYKVSYS,SYKVFIL,SYKVRID,SYKVKFLD,SYKVKDES:         
                        SYKVKTYP,SYKVIDX,SYKVHID,SYKVSPAR                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSYKV1                                                                         
          UPDATE    SYSKVRA1;SYKVSYS,SYKVFIL,SYKVRID,SYKVKFLD,SYKVKDES:         
                        SYKVKTYP,SYKVIDX,SYKVHID,SYKVSPAR                       
          RETURN
.
WRSYKV1   RESET     KEY5                                                        
          WRITE     SYSKVRA1,KEY5;SYKVSYS,SYKVFIL,SYKVRID,SYKVKFLD,SYKVKDES:    
                        SYKVKTYP,SYKVIDX,SYKVHID,SYKVSPAR                       
          RETURN
.
DESYKV1   RESET     KEY5                                                        
          DELETE    SYSKVRA1,KEY5                                               
          RETURN
.
