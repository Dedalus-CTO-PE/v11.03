.
. OUTECAIO    
. --------
. Filename     : outecaaf.dat
.
RSOTECA1  RESET     KEY27                                                       
          READ      OUTECAA1,KEY27;;                                            
          RETURN
.
RAOTECA1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECAA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTECA1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECAA1,KEY27;OTEAINVN,OTEADATE,OTEATIME,OTEABATN,OTEASTAT:
                                   OTEATYPE,OTEAOPER,OTEATRID,OTEAEROR,OTEAEROT:
                                   OTEAMODL,OTEASPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTECA1  MOVE      ZERO,OVRCD                                                  
          READKS    OUTECAA1;OTEAINVN,OTEADATE,OTEATIME,OTEABATN,OTEASTAT:      
                             OTEATYPE,OTEAOPER,OTEATRID,OTEAEROR,OTEAEROT:      
                             OTEAMODL,OTEASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTECA1  MOVE      ZERO,OVRCD                                                  
          READKP    OUTECAA1;OTEAINVN,OTEADATE,OTEATIME,OTEABATN,OTEASTAT:      
                             OTEATYPE,OTEAOPER,OTEATRID,OTEAEROR,OTEAEROT:      
                             OTEAMODL,OTEASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTECA1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTECAA1;OTEAINVN,OTEADATE,OTEATIME,OTEABATN,OTEASTAT:      
                             OTEATYPE,OTEAOPER,OTEATRID,OTEAEROR,OTEAEROT:      
                             OTEAMODL,OTEASPAR                                  
          RETURN
.
WROTECA1  RESET     KEY27                                                       
          WRITE     OUTECAA1,KEY27;OTEAINVN,OTEADATE,OTEATIME,OTEABATN,OTEASTAT:
                                   OTEATYPE,OTEAOPER,OTEATRID,OTEAEROR,OTEAEROT:
                                   OTEAMODL,OTEASPAR                            
          RETURN
.
DEOTECA1  RESET     KEY27                                                       
          DELETE    OUTECAA1,KEY27                                              
          RETURN
.
RSOTECA2  RESET     KEY27                                                       
          READ      OUTECAA2,KEY27;;                                            
          RETURN
.
RAOTECA2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECAA2,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTECA2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECAA2,KEY27;OTEAINVN,OTEADATE,OTEATIME,OTEABATN,OTEASTAT:
                                   OTEATYPE,OTEAOPER,OTEATRID,OTEAEROR,OTEAEROT:
                                   OTEAMODL,OTEASPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTECA2  MOVE      ZERO,OVRCD                                                  
          READKS    OUTECAA2;OTEAINVN,OTEADATE,OTEATIME,OTEABATN,OTEASTAT:      
                             OTEATYPE,OTEAOPER,OTEATRID,OTEAEROR,OTEAEROT:      
                             OTEAMODL,OTEASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTECA2  MOVE      ZERO,OVRCD                                                  
          READKP    OUTECAA2;OTEAINVN,OTEADATE,OTEATIME,OTEABATN,OTEASTAT:      
                             OTEATYPE,OTEAOPER,OTEATRID,OTEAEROR,OTEAEROT:      
                             OTEAMODL,OTEASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTECA2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTECAA2;OTEAINVN,OTEADATE,OTEATIME,OTEABATN,OTEASTAT:      
                             OTEATYPE,OTEAOPER,OTEATRID,OTEAEROR,OTEAEROT:      
                             OTEAMODL,OTEASPAR                                  
          RETURN
.
WROTECA2  RESET     KEY27                                                       
          WRITE     OUTECAA2,KEY27;OTEAINVN,OTEADATE,OTEATIME,OTEABATN,OTEASTAT:
                                   OTEATYPE,OTEAOPER,OTEATRID,OTEAEROR,OTEAEROT:
                                   OTEAMODL,OTEASPAR                            
          RETURN
.
DEOTECA2  RESET     KEY27                                                       
          DELETE    OUTECAA2,KEY27                                              
          RETURN
.
RSOTECA3  RESET     KEY35                                                       
          READ      OUTECAA3,KEY35;;                                            
          RETURN
.
RAOTECA3  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECAA3,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTECA3  RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      OUTECAA3,KEY35;OTEAINVN,OTEADATE,OTEATIME,OTEABATN,OTEASTAT:
                                   OTEATYPE,OTEAOPER,OTEATRID,OTEAEROR,OTEAEROT:
                                   OTEAMODL,OTEASPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTECA3  MOVE      ZERO,OVRCD                                                  
          READKS    OUTECAA3;OTEAINVN,OTEADATE,OTEATIME,OTEABATN,OTEASTAT:      
                             OTEATYPE,OTEAOPER,OTEATRID,OTEAEROR,OTEAEROT:      
                             OTEAMODL,OTEASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTECA3  MOVE      ZERO,OVRCD                                                  
          READKP    OUTECAA3;OTEAINVN,OTEADATE,OTEATIME,OTEABATN,OTEASTAT:      
                             OTEATYPE,OTEAOPER,OTEATRID,OTEAEROR,OTEAEROT:      
                             OTEAMODL,OTEASPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTECA3  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTECAA3;OTEAINVN,OTEADATE,OTEATIME,OTEABATN,OTEASTAT:      
                             OTEATYPE,OTEAOPER,OTEATRID,OTEAEROR,OTEAEROT:      
                             OTEAMODL,OTEASPAR                                  
          RETURN
.
WROTECA3  RESET     KEY35                                                       
          WRITE     OUTECAA3,KEY35;OTEAINVN,OTEADATE,OTEATIME,OTEABATN,OTEASTAT:
                                   OTEATYPE,OTEAOPER,OTEATRID,OTEAEROR,OTEAEROT:
                                   OTEAMODL,OTEASPAR                            
          RETURN
.
DEOTECA3  RESET     KEY35                                                       
          DELETE    OUTECAA3,KEY35                                              
          RETURN
.
