.
. EMRWFMIO    
. --------
. Filename     : emrwfmaf.dat
.
RSEMWFM1  RESET     KEY5                                                        
          READ      EMRWFMA1,KEY5;;                                             
          RETURN
.
RAEMWFM1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      EMRWFMA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMWFM1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      EMRWFMA1,KEY5;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:      
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMWFM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRWFMA1;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:           
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMWFM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRWFMA1;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:           
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMWFM1                                                                        
          UPDATE    EMRWFMA1;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:           
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMWFM1  RESET     KEY5                                                        
          WRITE     EMRWFMA1,KEY5;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:      
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          RETURN
.
DEEMWFM1  RESET     KEY5                                                        
          DELETE    EMRWFMA1,KEY5                                               
          RETURN
.
RLEMWFM1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READL     EMRWFMA1,KEY5;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:      
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMWFM1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRWFMA1;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:           
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMWFM1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRWFMA1;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:           
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMWFM1  RESET     KEY5                                                        
          UNLOCK    EMRWFMA1                                                    
          RETURN
.
RSEMWFM2  RESET     KEY6                                                        
          READ      EMRWFMA2,KEY6;;                                             
          RETURN
.
RAEMWFM2  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      EMRWFMA2,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMWFM2  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      EMRWFMA2,KEY6;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:      
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMWFM2                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRWFMA2;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:           
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMWFM2                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRWFMA2;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:           
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMWFM2                                                                        
          UPDATE    EMRWFMA2;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:           
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMWFM2  RESET     KEY6                                                        
          WRITE     EMRWFMA2,KEY6;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:      
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          RETURN
.
DEEMWFM2  RESET     KEY6                                                        
          DELETE    EMRWFMA2,KEY6                                               
          RETURN
.
RLEMWFM2  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READL     EMRWFMA2,KEY6;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:      
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMWFM2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRWFMA2;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:           
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMWFM2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRWFMA2;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:           
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMWFM2  RESET     KEY6                                                        
          UNLOCK    EMRWFMA2                                                    
          RETURN
.
RSEMWFM3  RESET     KEY8                                                        
          READ      EMRWFMA3,KEY8;;                                             
          RETURN
.
RAEMWFM3  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      EMRWFMA3,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMWFM3  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      EMRWFMA3,KEY8;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:      
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMWFM3                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRWFMA3;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:           
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMWFM3                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRWFMA3;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:           
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMWFM3                                                                        
          UPDATE    EMRWFMA3;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:           
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMWFM3  RESET     KEY8                                                        
          WRITE     EMRWFMA3,KEY8;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:      
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          RETURN
.
DEEMWFM3  RESET     KEY8                                                        
          DELETE    EMRWFMA3,KEY8                                               
          RETURN
.
RLEMWFM3  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     EMRWFMA3,KEY8;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:      
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMWFM3                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRWFMA3;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:           
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMWFM3                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRWFMA3;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:           
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMWFM3  RESET     KEY8                                                        
          UNLOCK    EMRWFMA3                                                    
          RETURN
.
RSEMWFM4  RESET     KEY8                                                        
          READ      EMRWFMA4,KEY8;;                                             
          RETURN
.
RAEMWFM4  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      EMRWFMA4,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMWFM4  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      EMRWFMA4,KEY8;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:      
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMWFM4                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRWFMA4;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:           
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMWFM4                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRWFMA4;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:           
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMWFM4                                                                        
          UPDATE    EMRWFMA4;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:           
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMWFM4  RESET     KEY8                                                        
          WRITE     EMRWFMA4,KEY8;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:      
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          RETURN
.
DEEMWFM4  RESET     KEY8                                                        
          DELETE    EMRWFMA4,KEY8                                               
          RETURN
.
RLEMWFM4  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     EMRWFMA4,KEY8;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:      
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMWFM4                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRWFMA4;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:           
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMWFM4                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRWFMA4;EMWFFLD,EMWFIDE,EMWFDES,EMWFSDE,EMWFMAN:           
                        EMWFIDP,EMWFEXF,EMWFRES,EMWFMND,EMWFSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMWFM4  RESET     KEY8                                                        
          UNLOCK    EMRWFMA4                                                    
          RETURN
.
