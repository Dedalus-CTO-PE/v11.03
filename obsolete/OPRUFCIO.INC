.
. OPRUFCIO    
. --------
. Filename     : oprufcaf.dat
.
RSOPUFC1  RESET     KEY22                                                       
          READ      OPRUFCA1,KEY22;;                                            
          RETURN
.
RAOPUFC1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      OPRUFCA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPUFC1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      OPRUFCA1,KEY22;OPUFUSER,OPUFHOSP,OPUFCODE,OPUFCDTE,OPUFCTIM:
                                   OPUFCUSR,OPUFSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPUFC1  MOVE      ZERO,OVRCD                                                  
          READKS    OPRUFCA1;OPUFUSER,OPUFHOSP,OPUFCODE,OPUFCDTE,OPUFCTIM:      
                             OPUFCUSR,OPUFSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPUFC1  MOVE      ZERO,OVRCD                                                  
          READKP    OPRUFCA1;OPUFUSER,OPUFHOSP,OPUFCODE,OPUFCDTE,OPUFCTIM:      
                             OPUFCUSR,OPUFSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPUFC1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRUFCA1;OPUFUSER,OPUFHOSP,OPUFCODE,OPUFCDTE,OPUFCTIM:      
                             OPUFCUSR,OPUFSPAR                                  
          RETURN
.
WROPUFC1  RESET     KEY22                                                       
          WRITE     OPRUFCA1,KEY22;OPUFUSER,OPUFHOSP,OPUFCODE,OPUFCDTE,OPUFCTIM:
                                   OPUFCUSR,OPUFSPAR                            
          RETURN
.
DEOPUFC1  RESET     KEY22                                                       
          DELETE    OPRUFCA1,KEY22                                              
          RETURN
.
