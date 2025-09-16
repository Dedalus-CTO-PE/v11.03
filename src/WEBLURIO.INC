.
. WEBLURIO    
. --------
. Filename     : webluraf.dat
.
RSWBLUR1  RESET     KEY10                                                       
          READ      WEBLURA1,KEY10;;                                            
          RETURN
.
RAWBLUR1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      WEBLURA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBLUR1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      WEBLURA1,KEY10;WBLRUID,WBLRUR01,WBLRVS01,WBLRUR02,WBLRVS02: 
                        WBLRUR03,WBLRVS03,WBLRUR04,WBLRVS04,WBLRUR05,WBLRVS05:  
                        WBLRUR06,WBLRVS06,WBLRUR07,WBLRVS07,WBLRUR08,WBLRVS08:  
                        WBLRUR09,WBLRVS09,WBLRUR10,WBLRVS10,WBLRUR11,WBLRVS11:  
                        WBLRUR12,WBLRVS12,WBLRUR13,WBLRVS13,WBLRUR14,WBLRVS14:  
                        WBLRUR15,WBLRVS15,WBLRUR16,WBLRVS16,WBLRUR17,WBLRVS17:  
                        WBLRUR18,WBLRVS18,WBLRUR19,WBLRVS19,WBLRUR20,WBLRVS20:  
                        WBLRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBLUR1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WEBLURA1;WBLRUID,WBLRUR01,WBLRVS01,WBLRUR02,WBLRVS02:       
                        WBLRUR03,WBLRVS03,WBLRUR04,WBLRVS04,WBLRUR05,WBLRVS05:  
                        WBLRUR06,WBLRVS06,WBLRUR07,WBLRVS07,WBLRUR08,WBLRVS08:  
                        WBLRUR09,WBLRVS09,WBLRUR10,WBLRVS10,WBLRUR11,WBLRVS11:  
                        WBLRUR12,WBLRVS12,WBLRUR13,WBLRVS13,WBLRUR14,WBLRVS14:  
                        WBLRUR15,WBLRVS15,WBLRUR16,WBLRVS16,WBLRUR17,WBLRVS17:  
                        WBLRUR18,WBLRVS18,WBLRUR19,WBLRVS19,WBLRUR20,WBLRVS20:  
                        WBLRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBLUR1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WEBLURA1;WBLRUID,WBLRUR01,WBLRVS01,WBLRUR02,WBLRVS02:       
                        WBLRUR03,WBLRVS03,WBLRUR04,WBLRVS04,WBLRUR05,WBLRVS05:  
                        WBLRUR06,WBLRVS06,WBLRUR07,WBLRVS07,WBLRUR08,WBLRVS08:  
                        WBLRUR09,WBLRVS09,WBLRUR10,WBLRVS10,WBLRUR11,WBLRVS11:  
                        WBLRUR12,WBLRVS12,WBLRUR13,WBLRVS13,WBLRUR14,WBLRVS14:  
                        WBLRUR15,WBLRVS15,WBLRUR16,WBLRVS16,WBLRUR17,WBLRVS17:  
                        WBLRUR18,WBLRVS18,WBLRUR19,WBLRVS19,WBLRUR20,WBLRVS20:  
                        WBLRSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBLUR1                                                                        
          UPDATE    WEBLURA1;WBLRUID,WBLRUR01,WBLRVS01,WBLRUR02,WBLRVS02:       
                        WBLRUR03,WBLRVS03,WBLRUR04,WBLRVS04,WBLRUR05,WBLRVS05:  
                        WBLRUR06,WBLRVS06,WBLRUR07,WBLRVS07,WBLRUR08,WBLRVS08:  
                        WBLRUR09,WBLRVS09,WBLRUR10,WBLRVS10,WBLRUR11,WBLRVS11:  
                        WBLRUR12,WBLRVS12,WBLRUR13,WBLRVS13,WBLRUR14,WBLRVS14:  
                        WBLRUR15,WBLRVS15,WBLRUR16,WBLRVS16,WBLRUR17,WBLRVS17:  
                        WBLRUR18,WBLRVS18,WBLRUR19,WBLRVS19,WBLRUR20,WBLRVS20:  
                        WBLRSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBLUR1  RESET     KEY10                                                       
          WRITE     WEBLURA1,KEY10;WBLRUID,WBLRUR01,WBLRVS01,WBLRUR02,WBLRVS02: 
                        WBLRUR03,WBLRVS03,WBLRUR04,WBLRVS04,WBLRUR05,WBLRVS05:  
                        WBLRUR06,WBLRVS06,WBLRUR07,WBLRVS07,WBLRUR08,WBLRVS08:  
                        WBLRUR09,WBLRVS09,WBLRUR10,WBLRVS10,WBLRUR11,WBLRVS11:  
                        WBLRUR12,WBLRVS12,WBLRUR13,WBLRVS13,WBLRUR14,WBLRVS14:  
                        WBLRUR15,WBLRVS15,WBLRUR16,WBLRVS16,WBLRUR17,WBLRVS17:  
                        WBLRUR18,WBLRVS18,WBLRUR19,WBLRVS19,WBLRUR20,WBLRVS20:  
                        WBLRSPAR                                                
          RETURN
.
DEWBLUR1  RESET     KEY10                                                       
          DELETE    WEBLURA1,KEY10                                              
          RETURN
.
RLWBLUR1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     WEBLURA1,KEY10;WBLRUID,WBLRUR01,WBLRVS01,WBLRUR02,WBLRVS02: 
                        WBLRUR03,WBLRVS03,WBLRUR04,WBLRVS04,WBLRUR05,WBLRVS05:  
                        WBLRUR06,WBLRVS06,WBLRUR07,WBLRVS07,WBLRUR08,WBLRVS08:  
                        WBLRUR09,WBLRVS09,WBLRUR10,WBLRVS10,WBLRUR11,WBLRVS11:  
                        WBLRUR12,WBLRVS12,WBLRUR13,WBLRVS13,WBLRUR14,WBLRVS14:  
                        WBLRUR15,WBLRVS15,WBLRUR16,WBLRVS16,WBLRUR17,WBLRVS17:  
                        WBLRUR18,WBLRVS18,WBLRUR19,WBLRVS19,WBLRUR20,WBLRVS20:  
                        WBLRSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBLUR1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WEBLURA1;WBLRUID,WBLRUR01,WBLRVS01,WBLRUR02,WBLRVS02:       
                        WBLRUR03,WBLRVS03,WBLRUR04,WBLRVS04,WBLRUR05,WBLRVS05:  
                        WBLRUR06,WBLRVS06,WBLRUR07,WBLRVS07,WBLRUR08,WBLRVS08:  
                        WBLRUR09,WBLRVS09,WBLRUR10,WBLRVS10,WBLRUR11,WBLRVS11:  
                        WBLRUR12,WBLRVS12,WBLRUR13,WBLRVS13,WBLRUR14,WBLRVS14:  
                        WBLRUR15,WBLRVS15,WBLRUR16,WBLRVS16,WBLRUR17,WBLRVS17:  
                        WBLRUR18,WBLRVS18,WBLRUR19,WBLRVS19,WBLRUR20,WBLRVS20:  
                        WBLRSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBLUR1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WEBLURA1;WBLRUID,WBLRUR01,WBLRVS01,WBLRUR02,WBLRVS02:       
                        WBLRUR03,WBLRVS03,WBLRUR04,WBLRVS04,WBLRUR05,WBLRVS05:  
                        WBLRUR06,WBLRVS06,WBLRUR07,WBLRVS07,WBLRUR08,WBLRVS08:  
                        WBLRUR09,WBLRVS09,WBLRUR10,WBLRVS10,WBLRUR11,WBLRVS11:  
                        WBLRUR12,WBLRVS12,WBLRUR13,WBLRVS13,WBLRUR14,WBLRVS14:  
                        WBLRUR15,WBLRVS15,WBLRUR16,WBLRVS16,WBLRUR17,WBLRVS17:  
                        WBLRUR18,WBLRVS18,WBLRUR19,WBLRVS19,WBLRUR20,WBLRVS20:  
                        WBLRSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBLUR1  RESET     KEY10                                                       
          UNLOCK    WEBLURA1                                                    
          RETURN
.
