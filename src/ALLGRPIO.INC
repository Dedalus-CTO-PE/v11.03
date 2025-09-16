.
. ALLGRPIO    
. --------
. Filename     : allgrpaf.dat
.
RSALGRP1  RESET     KEY16                                                       
          READ      ALLGRPA1,KEY16;;                                            
          RETURN
.
RAALGRP1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLGRPA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALGRP1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLGRPA1,KEY16;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALGRP1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLGRPA1;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:      
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALGRP1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLGRPA1;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:      
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALGRP1                                                                        
          UPDATE    ALLGRPA1;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:      
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALGRP1  RESET     KEY16                                                       
          WRITE     ALLGRPA1,KEY16;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          RETURN
.
DEALGRP1  RESET     KEY16                                                       
          DELETE    ALLGRPA1,KEY16                                              
          RETURN
.
RLALGRP1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     ALLGRPA1,KEY16;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALGRP1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLGRPA1;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:      
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALGRP1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLGRPA1;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:      
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALGRP1  RESET     KEY16                                                       
          UNLOCK    ALLGRPA1                                                    
          RETURN
.
RSALGRP2  RESET     KEY25                                                       
          READ      ALLGRPA2,KEY25;;                                            
          RETURN
.
RAALGRP2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      ALLGRPA2,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALGRP2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      ALLGRPA2,KEY25;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALGRP2                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLGRPA2;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:      
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALGRP2                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLGRPA2;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:      
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALGRP2                                                                        
          UPDATE    ALLGRPA2;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:      
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALGRP2  RESET     KEY25                                                       
          WRITE     ALLGRPA2,KEY25;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          RETURN
.
DEALGRP2  RESET     KEY25                                                       
          DELETE    ALLGRPA2,KEY25                                              
          RETURN
.
RLALGRP2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     ALLGRPA2,KEY25;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALGRP2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLGRPA2;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:      
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALGRP2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLGRPA2;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:      
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALGRP2  RESET     KEY25                                                       
          UNLOCK    ALLGRPA2                                                    
          RETURN
.
RSALGRP3  RESET     KEY24                                                       
          READ      ALLGRPA3,KEY24;;                                            
          RETURN
.
RAALGRP3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLGRPA3,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALGRP3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLGRPA3,KEY24;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALGRP3                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLGRPA3;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:      
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALGRP3                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLGRPA3;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:      
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALGRP3                                                                        
          UPDATE    ALLGRPA3;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:      
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALGRP3  RESET     KEY24                                                       
          WRITE     ALLGRPA3,KEY24;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          RETURN
.
DEALGRP3  RESET     KEY24                                                       
          DELETE    ALLGRPA3,KEY24                                              
          RETURN
.
RLALGRP3  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     ALLGRPA3,KEY24;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALGRP3                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLGRPA3;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:      
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALGRP3                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLGRPA3;ALGPSESN,ALGPURNO,ALGPREFN,ALGPACTV,ALGPCDAT:      
                        ALGPCTIM,ALGPCUID,ALGPUDAT,ALGPUTIM,ALGPUUID,ALGPSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALGRP3  RESET     KEY24                                                       
          UNLOCK    ALLGRPA3                                                    
          RETURN
.
