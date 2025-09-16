.
. CCSCECIO    
. --------
. Filename     : ccscecaf.dat
.
RSCCEC1   RESET     KEY18                                                       
          READ      CCSCECA1,KEY18;;                                            
          RETURN
.
RACCEC1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCECA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCEC1   RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCECA1,KEY18;CCECHCD,CCECEPS,CCECLV1,CCECLV2,CCECLV3:     
                        CCECFTC,CCECTTC,CCECLOS,CCECEXC,CCECSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCEC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCECA1;CCECHCD,CCECEPS,CCECLV1,CCECLV2,CCECLV3:           
                        CCECFTC,CCECTTC,CCECLOS,CCECEXC,CCECSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCEC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCECA1;CCECHCD,CCECEPS,CCECLV1,CCECLV2,CCECLV3:           
                        CCECFTC,CCECTTC,CCECLOS,CCECEXC,CCECSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCEC1                                                                         
          UPDATE    CCSCECA1;CCECHCD,CCECEPS,CCECLV1,CCECLV2,CCECLV3:           
                        CCECFTC,CCECTTC,CCECLOS,CCECEXC,CCECSPA                 
          RETURN
.
WRCCEC1   RESET     KEY18                                                       
          WRITE     CCSCECA1,KEY18;CCECHCD,CCECEPS,CCECLV1,CCECLV2,CCECLV3:     
                        CCECFTC,CCECTTC,CCECLOS,CCECEXC,CCECSPA                 
          RETURN
.
DECCEC1   RESET     KEY18                                                       
          DELETE    CCSCECA1,KEY18                                              
          RETURN
.
RSCCEC2   RESET     KEY48                                                       
          READ      CCSCECA2,KEY48;;                                            
          RETURN
.
RACCEC2   RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCECA2,KEY48;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCEC2   RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCECA2,KEY48;CCECHCD,CCECEPS,CCECLV1,CCECLV2,CCECLV3:     
                        CCECFTC,CCECTTC,CCECLOS,CCECEXC,CCECSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCEC2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCECA2;CCECHCD,CCECEPS,CCECLV1,CCECLV2,CCECLV3:           
                        CCECFTC,CCECTTC,CCECLOS,CCECEXC,CCECSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCEC2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCECA2;CCECHCD,CCECEPS,CCECLV1,CCECLV2,CCECLV3:           
                        CCECFTC,CCECTTC,CCECLOS,CCECEXC,CCECSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCEC2                                                                         
          UPDATE    CCSCECA2;CCECHCD,CCECEPS,CCECLV1,CCECLV2,CCECLV3:           
                        CCECFTC,CCECTTC,CCECLOS,CCECEXC,CCECSPA                 
          RETURN
.
WRCCEC2   RESET     KEY48                                                       
          WRITE     CCSCECA2,KEY48;CCECHCD,CCECEPS,CCECLV1,CCECLV2,CCECLV3:     
                        CCECFTC,CCECTTC,CCECLOS,CCECEXC,CCECSPA                 
          RETURN
.
DECCEC2   RESET     KEY48                                                       
          DELETE    CCSCECA2,KEY48                                              
          RETURN
.
