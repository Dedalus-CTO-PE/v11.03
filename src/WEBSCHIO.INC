.
. WEBSCHIO    
. --------
. Filename     : webschaf.dat
.
RSWBSC1   RESET     KEY8                                                        
          READ      WEBSCHA1,KEY8;;                                             
          RETURN
.
RAWBSC1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBSCHA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSC1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WEBSCHA1,KEY8;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV: 
                                  WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE: 
                                  WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP: 
                                  WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO: 
                                  WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM: 
                                  WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM: 
                                  WBSCSPAR                                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBSC1   MOVE      ZERO,OVRCD                                                  
          READKS    WEBSCHA1;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBSC1   MOVE      ZERO,OVRCD                                                  
          READKP    WEBSCHA1;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBSC1   MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBSCHA1;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBSC1   RESET     KEY8                                                        
          WRITE     WEBSCHA1,KEY8;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV: 
                                  WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE: 
                                  WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP: 
                                  WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO: 
                                  WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM: 
                                  WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM: 
                                  WBSCSPAR                                      
          RETURN
.
DEWBSC1   RESET     KEY8                                                        
          DELETE    WEBSCHA1,KEY8                                               
          RETURN
.
RLWBSC1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     WEBSCHA1,KEY8;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV: 
                                  WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE: 
                                  WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP: 
                                  WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO: 
                                  WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM: 
                                  WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM: 
                                  WBSCSPAR                                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBSC1   MOVE      ZERO,OVRCD                                                  
          READLKS   WEBSCHA1;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBSC1   MOVE      ZERO,OVRCD                                                  
          READLKP   WEBSCHA1;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBSC1   RESET     KEY8                                                        
          UNLOCK    WEBSCHA1                                                    
          RETURN
.
RSWBSC2   RESET     KEY25                                                       
          READ      WEBSCHA2,KEY25;;                                            
          RETURN
.
RAWBSC2   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSCHA2,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSC2   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSCHA2,KEY25;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:
                                   WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:
                                   WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:
                                   WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:
                                   WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:
                                   WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:
                                   WBSCSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBSC2   MOVE      ZERO,OVRCD                                                  
          READKS    WEBSCHA2;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBSC2   MOVE      ZERO,OVRCD                                                  
          READKP    WEBSCHA2;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBSC2   MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBSCHA2;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBSC2   RESET     KEY25                                                       
          WRITE     WEBSCHA2,KEY25;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:
                                   WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:
                                   WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:
                                   WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:
                                   WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:
                                   WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:
                                   WBSCSPAR                                     
          RETURN
.
DEWBSC2   RESET     KEY25                                                       
          DELETE    WEBSCHA2,KEY25                                              
          RETURN
.
RLWBSC2   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     WEBSCHA2,KEY25;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:
                                   WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:
                                   WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:
                                   WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:
                                   WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:
                                   WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:
                                   WBSCSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBSC2   MOVE      ZERO,OVRCD                                                  
          READLKS   WEBSCHA2;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBSC2   MOVE      ZERO,OVRCD                                                  
          READLKP   WEBSCHA2;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBSC2   RESET     KEY25                                                       
          UNLOCK    WEBSCHA2                                                    
          RETURN
.
RSWBSC3   RESET     KEY26                                                       
          READ      WEBSCHA3,KEY26;;                                            
          RETURN
.
RAWBSC3   RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSCHA3,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSC3   RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSCHA3,KEY26;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:
                                   WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:
                                   WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:
                                   WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:
                                   WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:
                                   WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:
                                   WBSCSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBSC3   MOVE      ZERO,OVRCD                                                  
          READKS    WEBSCHA3;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBSC3   MOVE      ZERO,OVRCD                                                  
          READKP    WEBSCHA3;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBSC3   MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBSCHA3;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBSC3   RESET     KEY26                                                       
          WRITE     WEBSCHA3,KEY26;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:
                                   WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:
                                   WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:
                                   WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:
                                   WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:
                                   WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:
                                   WBSCSPAR                                     
          RETURN
.
DEWBSC3   RESET     KEY26                                                       
          DELETE    WEBSCHA3,KEY26                                              
          RETURN
.
RLWBSC3   RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READL     WEBSCHA3,KEY26;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:
                                   WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:
                                   WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:
                                   WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:
                                   WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:
                                   WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:
                                   WBSCSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBSC3   MOVE      ZERO,OVRCD                                                  
          READLKS   WEBSCHA3;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBSC3   MOVE      ZERO,OVRCD                                                  
          READLKP   WEBSCHA3;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBSC3   RESET     KEY26                                                       
          UNLOCK    WEBSCHA3                                                    
          RETURN
.
RSWBSC4   RESET     KEY16                                                       
          READ      WEBSCHA4,KEY16;;                                            
          RETURN
.
RAWBSC4   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSCHA4,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSC4   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSCHA4,KEY16;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:
                                   WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:
                                   WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:
                                   WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:
                                   WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:
                                   WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:
                                   WBSCSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBSC4   MOVE      ZERO,OVRCD                                                  
          READKS    WEBSCHA4;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBSC4   MOVE      ZERO,OVRCD                                                  
          READKP    WEBSCHA4;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBSC4   MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBSCHA4;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBSC4   RESET     KEY16                                                       
          WRITE     WEBSCHA4,KEY16;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:
                                   WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:
                                   WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:
                                   WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:
                                   WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:
                                   WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:
                                   WBSCSPAR                                     
          RETURN
.
DEWBSC4   RESET     KEY16                                                       
          DELETE    WEBSCHA4,KEY16                                              
          RETURN
.
RLWBSC4   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     WEBSCHA4,KEY16;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:
                                   WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:
                                   WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:
                                   WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:
                                   WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:
                                   WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:
                                   WBSCSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBSC4   MOVE      ZERO,OVRCD                                                  
          READLKS   WEBSCHA4;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBSC4   MOVE      ZERO,OVRCD                                                  
          READLKP   WEBSCHA4;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBSC4   RESET     KEY16                                                       
          UNLOCK    WEBSCHA4                                                    
          RETURN
.
RSWBSC5   RESET     KEY34                                                       
          READ      WEBSCHA5,KEY34;;                                            
          RETURN
.
RAWBSC5   RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSCHA5,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSC5   RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSCHA5,KEY34;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:
                                   WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:
                                   WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:
                                   WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:
                                   WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:
                                   WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:
                                   WBSCSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBSC5   MOVE      ZERO,OVRCD                                                  
          READKS    WEBSCHA5;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBSC5   MOVE      ZERO,OVRCD                                                  
          READKP    WEBSCHA5;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBSC5   MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBSCHA5;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBSC5   RESET     KEY34                                                       
          WRITE     WEBSCHA5,KEY34;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:
                                   WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:
                                   WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:
                                   WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:
                                   WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:
                                   WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:
                                   WBSCSPAR                                     
          RETURN
.
DEWBSC5   RESET     KEY34                                                       
          DELETE    WEBSCHA5,KEY34                                              
          RETURN
.
RLWBSC5   RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READL     WEBSCHA5,KEY34;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:
                                   WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:
                                   WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:
                                   WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:
                                   WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:
                                   WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:
                                   WBSCSPAR                                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBSC5   MOVE      ZERO,OVRCD                                                  
          READLKS   WEBSCHA5;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBSC5   MOVE      ZERO,OVRCD                                                  
          READLKP   WEBSCHA5;WBSCSCHD,WBSCSTAT,WBSCSCDT,WBSCSCTM,WBSCACTV:      
                             WBSCUNIX,WBSCDSRP,WBSCRPID,WBSCUSER,WBSCRDTE:      
                             WBSCRTIM,WBSCSDAT,WBSCSTIM,WBSCSFLG,WBSCOTYP:      
                             WBSCNREC,WBSCRPRO,WBSCUTIM,WBSCPRIN,WBSCSPOO:      
                             WBSCNCOP,WBSCPREP,WBSCRDAT,WBSCREND,WBSCPERM:      
                             WBSCEXCP,WBSCHOSP,WBSCSITE,WBSCCDAT,WBSCCTIM:      
                             WBSCSPAR                                           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBSC5   RESET     KEY34                                                       
          UNLOCK    WEBSCHA5                                                    
          RETURN
.
