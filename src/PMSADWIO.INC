.
. PMSADWIO    
. --------
. Filename     : pmsadwaf.dat
.
RSPMADW1  RESET     KEY27                                                       
          READ      PMSADWA1,KEY27;;                                            
          RETURN
.
RAPMADW1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSADWA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMADW1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSADWA1,KEY27;PMAWVISN,PMAWTYPE,PMAWOLDV,PMAWNEWV,PMAWCDAT:
                                   PMAWCTIM,PMAWCUID,PMAWSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMADW1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSADWA1;PMAWVISN,PMAWTYPE,PMAWOLDV,PMAWNEWV,PMAWCDAT:      
                             PMAWCTIM,PMAWCUID,PMAWSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMADW1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSADWA1;PMAWVISN,PMAWTYPE,PMAWOLDV,PMAWNEWV,PMAWCDAT:      
                             PMAWCTIM,PMAWCUID,PMAWSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMADW1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSADWA1;PMAWVISN,PMAWTYPE,PMAWOLDV,PMAWNEWV,PMAWCDAT:      
                             PMAWCTIM,PMAWCUID,PMAWSPAR                         
          RETURN
.
WRPMADW1  RESET     KEY27                                                       
          WRITE     PMSADWA1,KEY27;PMAWVISN,PMAWTYPE,PMAWOLDV,PMAWNEWV,PMAWCDAT:
                                   PMAWCTIM,PMAWCUID,PMAWSPAR                   
          RETURN
.
DEPMADW1  RESET     KEY27                                                       
          DELETE    PMSADWA1,KEY27                                              
          RETURN
.
RSPMADW2  RESET     KEY27                                                       
          READ      PMSADWA2,KEY27;;                                            
          RETURN
.
RAPMADW2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSADWA2,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMADW2  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSADWA2,KEY27;PMAWVISN,PMAWTYPE,PMAWOLDV,PMAWNEWV,PMAWCDAT:
                                   PMAWCTIM,PMAWCUID,PMAWSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMADW2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSADWA2;PMAWVISN,PMAWTYPE,PMAWOLDV,PMAWNEWV,PMAWCDAT:      
                             PMAWCTIM,PMAWCUID,PMAWSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMADW2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSADWA2;PMAWVISN,PMAWTYPE,PMAWOLDV,PMAWNEWV,PMAWCDAT:      
                             PMAWCTIM,PMAWCUID,PMAWSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMADW2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSADWA2;PMAWVISN,PMAWTYPE,PMAWOLDV,PMAWNEWV,PMAWCDAT:      
                             PMAWCTIM,PMAWCUID,PMAWSPAR                         
          RETURN
.
WRPMADW2  RESET     KEY27                                                       
          WRITE     PMSADWA2,KEY27;PMAWVISN,PMAWTYPE,PMAWOLDV,PMAWNEWV,PMAWCDAT:
                                   PMAWCTIM,PMAWCUID,PMAWSPAR                   
          RETURN
.
DEPMADW2  RESET     KEY27                                                       
          DELETE    PMSADWA2,KEY27                                              
          RETURN
.
