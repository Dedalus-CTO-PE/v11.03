.
. MLTSECIO    
. --------
. Filename     : mltsecaf.dat
.
RSMLSEC1  RESET     KEY13                                                       
          READ      MLTSECA1,KEY13;;                                            
          RETURN
.
RAMLSEC1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      MLTSECA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMLSEC1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      MLTSECA1,KEY13;MLSCUSID,MLSCHOSP,MLSCSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMLSEC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MLTSECA1;MLSCUSID,MLSCHOSP,MLSCSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMLSEC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MLTSECA1;MLSCUSID,MLSCHOSP,MLSCSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMLSEC1                                                                        
          UPDATE    MLTSECA1;MLSCUSID,MLSCHOSP,MLSCSPAR                         
          RETURN
.
WRMLSEC1  RESET     KEY13                                                       
          WRITE     MLTSECA1,KEY13;MLSCUSID,MLSCHOSP,MLSCSPAR                   
          RETURN
.
DEMLSEC1  RESET     KEY13                                                       
          DELETE    MLTSECA1,KEY13                                              
          RETURN
.
RSMLSEC2  RESET     KEY13                                                       
          READ      MLTSECA2,KEY13;;                                            
          RETURN
.
RAMLSEC2  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      MLTSECA2,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMLSEC2  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      MLTSECA2,KEY13;MLSCUSID,MLSCHOSP,MLSCSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMLSEC2                                                                        
          MOVE      ZERO,OVRCD
          READKS    MLTSECA2;MLSCUSID,MLSCHOSP,MLSCSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMLSEC2                                                                        
          MOVE      ZERO,OVRCD
          READKP    MLTSECA2;MLSCUSID,MLSCHOSP,MLSCSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMLSEC2                                                                        
          UPDATE    MLTSECA2;MLSCUSID,MLSCHOSP,MLSCSPAR                         
          RETURN
.
WRMLSEC2  RESET     KEY13                                                       
          WRITE     MLTSECA2,KEY13;MLSCUSID,MLSCHOSP,MLSCSPAR                   
          RETURN
.
DEMLSEC2  RESET     KEY13                                                       
          DELETE    MLTSECA2,KEY13                                              
          RETURN
.
