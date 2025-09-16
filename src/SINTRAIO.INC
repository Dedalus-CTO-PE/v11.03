.
. SINTRAIO    
. --------
. Filename     : sintraaf.dat
.
RSSITA1   RESET     KEY8                                                        
          READ      SINTRAA1,KEY8;;                                             
          RETURN
.
RASITA1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      SINTRAA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSITA1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      SINTRAA1,KEY8;SITANUM,SITAIRF,SITAREF,SITADAT,SITAPL:       
                        SITAACC,SITAUD1,SITAUD2,SITAUR1,SITAUR2,SITAUY1:        
                        SITAUY2,SITASPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSITA1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINTRAA1;SITANUM,SITAIRF,SITAREF,SITADAT,SITAPL:            
                        SITAACC,SITAUD1,SITAUD2,SITAUR1,SITAUR2,SITAUY1:        
                        SITAUY2,SITASPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSITA1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINTRAA1;SITANUM,SITAIRF,SITAREF,SITADAT,SITAPL:            
                        SITAACC,SITAUD1,SITAUD2,SITAUR1,SITAUR2,SITAUY1:        
                        SITAUY2,SITASPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSITA1                                                                         
          UPDATE    SINTRAA1;SITANUM,SITAIRF,SITAREF,SITADAT,SITAPL:            
                        SITAACC,SITAUD1,SITAUD2,SITAUR1,SITAUR2,SITAUY1:        
                        SITAUY2,SITASPA                                         
          RETURN
.
WRSITA1   RESET     KEY8                                                        
          WRITE     SINTRAA1,KEY8;SITANUM,SITAIRF,SITAREF,SITADAT,SITAPL:       
                        SITAACC,SITAUD1,SITAUD2,SITAUR1,SITAUR2,SITAUY1:        
                        SITAUY2,SITASPA                                         
          RETURN
.
DESITA1   RESET     KEY8                                                        
          DELETE    SINTRAA1,KEY8                                               
          RETURN
.
