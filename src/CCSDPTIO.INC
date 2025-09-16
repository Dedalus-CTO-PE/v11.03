.
. CCSDPTIO    
. --------
. Filename     : ccsdptaf.dat
.
RSCCDP1   RESET     KEY10                                                       
          READ      CCSDPTA1,KEY10;;                                            
          RETURN
.
RACCDP1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDPTA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCDP1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDPTA1,KEY10;CCDPHCD,CCDPDPT,CCDPDES,CCDPDTY,CCDPSEQ:     
                        CCDPATY,CCDPSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCDP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSDPTA1;CCDPHCD,CCDPDPT,CCDPDES,CCDPDTY,CCDPSEQ:           
                        CCDPATY,CCDPSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCDP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSDPTA1;CCDPHCD,CCDPDPT,CCDPDES,CCDPDTY,CCDPSEQ:           
                        CCDPATY,CCDPSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCDP1                                                                         
          UPDATE    CCSDPTA1;CCDPHCD,CCDPDPT,CCDPDES,CCDPDTY,CCDPSEQ:           
                        CCDPATY,CCDPSPA                                         
          RETURN
.
WRCCDP1   RESET     KEY10                                                       
          WRITE     CCSDPTA1,KEY10;CCDPHCD,CCDPDPT,CCDPDES,CCDPDTY,CCDPSEQ:     
                        CCDPATY,CCDPSPA                                         
          RETURN
.
DECCDP1   RESET     KEY10                                                       
          DELETE    CCSDPTA1,KEY10                                              
          RETURN
.
RSCCDP2   RESET     KEY45                                                       
          READ      CCSDPTA2,KEY45;;                                            
          RETURN
.
RACCDP2   RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDPTA2,KEY45;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCDP2   RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDPTA2,KEY45;CCDPHCD,CCDPDPT,CCDPDES,CCDPDTY,CCDPSEQ:     
                        CCDPATY,CCDPSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCDP2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSDPTA2;CCDPHCD,CCDPDPT,CCDPDES,CCDPDTY,CCDPSEQ:           
                        CCDPATY,CCDPSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCDP2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSDPTA2;CCDPHCD,CCDPDPT,CCDPDES,CCDPDTY,CCDPSEQ:           
                        CCDPATY,CCDPSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCDP2                                                                         
          UPDATE    CCSDPTA2;CCDPHCD,CCDPDPT,CCDPDES,CCDPDTY,CCDPSEQ:           
                        CCDPATY,CCDPSPA                                         
          RETURN
.
WRCCDP2   RESET     KEY45                                                       
          WRITE     CCSDPTA2,KEY45;CCDPHCD,CCDPDPT,CCDPDES,CCDPDTY,CCDPSEQ:     
                        CCDPATY,CCDPSPA                                         
          RETURN
.
DECCDP2   RESET     KEY45                                                       
          DELETE    CCSDPTA2,KEY45                                              
          RETURN
.
RSCCDP3   RESET     KEY11                                                       
          READ      CCSDPTA3,KEY11;;                                            
          RETURN
.
RACCDP3   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDPTA3,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCDP3   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDPTA3,KEY11;CCDPHCD,CCDPDPT,CCDPDES,CCDPDTY,CCDPSEQ:     
                        CCDPATY,CCDPSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCDP3                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSDPTA3;CCDPHCD,CCDPDPT,CCDPDES,CCDPDTY,CCDPSEQ:           
                        CCDPATY,CCDPSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCDP3                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSDPTA3;CCDPHCD,CCDPDPT,CCDPDES,CCDPDTY,CCDPSEQ:           
                        CCDPATY,CCDPSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCDP3                                                                         
          UPDATE    CCSDPTA3;CCDPHCD,CCDPDPT,CCDPDES,CCDPDTY,CCDPSEQ:           
                        CCDPATY,CCDPSPA                                         
          RETURN
.
WRCCDP3   RESET     KEY11                                                       
          WRITE     CCSDPTA3,KEY11;CCDPHCD,CCDPDPT,CCDPDES,CCDPDTY,CCDPSEQ:     
                        CCDPATY,CCDPSPA                                         
          RETURN
.
DECCDP3   RESET     KEY11                                                       
          DELETE    CCSDPTA3,KEY11                                              
          RETURN
.
RSCCDP4   RESET     KEY15                                                       
          READ      CCSDPTA4,KEY15;;                                            
          RETURN
.
RACCDP4   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDPTA4,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCDP4   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      CCSDPTA4,KEY15;CCDPHCD,CCDPDPT,CCDPDES,CCDPDTY,CCDPSEQ:     
                        CCDPATY,CCDPSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCDP4                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSDPTA4;CCDPHCD,CCDPDPT,CCDPDES,CCDPDTY,CCDPSEQ:           
                        CCDPATY,CCDPSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCDP4                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSDPTA4;CCDPHCD,CCDPDPT,CCDPDES,CCDPDTY,CCDPSEQ:           
                        CCDPATY,CCDPSPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCDP4                                                                         
          UPDATE    CCSDPTA4;CCDPHCD,CCDPDPT,CCDPDES,CCDPDTY,CCDPSEQ:           
                        CCDPATY,CCDPSPA                                         
          RETURN
.
WRCCDP4   RESET     KEY15                                                       
          WRITE     CCSDPTA4,KEY15;CCDPHCD,CCDPDPT,CCDPDES,CCDPDTY,CCDPSEQ:     
                        CCDPATY,CCDPSPA                                         
          RETURN
.
DECCDP4   RESET     KEY15                                                       
          DELETE    CCSDPTA4,KEY15                                              
          RETURN
.
