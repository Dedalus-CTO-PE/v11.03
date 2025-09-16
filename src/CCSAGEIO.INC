.
. CCSAGEIO    
. --------
. Filename     : ccsageaf.dat
.
RSCCAG1   RESET     KEY4                                                        
          READ      CCSAGEA1,KEY4;;                                             
          RETURN
.
RACCAG1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSAGEA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCAG1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CCSAGEA1,KEY4;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCAG1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSAGEA1;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGSPA           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCAG1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSAGEA1;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGSPA           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCAG1                                                                         
          UPDATE    CCSAGEA1;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGSPA           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCCAG1   RESET     KEY4                                                        
          WRITE     CCSAGEA1,KEY4;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGSPA      
          RETURN
.
DECCAG1   RESET     KEY4                                                        
          DELETE    CCSAGEA1,KEY4                                               
          RETURN
.
RLCCAG1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READL     CCSAGEA1,KEY4;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGSPA      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCCAG1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CCSAGEA1;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGSPA           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCCAG1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CCSAGEA1;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGSPA           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCCAG1   RESET     KEY4                                                        
          UNLOCK    CCSAGEA1                                                    
          RETURN
.
RSCCAG2   RESET     KEY7                                                        
          READ      CCSAGEA2,KEY7;;                                             
          RETURN
.
RACCAG2   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      CCSAGEA2,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCAG2   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      CCSAGEA2,KEY7;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCAG2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSAGEA2;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGSPA           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCAG2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSAGEA2;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGSPA           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCAG2                                                                         
          UPDATE    CCSAGEA2;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGSPA           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCCAG2   RESET     KEY7                                                        
          WRITE     CCSAGEA2,KEY7;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGSPA      
          RETURN
.
DECCAG2   RESET     KEY7                                                        
          DELETE    CCSAGEA2,KEY7                                               
          RETURN
.
RLCCAG2   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READL     CCSAGEA2,KEY7;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGSPA      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCCAG2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CCSAGEA2;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGSPA           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCCAG2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CCSAGEA2;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGSPA           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCCAG2   RESET     KEY7                                                        
          UNLOCK    CCSAGEA2                                                    
          RETURN
.
