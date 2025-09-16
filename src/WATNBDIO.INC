.
. WATNBDIO    
. --------
. Filename     : watnbdaf.dat
.
RSWTNBD1  RESET     KEY31                                                       
          READ      WATNBDA1,KEY31;;                                            
          RETURN
.
RAWTNBD1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      WATNBDA1,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTNBD1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      WATNBDA1,KEY31;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTNBD1  MOVE      ZERO,OVRCD                                                  
          READKS    WATNBDA1;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:      
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTNBD1  MOVE      ZERO,OVRCD                                                  
          READKP    WATNBDA1;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:      
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTNBD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WATNBDA1;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:      
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTNBD1  RESET     KEY31                                                       
          WRITE     WATNBDA1,KEY31;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          RETURN
.
DEWTNBD1  RESET     KEY31                                                       
          DELETE    WATNBDA1,KEY31                                              
          RETURN
.
RLWTNBD1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READL     WATNBDA1,KEY31;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTNBD1  MOVE      ZERO,OVRCD                                                  
          READLKS   WATNBDA1;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:      
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTNBD1  MOVE      ZERO,OVRCD                                                  
          READLKP   WATNBDA1;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:      
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTNBD1  RESET     KEY31                                                       
          UNLOCK    WATNBDA1                                                    
          RETURN
.
RSWTNBD2  RESET     KEY32                                                       
          READ      WATNBDA2,KEY32;;                                            
          RETURN
.
RAWTNBD2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      WATNBDA2,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTNBD2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      WATNBDA2,KEY32;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTNBD2  MOVE      ZERO,OVRCD                                                  
          READKS    WATNBDA2;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:      
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTNBD2  MOVE      ZERO,OVRCD                                                  
          READKP    WATNBDA2;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:      
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTNBD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WATNBDA2;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:      
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTNBD2  RESET     KEY32                                                       
          WRITE     WATNBDA2,KEY32;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          RETURN
.
DEWTNBD2  RESET     KEY32                                                       
          DELETE    WATNBDA2,KEY32                                              
          RETURN
.
RLWTNBD2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READL     WATNBDA2,KEY32;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTNBD2  MOVE      ZERO,OVRCD                                                  
          READLKS   WATNBDA2;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:      
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTNBD2  MOVE      ZERO,OVRCD                                                  
          READLKP   WATNBDA2;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:      
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTNBD2  RESET     KEY32                                                       
          UNLOCK    WATNBDA2                                                    
          RETURN
.
RSWTNBD3  RESET     KEY33                                                       
          READ      WATNBDA3,KEY33;;                                            
          RETURN
.
RAWTNBD3  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      WATNBDA3,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTNBD3  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      WATNBDA3,KEY33;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTNBD3  MOVE      ZERO,OVRCD                                                  
          READKS    WATNBDA3;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:      
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTNBD3  MOVE      ZERO,OVRCD                                                  
          READKP    WATNBDA3;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:      
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTNBD3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WATNBDA3;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:      
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTNBD3  RESET     KEY33                                                       
          WRITE     WATNBDA3,KEY33;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          RETURN
.
DEWTNBD3  RESET     KEY33                                                       
          DELETE    WATNBDA3,KEY33                                              
          RETURN
.
RLWTNBD3  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READL     WATNBDA3,KEY33;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTNBD3  MOVE      ZERO,OVRCD                                                  
          READLKS   WATNBDA3;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:      
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTNBD3  MOVE      ZERO,OVRCD                                                  
          READLKP   WATNBDA3;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:      
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTNBD3  RESET     KEY33                                                       
          UNLOCK    WATNBDA3                                                    
          RETURN
.
RSWTNBD4  RESET     KEY31                                                       
          READ      WATNBDA4,KEY31;;                                            
          RETURN
.
RAWTNBD4  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      WATNBDA4,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTNBD4  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      WATNBDA4,KEY31;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTNBD4  MOVE      ZERO,OVRCD                                                  
          READKS    WATNBDA4;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:      
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTNBD4  MOVE      ZERO,OVRCD                                                  
          READKP    WATNBDA4;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:      
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTNBD4  MOVE      ZERO,OVRCD                                                  
          UPDATE    WATNBDA4;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:      
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTNBD4  RESET     KEY31                                                       
          WRITE     WATNBDA4,KEY31;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          RETURN
.
DEWTNBD4  RESET     KEY31                                                       
          DELETE    WATNBDA4,KEY31                                              
          RETURN
.
RLWTNBD4  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READL     WATNBDA4,KEY31;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTNBD4  MOVE      ZERO,OVRCD                                                  
          READLKS   WATNBDA4;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:      
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTNBD4  MOVE      ZERO,OVRCD                                                  
          READLKP   WATNBDA4;WTNDLBID,WTNDPNHI,WTNDBSCD,WTNDBSDT,WTNDFACI:      
                        WTNDXDAT,WTNDBTCH,WTNDSTAT,WTNDLINE,WTNDERRC,WTNDAKRT:  
                        WTNDMSGN,WTNDMSGT,WTNDUSRS,WTNDUDAT,WTNDUTIM,WTNDRDET:  
                        WTNDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTNBD4  RESET     KEY31                                                       
          UNLOCK    WATNBDA4                                                    
          RETURN
.
