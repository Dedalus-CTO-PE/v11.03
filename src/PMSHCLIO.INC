.
. PMSHCLIO    
. --------
. Filename     : pmshclaf.dat
.
RSPMHCL1  RESET     KEY20                                                       
          READ      PMSHCLA1,KEY20;;                                            
          RETURN
.
RAPMHCL1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCLA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHCL1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCLA1,KEY20;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:
                                   PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:
                                   PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:
                                   PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHCL1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSHCLA1;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHCL1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSHCLA1;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHCL1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSHCLA1;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMHCL1  RESET     KEY20                                                       
          WRITE     PMSHCLA1,KEY20;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:
                                   PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:
                                   PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:
                                   PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR          
          RETURN
.
DEPMHCL1  RESET     KEY20                                                       
          DELETE    PMSHCLA1,KEY20                                              
          RETURN
.
RLPMHCL1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     PMSHCLA1,KEY20;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:
                                   PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:
                                   PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:
                                   PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMHCL1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSHCLA1;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMHCL1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSHCLA1;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMHCL1  RESET     KEY20                                                       
          UNLOCK    PMSHCLA1                                                    
          RETURN
.
RSPMHCL2  RESET     KEY20                                                       
          READ      PMSHCLA2,KEY20;;                                            
          RETURN
.
RAPMHCL2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCLA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHCL2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCLA2,KEY20;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:
                                   PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:
                                   PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:
                                   PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHCL2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSHCLA2;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHCL2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSHCLA2;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHCL2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSHCLA2;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMHCL2  RESET     KEY20                                                       
          WRITE     PMSHCLA2,KEY20;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:
                                   PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:
                                   PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:
                                   PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR          
          RETURN
.
DEPMHCL2  RESET     KEY20                                                       
          DELETE    PMSHCLA2,KEY20                                              
          RETURN
.
RLPMHCL2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     PMSHCLA2,KEY20;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:
                                   PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:
                                   PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:
                                   PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMHCL2  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSHCLA2;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMHCL2  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSHCLA2;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMHCL2  RESET     KEY20                                                       
          UNLOCK    PMSHCLA2                                                    
          RETURN
.
RSPMHCL3  RESET     KEY30                                                       
          READ      PMSHCLA3,KEY30;;                                            
          RETURN
.
RAPMHCL3  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCLA3,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHCL3  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCLA3,KEY30;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:
                                   PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:
                                   PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:
                                   PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHCL3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSHCLA3;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHCL3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSHCLA3;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHCL3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSHCLA3;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMHCL3  RESET     KEY30                                                       
          WRITE     PMSHCLA3,KEY30;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:
                                   PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:
                                   PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:
                                   PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR          
          RETURN
.
DEPMHCL3  RESET     KEY30                                                       
          DELETE    PMSHCLA3,KEY30                                              
          RETURN
.
RLPMHCL3  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READL     PMSHCLA3,KEY30;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:
                                   PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:
                                   PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:
                                   PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMHCL3  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSHCLA3;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMHCL3  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSHCLA3;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMHCL3  RESET     KEY30                                                       
          UNLOCK    PMSHCLA3                                                    
          RETURN
.
RSPMHCL4  RESET     KEY36                                                       
          READ      PMSHCLA4,KEY36;;                                            
          RETURN
.
RAPMHCL4  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCLA4,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHCL4  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCLA4,KEY36;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:
                                   PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:
                                   PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:
                                   PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHCL4  MOVE      ZERO,OVRCD                                                  
          READKS    PMSHCLA4;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHCL4  MOVE      ZERO,OVRCD                                                  
          READKP    PMSHCLA4;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHCL4  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSHCLA4;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMHCL4  RESET     KEY36                                                       
          WRITE     PMSHCLA4,KEY36;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:
                                   PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:
                                   PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:
                                   PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR          
          RETURN
.
DEPMHCL4  RESET     KEY36                                                       
          DELETE    PMSHCLA4,KEY36                                              
          RETURN
.
RLPMHCL4  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READL     PMSHCLA4,KEY36;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:
                                   PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:
                                   PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:
                                   PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMHCL4  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSHCLA4;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMHCL4  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSHCLA4;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMHCL4  RESET     KEY36                                                       
          UNLOCK    PMSHCLA4                                                    
          RETURN
.
RSPMHCL5  RESET     KEY36                                                       
          READ      PMSHCLA5,KEY36;;                                            
          RETURN
.
RAPMHCL5  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCLA5,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHCL5  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCLA5,KEY36;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:
                                   PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:
                                   PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:
                                   PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHCL5  MOVE      ZERO,OVRCD                                                  
          READKS    PMSHCLA5;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHCL5  MOVE      ZERO,OVRCD                                                  
          READKP    PMSHCLA5;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHCL5  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSHCLA5;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMHCL5  RESET     KEY36                                                       
          WRITE     PMSHCLA5,KEY36;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:
                                   PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:
                                   PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:
                                   PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR          
          RETURN
.
DEPMHCL5  RESET     KEY36                                                       
          DELETE    PMSHCLA5,KEY36                                              
          RETURN
.
RLPMHCL5  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READL     PMSHCLA5,KEY36;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:
                                   PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:
                                   PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:
                                   PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMHCL5  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSHCLA5;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMHCL5  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSHCLA5;PMHLHCPC,PMHLHCPR,PMHLTYPE,PMHLJPDT,PMHLLPDT:      
                             PMHLPRMK,PMHLPRV1,PMHLPRV2,PMHLPRV3,PMHLPRV4:      
                             PMHLPRV5,PMHLSTAT,PMHLCDTE,PMHLCTIM,PMHLWEBC:      
                             PMHLLUPD,PMHLLUPT,PMHLWEBU,PMHLSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMHCL5  RESET     KEY36                                                       
          UNLOCK    PMSHCLA5                                                    
          RETURN
.
