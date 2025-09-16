.
. IHAPASIO    
. --------
. Filename     : ihapasaf.dat
.
.
OPPASS1   OPEN      IHAPASS1,"ihapassf"
          RETURN
.
CLPASS1   CLOSE     IHAPASS1
          RETURN
.
OPPASS2   OPEN      IHAPASS2,"ihapassf"
          RETURN
.
CLPASS2   CLOSE     IHAPASS2
          RETURN
.
OPPASS3   OPEN      IHAPASS3,"ihapassf"
          RETURN
.
CLPASS3   CLOSE     IHAPASS3
          RETURN
.
UUPASS1   RESET     KEY4
          UNLOCK    IHAPASS1
          RETURN
.
RDLPASS1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READL     IHAPASS1,KEY4;SECODE,SECNUMB,SECUSER,SECACCT,SECNUMB1:      
                        SECNUMB2,SECDIRCT,SECMENU,SECPRINT,SECDEPT,SECMNNUM:    
                        SECMAIL,SECUALEV,SECTRUID,SECSPARE
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
RDSPASS1  RESET     KEY4                                                        
          READ      IHAPASS1,KEY4;;                                             
          RETURN
.
RDAPASS1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      IHAPASS1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPASS1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      IHAPASS1,KEY4;SECODE,SECNUMB,SECUSER,SECACCT,SECNUMB1:      
                        SECNUMB2,SECDIRCT,SECMENU,SECPRINT,SECDEPT,SECMNNUM:    
                        SECMAIL,SECUALEV,SECTRUID,SECSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RDKPASS1  MOVE      ZERO,OVRCD
          READKS    IHAPASS1;SECODE,SECNUMB,SECUSER,SECACCT,SECNUMB1:           
                        SECNUMB2,SECDIRCT,SECMENU,SECPRINT,SECDEPT,SECMNNUM:    
                        SECMAIL,SECUALEV,SECTRUID,SECSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPPASS1  MOVE      ZERO,OVRCD
          READKP    IHAPASS1;SECODE,SECNUMB,SECUSER,SECACCT,SECNUMB1:           
                        SECNUMB2,SECDIRCT,SECMENU,SECPRINT,SECDEPT,SECMNNUM:    
                        SECMAIL,SECUALEV,SECTRUID,SECSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPASS1   UPDATE    IHAPASS1;SECODE,SECNUMB,SECUSER,SECACCT,SECNUMB1:           
                        SECNUMB2,SECDIRCT,SECMENU,SECPRINT,SECDEPT,SECMNNUM:    
                        SECMAIL,SECUALEV,SECTRUID,SECSPARE
          RETURN
.
WRPASS1   RESET     KEY4                                                        
          WRITE     IHAPASS1,KEY4;SECODE,SECNUMB,SECUSER,SECACCT,SECNUMB1:      
                        SECNUMB2,SECDIRCT,SECMENU,SECPRINT,SECDEPT,SECMNNUM:    
                        SECMAIL,SECUALEV,SECTRUID,SECSPARE
          RETURN
.
DEPASS1   RESET     KEY4                                                        
          DELETE    IHAPASS1,KEY4                                               
          RETURN
.
RDSPASS2  RESET     KEY39                                                       
          READ      IHAPASS2,KEY39;;                                            
          RETURN
.
RDAPASS2  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      IHAPASS2,KEY39;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPASS2   RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      IHAPASS2,KEY39;SECODE,SECNUMB,SECUSER,SECACCT,SECNUMB1:     
                        SECNUMB2,SECDIRCT,SECMENU,SECPRINT,SECDEPT,SECMNNUM:    
                        SECMAIL,SECUALEV,SECTRUID,SECSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RDKPASS2  MOVE      ZERO,OVRCD
          READKS    IHAPASS2;SECODE,SECNUMB,SECUSER,SECACCT,SECNUMB1:           
                        SECNUMB2,SECDIRCT,SECMENU,SECPRINT,SECDEPT,SECMNNUM:    
                        SECMAIL,SECUALEV,SECTRUID,SECSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPPASS2  MOVE      ZERO,OVRCD
          READKP    IHAPASS2;SECODE,SECNUMB,SECUSER,SECACCT,SECNUMB1:           
                        SECNUMB2,SECDIRCT,SECMENU,SECPRINT,SECDEPT,SECMNNUM:    
                        SECMAIL,SECUALEV,SECTRUID,SECSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPASS2   UPDATE    IHAPASS2;SECODE,SECNUMB,SECUSER,SECACCT,SECNUMB1:           
                        SECNUMB2,SECDIRCT,SECMENU,SECPRINT,SECDEPT,SECMNNUM:    
                        SECMAIL,SECUALEV,SECTRUID,SECSPARE
          RETURN
.
WRPASS2   RESET     KEY39                                                       
          WRITE     IHAPASS2,KEY39;SECODE,SECNUMB,SECUSER,SECACCT,SECNUMB1:     
                        SECNUMB2,SECDIRCT,SECMENU,SECPRINT,SECDEPT,SECMNNUM:    
                        SECMAIL,SECUALEV,SECTRUID,SECSPARE
          RETURN
.
DEPASS2   RESET     KEY39                                                       
          DELETE    IHAPASS2,KEY39                                              
          RETURN
.
.
RDSPASS3  RESET     KEY24                                                       
          READ      IHAPASS3,KEY24;;                                            
          RETURN
.
RDAPASS3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      IHAPASS3,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPASS3   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      IHAPASS3,KEY24;SECODE,SECNUMB,SECUSER,SECACCT,SECNUMB1:     
                        SECNUMB2,SECDIRCT,SECMENU,SECPRINT,SECDEPT,SECMNNUM:    
                        SECMAIL,SECUALEV,SECTRUID,SECSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RDKPASS3  MOVE      ZERO,OVRCD
          READKS    IHAPASS3;SECODE,SECNUMB,SECUSER,SECACCT,SECNUMB1:           
                        SECNUMB2,SECDIRCT,SECMENU,SECPRINT,SECDEPT,SECMNNUM:    
                        SECMAIL,SECUALEV,SECTRUID,SECSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPPASS3  MOVE      ZERO,OVRCD
          READKP    IHAPASS3;SECODE,SECNUMB,SECUSER,SECACCT,SECNUMB1:           
                        SECNUMB2,SECDIRCT,SECMENU,SECPRINT,SECDEPT,SECMNNUM:    
                        SECMAIL,SECUALEV,SECTRUID,SECSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPASS3   UPDATE    IHAPASS3;SECODE,SECNUMB,SECUSER,SECACCT,SECNUMB1:           
                        SECNUMB2,SECDIRCT,SECMENU,SECPRINT,SECDEPT,SECMNNUM:    
                        SECMAIL,SECUALEV,SECTRUID,SECSPARE
          RETURN
.
WRPASS3   RESET     KEY24                                                       
          WRITE     IHAPASS3,KEY24;SECODE,SECNUMB,SECUSER,SECACCT,SECNUMB1:     
                        SECNUMB2,SECDIRCT,SECMENU,SECPRINT,SECDEPT,SECMNNUM:    
                        SECMAIL,SECUALEV,SECTRUID,SECSPARE
          RETURN
.
DEPASS3   RESET     KEY24                                                       
          DELETE    IHAPASS3,KEY24                                              
          RETURN
.
