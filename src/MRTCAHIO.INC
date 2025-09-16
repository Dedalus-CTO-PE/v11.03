.
. MRTCAHIO    
. --------
. Filename     : mrtcahaf.dat
.
RSMRCAH1  RESET     KEY24                                                       
          READ      MRTCAHA1,KEY24;;                                            
          RETURN
.
RAMRCAH1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      MRTCAHA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRCAH1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      MRTCAHA1,KEY24;MRCHADMN,MRCHADAT,MRCHATIM,MRCHWEBU,MRCHNDRG:
                                   MRCHDRGV,MRCHHDRG,MRCHHDGV,MRCHNWAU,MRCHICDV:
                                   MRCHPDCD,MRCHPPCD,MRCHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRCAH1  MOVE      ZERO,OVRCD                                                  
          READKS    MRTCAHA1;MRCHADMN,MRCHADAT,MRCHATIM,MRCHWEBU,MRCHNDRG:      
                             MRCHDRGV,MRCHHDRG,MRCHHDGV,MRCHNWAU,MRCHICDV:      
                             MRCHPDCD,MRCHPPCD,MRCHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRCAH1  MOVE      ZERO,OVRCD                                                  
          READKP    MRTCAHA1;MRCHADMN,MRCHADAT,MRCHATIM,MRCHWEBU,MRCHNDRG:      
                             MRCHDRGV,MRCHHDRG,MRCHHDGV,MRCHNWAU,MRCHICDV:      
                             MRCHPDCD,MRCHPPCD,MRCHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRCAH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTCAHA1;MRCHADMN,MRCHADAT,MRCHATIM,MRCHWEBU,MRCHNDRG:      
                             MRCHDRGV,MRCHHDRG,MRCHHDGV,MRCHNWAU,MRCHICDV:      
                             MRCHPDCD,MRCHPPCD,MRCHSPAR                         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRCAH1  RESET     KEY24                                                       
          WRITE     MRTCAHA1,KEY24;MRCHADMN,MRCHADAT,MRCHATIM,MRCHWEBU,MRCHNDRG:
                                   MRCHDRGV,MRCHHDRG,MRCHHDGV,MRCHNWAU,MRCHICDV:
                                   MRCHPDCD,MRCHPPCD,MRCHSPAR                   
          RETURN
.
DEMRCAH1  RESET     KEY24                                                       
          DELETE    MRTCAHA1,KEY24                                              
          RETURN
.
RLMRCAH1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     MRTCAHA1,KEY24;MRCHADMN,MRCHADAT,MRCHATIM,MRCHWEBU,MRCHNDRG:
                                   MRCHDRGV,MRCHHDRG,MRCHHDGV,MRCHNWAU,MRCHICDV:
                                   MRCHPDCD,MRCHPPCD,MRCHSPAR                   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRCAH1  MOVE      ZERO,OVRCD                                                  
          READLKS   MRTCAHA1;MRCHADMN,MRCHADAT,MRCHATIM,MRCHWEBU,MRCHNDRG:      
                             MRCHDRGV,MRCHHDRG,MRCHHDGV,MRCHNWAU,MRCHICDV:      
                             MRCHPDCD,MRCHPPCD,MRCHSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRCAH1  MOVE      ZERO,OVRCD                                                  
          READLKP   MRTCAHA1;MRCHADMN,MRCHADAT,MRCHATIM,MRCHWEBU,MRCHNDRG:      
                             MRCHDRGV,MRCHHDRG,MRCHHDGV,MRCHNWAU,MRCHICDV:      
                             MRCHPDCD,MRCHPPCD,MRCHSPAR                         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRCAH1  RESET     KEY24                                                       
          UNLOCK    MRTCAHA1                                                    
          RETURN
.
