.
. AMSGILIO    
. --------
. Filename     : amsgilaf.dat
.
RSAMGI1   RESET     KEY5                                                        
          READ      AMSGILA1,KEY5;;                                             
          RETURN
.
RAAMGI1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      AMSGILA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMGI1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      AMSGILA1,KEY5;AMGIGIC,AMGIDES,AMGIDIS,AMGIRES,AMGILED:      
                        AMGIADP,AMGIEDP,AMGICAP,AMGILOS,AMGIPRO,AMGIRVR:        
                        AMGIRET,AMGISAL,AMGIUD1,AMGIUD2,AMGIUY1,AMGIUY2:        
                        AMGISPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMGI1                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSGILA1;AMGIGIC,AMGIDES,AMGIDIS,AMGIRES,AMGILED:           
                        AMGIADP,AMGIEDP,AMGICAP,AMGILOS,AMGIPRO,AMGIRVR:        
                        AMGIRET,AMGISAL,AMGIUD1,AMGIUD2,AMGIUY1,AMGIUY2:        
                        AMGISPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMGI1                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSGILA1;AMGIGIC,AMGIDES,AMGIDIS,AMGIRES,AMGILED:           
                        AMGIADP,AMGIEDP,AMGICAP,AMGILOS,AMGIPRO,AMGIRVR:        
                        AMGIRET,AMGISAL,AMGIUD1,AMGIUD2,AMGIUY1,AMGIUY2:        
                        AMGISPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMGI1                                                                         
          UPDATE    AMSGILA1;AMGIGIC,AMGIDES,AMGIDIS,AMGIRES,AMGILED:           
                        AMGIADP,AMGIEDP,AMGICAP,AMGILOS,AMGIPRO,AMGIRVR:        
                        AMGIRET,AMGISAL,AMGIUD1,AMGIUD2,AMGIUY1,AMGIUY2:        
                        AMGISPA                                                 
          RETURN
.
WRAMGI1   RESET     KEY5                                                        
          WRITE     AMSGILA1,KEY5;AMGIGIC,AMGIDES,AMGIDIS,AMGIRES,AMGILED:      
                        AMGIADP,AMGIEDP,AMGICAP,AMGILOS,AMGIPRO,AMGIRVR:        
                        AMGIRET,AMGISAL,AMGIUD1,AMGIUD2,AMGIUY1,AMGIUY2:        
                        AMGISPA                                                 
          RETURN
.
DEAMGI1   RESET     KEY5                                                        
          DELETE    AMSGILA1,KEY5                                               
          RETURN
.
