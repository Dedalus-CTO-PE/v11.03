.
. MEHPCSIO    
. --------
. Filename     : mehpcsaf.dat
.
RSMHPCS1  RESET     KEY30                                                       
          READ      MEHPCSA1,KEY30;;                                            
          RETURN
.
RAMHPCS1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPCSA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHPCS1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      MEHPCSA1,KEY30;MHPCXDAT,MHPCXNUM,MHPCVISN,MHPCURNO,MHPCOCUR:
                        MHPCERID,MHPCUNIQ,MHPCCOLD,MHPCWELP,MHPCACCM,MHPCEMPS:  
                        MHPCEDUC,MHPCSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHPCS1  MOVE      ZERO,OVRCD                                                  
          READKS    MEHPCSA1;MHPCXDAT,MHPCXNUM,MHPCVISN,MHPCURNO,MHPCOCUR:      
                        MHPCERID,MHPCUNIQ,MHPCCOLD,MHPCWELP,MHPCACCM,MHPCEMPS:  
                        MHPCEDUC,MHPCSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHPCS1  MOVE      ZERO,OVRCD                                                  
          READKP    MEHPCSA1;MHPCXDAT,MHPCXNUM,MHPCVISN,MHPCURNO,MHPCOCUR:      
                        MHPCERID,MHPCUNIQ,MHPCCOLD,MHPCWELP,MHPCACCM,MHPCEMPS:  
                        MHPCEDUC,MHPCSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHPCS1  MOVE      ZERO,OVRCD                                                  
          UPDATE    MEHPCSA1;MHPCXDAT,MHPCXNUM,MHPCVISN,MHPCURNO,MHPCOCUR:      
                        MHPCERID,MHPCUNIQ,MHPCCOLD,MHPCWELP,MHPCACCM,MHPCEMPS:  
                        MHPCEDUC,MHPCSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMHPCS1  RESET     KEY30                                                       
          WRITE     MEHPCSA1,KEY30;MHPCXDAT,MHPCXNUM,MHPCVISN,MHPCURNO,MHPCOCUR:
                        MHPCERID,MHPCUNIQ,MHPCCOLD,MHPCWELP,MHPCACCM,MHPCEMPS:  
                        MHPCEDUC,MHPCSPAR                                       
          RETURN
.
DEMHPCS1  RESET     KEY30                                                       
          DELETE    MEHPCSA1,KEY30                                              
          RETURN
.
RLMHPCS1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READL     MEHPCSA1,KEY30;MHPCXDAT,MHPCXNUM,MHPCVISN,MHPCURNO,MHPCOCUR:
                        MHPCERID,MHPCUNIQ,MHPCCOLD,MHPCWELP,MHPCACCM,MHPCEMPS:  
                        MHPCEDUC,MHPCSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMHPCS1  MOVE      ZERO,OVRCD                                                  
          READLKS   MEHPCSA1;MHPCXDAT,MHPCXNUM,MHPCVISN,MHPCURNO,MHPCOCUR:      
                        MHPCERID,MHPCUNIQ,MHPCCOLD,MHPCWELP,MHPCACCM,MHPCEMPS:  
                        MHPCEDUC,MHPCSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMHPCS1  MOVE      ZERO,OVRCD                                                  
          READLKP   MEHPCSA1;MHPCXDAT,MHPCXNUM,MHPCVISN,MHPCURNO,MHPCOCUR:      
                        MHPCERID,MHPCUNIQ,MHPCCOLD,MHPCWELP,MHPCACCM,MHPCEMPS:  
                        MHPCEDUC,MHPCSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMHPCS1  RESET     KEY30                                                       
          UNLOCK    MEHPCSA1                                                    
          RETURN
.
