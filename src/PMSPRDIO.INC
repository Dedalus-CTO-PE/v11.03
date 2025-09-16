.
. PMSPRDIO    
. --------
. Filename     : pmsprdaf.dat
.
RSPMPRD1  RESET     KEY3                                                        
          READ      PMSPRDA1,KEY3;;                                             
          RETURN
.
RAPMPRD1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      PMSPRDA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPRD1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      PMSPRDA1,KEY3;PMPRHOSP,PMPRSDAT,PMPREDAT,PMPRERRF,PMPRLDAT: 
                        PMPRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPRD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSPRDA1;PMPRHOSP,PMPRSDAT,PMPREDAT,PMPRERRF,PMPRLDAT:      
                        PMPRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPRD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSPRDA1;PMPRHOSP,PMPRSDAT,PMPREDAT,PMPRERRF,PMPRLDAT:      
                        PMPRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPRD1                                                                        
          UPDATE    PMSPRDA1;PMPRHOSP,PMPRSDAT,PMPREDAT,PMPRERRF,PMPRLDAT:      
                        PMPRSPAR                                                
          RETURN
.
WRPMPRD1  RESET     KEY3                                                        
          WRITE     PMSPRDA1,KEY3;PMPRHOSP,PMPRSDAT,PMPREDAT,PMPRERRF,PMPRLDAT: 
                        PMPRSPAR                                                
          RETURN
.
DEPMPRD1  RESET     KEY3                                                        
          DELETE    PMSPRDA1,KEY3                                               
          RETURN
.
