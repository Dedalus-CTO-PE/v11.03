.
. AMSREGIO    
. --------
. Filename     : amsregaf.dat
.
RSAMRE1   RESET     KEY2                                                        
          READ      AMSREGA1,KEY2;;                                             
          RETURN
.
RAAMRE1   RESET     KEY2                                                        
          MOVE      ZERO,OVRCD
          READ      AMSREGA1,KEY2;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMRE1   RESET     KEY2                                                        
          MOVE      ZERO,OVRCD
          READ      AMSREGA1,KEY2;AMREREG,AMREDES,AMREUR1,AMREUR2,AMREUD1:      
                        AMREUD2,AMREUY1,AMREUY2,AMRESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMRE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSREGA1;AMREREG,AMREDES,AMREUR1,AMREUR2,AMREUD1:           
                        AMREUD2,AMREUY1,AMREUY2,AMRESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMRE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSREGA1;AMREREG,AMREDES,AMREUR1,AMREUR2,AMREUD1:           
                        AMREUD2,AMREUY1,AMREUY2,AMRESPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMRE1                                                                         
          UPDATE    AMSREGA1;AMREREG,AMREDES,AMREUR1,AMREUR2,AMREUD1:           
                        AMREUD2,AMREUY1,AMREUY2,AMRESPA                         
          RETURN
.
WRAMRE1   RESET     KEY2                                                        
          WRITE     AMSREGA1,KEY2;AMREREG,AMREDES,AMREUR1,AMREUR2,AMREUD1:      
                        AMREUD2,AMREUY1,AMREUY2,AMRESPA                         
          RETURN
.
DEAMRE1   RESET     KEY2                                                        
          DELETE    AMSREGA1,KEY2                                               
          RETURN
.
