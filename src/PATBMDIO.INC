.
. PATBMDIO    
. --------
. Filename     : patbmdaf.dat
.
RSPTBMD1  RESET     KEY30                                                       
          READ      PATBMDA1,KEY30;;                                            
          RETURN
.
RAPTBMD1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PATBMDA1,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTBMD1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PATBMDA1,KEY30;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTBMD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATBMDA1;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:      
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTBMD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATBMDA1;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:      
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTBMD1                                                                        
          UPDATE    PATBMDA1;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:      
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTBMD1  RESET     KEY30                                                       
          WRITE     PATBMDA1,KEY30;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          RETURN
.
DEPTBMD1  RESET     KEY30                                                       
          DELETE    PATBMDA1,KEY30                                              
          RETURN
.
RLPTBMD1  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READL     PATBMDA1,KEY30;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTBMD1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATBMDA1;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:      
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTBMD1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATBMDA1;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:      
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTBMD1  RESET     KEY30                                                       
          UNLOCK    PATBMDA1                                                    
          RETURN
.
RSPTBMD2  RESET     KEY30                                                       
          READ      PATBMDA2,KEY30;;                                            
          RETURN
.
RAPTBMD2  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PATBMDA2,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTBMD2  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PATBMDA2,KEY30;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTBMD2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATBMDA2;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:      
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTBMD2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATBMDA2;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:      
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTBMD2                                                                        
          UPDATE    PATBMDA2;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:      
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTBMD2  RESET     KEY30                                                       
          WRITE     PATBMDA2,KEY30;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          RETURN
.
DEPTBMD2  RESET     KEY30                                                       
          DELETE    PATBMDA2,KEY30                                              
          RETURN
.
RLPTBMD2  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READL     PATBMDA2,KEY30;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTBMD2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATBMDA2;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:      
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTBMD2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATBMDA2;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:      
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTBMD2  RESET     KEY30                                                       
          UNLOCK    PATBMDA2                                                    
          RETURN
.
RSPTBMD3  RESET     KEY30                                                       
          READ      PATBMDA3,KEY30;;                                            
          RETURN
.
RAPTBMD3  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PATBMDA3,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTBMD3  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PATBMDA3,KEY30;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTBMD3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATBMDA3;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:      
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTBMD3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATBMDA3;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:      
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTBMD3                                                                        
          UPDATE    PATBMDA3;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:      
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTBMD3  RESET     KEY30                                                       
          WRITE     PATBMDA3,KEY30;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          RETURN
.
DEPTBMD3  RESET     KEY30                                                       
          DELETE    PATBMDA3,KEY30                                              
          RETURN
.
RLPTBMD3  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READL     PATBMDA3,KEY30;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTBMD3                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATBMDA3;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:      
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTBMD3                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATBMDA3;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:      
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTBMD3  RESET     KEY30                                                       
          UNLOCK    PATBMDA3                                                    
          RETURN
.
RSPTBMD4  RESET     KEY30                                                       
          READ      PATBMDA4,KEY30;;                                            
          RETURN
.
RAPTBMD4  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PATBMDA4,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTBMD4  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      PATBMDA4,KEY30;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTBMD4                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATBMDA4;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:      
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTBMD4                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATBMDA4;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:      
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTBMD4                                                                        
          UPDATE    PATBMDA4;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:      
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTBMD4  RESET     KEY30                                                       
          WRITE     PATBMDA4,KEY30;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          RETURN
.
DEPTBMD4  RESET     KEY30                                                       
          DELETE    PATBMDA4,KEY30                                              
          RETURN
.
RLPTBMD4  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READL     PATBMDA4,KEY30;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTBMD4                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATBMDA4;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:      
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTBMD4                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATBMDA4;PTBDWARD,PTBDWBED,PTBDDATE,PTBDADTM,PTBDLOSM:      
                        PTBDLOSD,PTBDOPPE,PTBDADMN,PTBDSTAT,PTBDOVER,PTBDBRQN:  
                        PTBDSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTBMD4  RESET     KEY30                                                       
          UNLOCK    PATBMDA4                                                    
          RETURN
.
