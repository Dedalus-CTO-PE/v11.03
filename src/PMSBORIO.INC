.
. PMSBORIO    
. --------
. Filename     : pmsboraf.dat
.
RSPMBOR1  RESET     KEY8                                                        
          READ      PMSBORA1,KEY8;;                                             
          RETURN
.
RAPMBOR1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSBORA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBOR1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSBORA1,KEY8;PMBOFIEL,PMBOFLNO,PMBODEFT,PMBOCODE,PMBOSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBOR1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBORA1;PMBOFIEL,PMBOFLNO,PMBODEFT,PMBOCODE,PMBOSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBOR1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBORA1;PMBOFIEL,PMBOFLNO,PMBODEFT,PMBOCODE,PMBOSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBOR1                                                                        
          UPDATE    PMSBORA1;PMBOFIEL,PMBOFLNO,PMBODEFT,PMBOCODE,PMBOSPAR       
          RETURN
.
WRPMBOR1  RESET     KEY8                                                        
          WRITE     PMSBORA1,KEY8;PMBOFIEL,PMBOFLNO,PMBODEFT,PMBOCODE,PMBOSPAR  
          RETURN
.
DEPMBOR1  RESET     KEY8                                                        
          DELETE    PMSBORA1,KEY8                                               
          RETURN
.
RSPMBOR2  RESET     KEY3                                                        
          READ      PMSBORA2,KEY3;;                                             
          RETURN
.
RAPMBOR2  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      PMSBORA2,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBOR2  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      PMSBORA2,KEY3;PMBOFIEL,PMBOFLNO,PMBODEFT,PMBOCODE,PMBOSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBOR2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBORA2;PMBOFIEL,PMBOFLNO,PMBODEFT,PMBOCODE,PMBOSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBOR2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBORA2;PMBOFIEL,PMBOFLNO,PMBODEFT,PMBOCODE,PMBOSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBOR2                                                                        
          UPDATE    PMSBORA2;PMBOFIEL,PMBOFLNO,PMBODEFT,PMBOCODE,PMBOSPAR       
          RETURN
.
WRPMBOR2  RESET     KEY3                                                        
          WRITE     PMSBORA2,KEY3;PMBOFIEL,PMBOFLNO,PMBODEFT,PMBOCODE,PMBOSPAR  
          RETURN
.
DEPMBOR2  RESET     KEY3                                                        
          DELETE    PMSBORA2,KEY3                                               
          RETURN
.
