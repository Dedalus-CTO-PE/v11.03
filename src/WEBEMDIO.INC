.
. WEBEMDIO    
. --------
. Filename     : webemdaf.dat
.
RSWBEMD1  RESET     KEY25                                                       
          READ      WEBEMDA1,KEY25;;                                            
          RETURN
.
RAWBEMD1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEMDA1,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBEMD1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEMDA1,KEY25;WBEVARID,WBEVRPTC,WBEVMEVC,WBEVMEID,WBEVTRID:
                                   WBEVMSID,WBEVSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBEMD1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBEMDA1;WBEVARID,WBEVRPTC,WBEVMEVC,WBEVMEID,WBEVTRID:      
                             WBEVMSID,WBEVSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBEMD1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBEMDA1;WBEVARID,WBEVRPTC,WBEVMEVC,WBEVMEID,WBEVTRID:      
                             WBEVMSID,WBEVSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBEMD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBEMDA1;WBEVARID,WBEVRPTC,WBEVMEVC,WBEVMEID,WBEVTRID:      
                             WBEVMSID,WBEVSPAR                                  
          RETURN
.
WRWBEMD1  RESET     KEY25                                                       
          WRITE     WEBEMDA1,KEY25;WBEVARID,WBEVRPTC,WBEVMEVC,WBEVMEID,WBEVTRID:
                                   WBEVMSID,WBEVSPAR                            
          RETURN
.
DEWBEMD1  RESET     KEY25                                                       
          DELETE    WEBEMDA1,KEY25                                              
          RETURN
.
RSWBEMD2  RESET     KEY49                                                       
          READ      WEBEMDA2,KEY49;;                                            
          RETURN
.
RAWBEMD2  RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEMDA2,KEY49;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBEMD2  RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEMDA2,KEY49;WBEVARID,WBEVRPTC,WBEVMEVC,WBEVMEID,WBEVTRID:
                                   WBEVMSID,WBEVSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBEMD2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBEMDA2;WBEVARID,WBEVRPTC,WBEVMEVC,WBEVMEID,WBEVTRID:      
                             WBEVMSID,WBEVSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBEMD2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBEMDA2;WBEVARID,WBEVRPTC,WBEVMEVC,WBEVMEID,WBEVTRID:      
                             WBEVMSID,WBEVSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBEMD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBEMDA2;WBEVARID,WBEVRPTC,WBEVMEVC,WBEVMEID,WBEVTRID:      
                             WBEVMSID,WBEVSPAR                                  
          RETURN
.
WRWBEMD2  RESET     KEY49                                                       
          WRITE     WEBEMDA2,KEY49;WBEVARID,WBEVRPTC,WBEVMEVC,WBEVMEID,WBEVTRID:
                                   WBEVMSID,WBEVSPAR                            
          RETURN
.
DEWBEMD2  RESET     KEY49                                                       
          DELETE    WEBEMDA2,KEY49                                              
          RETURN
.
RSWBEMD3  RESET     KEY61                                                       
          READ      WEBEMDA3,KEY61;;                                            
          RETURN
.
RAWBEMD3  RESET     KEY61                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEMDA3,KEY61;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBEMD3  RESET     KEY61                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEMDA3,KEY61;WBEVARID,WBEVRPTC,WBEVMEVC,WBEVMEID,WBEVTRID:
                                   WBEVMSID,WBEVSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBEMD3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBEMDA3;WBEVARID,WBEVRPTC,WBEVMEVC,WBEVMEID,WBEVTRID:      
                             WBEVMSID,WBEVSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBEMD3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBEMDA3;WBEVARID,WBEVRPTC,WBEVMEVC,WBEVMEID,WBEVTRID:      
                             WBEVMSID,WBEVSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBEMD3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBEMDA3;WBEVARID,WBEVRPTC,WBEVMEVC,WBEVMEID,WBEVTRID:      
                             WBEVMSID,WBEVSPAR                                  
          RETURN
.
WRWBEMD3  RESET     KEY61                                                       
          WRITE     WEBEMDA3,KEY61;WBEVARID,WBEVRPTC,WBEVMEVC,WBEVMEID,WBEVTRID:
                                   WBEVMSID,WBEVSPAR                            
          RETURN
.
DEWBEMD3  RESET     KEY61                                                       
          DELETE    WEBEMDA3,KEY61                                              
          RETURN
.
