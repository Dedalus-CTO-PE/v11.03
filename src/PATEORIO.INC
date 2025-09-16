.
. PATEORIO    
. --------
. Filename     : pateoraf.dat
.
RSPTEOR1  RESET     KEY7                                                        
          READ      PATEORA1,KEY7;;                                             
          RETURN
.
RAPTEOR1  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      PATEORA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTEOR1  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      PATEORA1,KEY7;PTERTYPE,PTERCODE,PTERNAME,PTERADD1,PTERADD2: 
                        PTERADD3,PTERADD4,PTERPOST,PTERTELP,PTERCONT,PTERSTAT:  
                        PTERSECT,PTERREGN,PTERUTYP,PTERSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTEOR1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATEORA1;PTERTYPE,PTERCODE,PTERNAME,PTERADD1,PTERADD2:      
                        PTERADD3,PTERADD4,PTERPOST,PTERTELP,PTERCONT,PTERSTAT:  
                        PTERSECT,PTERREGN,PTERUTYP,PTERSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTEOR1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATEORA1;PTERTYPE,PTERCODE,PTERNAME,PTERADD1,PTERADD2:      
                        PTERADD3,PTERADD4,PTERPOST,PTERTELP,PTERCONT,PTERSTAT:  
                        PTERSECT,PTERREGN,PTERUTYP,PTERSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTEOR1                                                                        
          UPDATE    PATEORA1;PTERTYPE,PTERCODE,PTERNAME,PTERADD1,PTERADD2:      
                        PTERADD3,PTERADD4,PTERPOST,PTERTELP,PTERCONT,PTERSTAT:  
                        PTERSECT,PTERREGN,PTERUTYP,PTERSPAR                     
          RETURN
.
WRPTEOR1  RESET     KEY7                                                        
          WRITE     PATEORA1,KEY7;PTERTYPE,PTERCODE,PTERNAME,PTERADD1,PTERADD2: 
                        PTERADD3,PTERADD4,PTERPOST,PTERTELP,PTERCONT,PTERSTAT:  
                        PTERSECT,PTERREGN,PTERUTYP,PTERSPAR                     
          RETURN
.
DEPTEOR1  RESET     KEY7                                                        
          DELETE    PATEORA1,KEY7                                               
          RETURN
.
RSPTEOR2  RESET     KEY7                                                        
          READ      PATEORA2,KEY7;;                                             
          RETURN
.
RAPTEOR2  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      PATEORA2,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTEOR2  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      PATEORA2,KEY7;PTERTYPE,PTERCODE,PTERNAME,PTERADD1,PTERADD2: 
                        PTERADD3,PTERADD4,PTERPOST,PTERTELP,PTERCONT,PTERSTAT:  
                        PTERSECT,PTERREGN,PTERUTYP,PTERSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTEOR2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATEORA2;PTERTYPE,PTERCODE,PTERNAME,PTERADD1,PTERADD2:      
                        PTERADD3,PTERADD4,PTERPOST,PTERTELP,PTERCONT,PTERSTAT:  
                        PTERSECT,PTERREGN,PTERUTYP,PTERSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTEOR2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATEORA2;PTERTYPE,PTERCODE,PTERNAME,PTERADD1,PTERADD2:      
                        PTERADD3,PTERADD4,PTERPOST,PTERTELP,PTERCONT,PTERSTAT:  
                        PTERSECT,PTERREGN,PTERUTYP,PTERSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTEOR2                                                                        
          UPDATE    PATEORA2;PTERTYPE,PTERCODE,PTERNAME,PTERADD1,PTERADD2:      
                        PTERADD3,PTERADD4,PTERPOST,PTERTELP,PTERCONT,PTERSTAT:  
                        PTERSECT,PTERREGN,PTERUTYP,PTERSPAR                     
          RETURN
.
WRPTEOR2  RESET     KEY7                                                        
          WRITE     PATEORA2,KEY7;PTERTYPE,PTERCODE,PTERNAME,PTERADD1,PTERADD2: 
                        PTERADD3,PTERADD4,PTERPOST,PTERTELP,PTERCONT,PTERSTAT:  
                        PTERSECT,PTERREGN,PTERUTYP,PTERSPAR                     
          RETURN
.
DEPTEOR2  RESET     KEY7                                                        
          DELETE    PATEORA2,KEY7                                               
          RETURN
.
