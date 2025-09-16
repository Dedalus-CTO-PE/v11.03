.
. WEBGRPIO    
. --------
. Filename     : webgrpaf.dat
.
RSWBGRP1  RESET     KEY10                                                       
          READ      WEBGRPA1,KEY10;;                                            
          RETURN
.
RAWBGRP1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      WEBGRPA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBGRP1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      WEBGRPA1,KEY10;WBGRGRPC,WBGRDESC,WBGRSURL,WBGRACTV,WBGRCDAT:
                        WBGRCTIM,WBGRCUID,WBGRUDAT,WBGRUTIM,WBGRUUID,WBGRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBGRP1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WEBGRPA1;WBGRGRPC,WBGRDESC,WBGRSURL,WBGRACTV,WBGRCDAT:      
                        WBGRCTIM,WBGRCUID,WBGRUDAT,WBGRUTIM,WBGRUUID,WBGRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBGRP1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WEBGRPA1;WBGRGRPC,WBGRDESC,WBGRSURL,WBGRACTV,WBGRCDAT:      
                        WBGRCTIM,WBGRCUID,WBGRUDAT,WBGRUTIM,WBGRUUID,WBGRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBGRP1                                                                        
          UPDATE    WEBGRPA1;WBGRGRPC,WBGRDESC,WBGRSURL,WBGRACTV,WBGRCDAT:      
                        WBGRCTIM,WBGRCUID,WBGRUDAT,WBGRUTIM,WBGRUUID,WBGRSPAR   
          RETURN
.
WRWBGRP1  RESET     KEY10                                                       
          WRITE     WEBGRPA1,KEY10;WBGRGRPC,WBGRDESC,WBGRSURL,WBGRACTV,WBGRCDAT:
                        WBGRCTIM,WBGRCUID,WBGRUDAT,WBGRUTIM,WBGRUUID,WBGRSPAR   
          RETURN
.
DEWBGRP1  RESET     KEY10                                                       
          DELETE    WEBGRPA1,KEY10                                              
          RETURN
.
RSWBGRP2  RESET     KEY60                                                       
          READ      WEBGRPA2,KEY60;;                                            
          RETURN
.
RAWBGRP2  RESET     KEY60                                                       
          MOVE      ZERO,OVRCD
          READ      WEBGRPA2,KEY60;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBGRP2  RESET     KEY60                                                       
          MOVE      ZERO,OVRCD
          READ      WEBGRPA2,KEY60;WBGRGRPC,WBGRDESC,WBGRSURL,WBGRACTV,WBGRCDAT:
                        WBGRCTIM,WBGRCUID,WBGRUDAT,WBGRUTIM,WBGRUUID,WBGRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBGRP2                                                                        
          MOVE      ZERO,OVRCD
          READKS    WEBGRPA2;WBGRGRPC,WBGRDESC,WBGRSURL,WBGRACTV,WBGRCDAT:      
                        WBGRCTIM,WBGRCUID,WBGRUDAT,WBGRUTIM,WBGRUUID,WBGRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBGRP2                                                                        
          MOVE      ZERO,OVRCD
          READKP    WEBGRPA2;WBGRGRPC,WBGRDESC,WBGRSURL,WBGRACTV,WBGRCDAT:      
                        WBGRCTIM,WBGRCUID,WBGRUDAT,WBGRUTIM,WBGRUUID,WBGRSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBGRP2                                                                        
          UPDATE    WEBGRPA2;WBGRGRPC,WBGRDESC,WBGRSURL,WBGRACTV,WBGRCDAT:      
                        WBGRCTIM,WBGRCUID,WBGRUDAT,WBGRUTIM,WBGRUUID,WBGRSPAR   
          RETURN
.
WRWBGRP2  RESET     KEY60                                                       
          WRITE     WEBGRPA2,KEY60;WBGRGRPC,WBGRDESC,WBGRSURL,WBGRACTV,WBGRCDAT:
                        WBGRCTIM,WBGRCUID,WBGRUDAT,WBGRUTIM,WBGRUUID,WBGRSPAR   
          RETURN
.
DEWBGRP2  RESET     KEY60                                                       
          DELETE    WEBGRPA2,KEY60                                              
          RETURN
.
