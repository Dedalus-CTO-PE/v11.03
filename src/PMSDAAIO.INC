.
. PMSDAAIO    
. --------
. Filename     : pmsdaaaf.dat
.
RSPMDAA1  RESET     KEY3                                                        
          READ      PMSDAAA1,KEY3;;                                             
          RETURN
.
RAPMDAA1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      PMSDAAA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMDAA1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      PMSDAAA1,KEY3;PMDATYPE,PMDAADD1,PMDAADD2,PMDAADD3,PMDAADD4: 
                        PMDAPOST,PMDAPHON,PMDASPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMDAA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSDAAA1;PMDATYPE,PMDAADD1,PMDAADD2,PMDAADD3,PMDAADD4:      
                        PMDAPOST,PMDAPHON,PMDASPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMDAA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSDAAA1;PMDATYPE,PMDAADD1,PMDAADD2,PMDAADD3,PMDAADD4:      
                        PMDAPOST,PMDAPHON,PMDASPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMDAA1                                                                        
          UPDATE    PMSDAAA1;PMDATYPE,PMDAADD1,PMDAADD2,PMDAADD3,PMDAADD4:      
                        PMDAPOST,PMDAPHON,PMDASPAR                              
          RETURN
.
WRPMDAA1  RESET     KEY3                                                        
          WRITE     PMSDAAA1,KEY3;PMDATYPE,PMDAADD1,PMDAADD2,PMDAADD3,PMDAADD4: 
                        PMDAPOST,PMDAPHON,PMDASPAR                              
          RETURN
.
DEPMDAA1  RESET     KEY3                                                        
          DELETE    PMSDAAA1,KEY3                                               
          RETURN
.
