.
. SCRLOCIO    
. --------
. Filename     : scrlocaf.dat
.
RSSCLO1   RESET     KEY8                                                        
          READ      SCRLOCA1,KEY8;;                                             
          RETURN
.
RASCLO1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      SCRLOCA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCLO1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      SCRLOCA1,KEY8;SCLOPID,SCLOUID,SCLOSPA                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCLO1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRLOCA1;SCLOPID,SCLOUID,SCLOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCLO1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRLOCA1;SCLOPID,SCLOUID,SCLOSPA                            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCLO1                                                                         
          UPDATE    SCRLOCA1;SCLOPID,SCLOUID,SCLOSPA                            
          RETURN
.
WRSCLO1   RESET     KEY8                                                        
          WRITE     SCRLOCA1,KEY8;SCLOPID,SCLOUID,SCLOSPA                       
          RETURN
.
DESCLO1   RESET     KEY8                                                        
          DELETE    SCRLOCA1,KEY8                                               
          RETURN
.
