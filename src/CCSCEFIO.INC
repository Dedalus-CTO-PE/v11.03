.
. CCSCEFIO    
. --------
. Filename     : ccscefaf.dat
.
RSCCEF1   RESET     KEY20                                                       
          READ      CCSCEFA1,KEY20;;                                            
          RETURN
.
RACCEF1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCEFA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCEF1   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCEFA1,KEY20;CCEFLV1,CCEFHCD,CCEFDPT,CCEFQTY,CCEFFTC:     
                        CCEFTTC,CCEFSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCEF1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCEFA1;CCEFLV1,CCEFHCD,CCEFDPT,CCEFQTY,CCEFFTC:           
                        CCEFTTC,CCEFSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCEF1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCEFA1;CCEFLV1,CCEFHCD,CCEFDPT,CCEFQTY,CCEFFTC:           
                        CCEFTTC,CCEFSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCEF1                                                                         
          UPDATE    CCSCEFA1;CCEFLV1,CCEFHCD,CCEFDPT,CCEFQTY,CCEFFTC:           
                        CCEFTTC,CCEFSPA                                         
          RETURN
.
WRCCEF1   RESET     KEY20                                                       
          WRITE     CCSCEFA1,KEY20;CCEFLV1,CCEFHCD,CCEFDPT,CCEFQTY,CCEFFTC:     
                        CCEFTTC,CCEFSPA                                         
          RETURN
.
DECCEF1   RESET     KEY20                                                       
          DELETE    CCSCEFA1,KEY20                                              
          RETURN
.
RSCCEF2   RESET     KEY20                                                       
          READ      CCSCEFA2,KEY20;;                                            
          RETURN
.
RACCEF2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCEFA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCEF2   RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCEFA2,KEY20;CCEFLV1,CCEFHCD,CCEFDPT,CCEFQTY,CCEFFTC:     
                        CCEFTTC,CCEFSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCEF2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCEFA2;CCEFLV1,CCEFHCD,CCEFDPT,CCEFQTY,CCEFFTC:           
                        CCEFTTC,CCEFSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCEF2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCEFA2;CCEFLV1,CCEFHCD,CCEFDPT,CCEFQTY,CCEFFTC:           
                        CCEFTTC,CCEFSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCEF2                                                                         
          UPDATE    CCSCEFA2;CCEFLV1,CCEFHCD,CCEFDPT,CCEFQTY,CCEFFTC:           
                        CCEFTTC,CCEFSPA                                         
          RETURN
.
WRCCEF2   RESET     KEY20                                                       
          WRITE     CCSCEFA2,KEY20;CCEFLV1,CCEFHCD,CCEFDPT,CCEFQTY,CCEFFTC:     
                        CCEFTTC,CCEFSPA                                         
          RETURN
.
DECCEF2   RESET     KEY20                                                       
          DELETE    CCSCEFA2,KEY20                                              
          RETURN
.
