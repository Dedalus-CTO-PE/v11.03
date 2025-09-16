.
. PMSQERIO    
. --------
. Filename     : pmsqeraf.dat
.
RSPMQER1  RESET     KEY10                                                       
          READ      PMSQERA1,KEY10;;                                            
          RETURN
.
RAPMQER1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PMSQERA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMQER1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PMSQERA1,KEY10;PMQEHOSP,PMQEYEAR,PMQERUNN,PMQEEDAT,PMQESPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMQER1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSQERA1;PMQEHOSP,PMQEYEAR,PMQERUNN,PMQEEDAT,PMQESPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMQER1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSQERA1;PMQEHOSP,PMQEYEAR,PMQERUNN,PMQEEDAT,PMQESPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMQER1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSQERA1;PMQEHOSP,PMQEYEAR,PMQERUNN,PMQEEDAT,PMQESPAR       
          RETURN
.
WRPMQER1  RESET     KEY10                                                       
          WRITE     PMSQERA1,KEY10;PMQEHOSP,PMQEYEAR,PMQERUNN,PMQEEDAT,PMQESPAR 
          RETURN
.
DEPMQER1  RESET     KEY10                                                       
          DELETE    PMSQERA1,KEY10                                              
          RETURN
.
RSPMQER2  RESET     KEY18                                                       
          READ      PMSQERA2,KEY18;;                                            
          RETURN
.
RAPMQER2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSQERA2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMQER2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PMSQERA2,KEY18;PMQEHOSP,PMQEYEAR,PMQERUNN,PMQEEDAT,PMQESPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMQER2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSQERA2;PMQEHOSP,PMQEYEAR,PMQERUNN,PMQEEDAT,PMQESPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMQER2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSQERA2;PMQEHOSP,PMQEYEAR,PMQERUNN,PMQEEDAT,PMQESPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMQER2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSQERA2;PMQEHOSP,PMQEYEAR,PMQERUNN,PMQEEDAT,PMQESPAR       
          RETURN
.
WRPMQER2  RESET     KEY18                                                       
          WRITE     PMSQERA2,KEY18;PMQEHOSP,PMQEYEAR,PMQERUNN,PMQEEDAT,PMQESPAR 
          RETURN
.
DEPMQER2  RESET     KEY18                                                       
          DELETE    PMSQERA2,KEY18                                              
          RETURN
.
