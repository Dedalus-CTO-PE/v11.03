.
. PMSEDWIO    
. --------
. Filename     : pmsedwaf.dat
.
RSPMEDW1  RESET     KEY27                                                       
          READ      PMSEDWA1,KEY27;;                                            
          RETURN
.
RAPMEDW1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEDWA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEDW1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEDWA1,KEY27;PMEWURNO,PMEWTYPE,PMEWOLDV,PMEWNEWV,PMEWCDAT:
                                   PMEWCTIM,PMEWCUID,PMEWSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEDW1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSEDWA1;PMEWURNO,PMEWTYPE,PMEWOLDV,PMEWNEWV,PMEWCDAT:      
                             PMEWCTIM,PMEWCUID,PMEWSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEDW1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSEDWA1;PMEWURNO,PMEWTYPE,PMEWOLDV,PMEWNEWV,PMEWCDAT:      
                             PMEWCTIM,PMEWCUID,PMEWSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEDW1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSEDWA1;PMEWURNO,PMEWTYPE,PMEWOLDV,PMEWNEWV,PMEWCDAT:      
                             PMEWCTIM,PMEWCUID,PMEWSPAR                         
          RETURN
.
WRPMEDW1  RESET     KEY27                                                       
          WRITE     PMSEDWA1,KEY27;PMEWURNO,PMEWTYPE,PMEWOLDV,PMEWNEWV,PMEWCDAT:
                                   PMEWCTIM,PMEWCUID,PMEWSPAR                   
          RETURN
.
DEPMEDW1  RESET     KEY27                                                       
          DELETE    PMSEDWA1,KEY27                                              
          RETURN
.
RSPMEDW2  RESET     KEY27                                                       
          READ      PMSEDWA2,KEY27;;                                            
          RETURN
.
RAPMEDW2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEDWA2,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEDW2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEDWA2,KEY27;PMEWURNO,PMEWTYPE,PMEWOLDV,PMEWNEWV,PMEWCDAT:
                                   PMEWCTIM,PMEWCUID,PMEWSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEDW2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSEDWA2;PMEWURNO,PMEWTYPE,PMEWOLDV,PMEWNEWV,PMEWCDAT:      
                             PMEWCTIM,PMEWCUID,PMEWSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEDW2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSEDWA2;PMEWURNO,PMEWTYPE,PMEWOLDV,PMEWNEWV,PMEWCDAT:      
                             PMEWCTIM,PMEWCUID,PMEWSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEDW2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSEDWA2;PMEWURNO,PMEWTYPE,PMEWOLDV,PMEWNEWV,PMEWCDAT:      
                             PMEWCTIM,PMEWCUID,PMEWSPAR                         
          RETURN
.
WRPMEDW2  RESET     KEY27                                                       
          WRITE     PMSEDWA2,KEY27;PMEWURNO,PMEWTYPE,PMEWOLDV,PMEWNEWV,PMEWCDAT:
                                   PMEWCTIM,PMEWCUID,PMEWSPAR                   
          RETURN
.
DEPMEDW2  RESET     KEY27                                                       
          DELETE    PMSEDWA2,KEY27                                              
          RETURN
.
