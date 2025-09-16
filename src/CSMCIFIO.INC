.
. CSMCIFIO    
. --------
. Filename     : csmcifaf.dat
.
RSCSIF1   RESET     KEY7                                                        
          READ      CSMCIFA1,KEY7;;                                             
          RETURN
.
RACSIF1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      CSMCIFA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCSIF1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      CSMCIFA1,KEY7;CSIFCAT,CSIFDE01,CSIFDE02,CSIFDE03,CSIFDE04:  
                        CSIFDE05,CSIFDE06,CSIFDE07,CSIFDE08,CSIFSPA             
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCSIF1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CSMCIFA1;CSIFCAT,CSIFDE01,CSIFDE02,CSIFDE03,CSIFDE04:       
                        CSIFDE05,CSIFDE06,CSIFDE07,CSIFDE08,CSIFSPA             
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCSIF1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CSMCIFA1;CSIFCAT,CSIFDE01,CSIFDE02,CSIFDE03,CSIFDE04:       
                        CSIFDE05,CSIFDE06,CSIFDE07,CSIFDE08,CSIFSPA             
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCSIF1                                                                         
          UPDATE    CSMCIFA1;CSIFCAT,CSIFDE01,CSIFDE02,CSIFDE03,CSIFDE04:       
                        CSIFDE05,CSIFDE06,CSIFDE07,CSIFDE08,CSIFSPA             
          RETURN
.
WRCSIF1   RESET     KEY7                                                        
          WRITE     CSMCIFA1,KEY7;CSIFCAT,CSIFDE01,CSIFDE02,CSIFDE03,CSIFDE04:  
                        CSIFDE05,CSIFDE06,CSIFDE07,CSIFDE08,CSIFSPA             
          RETURN
.
DECSIF1   RESET     KEY7                                                        
          DELETE    CSMCIFA1,KEY7                                               
          RETURN
.
