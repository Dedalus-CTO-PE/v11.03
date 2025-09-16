.
. SINCIFIO    
. --------
. Filename     : sincifaf.dat
.
RSSIIF1   RESET     KEY67                                                       
          READ      SINCIFA1,KEY67;;                                            
          RETURN
.
RASIIF1   RESET     KEY67                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIFA1,KEY67;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIF1   RESET     KEY67                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIFA1,KEY67;SIIFCAT,SIIFALI,SIIFTYP,SIIFATY,SIIFSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIF1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCIFA1;SIIFCAT,SIIFALI,SIIFTYP,SIIFATY,SIIFSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIF1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCIFA1;SIIFCAT,SIIFALI,SIIFTYP,SIIFATY,SIIFSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIF1                                                                         
          UPDATE    SINCIFA1;SIIFCAT,SIIFALI,SIIFTYP,SIIFATY,SIIFSPA            
          RETURN
.
WRSIIF1   RESET     KEY67                                                       
          WRITE     SINCIFA1,KEY67;SIIFCAT,SIIFALI,SIIFTYP,SIIFATY,SIIFSPA      
          RETURN
.
DESIIF1   RESET     KEY67                                                       
          DELETE    SINCIFA1,KEY67                                              
          RETURN
.
RSSIIF2   RESET     KEY67                                                       
          READ      SINCIFA2,KEY67;;                                            
          RETURN
.
RASIIF2   RESET     KEY67                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIFA2,KEY67;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIF2   RESET     KEY67                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIFA2,KEY67;SIIFCAT,SIIFALI,SIIFTYP,SIIFATY,SIIFSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIF2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCIFA2;SIIFCAT,SIIFALI,SIIFTYP,SIIFATY,SIIFSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIF2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCIFA2;SIIFCAT,SIIFALI,SIIFTYP,SIIFATY,SIIFSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIF2                                                                         
          UPDATE    SINCIFA2;SIIFCAT,SIIFALI,SIIFTYP,SIIFATY,SIIFSPA            
          RETURN
.
WRSIIF2   RESET     KEY67                                                       
          WRITE     SINCIFA2,KEY67;SIIFCAT,SIIFALI,SIIFTYP,SIIFATY,SIIFSPA      
          RETURN
.
DESIIF2   RESET     KEY67                                                       
          DELETE    SINCIFA2,KEY67                                              
          RETURN
.
