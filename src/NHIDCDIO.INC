.
. NHIDCDIO    
. --------
. Filename     : nhidcdaf.dat
.
RSNHDCD1  RESET     KEY1                                                        
          READ      NHIDCDA1,KEY1;;                                             
          RETURN
.
RANHDCD1  RESET     KEY1                                                        
          MOVE      ZERO,OVRCD
          READ      NHIDCDA1,KEY1;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNHDCD1  RESET     KEY1                                                        
          MOVE      ZERO,OVRCD
          READ      NHIDCDA1,KEY1;NHDCDCD,NHDCDES,NHDCIBA,NHDCSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNHDCD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    NHIDCDA1;NHDCDCD,NHDCDES,NHDCIBA,NHDCSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNHDCD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    NHIDCDA1;NHDCDCD,NHDCDES,NHDCIBA,NHDCSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNHDCD1                                                                        
          UPDATE    NHIDCDA1;NHDCDCD,NHDCDES,NHDCIBA,NHDCSPA                    
          RETURN
.
WRNHDCD1  RESET     KEY1                                                        
          WRITE     NHIDCDA1,KEY1;NHDCDCD,NHDCDES,NHDCIBA,NHDCSPA               
          RETURN
.
DENHDCD1  RESET     KEY1                                                        
          DELETE    NHIDCDA1,KEY1                                               
          RETURN
.
