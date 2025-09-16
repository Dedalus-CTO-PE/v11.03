.
. APSISLIO    
. --------
. Filename     : apsislaf.dat
.
RSAPIS1   RESET     KEY1                                                        
          READ      APSISLA1,KEY1;;                                             
          RETURN
.
RAAPIS1   RESET     KEY1                                                        
          MOVE      ZERO,OVRCD
          READ      APSISLA1,KEY1;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPIS1   RESET     KEY1                                                        
          MOVE      ZERO,OVRCD
          READ      APSISLA1,KEY1;APISISC,APISDES,APISDIR,APISTYP,APISRES:      
                        APISSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPIS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSISLA1;APISISC,APISDES,APISDIR,APISTYP,APISRES:           
                        APISSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPIS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSISLA1;APISISC,APISDES,APISDIR,APISTYP,APISRES:           
                        APISSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPIS1                                                                         
          UPDATE    APSISLA1;APISISC,APISDES,APISDIR,APISTYP,APISRES:           
                        APISSPA                                                 
          RETURN
.
WRAPIS1   RESET     KEY1                                                        
          WRITE     APSISLA1,KEY1;APISISC,APISDES,APISDIR,APISTYP,APISRES:      
                        APISSPA                                                 
          RETURN
.
DEAPIS1   RESET     KEY1                                                        
          DELETE    APSISLA1,KEY1                                               
          RETURN
.
