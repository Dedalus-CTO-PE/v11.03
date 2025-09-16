.
. SCRVCMIO    
. --------
. Filename     : scrvcmaf.dat
.
RSSCVC1   RESET     KEY18                                                       
          READ      SCRVCMA1,KEY18;;                                            
          RETURN
.
RASCVC1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      SCRVCMA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCVC1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      SCRVCMA1,KEY18;SCVCSID,SCVCVER,SCVCLIN,SCVCDAT,SCVCSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCVC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRVCMA1;SCVCSID,SCVCVER,SCVCLIN,SCVCDAT,SCVCSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCVC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRVCMA1;SCVCSID,SCVCVER,SCVCLIN,SCVCDAT,SCVCSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCVC1                                                                         
          UPDATE    SCRVCMA1;SCVCSID,SCVCVER,SCVCLIN,SCVCDAT,SCVCSPA            
          RETURN
.
WRSCVC1   RESET     KEY18                                                       
          WRITE     SCRVCMA1,KEY18;SCVCSID,SCVCVER,SCVCLIN,SCVCDAT,SCVCSPA      
          RETURN
.
DESCVC1   RESET     KEY18                                                       
          DELETE    SCRVCMA1,KEY18                                              
          RETURN
.
