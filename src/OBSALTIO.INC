.
. OBSALTIO    
. --------
. Filename     : obsaltaf.dat
.
RSOBAL1   RESET     KEY10                                                       
          READ      OBSALTA1,KEY10;;                                            
          RETURN
.
RAOBAL1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      OBSALTA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBAL1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      OBSALTA1,KEY10;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:     
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBAL1                                                                         
          MOVE      ZERO,OVRCD
          READKS    OBSALTA1;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:           
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBAL1                                                                         
          MOVE      ZERO,OVRCD
          READKP    OBSALTA1;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:           
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBAL1                                                                         
          UPDATE    OBSALTA1;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:           
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROBAL1   RESET     KEY10                                                       
          WRITE     OBSALTA1,KEY10;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:     
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          RETURN
.
DEOBAL1   RESET     KEY10                                                       
          DELETE    OBSALTA1,KEY10                                              
          RETURN
.
RLOBAL1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     OBSALTA1,KEY10;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:     
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOBAL1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   OBSALTA1;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:           
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOBAL1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   OBSALTA1;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:           
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOBAL1   RESET     KEY10                                                       
          UNLOCK    OBSALTA1                                                    
          RETURN
.
RSOBAL2   RESET     KEY45                                                       
          READ      OBSALTA2,KEY45;;                                            
          RETURN
.
RAOBAL2   RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      OBSALTA2,KEY45;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBAL2   RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READ      OBSALTA2,KEY45;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:     
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBAL2                                                                         
          MOVE      ZERO,OVRCD
          READKS    OBSALTA2;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:           
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBAL2                                                                         
          MOVE      ZERO,OVRCD
          READKP    OBSALTA2;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:           
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBAL2                                                                         
          UPDATE    OBSALTA2;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:           
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROBAL2   RESET     KEY45                                                       
          WRITE     OBSALTA2,KEY45;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:     
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          RETURN
.
DEOBAL2   RESET     KEY45                                                       
          DELETE    OBSALTA2,KEY45                                              
          RETURN
.
RLOBAL2   RESET     KEY45                                                       
          MOVE      ZERO,OVRCD
          READL     OBSALTA2,KEY45;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:     
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOBAL2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   OBSALTA2;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:           
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOBAL2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   OBSALTA2;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:           
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOBAL2   RESET     KEY45                                                       
          UNLOCK    OBSALTA2                                                    
          RETURN
.
RSOBAL3   RESET     KEY48                                                       
          READ      OBSALTA3,KEY48;;                                            
          RETURN
.
RAOBAL3   RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READ      OBSALTA3,KEY48;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBAL3   RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READ      OBSALTA3,KEY48;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:     
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBAL3                                                                         
          MOVE      ZERO,OVRCD
          READKS    OBSALTA3;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:           
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBAL3                                                                         
          MOVE      ZERO,OVRCD
          READKP    OBSALTA3;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:           
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBAL3                                                                         
          UPDATE    OBSALTA3;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:           
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROBAL3   RESET     KEY48                                                       
          WRITE     OBSALTA3,KEY48;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:     
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          RETURN
.
DEOBAL3   RESET     KEY48                                                       
          DELETE    OBSALTA3,KEY48                                              
          RETURN
.
RLOBAL3   RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READL     OBSALTA3,KEY48;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:     
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOBAL3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   OBSALTA3;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:           
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOBAL3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   OBSALTA3;OBALCOD,OBALDSC,OBALTYP,OBALISL,OBALDSL:           
                        OBALDAL,OBALDCD,OBALICD,OBALLUS,OBALLDT,OBALLTM:        
                        OBALRF1,OBALRF2,OBALYN1,OBALYN2,OBALSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOBAL3   RESET     KEY48                                                       
          UNLOCK    OBSALTA3                                                    
          RETURN
.
