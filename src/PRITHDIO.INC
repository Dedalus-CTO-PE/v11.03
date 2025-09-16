.
. PRITHDIO    
. --------
. Filename     : prithdaf.dat
.
RSPRTHD1  RESET     KEY4                                                        
          READ      PRITHDA1,KEY4;;                                             
          RETURN
.
RAPRTHD1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PRITHDA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRTHD1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PRITHDA1,KEY4;PRTHTMID,PRTHDESC,PRTHINDC,PRTHSPRE           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRTHD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRITHDA1;PRTHTMID,PRTHDESC,PRTHINDC,PRTHSPRE                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRTHD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRITHDA1;PRTHTMID,PRTHDESC,PRTHINDC,PRTHSPRE                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRTHD1                                                                        
          UPDATE    PRITHDA1;PRTHTMID,PRTHDESC,PRTHINDC,PRTHSPRE                
          RETURN
.
WRPRTHD1  RESET     KEY4                                                        
          WRITE     PRITHDA1,KEY4;PRTHTMID,PRTHDESC,PRTHINDC,PRTHSPRE           
          RETURN
.
DEPRTHD1  RESET     KEY4                                                        
          DELETE    PRITHDA1,KEY4                                               
          RETURN
.
