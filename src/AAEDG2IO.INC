.
. AAEDG2IO    
. --------
. Filename     : aaedg2af.dat
.
RSAEDG21  RESET     KEY3                                                        
          READ      AAEDG2A1,KEY3;;                                             
          RETURN
.
RAAEDG21  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      AAEDG2A1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAEDG21  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      AAEDG2A1,KEY3;AED2BOX1,AED2DISE,AED2DESC,AED2BOX2           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAEDG21                                                                        
          MOVE      ZERO,OVRCD
          READKS    AAEDG2A1;AED2BOX1,AED2DISE,AED2DESC,AED2BOX2                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAEDG21                                                                        
          MOVE      ZERO,OVRCD
          READKP    AAEDG2A1;AED2BOX1,AED2DISE,AED2DESC,AED2BOX2                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAEDG21                                                                        
          UPDATE    AAEDG2A1;AED2BOX1,AED2DISE,AED2DESC,AED2BOX2                
          RETURN
.
WRAEDG21  RESET     KEY3                                                        
          WRITE     AAEDG2A1,KEY3;AED2BOX1,AED2DISE,AED2DESC,AED2BOX2           
          RETURN
.
DEAEDG21  RESET     KEY3                                                        
          DELETE    AAEDG2A1,KEY3                                               
          RETURN
.
