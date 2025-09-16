.
. MLTSITIO    
. --------
. Filename     : mltsitaf.dat
.
RSMLSIT1  RESET     KEY16                                                       
          READ      MLTSITA1,KEY16;;                                            
          RETURN
.
RAMLSIT1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      MLTSITA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMLSIT1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      MLTSITA1,KEY16;MLSTUSID,MLSTSITE,MLSTSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMLSIT1  MOVE      ZERO,OVRCD                                                  
          READKS    MLTSITA1;MLSTUSID,MLSTSITE,MLSTSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMLSIT1  MOVE      ZERO,OVRCD                                                  
          READKP    MLTSITA1;MLSTUSID,MLSTSITE,MLSTSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMLSIT1  MOVE      ZERO,OVRCD                                                  
          UPDATE    MLTSITA1;MLSTUSID,MLSTSITE,MLSTSPAR                         
          RETURN
.
WRMLSIT1  RESET     KEY16                                                       
          WRITE     MLTSITA1,KEY16;MLSTUSID,MLSTSITE,MLSTSPAR                   
          RETURN
.
DEMLSIT1  RESET     KEY16                                                       
          DELETE    MLTSITA1,KEY16                                              
          RETURN
.
