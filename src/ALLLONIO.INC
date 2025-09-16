.
. ALLLONIO    
. --------
. Filename     : alllonaf.dat
.
RSALLON1  RESET     KEY16                                                       
          READ      ALLLONA1,KEY16;;                                            
          RETURN
.
RAALLON1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLONA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALLON1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLONA1,KEY16;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:
                                   ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:
                                   ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:
                                   ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:
                                   ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:
                                   ALLOSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALLON1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLLONA1;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALLON1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLLONA1;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALLON1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLLONA1;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALLON1  RESET     KEY16                                                       
          WRITE     ALLLONA1,KEY16;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:
                                   ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:
                                   ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:
                                   ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:
                                   ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:
                                   ALLOSPAR                                     
          RETURN
.
DEALLON1  RESET     KEY16                                                       
          DELETE    ALLLONA1,KEY16                                              
          RETURN
.
RLALLON1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     ALLLONA1,KEY16;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:
                                   ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:
                                   ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:
                                   ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:
                                   ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:
                                   ALLOSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALLON1  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLLONA1;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALLON1  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLLONA1;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALLON1  RESET     KEY16                                                       
          UNLOCK    ALLLONA1                                                    
          RETURN
.
RSALLON2  RESET     KEY24                                                       
          READ      ALLLONA2,KEY24;;                                            
          RETURN
.
RAALLON2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLONA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALLON2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLONA2,KEY24;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:
                                   ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:
                                   ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:
                                   ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:
                                   ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:
                                   ALLOSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALLON2  MOVE      ZERO,OVRCD                                                  
          READKS    ALLLONA2;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALLON2  MOVE      ZERO,OVRCD                                                  
          READKP    ALLLONA2;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALLON2  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLLONA2;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALLON2  RESET     KEY24                                                       
          WRITE     ALLLONA2,KEY24;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:
                                   ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:
                                   ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:
                                   ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:
                                   ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:
                                   ALLOSPAR                                     
          RETURN
.
DEALLON2  RESET     KEY24                                                       
          DELETE    ALLLONA2,KEY24                                              
          RETURN
.
RLALLON2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     ALLLONA2,KEY24;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:
                                   ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:
                                   ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:
                                   ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:
                                   ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:
                                   ALLOSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALLON2  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLLONA2;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALLON2  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLLONA2;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALLON2  RESET     KEY24                                                       
          UNLOCK    ALLLONA2                                                    
          RETURN
.
RSALLON3  RESET     KEY24                                                       
          READ      ALLLONA3,KEY24;;                                            
          RETURN
.
RAALLON3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLONA3,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALLON3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLONA3,KEY24;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:
                                   ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:
                                   ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:
                                   ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:
                                   ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:
                                   ALLOSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALLON3  MOVE      ZERO,OVRCD                                                  
          READKS    ALLLONA3;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALLON3  MOVE      ZERO,OVRCD                                                  
          READKP    ALLLONA3;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALLON3  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLLONA3;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALLON3  RESET     KEY24                                                       
          WRITE     ALLLONA3,KEY24;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:
                                   ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:
                                   ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:
                                   ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:
                                   ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:
                                   ALLOSPAR                                     
          RETURN
.
DEALLON3  RESET     KEY24                                                       
          DELETE    ALLLONA3,KEY24                                              
          RETURN
.
RLALLON3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     ALLLONA3,KEY24;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:
                                   ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:
                                   ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:
                                   ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:
                                   ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:
                                   ALLOSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALLON3  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLLONA3;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALLON3  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLLONA3;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALLON3  RESET     KEY24                                                       
          UNLOCK    ALLLONA3                                                    
          RETURN
.
RSALLON4  RESET     KEY27                                                       
          READ      ALLLONA4,KEY27;;                                            
          RETURN
.
RAALLON4  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLONA4,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALLON4  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLONA4,KEY27;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:
                                   ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:
                                   ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:
                                   ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:
                                   ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:
                                   ALLOSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALLON4  MOVE      ZERO,OVRCD                                                  
          READKS    ALLLONA4;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALLON4  MOVE      ZERO,OVRCD                                                  
          READKP    ALLLONA4;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALLON4  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLLONA4;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALLON4  RESET     KEY27                                                       
          WRITE     ALLLONA4,KEY27;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:
                                   ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:
                                   ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:
                                   ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:
                                   ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:
                                   ALLOSPAR                                     
          RETURN
.
DEALLON4  RESET     KEY27                                                       
          DELETE    ALLLONA4,KEY27                                              
          RETURN
.
RLALLON4  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     ALLLONA4,KEY27;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:
                                   ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:
                                   ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:
                                   ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:
                                   ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:
                                   ALLOSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALLON4  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLLONA4;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALLON4  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLLONA4;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALLON4  RESET     KEY27                                                       
          UNLOCK    ALLLONA4                                                    
          RETURN
.
RSALLON5  RESET     KEY25                                                       
          READ      ALLLONA5,KEY25;;                                            
          RETURN
.
RAALLON5  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLONA5,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALLON5  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      ALLLONA5,KEY25;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:
                                   ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:
                                   ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:
                                   ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:
                                   ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:
                                   ALLOSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALLON5  MOVE      ZERO,OVRCD                                                  
          READKS    ALLLONA5;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALLON5  MOVE      ZERO,OVRCD                                                  
          READKP    ALLLONA5;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALLON5  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLLONA5;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALLON5  RESET     KEY25                                                       
          WRITE     ALLLONA5,KEY25;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:
                                   ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:
                                   ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:
                                   ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:
                                   ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:
                                   ALLOSPAR                                     
          RETURN
.
DEALLON5  RESET     KEY25                                                       
          DELETE    ALLLONA5,KEY25                                              
          RETURN
.
RLALLON5  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     ALLLONA5,KEY25;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:
                                   ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:
                                   ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:
                                   ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:
                                   ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:
                                   ALLOSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALLON5  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLLONA5;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALLON5  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLLONA5;ALLOURNO,ALLOLOAN,ALLOLGRP,ALLOEQUI,ALLOLDAT:      
                             ALLOLTIM,ALLOTHER,ALLOTYPE,ALLOSTAT,ALLOEDAT:      
                             ALLOVDAT,ALLOQTYI,ALLOIUID,ALLORDAT,ALLORTIM:      
                             ALLORUID,ALLOCOND,ALLOCDAT,ALLOCTIM,ALLOCUID:      
                             ALLOUDAT,ALLOUTIM,ALLOUUID,ALLONDAT,ALLOREAS:      
                             ALLOSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALLON5  RESET     KEY25                                                       
          UNLOCK    ALLLONA5                                                    
          RETURN
.
