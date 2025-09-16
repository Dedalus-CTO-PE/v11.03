.
. PMSDVAIO    
. --------
. Filename     : pmsdvaaf.dat
.
RSPMDVA1  RESET     KEY5                                                        
          READ      PMSDVAA1,KEY5;;                                             
          RETURN
.
RAPMDVA1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      PMSDVAA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMDVA1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      PMSDVAA1,KEY5;PMDVACAT,PMDVACOD,PMDVSERV,PMDVSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMDVA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSDVAA1;PMDVACAT,PMDVACOD,PMDVSERV,PMDVSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMDVA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSDVAA1;PMDVACAT,PMDVACOD,PMDVSERV,PMDVSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMDVA1                                                                        
          UPDATE    PMSDVAA1;PMDVACAT,PMDVACOD,PMDVSERV,PMDVSPAR                
          RETURN
.
WRPMDVA1  RESET     KEY5                                                        
          WRITE     PMSDVAA1,KEY5;PMDVACAT,PMDVACOD,PMDVSERV,PMDVSPAR           
          RETURN
.
DEPMDVA1  RESET     KEY5                                                        
          DELETE    PMSDVAA1,KEY5                                               
          RETURN
.
