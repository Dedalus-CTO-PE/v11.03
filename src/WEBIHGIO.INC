.
. WEBIHGIO    
. --------
. Filename     : webihgaf.dat
.
RSWBIHG1  RESET     KEY43                                                       
          READ      WEBIHGA1,KEY43;;                                            
          RETURN
.
RAWBIHG1  RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHGA1,KEY43;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHG1  RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHGA1,KEY43;WBIOFBID,WBIOARID,WBIOFRID,WBIORPTC,WBIOSECN:
                                   WBIOCAMT,WBIOSCOD,WBIOSDSC,WBIOFDTE,WBIONOSV:
                                   WBIOFBAM,WBIOSDTE,WBIOTDTE,WBIOTRID,WBIOMSID:
                                   WBIOSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIHG1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHGA1;WBIOFBID,WBIOARID,WBIOFRID,WBIORPTC,WBIOSECN:      
                             WBIOCAMT,WBIOSCOD,WBIOSDSC,WBIOFDTE,WBIONOSV:      
                             WBIOFBAM,WBIOSDTE,WBIOTDTE,WBIOTRID,WBIOMSID:      
                             WBIOSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIHG1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHGA1;WBIOFBID,WBIOARID,WBIOFRID,WBIORPTC,WBIOSECN:      
                             WBIOCAMT,WBIOSCOD,WBIOSDSC,WBIOFDTE,WBIONOSV:      
                             WBIOFBAM,WBIOSDTE,WBIOTDTE,WBIOTRID,WBIOMSID:      
                             WBIOSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIHG1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHGA1;WBIOFBID,WBIOARID,WBIOFRID,WBIORPTC,WBIOSECN:      
                             WBIOCAMT,WBIOSCOD,WBIOSDSC,WBIOFDTE,WBIONOSV:      
                             WBIOFBAM,WBIOSDTE,WBIOTDTE,WBIOTRID,WBIOMSID:      
                             WBIOSPAR                                           
          RETURN
.
WRWBIHG1  RESET     KEY43                                                       
          WRITE     WEBIHGA1,KEY43;WBIOFBID,WBIOARID,WBIOFRID,WBIORPTC,WBIOSECN:
                                   WBIOCAMT,WBIOSCOD,WBIOSDSC,WBIOFDTE,WBIONOSV:
                                   WBIOFBAM,WBIOSDTE,WBIOTDTE,WBIOTRID,WBIOMSID:
                                   WBIOSPAR                                     
          RETURN
.
DEWBIHG1  RESET     KEY43                                                       
          DELETE    WEBIHGA1,KEY43                                              
          RETURN
.
RSWBIHG2  RESET     KEY67                                                       
          READ      WEBIHGA2,KEY67;;                                            
          RETURN
.
RAWBIHG2  RESET     KEY67                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHGA2,KEY67;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHG2  RESET     KEY67                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHGA2,KEY67;WBIOFBID,WBIOARID,WBIOFRID,WBIORPTC,WBIOSECN:
                                   WBIOCAMT,WBIOSCOD,WBIOSDSC,WBIOFDTE,WBIONOSV:
                                   WBIOFBAM,WBIOSDTE,WBIOTDTE,WBIOTRID,WBIOMSID:
                                   WBIOSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIHG2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHGA2;WBIOFBID,WBIOARID,WBIOFRID,WBIORPTC,WBIOSECN:      
                             WBIOCAMT,WBIOSCOD,WBIOSDSC,WBIOFDTE,WBIONOSV:      
                             WBIOFBAM,WBIOSDTE,WBIOTDTE,WBIOTRID,WBIOMSID:      
                             WBIOSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIHG2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHGA2;WBIOFBID,WBIOARID,WBIOFRID,WBIORPTC,WBIOSECN:      
                             WBIOCAMT,WBIOSCOD,WBIOSDSC,WBIOFDTE,WBIONOSV:      
                             WBIOFBAM,WBIOSDTE,WBIOTDTE,WBIOTRID,WBIOMSID:      
                             WBIOSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIHG2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHGA2;WBIOFBID,WBIOARID,WBIOFRID,WBIORPTC,WBIOSECN:      
                             WBIOCAMT,WBIOSCOD,WBIOSDSC,WBIOFDTE,WBIONOSV:      
                             WBIOFBAM,WBIOSDTE,WBIOTDTE,WBIOTRID,WBIOMSID:      
                             WBIOSPAR                                           
          RETURN
.
WRWBIHG2  RESET     KEY67                                                       
          WRITE     WEBIHGA2,KEY67;WBIOFBID,WBIOARID,WBIOFRID,WBIORPTC,WBIOSECN:
                                   WBIOCAMT,WBIOSCOD,WBIOSDSC,WBIOFDTE,WBIONOSV:
                                   WBIOFBAM,WBIOSDTE,WBIOTDTE,WBIOTRID,WBIOMSID:
                                   WBIOSPAR                                     
          RETURN
.
DEWBIHG2  RESET     KEY67                                                       
          DELETE    WEBIHGA2,KEY67                                              
          RETURN
.
RSWBIHG3  RESET     KEY79                                                       
          READ      WEBIHGA3,KEY79;;                                            
          RETURN
.
RAWBIHG3  RESET     KEY79                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHGA3,KEY79;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHG3  RESET     KEY79                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHGA3,KEY79;WBIOFBID,WBIOARID,WBIOFRID,WBIORPTC,WBIOSECN:
                                   WBIOCAMT,WBIOSCOD,WBIOSDSC,WBIOFDTE,WBIONOSV:
                                   WBIOFBAM,WBIOSDTE,WBIOTDTE,WBIOTRID,WBIOMSID:
                                   WBIOSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIHG3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHGA3;WBIOFBID,WBIOARID,WBIOFRID,WBIORPTC,WBIOSECN:      
                             WBIOCAMT,WBIOSCOD,WBIOSDSC,WBIOFDTE,WBIONOSV:      
                             WBIOFBAM,WBIOSDTE,WBIOTDTE,WBIOTRID,WBIOMSID:      
                             WBIOSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIHG3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHGA3;WBIOFBID,WBIOARID,WBIOFRID,WBIORPTC,WBIOSECN:      
                             WBIOCAMT,WBIOSCOD,WBIOSDSC,WBIOFDTE,WBIONOSV:      
                             WBIOFBAM,WBIOSDTE,WBIOTDTE,WBIOTRID,WBIOMSID:      
                             WBIOSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIHG3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHGA3;WBIOFBID,WBIOARID,WBIOFRID,WBIORPTC,WBIOSECN:      
                             WBIOCAMT,WBIOSCOD,WBIOSDSC,WBIOFDTE,WBIONOSV:      
                             WBIOFBAM,WBIOSDTE,WBIOTDTE,WBIOTRID,WBIOMSID:      
                             WBIOSPAR                                           
          RETURN
.
WRWBIHG3  RESET     KEY79                                                       
          WRITE     WEBIHGA3,KEY79;WBIOFBID,WBIOARID,WBIOFRID,WBIORPTC,WBIOSECN:
                                   WBIOCAMT,WBIOSCOD,WBIOSDSC,WBIOFDTE,WBIONOSV:
                                   WBIOFBAM,WBIOSDTE,WBIOTDTE,WBIOTRID,WBIOMSID:
                                   WBIOSPAR                                     
          RETURN
.
DEWBIHG3  RESET     KEY79                                                       
          DELETE    WEBIHGA3,KEY79                                              
          RETURN
.
