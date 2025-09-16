.
. EMRECAIO    
. --------
. Filename     : emrecaaf.dat
.
RSEMECA1  RESET     KEY27                                                       
          READ      EMRECAA1,KEY27;;                                            
          RETURN
.
RAEMECA1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECAA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMECA1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECAA1,KEY27;EMEAINVN,EMEADATE,EMEATIME,EMEABATN,EMEASTAT:
                                   EMEATYPE,EMEAOPER,EMEATRID,EMEAEROR,EMEAEROT:
                                   EMEAMODL,EMEASPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMECA1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRECAA1;EMEAINVN,EMEADATE,EMEATIME,EMEABATN,EMEASTAT:      
                             EMEATYPE,EMEAOPER,EMEATRID,EMEAEROR,EMEAEROT:      
                             EMEAMODL,EMEASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMECA1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRECAA1;EMEAINVN,EMEADATE,EMEATIME,EMEABATN,EMEASTAT:      
                             EMEATYPE,EMEAOPER,EMEATRID,EMEAEROR,EMEAEROT:      
                             EMEAMODL,EMEASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMECA1  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRECAA1;EMEAINVN,EMEADATE,EMEATIME,EMEABATN,EMEASTAT:      
                             EMEATYPE,EMEAOPER,EMEATRID,EMEAEROR,EMEAEROT:      
                             EMEAMODL,EMEASPAR                                  
          RETURN
.
WREMECA1  RESET     KEY27                                                       
          WRITE     EMRECAA1,KEY27;EMEAINVN,EMEADATE,EMEATIME,EMEABATN,EMEASTAT:
                                   EMEATYPE,EMEAOPER,EMEATRID,EMEAEROR,EMEAEROT:
                                   EMEAMODL,EMEASPAR                            
          RETURN
.
DEEMECA1  RESET     KEY27                                                       
          DELETE    EMRECAA1,KEY27                                              
          RETURN
.
RSEMECA2  RESET     KEY27                                                       
          READ      EMRECAA2,KEY27;;                                            
          RETURN
.
RAEMECA2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECAA2,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMECA2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECAA2,KEY27;EMEAINVN,EMEADATE,EMEATIME,EMEABATN,EMEASTAT:
                                   EMEATYPE,EMEAOPER,EMEATRID,EMEAEROR,EMEAEROT:
                                   EMEAMODL,EMEASPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMECA2  MOVE      ZERO,OVRCD                                                  
          READKS    EMRECAA2;EMEAINVN,EMEADATE,EMEATIME,EMEABATN,EMEASTAT:      
                             EMEATYPE,EMEAOPER,EMEATRID,EMEAEROR,EMEAEROT:      
                             EMEAMODL,EMEASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMECA2  MOVE      ZERO,OVRCD                                                  
          READKP    EMRECAA2;EMEAINVN,EMEADATE,EMEATIME,EMEABATN,EMEASTAT:      
                             EMEATYPE,EMEAOPER,EMEATRID,EMEAEROR,EMEAEROT:      
                             EMEAMODL,EMEASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMECA2  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRECAA2;EMEAINVN,EMEADATE,EMEATIME,EMEABATN,EMEASTAT:      
                             EMEATYPE,EMEAOPER,EMEATRID,EMEAEROR,EMEAEROT:      
                             EMEAMODL,EMEASPAR                                  
          RETURN
.
WREMECA2  RESET     KEY27                                                       
          WRITE     EMRECAA2,KEY27;EMEAINVN,EMEADATE,EMEATIME,EMEABATN,EMEASTAT:
                                   EMEATYPE,EMEAOPER,EMEATRID,EMEAEROR,EMEAEROT:
                                   EMEAMODL,EMEASPAR                            
          RETURN
.
DEEMECA2  RESET     KEY27                                                       
          DELETE    EMRECAA2,KEY27                                              
          RETURN
.
RSEMECA3  RESET     KEY35                                                       
          READ      EMRECAA3,KEY35;;                                            
          RETURN
.
RAEMECA3  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECAA3,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMECA3  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      EMRECAA3,KEY35;EMEAINVN,EMEADATE,EMEATIME,EMEABATN,EMEASTAT:
                                   EMEATYPE,EMEAOPER,EMEATRID,EMEAEROR,EMEAEROT:
                                   EMEAMODL,EMEASPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMECA3  MOVE      ZERO,OVRCD                                                  
          READKS    EMRECAA3;EMEAINVN,EMEADATE,EMEATIME,EMEABATN,EMEASTAT:      
                             EMEATYPE,EMEAOPER,EMEATRID,EMEAEROR,EMEAEROT:      
                             EMEAMODL,EMEASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMECA3  MOVE      ZERO,OVRCD                                                  
          READKP    EMRECAA3;EMEAINVN,EMEADATE,EMEATIME,EMEABATN,EMEASTAT:      
                             EMEATYPE,EMEAOPER,EMEATRID,EMEAEROR,EMEAEROT:      
                             EMEAMODL,EMEASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMECA3  MOVE      ZERO,OVRCD                                                  
          UPDATE    EMRECAA3;EMEAINVN,EMEADATE,EMEATIME,EMEABATN,EMEASTAT:      
                             EMEATYPE,EMEAOPER,EMEATRID,EMEAEROR,EMEAEROT:      
                             EMEAMODL,EMEASPAR                                  
          RETURN
.
WREMECA3  RESET     KEY35                                                       
          WRITE     EMRECAA3,KEY35;EMEAINVN,EMEADATE,EMEATIME,EMEABATN,EMEASTAT:
                                   EMEATYPE,EMEAOPER,EMEATRID,EMEAEROR,EMEAEROT:
                                   EMEAMODL,EMEASPAR                            
          RETURN
.
DEEMECA3  RESET     KEY35                                                       
          DELETE    EMRECAA3,KEY35                                              
          RETURN
.
