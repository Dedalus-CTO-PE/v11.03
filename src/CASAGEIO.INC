.
. CASAGEIO    
. --------
. Filename     : casageaf.dat
.
RSCCAG1   RESET     KEY4                                                        
          READ      CASAGEA1,KEY4;;                                             
          RETURN
.
RACCAG1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CASAGEA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCAG1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CASAGEA1,KEY4;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGTMTH:    
                        CCAGTDAY,CCAGSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCAG1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CASAGEA1;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGTMTH:         
                        CCAGTDAY,CCAGSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCAG1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CASAGEA1;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGTMTH:         
                        CCAGTDAY,CCAGSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCAG1                                                                         
          UPDATE    CASAGEA1;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGTMTH:         
                        CCAGTDAY,CCAGSPA                                        
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCCAG1   RESET     KEY4                                                        
          WRITE     CASAGEA1,KEY4;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGTMTH:    
                        CCAGTDAY,CCAGSPA                                        
          RETURN
.
DECCAG1   RESET     KEY4                                                        
          DELETE    CASAGEA1,KEY4                                               
          RETURN
.
RLCCAG1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READL     CASAGEA1,KEY4;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGTMTH:    
                        CCAGTDAY,CCAGSPA                                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCCAG1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CASAGEA1;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGTMTH:         
                        CCAGTDAY,CCAGSPA                                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCCAG1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CASAGEA1;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGTMTH:         
                        CCAGTDAY,CCAGSPA                                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCCAG1   RESET     KEY4                                                        
          UNLOCK    CASAGEA1                                                    
          RETURN
.
RSCCAG2   RESET     KEY12                                                       
          READ      CASAGEA2,KEY12;;                                            
          RETURN
.
RACCAG2   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      CASAGEA2,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCAG2   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      CASAGEA2,KEY12;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGTMTH:   
                        CCAGTDAY,CCAGSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCAG2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CASAGEA2;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGTMTH:         
                        CCAGTDAY,CCAGSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCAG2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CASAGEA2;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGTMTH:         
                        CCAGTDAY,CCAGSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCAG2                                                                         
          UPDATE    CASAGEA2;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGTMTH:         
                        CCAGTDAY,CCAGSPA                                        
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRCCAG2   RESET     KEY12                                                       
          WRITE     CASAGEA2,KEY12;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGTMTH:   
                        CCAGTDAY,CCAGSPA                                        
          RETURN
.
DECCAG2   RESET     KEY12                                                       
          DELETE    CASAGEA2,KEY12                                              
          RETURN
.
RLCCAG2   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     CASAGEA2,KEY12;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGTMTH:   
                        CCAGTDAY,CCAGSPA                                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLCCAG2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   CASAGEA2;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGTMTH:         
                        CCAGTDAY,CCAGSPA                                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLCCAG2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   CASAGEA2;CCAGDEF,CCAGGRP,CCAGDES,CCAGTAGE,CCAGTMTH:         
                        CCAGTDAY,CCAGSPA                                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUCCAG2   RESET     KEY12                                                       
          UNLOCK    CASAGEA2                                                    
          RETURN
.
