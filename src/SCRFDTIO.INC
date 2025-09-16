.
. SCRFDTIO    
. --------
. Filename     : scrfdtaf.dat
.
RSSCFD1   RESET     KEY21                                                       
          READ      SCRFDTA1,KEY21;;                                            
          RETURN
.
RASCFD1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      SCRFDTA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCFD1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      SCRFDTA1,KEY21;SCFDFID,SCFDPID,SCFDLIN,SCFDCOD,SCFDSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCFD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRFDTA1;SCFDFID,SCFDPID,SCFDLIN,SCFDCOD,SCFDSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCFD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRFDTA1;SCFDFID,SCFDPID,SCFDLIN,SCFDCOD,SCFDSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCFD1                                                                         
          UPDATE    SCRFDTA1;SCFDFID,SCFDPID,SCFDLIN,SCFDCOD,SCFDSPA            
          RETURN
.
WRSCFD1   RESET     KEY21                                                       
          WRITE     SCRFDTA1,KEY21;SCFDFID,SCFDPID,SCFDLIN,SCFDCOD,SCFDSPA      
          RETURN
.
DESCFD1   RESET     KEY21                                                       
          DELETE    SCRFDTA1,KEY21                                              
          RETURN
.
