.
. WEBHSPIO    
. --------
. Filename     : webhspaf.dat
.
RSWBHSP1  RESET     KEY13                                                       
          READ      WEBHSPA1,KEY13;;                                            
          RETURN
.
RAWBHSP1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      WEBHSPA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBHSP1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      WEBHSPA1,KEY13;WBHOUSID,WBHOHOSP,WBHOWARD,WBHOSITE,WBHOPRIN:
                        WBHOSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBHSP1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBHSPA1;WBHOUSID,WBHOHOSP,WBHOWARD,WBHOSITE,WBHOPRIN:      
                        WBHOSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBHSP1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBHSPA1;WBHOUSID,WBHOHOSP,WBHOWARD,WBHOSITE,WBHOPRIN:      
                        WBHOSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBHSP1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBHSPA1;WBHOUSID,WBHOHOSP,WBHOWARD,WBHOSITE,WBHOPRIN:      
                        WBHOSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWBHSP1  RESET     KEY13                                                       
          WRITE     WEBHSPA1,KEY13;WBHOUSID,WBHOHOSP,WBHOWARD,WBHOSITE,WBHOPRIN:
                        WBHOSPAR                                                
          RETURN
.
DEWBHSP1  RESET     KEY13                                                       
          DELETE    WEBHSPA1,KEY13                                              
          RETURN
.
RLWBHSP1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     WEBHSPA1,KEY13;WBHOUSID,WBHOHOSP,WBHOWARD,WBHOSITE,WBHOPRIN:
                        WBHOSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWBHSP1  MOVE      ZERO,OVRCD                                                  
          READLKS   WEBHSPA1;WBHOUSID,WBHOHOSP,WBHOWARD,WBHOSITE,WBHOPRIN:      
                        WBHOSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWBHSP1  MOVE      ZERO,OVRCD                                                  
          READLKP   WEBHSPA1;WBHOUSID,WBHOHOSP,WBHOWARD,WBHOSITE,WBHOPRIN:      
                        WBHOSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWBHSP1  RESET     KEY13                                                       
          UNLOCK    WEBHSPA1                                                    
          RETURN
.
