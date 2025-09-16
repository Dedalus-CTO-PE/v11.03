.
. CCSOAPIO    
. --------
. Filename     : ccsoapaf.dat
.
RSCCOA1   RESET     KEY12                                                       
          READ      CCSOAPA1,KEY12;;                                            
          RETURN
.
RACCOA1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      CCSOAPA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCOA1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      CCSOAPA1,KEY12;CCOACID,CCOADEP,CCOAVTY,CCOAPRI,CCOASPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCOA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSOAPA1;CCOACID,CCOADEP,CCOAVTY,CCOAPRI,CCOASPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCOA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSOAPA1;CCOACID,CCOADEP,CCOAVTY,CCOAPRI,CCOASPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCOA1                                                                         
          UPDATE    CCSOAPA1;CCOACID,CCOADEP,CCOAVTY,CCOAPRI,CCOASPA            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCCOA1   RESET     KEY12                                                       
          WRITE     CCSOAPA1,KEY12;CCOACID,CCOADEP,CCOAVTY,CCOAPRI,CCOASPA      
          RETURN
.
DECCOA1   RESET     KEY12                                                       
          DELETE    CCSOAPA1,KEY12                                              
          RETURN
.
RLCCOA1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     CCSOAPA1,KEY12;CCOACID,CCOADEP,CCOAVTY,CCOAPRI,CCOASPA      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCCOA1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CCSOAPA1;CCOACID,CCOADEP,CCOAVTY,CCOAPRI,CCOASPA            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCCOA1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CCSOAPA1;CCOACID,CCOADEP,CCOAVTY,CCOAPRI,CCOASPA            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCCOA1   RESET     KEY12                                                       
          UNLOCK    CCSOAPA1                                                    
          RETURN
.
