.
. PMSBISIO    
. --------
. Filename     : pmsbisaf.dat
.
RSPMBIS1  RESET     KEY4                                                        
          READ      PMSBISA1,KEY4;;                                             
          RETURN
.
RAPMBIS1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PMSBISA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBIS1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PMSBISA1,KEY4;PMBSSEID,PMBSINVD,PMBSASAT,PMBSHOSP,PMBSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBIS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBISA1;PMBSSEID,PMBSINVD,PMBSASAT,PMBSHOSP,PMBSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBIS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBISA1;PMBSSEID,PMBSINVD,PMBSASAT,PMBSHOSP,PMBSSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBIS1                                                                        
          UPDATE    PMSBISA1;PMBSSEID,PMBSINVD,PMBSASAT,PMBSHOSP,PMBSSPAR
          RETURN
.
WRPMBIS1  RESET     KEY4                                                        
          WRITE     PMSBISA1,KEY4;PMBSSEID,PMBSINVD,PMBSASAT,PMBSHOSP,PMBSSPAR
          RETURN
.
DEPMBIS1  RESET     KEY4                                                        
          DELETE    PMSBISA1,KEY4                                               
          RETURN
.
