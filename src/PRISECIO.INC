.
. PRISECIO    
. --------
. Filename     : prisecaf.dat
.
RSPRSEC1  RESET     KEY16                                                       
          READ      PRISECA1,KEY16;;                                            
          RETURN
.
RAPRSEC1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PRISECA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRSEC1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PRISECA1,KEY16;PRSEPRAC,PRSEUSID,PRSESpar                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRSEC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRISECA1;PRSEPRAC,PRSEUSID,PRSESpar                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRSEC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRISECA1;PRSEPRAC,PRSEUSID,PRSESpar                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRSEC1                                                                        
          UPDATE    PRISECA1;PRSEPRAC,PRSEUSID,PRSESpar                         
          RETURN
.
WRPRSEC1  RESET     KEY16                                                       
          WRITE     PRISECA1,KEY16;PRSEPRAC,PRSEUSID,PRSESpar                   
          RETURN
.
DEPRSEC1  RESET     KEY16                                                       
          DELETE    PRISECA1,KEY16                                              
          RETURN
.
RSPRSEC2  RESET     KEY16                                                       
          READ      PRISECA2,KEY16;;                                            
          RETURN
.
RAPRSEC2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PRISECA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRSEC2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PRISECA2,KEY16;PRSEPRAC,PRSEUSID,PRSESpar                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRSEC2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRISECA2;PRSEPRAC,PRSEUSID,PRSESpar                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRSEC2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRISECA2;PRSEPRAC,PRSEUSID,PRSESpar                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRSEC2                                                                        
          UPDATE    PRISECA2;PRSEPRAC,PRSEUSID,PRSESpar                         
          RETURN
.
WRPRSEC2  RESET     KEY16                                                       
          WRITE     PRISECA2,KEY16;PRSEPRAC,PRSEUSID,PRSESpar                   
          RETURN
.
DEPRSEC2  RESET     KEY16                                                       
          DELETE    PRISECA2,KEY16                                              
          RETURN
.
