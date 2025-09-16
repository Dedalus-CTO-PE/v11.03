.
. APSCILIO    
. --------
. Filename     : apscilaf.dat
.
RSAPCL1   RESET     KEY40                                                       
          READ      APSCILA1,KEY40;;                                            
          RETURN
.
RAAPCL1   RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      APSCILA1,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAPCL1   RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      APSCILA1,KEY40;APCLDOC,APCLBCH,APCLCRD,APCLREF,APCLSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAPCL1                                                                         
          MOVE      ZERO,OVRCD
          READKS    APSCILA1;APCLDOC,APCLBCH,APCLCRD,APCLREF,APCLSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAPCL1                                                                         
          MOVE      ZERO,OVRCD
          READKP    APSCILA1;APCLDOC,APCLBCH,APCLCRD,APCLREF,APCLSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAPCL1                                                                         
          UPDATE    APSCILA1;APCLDOC,APCLBCH,APCLCRD,APCLREF,APCLSPA            
          RETURN
.
WRAPCL1   RESET     KEY40                                                       
          WRITE     APSCILA1,KEY40;APCLDOC,APCLBCH,APCLCRD,APCLREF,APCLSPA      
          RETURN
.
DEAPCL1   RESET     KEY40                                                       
          DELETE    APSCILA1,KEY40                                              
          RETURN
.
