.
. PMSADCIO    
. --------
. Filename     : pmsadcaf.dat
.
RSPMADC1  RESET     KEY6                                                        
          READ      PMSADCA1,KEY6;;                                             
          RETURN
.
RAPMADC1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      PMSADCA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMADC1  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      PMSADCA1,KEY6;PMACCODE,PMACDESC,PMACACHS,PMACDECI,PMACINFC: 
                        PMACSHRD,PMACVLD1,PMACVLD2,PMACVLD3,PMACVLD4,PMACVLD5:  
                        PMACVLD6,PMACVLD7,PMACVLD8,PMACVLD9,PMACVL10,PMACVLNA:  
                        PMACINAC,PMACWEBC,PMACDATC,PMACTIMC,PMACWEBU,PMACDATU:  
                        PMACTIMU,PMACSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMADC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSADCA1;PMACCODE,PMACDESC,PMACACHS,PMACDECI,PMACINFC:      
                        PMACSHRD,PMACVLD1,PMACVLD2,PMACVLD3,PMACVLD4,PMACVLD5:  
                        PMACVLD6,PMACVLD7,PMACVLD8,PMACVLD9,PMACVL10,PMACVLNA:  
                        PMACINAC,PMACWEBC,PMACDATC,PMACTIMC,PMACWEBU,PMACDATU:  
                        PMACTIMU,PMACSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMADC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSADCA1;PMACCODE,PMACDESC,PMACACHS,PMACDECI,PMACINFC:      
                        PMACSHRD,PMACVLD1,PMACVLD2,PMACVLD3,PMACVLD4,PMACVLD5:  
                        PMACVLD6,PMACVLD7,PMACVLD8,PMACVLD9,PMACVL10,PMACVLNA:  
                        PMACINAC,PMACWEBC,PMACDATC,PMACTIMC,PMACWEBU,PMACDATU:  
                        PMACTIMU,PMACSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMADC1                                                                        
          UPDATE    PMSADCA1;PMACCODE,PMACDESC,PMACACHS,PMACDECI,PMACINFC:      
                        PMACSHRD,PMACVLD1,PMACVLD2,PMACVLD3,PMACVLD4,PMACVLD5:  
                        PMACVLD6,PMACVLD7,PMACVLD8,PMACVLD9,PMACVL10,PMACVLNA:  
                        PMACINAC,PMACWEBC,PMACDATC,PMACTIMC,PMACWEBU,PMACDATU:  
                        PMACTIMU,PMACSPAR                                       
          RETURN
.
WRPMADC1  RESET     KEY6                                                        
          WRITE     PMSADCA1,KEY6;PMACCODE,PMACDESC,PMACACHS,PMACDECI,PMACINFC: 
                        PMACSHRD,PMACVLD1,PMACVLD2,PMACVLD3,PMACVLD4,PMACVLD5:  
                        PMACVLD6,PMACVLD7,PMACVLD8,PMACVLD9,PMACVL10,PMACVLNA:  
                        PMACINAC,PMACWEBC,PMACDATC,PMACTIMC,PMACWEBU,PMACDATU:  
                        PMACTIMU,PMACSPAR                                       
          RETURN
.
DEPMADC1  RESET     KEY6                                                        
          DELETE    PMSADCA1,KEY6                                               
          RETURN
.
RSPMADC2  RESET     KEY36                                                       
          READ      PMSADCA2,KEY36;;                                            
          RETURN
.
RAPMADC2  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      PMSADCA2,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMADC2  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      PMSADCA2,KEY36;PMACCODE,PMACDESC,PMACACHS,PMACDECI,PMACINFC:
                        PMACSHRD,PMACVLD1,PMACVLD2,PMACVLD3,PMACVLD4,PMACVLD5:  
                        PMACVLD6,PMACVLD7,PMACVLD8,PMACVLD9,PMACVL10,PMACVLNA:  
                        PMACINAC,PMACWEBC,PMACDATC,PMACTIMC,PMACWEBU,PMACDATU:  
                        PMACTIMU,PMACSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMADC2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSADCA2;PMACCODE,PMACDESC,PMACACHS,PMACDECI,PMACINFC:      
                        PMACSHRD,PMACVLD1,PMACVLD2,PMACVLD3,PMACVLD4,PMACVLD5:  
                        PMACVLD6,PMACVLD7,PMACVLD8,PMACVLD9,PMACVL10,PMACVLNA:  
                        PMACINAC,PMACWEBC,PMACDATC,PMACTIMC,PMACWEBU,PMACDATU:  
                        PMACTIMU,PMACSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMADC2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSADCA2;PMACCODE,PMACDESC,PMACACHS,PMACDECI,PMACINFC:      
                        PMACSHRD,PMACVLD1,PMACVLD2,PMACVLD3,PMACVLD4,PMACVLD5:  
                        PMACVLD6,PMACVLD7,PMACVLD8,PMACVLD9,PMACVL10,PMACVLNA:  
                        PMACINAC,PMACWEBC,PMACDATC,PMACTIMC,PMACWEBU,PMACDATU:  
                        PMACTIMU,PMACSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMADC2                                                                        
          UPDATE    PMSADCA2;PMACCODE,PMACDESC,PMACACHS,PMACDECI,PMACINFC:      
                        PMACSHRD,PMACVLD1,PMACVLD2,PMACVLD3,PMACVLD4,PMACVLD5:  
                        PMACVLD6,PMACVLD7,PMACVLD8,PMACVLD9,PMACVL10,PMACVLNA:  
                        PMACINAC,PMACWEBC,PMACDATC,PMACTIMC,PMACWEBU,PMACDATU:  
                        PMACTIMU,PMACSPAR                                       
          RETURN
.
WRPMADC2  RESET     KEY36                                                       
          WRITE     PMSADCA2,KEY36;PMACCODE,PMACDESC,PMACACHS,PMACDECI,PMACINFC:
                        PMACSHRD,PMACVLD1,PMACVLD2,PMACVLD3,PMACVLD4,PMACVLD5:  
                        PMACVLD6,PMACVLD7,PMACVLD8,PMACVLD9,PMACVL10,PMACVLNA:  
                        PMACINAC,PMACWEBC,PMACDATC,PMACTIMC,PMACWEBU,PMACDATU:  
                        PMACTIMU,PMACSPAR                                       
          RETURN
.
DEPMADC2  RESET     KEY36                                                       
          DELETE    PMSADCA2,KEY36                                              
          RETURN
.
