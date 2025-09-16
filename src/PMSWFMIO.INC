.
. PMSWFMIO    
. --------
. Filename     : pmswfmaf.dat
.
RSPMWFM1  RESET     KEY5                                                        
          READ      PMSWFMA1,KEY5;;                                             
          RETURN
.
RAPMWFM1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      PMSWFMA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMWFM1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      PMSWFMA1,KEY5;PMWFFLDN,PMWFIDES,PMWFSDES,PMWFSCDE,PMWFMAND: 
                        PMWFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMWFM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSWFMA1;PMWFFLDN,PMWFIDES,PMWFSDES,PMWFSCDE,PMWFMAND:      
                        PMWFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMWFM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSWFMA1;PMWFFLDN,PMWFIDES,PMWFSDES,PMWFSCDE,PMWFMAND:      
                        PMWFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMWFM1                                                                        
          UPDATE    PMSWFMA1;PMWFFLDN,PMWFIDES,PMWFSDES,PMWFSCDE,PMWFMAND:      
                        PMWFSPAR                                                
          RETURN
.
WRPMWFM1  RESET     KEY5                                                        
          WRITE     PMSWFMA1,KEY5;PMWFFLDN,PMWFIDES,PMWFSDES,PMWFSCDE,PMWFMAND: 
                        PMWFSPAR                                                
          RETURN
.
DEPMWFM1  RESET     KEY5                                                        
          DELETE    PMSWFMA1,KEY5                                               
          RETURN
.
RSPMWFM2  RESET     KEY6                                                        
          READ      PMSWFMA2,KEY6;;                                             
          RETURN
.
RAPMWFM2  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      PMSWFMA2,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMWFM2  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      PMSWFMA2,KEY6;PMWFFLDN,PMWFIDES,PMWFSDES,PMWFSCDE,PMWFMAND: 
                        PMWFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMWFM2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSWFMA2;PMWFFLDN,PMWFIDES,PMWFSDES,PMWFSCDE,PMWFMAND:      
                        PMWFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMWFM2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSWFMA2;PMWFFLDN,PMWFIDES,PMWFSDES,PMWFSCDE,PMWFMAND:      
                        PMWFSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMWFM2                                                                        
          UPDATE    PMSWFMA2;PMWFFLDN,PMWFIDES,PMWFSDES,PMWFSCDE,PMWFMAND:      
                        PMWFSPAR                                                
          RETURN
.
WRPMWFM2  RESET     KEY6                                                        
          WRITE     PMSWFMA2,KEY6;PMWFFLDN,PMWFIDES,PMWFSDES,PMWFSCDE,PMWFMAND: 
                        PMWFSPAR                                                
          RETURN
.
DEPMWFM2  RESET     KEY6                                                        
          DELETE    PMSWFMA2,KEY6                                               
          RETURN
.
