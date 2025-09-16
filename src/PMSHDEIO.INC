.
. PMSHDEIO    
. --------
. Filename     : pmshdeaf.dat
.
RSPMHDE1  RESET     KEY15                                                       
          READ      PMSHDEA1,KEY15;;                                            
          RETURN
.
RAPMHDE1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHDEA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHDE1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHDEA1,KEY15;PMHECNTR,PMHEHACG,PMHEHACT,PMHEHACF,PMHECOMV:
                                   PMHECDAT,PMHECTIM,PMHECUID,PMHEUDAT,PMHEUTIM:
                                   PMHEUUID,PMHESPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHDE1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSHDEA1;PMHECNTR,PMHEHACG,PMHEHACT,PMHEHACF,PMHECOMV:      
                             PMHECDAT,PMHECTIM,PMHECUID,PMHEUDAT,PMHEUTIM:      
                             PMHEUUID,PMHESPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHDE1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSHDEA1;PMHECNTR,PMHEHACG,PMHEHACT,PMHEHACF,PMHECOMV:      
                             PMHECDAT,PMHECTIM,PMHECUID,PMHEUDAT,PMHEUTIM:      
                             PMHEUUID,PMHESPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHDE1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSHDEA1;PMHECNTR,PMHEHACG,PMHEHACT,PMHEHACF,PMHECOMV:      
                             PMHECDAT,PMHECTIM,PMHECUID,PMHEUDAT,PMHEUTIM:      
                             PMHEUUID,PMHESPAR                                  
          RETURN
.
WRPMHDE1  RESET     KEY15                                                       
          WRITE     PMSHDEA1,KEY15;PMHECNTR,PMHEHACG,PMHEHACT,PMHEHACF,PMHECOMV:
                                   PMHECDAT,PMHECTIM,PMHECUID,PMHEUDAT,PMHEUTIM:
                                   PMHEUUID,PMHESPAR                            
          RETURN
.
DEPMHDE1  RESET     KEY15                                                       
          DELETE    PMSHDEA1,KEY15                                              
          RETURN
.
