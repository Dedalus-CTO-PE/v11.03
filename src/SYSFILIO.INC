.
. SYSFILIO    
. --------
. Filename     : sysfilaf.dat
.
RSSYFI1   RESET     KEY4                                                        
          READ      SYSFILA1,KEY4;;                                             
          RETURN
.
RASYFI1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      SYSFILA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSYFI1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      SYSFILA1,KEY4;SYFISYS,SYFIFIL,SYFIID3,SYFIDES,SYFIAUD:      
                        SYFITIO,SYFIID4,SYFIASEC,SYFIAPOS,SYFILOC,SYFIREL:      
                        SYFIVERS,SYFISPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSYFI1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SYSFILA1;SYFISYS,SYFIFIL,SYFIID3,SYFIDES,SYFIAUD:           
                        SYFITIO,SYFIID4,SYFIASEC,SYFIAPOS,SYFILOC,SYFIREL:      
                        SYFIVERS,SYFISPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSYFI1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SYSFILA1;SYFISYS,SYFIFIL,SYFIID3,SYFIDES,SYFIAUD:           
                        SYFITIO,SYFIID4,SYFIASEC,SYFIAPOS,SYFILOC,SYFIREL:      
                        SYFIVERS,SYFISPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSYFI1                                                                         
          UPDATE    SYSFILA1;SYFISYS,SYFIFIL,SYFIID3,SYFIDES,SYFIAUD:           
                        SYFITIO,SYFIID4,SYFIASEC,SYFIAPOS,SYFILOC,SYFIREL:      
                        SYFIVERS,SYFISPA                                        
          RETURN
.
WRSYFI1   RESET     KEY4                                                        
          WRITE     SYSFILA1,KEY4;SYFISYS,SYFIFIL,SYFIID3,SYFIDES,SYFIAUD:      
                        SYFITIO,SYFIID4,SYFIASEC,SYFIAPOS,SYFILOC,SYFIREL:      
                        SYFIVERS,SYFISPA                                        
          RETURN
.
DESYFI1   RESET     KEY4                                                        
          DELETE    SYSFILA1,KEY4                                               
          RETURN
.
RSSYFI2   RESET     KEY5                                                        
          READ      SYSFILA2,KEY5;;                                             
          RETURN
.
RASYFI2   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      SYSFILA2,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSYFI2   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      SYSFILA2,KEY5;SYFISYS,SYFIFIL,SYFIID3,SYFIDES,SYFIAUD:      
                        SYFITIO,SYFIID4,SYFIASEC,SYFIAPOS,SYFILOC,SYFIREL:      
                        SYFIVERS,SYFISPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSYFI2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SYSFILA2;SYFISYS,SYFIFIL,SYFIID3,SYFIDES,SYFIAUD:           
                        SYFITIO,SYFIID4,SYFIASEC,SYFIAPOS,SYFILOC,SYFIREL:      
                        SYFIVERS,SYFISPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSYFI2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SYSFILA2;SYFISYS,SYFIFIL,SYFIID3,SYFIDES,SYFIAUD:           
                        SYFITIO,SYFIID4,SYFIASEC,SYFIAPOS,SYFILOC,SYFIREL:      
                        SYFIVERS,SYFISPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSYFI2                                                                         
          UPDATE    SYSFILA2;SYFISYS,SYFIFIL,SYFIID3,SYFIDES,SYFIAUD:           
                        SYFITIO,SYFIID4,SYFIASEC,SYFIAPOS,SYFILOC,SYFIREL:      
                        SYFIVERS,SYFISPA                                        
          RETURN
.
WRSYFI2   RESET     KEY5                                                        
          WRITE     SYSFILA2,KEY5;SYFISYS,SYFIFIL,SYFIID3,SYFIDES,SYFIAUD:      
                        SYFITIO,SYFIID4,SYFIASEC,SYFIAPOS,SYFILOC,SYFIREL:      
                        SYFIVERS,SYFISPA                                        
          RETURN
.
DESYFI2   RESET     KEY5                                                        
          DELETE    SYSFILA2,KEY5                                               
          RETURN
.
