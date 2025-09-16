.
. CCIXPAIO    
. --------
. Filename     : ccixpaaf.dat
.
RSCCXPA1  RESET     KEY13                                                     
          READ      CCIXPAA1,KEY13;;              
          RETURN
.
RACCXPA1  RESET     KEY13                                   
          MOVE      ZERO,OVRCD
          READ      CCIXPAA1,KEY13;ANS                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCXPA1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CCIXPAA1,KEY13;CCXAPRID,CCXASCID,CCXAUNIQ,CCXAAUTO,CCXAPCD1:
                    CCXAPCD2,CCXAPCD3,CCXAPCD4,CCXADCD1,CCXADCD2,CCXADCD3:
                    CCXAQTYV,CCXASPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCXPA1  MOVE      ZERO,OVRCD
          READKS    CCIXPAA1;CCXAPRID,CCXASCID,CCXAUNIQ,CCXAAUTO,CCXAPCD1:
                    CCXAPCD2,CCXAPCD3,CCXAPCD4,CCXADCD1,CCXADCD2,CCXADCD3:
                    CCXAQTYV,CCXASPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCXPA1  MOVE      ZERO,OVRCD
          READKP    CCIXPAA1;CCXAPRID,CCXASCID,CCXAUNIQ,CCXAAUTO,CCXAPCD1:
                    CCXAPCD2,CCXAPCD3,CCXAPCD4,CCXADCD1,CCXADCD2,CCXADCD3:
                    CCXAQTYV,CCXASPAR    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCXPA1  UPDATE    CCIXPAA1;CCXAPRID,CCXASCID,CCXAUNIQ,CCXAAUTO,CCXAPCD1:
                    CCXAPCD2,CCXAPCD3,CCXAPCD4,CCXADCD1,CCXADCD2,CCXADCD3:
                    CCXAQTYV,CCXASPAR   
          RETURN
.
WRCCXPA1  RESET     KEY13                                                       
          WRITE     CCIXPAA1,KEY13;CCXAPRID,CCXASCID,CCXAUNIQ,CCXAAUTO,CCXAPCD1:
                    CCXAPCD2,CCXAPCD3,CCXAPCD4,CCXADCD1,CCXADCD2,CCXADCD3:
                    CCXAQTYV,CCXASPAR    
          RETURN
.
DECCXPA1  RESET     KEY13                                                       
          DELETE    CCIXPAA1,KEY13                                              
          RETURN
.
