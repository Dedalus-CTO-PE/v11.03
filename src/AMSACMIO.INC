.
. AMSACMIO    
. --------
. Filename     : amsacmaf.dat
.
RSAMAC1   RESET     KEY17                                                       
          READ      AMSACMA1,KEY17;;                                            
          RETURN
.
RAAMAC1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      AMSACMA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMAC1   RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      AMSACMA1,KEY17;AMACREG,AMACASS,AMACLIN,AMACCOM,AMACSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMAC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSACMA1;AMACREG,AMACASS,AMACLIN,AMACCOM,AMACSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMAC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSACMA1;AMACREG,AMACASS,AMACLIN,AMACCOM,AMACSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMAC1                                                                         
          UPDATE    AMSACMA1;AMACREG,AMACASS,AMACLIN,AMACCOM,AMACSPA            
          RETURN
.
WRAMAC1   RESET     KEY17                                                       
          WRITE     AMSACMA1,KEY17;AMACREG,AMACASS,AMACLIN,AMACCOM,AMACSPA      
          RETURN
.
DEAMAC1   RESET     KEY17                                                       
          DELETE    AMSACMA1,KEY17                                              
          RETURN
.
