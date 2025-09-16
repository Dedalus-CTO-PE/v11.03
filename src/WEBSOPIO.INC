.
. WEBSOPIO    
. --------
. Filename     : websopaf.dat
.
RSWBSO1   RESET     KEY10                                                       
          READ      WEBSOPA1,KEY10;;                                            
          RETURN
.
RAWBSO1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSOPA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSO1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSOPA1,KEY10;WBSOPRG,WBSOOPT,WBSODES,WBSOUR1,WBSOUR2:     
                        WBSOUD1,WBSOUD2,WBSOUY1,WBSOUY2,WBSOSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBSO1                                                                         
          MOVE      ZERO,OVRCD
          READKS    WEBSOPA1;WBSOPRG,WBSOOPT,WBSODES,WBSOUR1,WBSOUR2:           
                        WBSOUD1,WBSOUD2,WBSOUY1,WBSOUY2,WBSOSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBSO1                                                                         
          MOVE      ZERO,OVRCD
          READKP    WEBSOPA1;WBSOPRG,WBSOOPT,WBSODES,WBSOUR1,WBSOUR2:           
                        WBSOUD1,WBSOUD2,WBSOUY1,WBSOUY2,WBSOSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBSO1                                                                         
          UPDATE    WEBSOPA1;WBSOPRG,WBSOOPT,WBSODES,WBSOUR1,WBSOUR2:           
                        WBSOUD1,WBSOUD2,WBSOUY1,WBSOUY2,WBSOSPA                 
          RETURN
.
WRWBSO1   RESET     KEY10                                                       
          WRITE     WEBSOPA1,KEY10;WBSOPRG,WBSOOPT,WBSODES,WBSOUR1,WBSOUR2:     
                        WBSOUD1,WBSOUD2,WBSOUY1,WBSOUY2,WBSOSPA                 
          RETURN
.
DEWBSO1   RESET     KEY10                                                       
          DELETE    WEBSOPA1,KEY10                                              
          RETURN
.
