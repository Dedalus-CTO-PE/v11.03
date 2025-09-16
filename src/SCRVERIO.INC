.
. SCRVERIO    
. --------
. Filename     : scrveraf.dat
.
RSSCVE1   RESET     KEY15                                                       
          READ      SCRVERA1,KEY15;;                                            
          RETURN
.
RASCVE1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SCRVERA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSCVE1   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SCRVERA1,KEY15;SCVESID,SCVEVER,SCVEWHO,SCVEDAT,SCVESRF:     
                        SCVEQUO,SCVESPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSCVE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SCRVERA1;SCVESID,SCVEVER,SCVEWHO,SCVEDAT,SCVESRF:           
                        SCVEQUO,SCVESPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSCVE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SCRVERA1;SCVESID,SCVEVER,SCVEWHO,SCVEDAT,SCVESRF:           
                        SCVEQUO,SCVESPA                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSCVE1                                                                         
          UPDATE    SCRVERA1;SCVESID,SCVEVER,SCVEWHO,SCVEDAT,SCVESRF:           
                        SCVEQUO,SCVESPA                                         
          RETURN
.
WRSCVE1   RESET     KEY15                                                       
          WRITE     SCRVERA1,KEY15;SCVESID,SCVEVER,SCVEWHO,SCVEDAT,SCVESRF:     
                        SCVEQUO,SCVESPA                                         
          RETURN
.
DESCVE1   RESET     KEY15                                                       
          DELETE    SCRVERA1,KEY15                                              
          RETURN
.
