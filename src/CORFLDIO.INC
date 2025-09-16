.
. CORFLDIO    
. --------
. Filename     : corfldaf.dat
.
RSCOFL1   RESET     KEY5                                                        
          READ      CORFLDA1,KEY5;;                                             
          RETURN
.
RACOFL1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      CORFLDA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCOFL1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      CORFLDA1,KEY5;COFLFNUM,COFLFDSC,COFLGRP,COFLTAB,COFLFLD:    
                        COFLFSPA                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCOFL1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CORFLDA1;COFLFNUM,COFLFDSC,COFLGRP,COFLTAB,COFLFLD:         
                        COFLFSPA                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCOFL1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CORFLDA1;COFLFNUM,COFLFDSC,COFLGRP,COFLTAB,COFLFLD:         
                        COFLFSPA                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCOFL1                                                                         
          UPDATE    CORFLDA1;COFLFNUM,COFLFDSC,COFLGRP,COFLTAB,COFLFLD:         
                        COFLFSPA                                                
          RETURN
.
WRCOFL1   RESET     KEY5                                                        
          WRITE     CORFLDA1,KEY5;COFLFNUM,COFLFDSC,COFLGRP,COFLTAB,COFLFLD:    
                        COFLFSPA                                                
          RETURN
.
DECOFL1   RESET     KEY5                                                        
          DELETE    CORFLDA1,KEY5                                               
          RETURN
.
