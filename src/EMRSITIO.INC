.
. EMRSITIO    
. --------
. Filename     : emrsitaf.dat
.
RSEMSIT1  RESET     KEY3                                                        
          READ      EMRSITA1,KEY3;;                                             
          RETURN
.
RAEMSIT1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      EMRSITA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMSIT1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      EMRSITA1,KEY3;EMSTSCOD,EMSTDESC,EMSTHRPW,EMSTDPTY,EMSTSPCO: 
                        EMSTSPNO,EMSTHSNO,EMSTDLOC,EMSTDRLC,EMSTDRES,EMSTEDST:
                        EMSTEDFP,EMSTACTV,EMSTPPRV,EMSTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMSIT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRSITA1;EMSTSCOD,EMSTDESC,EMSTHRPW,EMSTDPTY,EMSTSPCO:      
                        EMSTSPNO,EMSTHSNO,EMSTDLOC,EMSTDRLC,EMSTDRES,EMSTEDST:
                        EMSTEDFP,EMSTACTV,EMSTPPRV,EMSTSPAR                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMSIT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRSITA1;EMSTSCOD,EMSTDESC,EMSTHRPW,EMSTDPTY,EMSTSPCO:      
                        EMSTSPNO,EMSTHSNO,EMSTDLOC,EMSTDRLC,EMSTDRES,EMSTEDST:
                        EMSTEDFP,EMSTACTV,EMSTPPRV,EMSTSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMSIT1                                                                        
          UPDATE    EMRSITA1;EMSTSCOD,EMSTDESC,EMSTHRPW,EMSTDPTY,EMSTSPCO:      
                        EMSTSPNO,EMSTHSNO,EMSTDLOC,EMSTDRLC,EMSTDRES,EMSTEDST:
                        EMSTEDFP,EMSTACTV,EMSTPPRV,EMSTSPAR 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMSIT1  RESET     KEY3                                                        
          WRITE     EMRSITA1,KEY3;EMSTSCOD,EMSTDESC,EMSTHRPW,EMSTDPTY,EMSTSPCO: 
                        EMSTSPNO,EMSTHSNO,EMSTDLOC,EMSTDRLC,EMSTDRES,EMSTEDST:
                        EMSTEDFP,EMSTACTV,EMSTPPRV,EMSTSPAR
          RETURN
.
DEEMSIT1  RESET     KEY3                                                        
          DELETE    EMRSITA1,KEY3                                               
          RETURN
.
RLEMSIT1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     EMRSITA1,KEY3;EMSTSCOD,EMSTDESC,EMSTHRPW,EMSTDPTY,EMSTSPCO: 
                        EMSTSPNO,EMSTHSNO,EMSTDLOC,EMSTDRLC,EMSTDRES,EMSTEDST:
                        EMSTEDFP,EMSTACTV,EMSTPPRV,EMSTSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMSIT1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRSITA1;EMSTSCOD,EMSTDESC,EMSTHRPW,EMSTDPTY,EMSTSPCO:      
                        EMSTSPNO,EMSTHSNO,EMSTDLOC,EMSTDRLC,EMSTDRES,EMSTEDST:
                        EMSTEDFP,EMSTACTV,EMSTPPRV,EMSTSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMSIT1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRSITA1;EMSTSCOD,EMSTDESC,EMSTHRPW,EMSTDPTY,EMSTSPCO:      
                        EMSTSPNO,EMSTHSNO,EMSTDLOC,EMSTDRLC,EMSTDRES,EMSTEDST:
                        EMSTEDFP,EMSTACTV,EMSTPPRV,EMSTSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMSIT1  RESET     KEY3                                                        
          UNLOCK    EMRSITA1                                                    
          RETURN
.
RSEMSIT2  RESET     KEY28                                                       
          READ      EMRSITA2,KEY28;;                                            
          RETURN
.
RAEMSIT2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      EMRSITA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMSIT2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      EMRSITA2,KEY28;EMSTSCOD,EMSTDESC,EMSTHRPW,EMSTDPTY,EMSTSPCO:
                        EMSTSPNO,EMSTHSNO,EMSTDLOC,EMSTDRLC,EMSTDRES,EMSTEDST:
                        EMSTEDFP,EMSTACTV,EMSTPPRV,EMSTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKEMSIT2                                                                        
          MOVE      ZERO,OVRCD
          READKS    EMRSITA2;EMSTSCOD,EMSTDESC,EMSTHRPW,EMSTDPTY,EMSTSPCO:      
                        EMSTSPNO,EMSTHSNO,EMSTDLOC,EMSTDRLC,EMSTDRES,EMSTEDST:
                        EMSTEDFP,EMSTACTV,EMSTPPRV,EMSTSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPEMSIT2                                                                        
          MOVE      ZERO,OVRCD
          READKP    EMRSITA2;EMSTSCOD,EMSTDESC,EMSTHRPW,EMSTDPTY,EMSTSPCO:      
                        EMSTSPNO,EMSTHSNO,EMSTDLOC,EMSTDRLC,EMSTDRES,EMSTEDST:
                        EMSTEDFP,EMSTACTV,EMSTPPRV,EMSTSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPEMSIT2                                                                        
          UPDATE    EMRSITA2;EMSTSCOD,EMSTDESC,EMSTHRPW,EMSTDPTY,EMSTSPCO:      
                        EMSTSPNO,EMSTHSNO,EMSTDLOC,EMSTDRLC,EMSTDRES,EMSTEDST:
                        EMSTEDFP,EMSTACTV,EMSTPPRV,EMSTSPAR
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMSIT2  RESET     KEY28                                                       
          WRITE     EMRSITA2,KEY28;EMSTSCOD,EMSTDESC,EMSTHRPW,EMSTDPTY,EMSTSPCO:
                        EMSTSPNO,EMSTHSNO,EMSTDLOC,EMSTDRLC,EMSTDRES,EMSTEDST:
                        EMSTEDFP,EMSTACTV,EMSTPPRV,EMSTSPAR
          RETURN
.
DEEMSIT2  RESET     KEY28                                                       
          DELETE    EMRSITA2,KEY28                                              
          RETURN
.
RLEMSIT2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     EMRSITA2,KEY28;EMSTSCOD,EMSTDESC,EMSTHRPW,EMSTDPTY,EMSTSPCO:
                        EMSTSPNO,EMSTHSNO,EMSTDLOC,EMSTDRLC,EMSTDRES,EMSTEDST:
                        EMSTEDFP,EMSTACTV,EMSTPPRV,EMSTSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLEMSIT2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   EMRSITA2;EMSTSCOD,EMSTDESC,EMSTHRPW,EMSTDPTY,EMSTSPCO:      
                        EMSTSPNO,EMSTHSNO,EMSTDLOC,EMSTDRLC,EMSTDRES,EMSTEDST:
                        EMSTEDFP,EMSTACTV,EMSTPPRV,EMSTSPAR   
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLEMSIT2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   EMRSITA2;EMSTSCOD,EMSTDESC,EMSTHRPW,EMSTDPTY,EMSTSPCO:      
                        EMSTSPNO,EMSTHSNO,EMSTDLOC,EMSTDRLC,EMSTDRES,EMSTEDST:
                        EMSTEDFP,EMSTACTV,EMSTPPRV,EMSTSPAR
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUEMSIT2  RESET     KEY28                                                       
          UNLOCK    EMRSITA2                                                    
          RETURN
.
