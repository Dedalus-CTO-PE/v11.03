.
. AAEDG3IO    
. --------
. Filename     : aaedg3af.dat
.
RSAEDG31  RESET     KEY3                                                        
          READ      AAEDG3A1,KEY3;;                                             
          RETURN
.
RAAEDG31  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      AAEDG3A1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAEDG31  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      AAEDG3A1,KEY3;AED3BOX2,AED3LOCT,AED3DESC,AED3BOX3           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAEDG31                                                                        
          MOVE      ZERO,OVRCD
          READKS    AAEDG3A1;AED3BOX2,AED3LOCT,AED3DESC,AED3BOX3                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAEDG31                                                                        
          MOVE      ZERO,OVRCD
          READKP    AAEDG3A1;AED3BOX2,AED3LOCT,AED3DESC,AED3BOX3                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAEDG31                                                                        
          UPDATE    AAEDG3A1;AED3BOX2,AED3LOCT,AED3DESC,AED3BOX3                
          RETURN
.
WRAEDG31  RESET     KEY3                                                        
          WRITE     AAEDG3A1,KEY3;AED3BOX2,AED3LOCT,AED3DESC,AED3BOX3           
          RETURN
.
DEAEDG31  RESET     KEY3                                                        
          DELETE    AAEDG3A1,KEY3                                               
          RETURN
.
