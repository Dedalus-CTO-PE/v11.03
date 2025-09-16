.
. CCSCEGIO    
. --------
. Filename     : ccscegaf.dat
.
RSCCEG1   RESET     KEY28                                                       
          READ      CCSCEGA1,KEY28;;                                            
          RETURN
.
RACCEG1   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCEGA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCEG1   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCEGA1,KEY28;CCEGLV1,CCEGHCD,CCEGDPT,CCEGPCD,CCEGQTY:     
                        CCEGFTC,CCEGTTC,CCEGSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCEG1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCEGA1;CCEGLV1,CCEGHCD,CCEGDPT,CCEGPCD,CCEGQTY:           
                        CCEGFTC,CCEGTTC,CCEGSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCEG1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCEGA1;CCEGLV1,CCEGHCD,CCEGDPT,CCEGPCD,CCEGQTY:           
                        CCEGFTC,CCEGTTC,CCEGSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCEG1                                                                         
          UPDATE    CCSCEGA1;CCEGLV1,CCEGHCD,CCEGDPT,CCEGPCD,CCEGQTY:           
                        CCEGFTC,CCEGTTC,CCEGSPA                                 
          RETURN
.
WRCCEG1   RESET     KEY28                                                       
          WRITE     CCSCEGA1,KEY28;CCEGLV1,CCEGHCD,CCEGDPT,CCEGPCD,CCEGQTY:     
                        CCEGFTC,CCEGTTC,CCEGSPA                                 
          RETURN
.
DECCEG1   RESET     KEY28                                                       
          DELETE    CCSCEGA1,KEY28                                              
          RETURN
.
RSCCEG2   RESET     KEY28                                                       
          READ      CCSCEGA2,KEY28;;                                            
          RETURN
.
RACCEG2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCEGA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCEG2   RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCEGA2,KEY28;CCEGLV1,CCEGHCD,CCEGDPT,CCEGPCD,CCEGQTY:     
                        CCEGFTC,CCEGTTC,CCEGSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCEG2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCEGA2;CCEGLV1,CCEGHCD,CCEGDPT,CCEGPCD,CCEGQTY:           
                        CCEGFTC,CCEGTTC,CCEGSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCEG2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCEGA2;CCEGLV1,CCEGHCD,CCEGDPT,CCEGPCD,CCEGQTY:           
                        CCEGFTC,CCEGTTC,CCEGSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCEG2                                                                         
          UPDATE    CCSCEGA2;CCEGLV1,CCEGHCD,CCEGDPT,CCEGPCD,CCEGQTY:           
                        CCEGFTC,CCEGTTC,CCEGSPA                                 
          RETURN
.
WRCCEG2   RESET     KEY28                                                       
          WRITE     CCSCEGA2,KEY28;CCEGLV1,CCEGHCD,CCEGDPT,CCEGPCD,CCEGQTY:     
                        CCEGFTC,CCEGTTC,CCEGSPA                                 
          RETURN
.
DECCEG2   RESET     KEY28                                                       
          DELETE    CCSCEGA2,KEY28                                              
          RETURN
.
