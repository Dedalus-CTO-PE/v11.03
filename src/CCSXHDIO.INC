.
. CCSXHDIO    
. --------
. Filename     : ccsxhdaf.dat
.
RSCCXH1   RESET     KEY13                                                       
          READ      CCSXHDA1,KEY13;;                                            
          RETURN
.
RACCXH1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CCSXHDA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCXH1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CCSXHDA1,KEY13;CCXHSTY,CCXHKEY,CCXHDES,CCXHSUM,CCXHSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCXH1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSXHDA1;CCXHSTY,CCXHKEY,CCXHDES,CCXHSUM,CCXHSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCXH1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSXHDA1;CCXHSTY,CCXHKEY,CCXHDES,CCXHSUM,CCXHSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCXH1                                                                         
          UPDATE    CCSXHDA1;CCXHSTY,CCXHKEY,CCXHDES,CCXHSUM,CCXHSPA            
          RETURN
.
WRCCXH1   RESET     KEY13                                                       
          WRITE     CCSXHDA1,KEY13;CCXHSTY,CCXHKEY,CCXHDES,CCXHSUM,CCXHSPA      
          RETURN
.
DECCXH1   RESET     KEY13                                                       
          DELETE    CCSXHDA1,KEY13                                              
          RETURN
.
RSCCXH2   RESET     KEY23                                                       
          READ      CCSXHDA2,KEY23;;                                            
          RETURN
.
RACCXH2   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      CCSXHDA2,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCXH2   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      CCSXHDA2,KEY23;CCXHSTY,CCXHKEY,CCXHDES,CCXHSUM,CCXHSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCXH2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSXHDA2;CCXHSTY,CCXHKEY,CCXHDES,CCXHSUM,CCXHSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCXH2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSXHDA2;CCXHSTY,CCXHKEY,CCXHDES,CCXHSUM,CCXHSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCXH2                                                                         
          UPDATE    CCSXHDA2;CCXHSTY,CCXHKEY,CCXHDES,CCXHSUM,CCXHSPA            
          RETURN
.
WRCCXH2   RESET     KEY23                                                       
          WRITE     CCSXHDA2,KEY23;CCXHSTY,CCXHKEY,CCXHDES,CCXHSUM,CCXHSPA      
          RETURN
.
DECCXH2   RESET     KEY23                                                       
          DELETE    CCSXHDA2,KEY23                                              
          RETURN
.
RSCCXH3   RESET     KEY48                                                       
          READ      CCSXHDA3,KEY48;;                                            
          RETURN
.
RACCXH3   RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READ      CCSXHDA3,KEY48;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCXH3   RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READ      CCSXHDA3,KEY48;CCXHSTY,CCXHKEY,CCXHDES,CCXHSUM,CCXHSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCXH3                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSXHDA3;CCXHSTY,CCXHKEY,CCXHDES,CCXHSUM,CCXHSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCXH3                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSXHDA3;CCXHSTY,CCXHKEY,CCXHDES,CCXHSUM,CCXHSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCXH3                                                                         
          UPDATE    CCSXHDA3;CCXHSTY,CCXHKEY,CCXHDES,CCXHSUM,CCXHSPA            
          RETURN
.
WRCCXH3   RESET     KEY48                                                       
          WRITE     CCSXHDA3,KEY48;CCXHSTY,CCXHKEY,CCXHDES,CCXHSUM,CCXHSPA      
          RETURN
.
DECCXH3   RESET     KEY48                                                       
          DELETE    CCSXHDA3,KEY48                                              
          RETURN
.
