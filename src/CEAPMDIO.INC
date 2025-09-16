.
. CEAPMDIO    
. --------
. Filename     : ceapmdaf.dat
.
RSCEPM1   RESET     KEY5                                                        
          READ      CEAPMDA1,KEY5;;                                             
          RETURN
.
RACEPM1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      CEAPMDA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEPM1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      CEAPMDA1,KEY5;CEPMMOD,CEPMDRGC,CEPMPCAS,CEPMPDAY,CEPMSPA    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEPM1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEAPMDA1;CEPMMOD,CEPMDRGC,CEPMPCAS,CEPMPDAY,CEPMSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEPM1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEAPMDA1;CEPMMOD,CEPMDRGC,CEPMPCAS,CEPMPDAY,CEPMSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEPM1                                                                         
          UPDATE    CEAPMDA1;CEPMMOD,CEPMDRGC,CEPMPCAS,CEPMPDAY,CEPMSPA         
          RETURN
.
WRCEPM1   RESET     KEY5                                                        
          WRITE     CEAPMDA1,KEY5;CEPMMOD,CEPMDRGC,CEPMPCAS,CEPMPDAY,CEPMSPA    
          RETURN
.
DECEPM1   RESET     KEY5                                                        
          DELETE    CEAPMDA1,KEY5                                               
          RETURN
.
