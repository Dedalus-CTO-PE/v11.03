.
. RESCTAIO    
. --------
. Filename     : resctaaf.dat
.
RSRECT1   RESET     KEY32                                                       
          READ      RESCTAA1,KEY32;;                                            
          RETURN
.
RARECT1   RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      RESCTAA1,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDRECT1   RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      RESCTAA1,KEY32;RECTLAB,RECTSEG,RECTFLD,RECTSYS,RECTCOD:     
                        RECTDES,RECTSLV,RECTSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKRECT1                                                                         
          MOVE      ZERO,OVRCD
          READKS    RESCTAA1;RECTLAB,RECTSEG,RECTFLD,RECTSYS,RECTCOD:           
                        RECTDES,RECTSLV,RECTSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPRECT1                                                                         
          MOVE      ZERO,OVRCD
          READKP    RESCTAA1;RECTLAB,RECTSEG,RECTFLD,RECTSYS,RECTCOD:           
                        RECTDES,RECTSLV,RECTSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPRECT1                                                                         
          UPDATE    RESCTAA1;RECTLAB,RECTSEG,RECTFLD,RECTSYS,RECTCOD:           
                        RECTDES,RECTSLV,RECTSPA                                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRRECT1   RESET     KEY32                                                       
          WRITE     RESCTAA1,KEY32;RECTLAB,RECTSEG,RECTFLD,RECTSYS,RECTCOD:     
                        RECTDES,RECTSLV,RECTSPA                                 
          RETURN
.
DERECT1   RESET     KEY32                                                       
          DELETE    RESCTAA1,KEY32                                              
          RETURN
.
RLRECT1   RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READL     RESCTAA1,KEY32;RECTLAB,RECTSEG,RECTFLD,RECTSYS,RECTCOD:     
                        RECTDES,RECTSLV,RECTSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLRECT1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   RESCTAA1;RECTLAB,RECTSEG,RECTFLD,RECTSYS,RECTCOD:           
                        RECTDES,RECTSLV,RECTSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLRECT1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   RESCTAA1;RECTLAB,RECTSEG,RECTFLD,RECTSYS,RECTCOD:           
                        RECTDES,RECTSLV,RECTSPA                                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UURECT1   RESET     KEY32                                                       
          UNLOCK    RESCTAA1                                                    
          RETURN
.
