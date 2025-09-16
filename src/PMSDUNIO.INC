.
. PMSDUNIO    
. --------
. Filename     : pmsdunaf.dat
.
RSPMDUN1  RESET     KEY9                                                        
          READ      PMSDUNA1,KEY9;;                                             
          RETURN
.
RAPMDUN1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      PMSDUNA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMDUN1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      PMSDUNA1,KEY9;PMDUDOCT,PMDUUNIT,PMDUHEAD,PMDUSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMDUN1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSDUNA1;PMDUDOCT,PMDUUNIT,PMDUHEAD,PMDUSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMDUN1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSDUNA1;PMDUDOCT,PMDUUNIT,PMDUHEAD,PMDUSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMDUN1                                                                        
          UPDATE    PMSDUNA1;PMDUDOCT,PMDUUNIT,PMDUHEAD,PMDUSPAR                
          RETURN
.
WRPMDUN1  RESET     KEY9                                                        
          WRITE     PMSDUNA1,KEY9;PMDUDOCT,PMDUUNIT,PMDUHEAD,PMDUSPAR           
          RETURN
.
DEPMDUN1  RESET     KEY9                                                        
          DELETE    PMSDUNA1,KEY9                                               
          RETURN
.
RSPMDUN2  RESET     KEY10                                                       
          READ      PMSDUNA2,KEY10;;                                            
          RETURN
.
RAPMDUN2  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDUNA2,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMDUN2  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDUNA2,KEY10;PMDUDOCT,PMDUUNIT,PMDUHEAD,PMDUSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMDUN2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSDUNA2;PMDUDOCT,PMDUUNIT,PMDUHEAD,PMDUSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMDUN2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSDUNA2;PMDUDOCT,PMDUUNIT,PMDUHEAD,PMDUSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMDUN2                                                                        
          UPDATE    PMSDUNA2;PMDUDOCT,PMDUUNIT,PMDUHEAD,PMDUSPAR                
          RETURN
.
WRPMDUN2  RESET     KEY10                                                       
          WRITE     PMSDUNA2,KEY10;PMDUDOCT,PMDUUNIT,PMDUHEAD,PMDUSPAR          
          RETURN
.
DEPMDUN2  RESET     KEY10                                                       
          DELETE    PMSDUNA2,KEY10                                              
          RETURN
.
