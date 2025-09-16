.
. CEAMDPIO    
. --------
. Filename     : ceamdpaf.dat
.
RSCEMD1   RESET     KEY13                                                       
          READ      CEAMDPA1,KEY13;;                                            
          RETURN
.
RACEMD1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CEAMDPA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEMD1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CEAMDPA1,KEY13;CEMDCOD,CEMDSPC,CEMDPSC,CEMDQTY,CEMDSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEMD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEAMDPA1;CEMDCOD,CEMDSPC,CEMDPSC,CEMDQTY,CEMDSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEMD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEAMDPA1;CEMDCOD,CEMDSPC,CEMDPSC,CEMDQTY,CEMDSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEMD1                                                                         
          UPDATE    CEAMDPA1;CEMDCOD,CEMDSPC,CEMDPSC,CEMDQTY,CEMDSPA            
          RETURN
.
WRCEMD1   RESET     KEY13                                                       
          WRITE     CEAMDPA1,KEY13;CEMDCOD,CEMDSPC,CEMDPSC,CEMDQTY,CEMDSPA      
          RETURN
.
DECEMD1   RESET     KEY13                                                       
          DELETE    CEAMDPA1,KEY13                                              
          RETURN
.
