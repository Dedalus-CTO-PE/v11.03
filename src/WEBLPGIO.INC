.
. WEBLPGIO    
. --------
. Filename     : weblpgaf.dat
.
RSWBLP1   RESET     KEY11                                                       
          READ      WEBLPGA1,KEY11;;                                            
          RETURN
.
RAWBLP1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      WEBLPGA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBLP1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      WEBLPGA1,KEY11;WBLPLKID,WBLPPGNO,WBLPTITL,WBLPHEAD,WBLPCLOR:
                        WBLPSCOD,WBLPPSEQ,WBLPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBLP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    WEBLPGA1;WBLPLKID,WBLPPGNO,WBLPTITL,WBLPHEAD,WBLPCLOR:      
                        WBLPSCOD,WBLPPSEQ,WBLPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBLP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    WEBLPGA1;WBLPLKID,WBLPPGNO,WBLPTITL,WBLPHEAD,WBLPCLOR:      
                        WBLPSCOD,WBLPPSEQ,WBLPSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBLP1                                                                         
          UPDATE    WEBLPGA1;WBLPLKID,WBLPPGNO,WBLPTITL,WBLPHEAD,WBLPCLOR:      
                        WBLPSCOD,WBLPPSEQ,WBLPSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBLP1   RESET     KEY11                                                       
          WRITE     WEBLPGA1,KEY11;WBLPLKID,WBLPPGNO,WBLPTITL,WBLPHEAD,WBLPCLOR:
                        WBLPSCOD,WBLPPSEQ,WBLPSPAR                              
          RETURN
.
DEWBLP1   RESET     KEY11                                                       
          DELETE    WEBLPGA1,KEY11                                              
          RETURN
.
RLWBLP1   RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     WEBLPGA1,KEY11;WBLPLKID,WBLPPGNO,WBLPTITL,WBLPHEAD,WBLPCLOR:
                        WBLPSCOD,WBLPPSEQ,WBLPSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBLP1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   WEBLPGA1;WBLPLKID,WBLPPGNO,WBLPTITL,WBLPHEAD,WBLPCLOR:      
                        WBLPSCOD,WBLPPSEQ,WBLPSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBLP1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   WEBLPGA1;WBLPLKID,WBLPPGNO,WBLPTITL,WBLPHEAD,WBLPCLOR:      
                        WBLPSCOD,WBLPPSEQ,WBLPSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBLP1   RESET     KEY11                                                       
          UNLOCK    WEBLPGA1                                                    
          RETURN
.
