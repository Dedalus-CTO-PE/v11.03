.
. RCPBDTIO    
. --------
. Filename     : rcpbdtaf.dat
.
RSRCBDT1  RESET     KEY15                                                       
          READ      RCPBDTA1,KEY15;;                                            
          RETURN
.
RARCBDT1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      RCPBDTA1,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCBDT1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      RCPBDTA1,KEY15;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCBDT1  MOVE      ZERO,OVRCD                                                  
          READKS    RCPBDTA1;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:      
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCBDT1  MOVE      ZERO,OVRCD                                                  
          READKP    RCPBDTA1;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:      
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCBDT1  MOVE      ZERO,OVRCD                                                  
          UPDATE    RCPBDTA1;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:      
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRCBDT1  RESET     KEY15                                                       
          WRITE     RCPBDTA1,KEY15;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          RETURN
.
DERCBDT1  RESET     KEY15                                                       
          DELETE    RCPBDTA1,KEY15                                              
          RETURN
.
RLRCBDT1  RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READL     RCPBDTA1,KEY15;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRCBDT1  MOVE      ZERO,OVRCD                                                  
          READLKS   RCPBDTA1;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:      
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRCBDT1  MOVE      ZERO,OVRCD                                                  
          READLKP   RCPBDTA1;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:      
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURCBDT1  RESET     KEY15                                                       
          UNLOCK    RCPBDTA1                                                    
          RETURN
.
RSRCBDT2  RESET     KEY23                                                       
          READ      RCPBDTA2,KEY23;;                                            
          RETURN
.
RARCBDT2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      RCPBDTA2,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCBDT2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      RCPBDTA2,KEY23;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCBDT2  MOVE      ZERO,OVRCD                                                  
          READKS    RCPBDTA2;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:      
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCBDT2  MOVE      ZERO,OVRCD                                                  
          READKP    RCPBDTA2;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:      
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCBDT2  MOVE      ZERO,OVRCD                                                  
          UPDATE    RCPBDTA2;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:      
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRCBDT2  RESET     KEY23                                                       
          WRITE     RCPBDTA2,KEY23;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          RETURN
.
DERCBDT2  RESET     KEY23                                                       
          DELETE    RCPBDTA2,KEY23                                              
          RETURN
.
RLRCBDT2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READL     RCPBDTA2,KEY23;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRCBDT2  MOVE      ZERO,OVRCD                                                  
          READLKS   RCPBDTA2;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:      
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRCBDT2  MOVE      ZERO,OVRCD                                                  
          READLKP   RCPBDTA2;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:      
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURCBDT2  RESET     KEY23                                                       
          UNLOCK    RCPBDTA2                                                    
          RETURN
.
RSRCBDT3  RESET     KEY27                                                       
          READ      RCPBDTA3,KEY27;;                                            
          RETURN
.
RARCBDT3  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      RCPBDTA3,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRCBDT3  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      RCPBDTA3,KEY27;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRCBDT3  MOVE      ZERO,OVRCD                                                  
          READKS    RCPBDTA3;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:      
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRCBDT3  MOVE      ZERO,OVRCD                                                  
          READKP    RCPBDTA3;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:      
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRCBDT3  MOVE      ZERO,OVRCD                                                  
          UPDATE    RCPBDTA3;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:      
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRCBDT3  RESET     KEY27                                                       
          WRITE     RCPBDTA3,KEY27;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          RETURN
.
DERCBDT3  RESET     KEY27                                                       
          DELETE    RCPBDTA3,KEY27                                              
          RETURN
.
RLRCBDT3  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     RCPBDTA3,KEY27;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRCBDT3  MOVE      ZERO,OVRCD                                                  
          READLKS   RCPBDTA3;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:      
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRCBDT3  MOVE      ZERO,OVRCD                                                  
          READLKP   RCPBDTA3;RCBDTDAT,RCBDRECN,RCBDUNIQ,RCBDMHOS,RCBDMDHS:      
                        RCBDPTYP,RCBDPAMT,RCBDPAYD,RCBDCHQN,RCBDDRAW,RCBDBANK:  
                        RCBDBRCH,RCBDCRDT,RCBDSTRF,RCBDEFTT,RCBDCDAT,RCBDCTIM:  
                        RCBDCUID,RCBDUDAT,RCBDUTIM,RCBDUUID,RCBDPCOD,RCBDSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURCBDT3  RESET     KEY27                                                       
          UNLOCK    RCPBDTA3                                                    
          RETURN
.
