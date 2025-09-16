.
. EMRDCMIO    
. --------
. Filename     : emrdcmaf.dat
.
RSEMDCM1  RESET     KEY8                                                        
          READ      EMRDCMA1,KEY8;;                                             
          RETURN
.
RAEMDCM1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      EMRDCMA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMDCM1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      EMRDCMA1,KEY8;EMDCADMI,EMDCTXT1,EMDCTXT2,EMDCTXT3,EMDCTXT4: 
                        EMDCTXT5,EMDCTXT6,EMDCTXT7,EMDCTXT8,EMDCTXT9,EMDCLUID:  
                        EMDCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMDCM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRDCMA1;EMDCADMI,EMDCTXT1,EMDCTXT2,EMDCTXT3,EMDCTXT4:      
                        EMDCTXT5,EMDCTXT6,EMDCTXT7,EMDCTXT8,EMDCTXT9,EMDCLUID:  
                        EMDCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMDCM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRDCMA1;EMDCADMI,EMDCTXT1,EMDCTXT2,EMDCTXT3,EMDCTXT4:      
                        EMDCTXT5,EMDCTXT6,EMDCTXT7,EMDCTXT8,EMDCTXT9,EMDCLUID:  
                        EMDCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMDCM1                                                                        
          UPDATE    EMRDCMA1;EMDCADMI,EMDCTXT1,EMDCTXT2,EMDCTXT3,EMDCTXT4:      
                        EMDCTXT5,EMDCTXT6,EMDCTXT7,EMDCTXT8,EMDCTXT9,EMDCLUID:  
                        EMDCSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMDCM1  RESET     KEY8                                                        
          WRITE     EMRDCMA1,KEY8;EMDCADMI,EMDCTXT1,EMDCTXT2,EMDCTXT3,EMDCTXT4: 
                        EMDCTXT5,EMDCTXT6,EMDCTXT7,EMDCTXT8,EMDCTXT9,EMDCLUID:  
                        EMDCSPAR                                                
          RETURN
.
DEEMDCM1  RESET     KEY8                                                        
          DELETE    EMRDCMA1,KEY8                                               
          RETURN
.
RLEMDCM1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     EMRDCMA1,KEY8;EMDCADMI,EMDCTXT1,EMDCTXT2,EMDCTXT3,EMDCTXT4: 
                        EMDCTXT5,EMDCTXT6,EMDCTXT7,EMDCTXT8,EMDCTXT9,EMDCLUID:  
                        EMDCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMDCM1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRDCMA1;EMDCADMI,EMDCTXT1,EMDCTXT2,EMDCTXT3,EMDCTXT4:      
                        EMDCTXT5,EMDCTXT6,EMDCTXT7,EMDCTXT8,EMDCTXT9,EMDCLUID:  
                        EMDCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMDCM1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRDCMA1;EMDCADMI,EMDCTXT1,EMDCTXT2,EMDCTXT3,EMDCTXT4:      
                        EMDCTXT5,EMDCTXT6,EMDCTXT7,EMDCTXT8,EMDCTXT9,EMDCLUID:  
                        EMDCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMDCM1  RESET     KEY8                                                        
          UNLOCK    EMRDCMA1                                                    
          RETURN
.
