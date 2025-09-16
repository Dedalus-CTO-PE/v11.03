.
. AMSSTMIO    
. --------
. Filename     : amsstmaf.dat
.
RSAMSM1   RESET     KEY5                                                        
          READ      AMSSTMA1,KEY5;;                                             
          RETURN
.
RAAMSM1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      AMSSTMA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMSM1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      AMSSTMA1,KEY5;AMSMSTK,AMSMDAT,AMSMTIM,AMSMOPR,AMSMFBLD:     
                        AMSMTBLD,AMSMFLOC,AMSMTLOC,AMSMFTYP,AMSMTTYP,AMSMFDPT:  
                        AMSMTDPT,AMSMFSDT,AMSMTSDT,AMSMCOM,AMSMUR1,AMSMUR2:     
                        AMSMUD1,AMSMUD2,AMSMUY1,AMSMUY2,AMSMSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMSM1                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSSTMA1;AMSMSTK,AMSMDAT,AMSMTIM,AMSMOPR,AMSMFBLD:          
                        AMSMTBLD,AMSMFLOC,AMSMTLOC,AMSMFTYP,AMSMTTYP,AMSMFDPT:  
                        AMSMTDPT,AMSMFSDT,AMSMTSDT,AMSMCOM,AMSMUR1,AMSMUR2:     
                        AMSMUD1,AMSMUD2,AMSMUY1,AMSMUY2,AMSMSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMSM1                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSSTMA1;AMSMSTK,AMSMDAT,AMSMTIM,AMSMOPR,AMSMFBLD:          
                        AMSMTBLD,AMSMFLOC,AMSMTLOC,AMSMFTYP,AMSMTTYP,AMSMFDPT:  
                        AMSMTDPT,AMSMFSDT,AMSMTSDT,AMSMCOM,AMSMUR1,AMSMUR2:     
                        AMSMUD1,AMSMUD2,AMSMUY1,AMSMUY2,AMSMSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMSM1                                                                         
          UPDATE    AMSSTMA1;AMSMSTK,AMSMDAT,AMSMTIM,AMSMOPR,AMSMFBLD:          
                        AMSMTBLD,AMSMFLOC,AMSMTLOC,AMSMFTYP,AMSMTTYP,AMSMFDPT:  
                        AMSMTDPT,AMSMFSDT,AMSMTSDT,AMSMCOM,AMSMUR1,AMSMUR2:     
                        AMSMUD1,AMSMUD2,AMSMUY1,AMSMUY2,AMSMSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRAMSM1   RESET     KEY5                                                        
          WRITE     AMSSTMA1,KEY5;AMSMSTK,AMSMDAT,AMSMTIM,AMSMOPR,AMSMFBLD:     
                        AMSMTBLD,AMSMFLOC,AMSMTLOC,AMSMFTYP,AMSMTTYP,AMSMFDPT:  
                        AMSMTDPT,AMSMFSDT,AMSMTSDT,AMSMCOM,AMSMUR1,AMSMUR2:     
                        AMSMUD1,AMSMUD2,AMSMUY1,AMSMUY2,AMSMSPA                 
          RETURN
.
DEAMSM1   RESET     KEY5                                                        
          DELETE    AMSSTMA1,KEY5                                               
          RETURN
.
RLAMSM1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READL     AMSSTMA1,KEY5;AMSMSTK,AMSMDAT,AMSMTIM,AMSMOPR,AMSMFBLD:     
                        AMSMTBLD,AMSMFLOC,AMSMTLOC,AMSMFTYP,AMSMTTYP,AMSMFDPT:  
                        AMSMTDPT,AMSMFSDT,AMSMTSDT,AMSMCOM,AMSMUR1,AMSMUR2:     
                        AMSMUD1,AMSMUD2,AMSMUY1,AMSMUY2,AMSMSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLAMSM1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   AMSSTMA1;AMSMSTK,AMSMDAT,AMSMTIM,AMSMOPR,AMSMFBLD:          
                        AMSMTBLD,AMSMFLOC,AMSMTLOC,AMSMFTYP,AMSMTTYP,AMSMFDPT:  
                        AMSMTDPT,AMSMFSDT,AMSMTSDT,AMSMCOM,AMSMUR1,AMSMUR2:     
                        AMSMUD1,AMSMUD2,AMSMUY1,AMSMUY2,AMSMSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLAMSM1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   AMSSTMA1;AMSMSTK,AMSMDAT,AMSMTIM,AMSMOPR,AMSMFBLD:          
                        AMSMTBLD,AMSMFLOC,AMSMTLOC,AMSMFTYP,AMSMTTYP,AMSMFDPT:  
                        AMSMTDPT,AMSMFSDT,AMSMTSDT,AMSMCOM,AMSMUR1,AMSMUR2:     
                        AMSMUD1,AMSMUD2,AMSMUY1,AMSMUY2,AMSMSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUAMSM1   RESET     KEY5                                                        
          UNLOCK    AMSSTMA1                                                    
          RETURN
.
