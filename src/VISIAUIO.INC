.
. VISIAUIO    
. --------
. Filename     : visiauaf.dat
.
RSVSIAU1  RESET     KEY25                                                       
          READ      VISIAUA1,KEY25;;                                            
          RETURN
.
RAVSIAU1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      VISIAUA1,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDVSIAU1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      VISIAUA1,KEY25;VSIACDAT,VSIACTIM,VSIARTYP,VSIAVISN,VSIADATE:
                        VSIATIME,VSIATYPE,VSIASUBK,VSIAWUID,VSIALNG1,VSIALNG2:  
                        VSIALNG3,VSIANOTF,VSIACONF,VSIASPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKVSIAU1  MOVE      ZERO,OVRCD                                                  
          READKS    VISIAUA1;VSIACDAT,VSIACTIM,VSIARTYP,VSIAVISN,VSIADATE:      
                        VSIATIME,VSIATYPE,VSIASUBK,VSIAWUID,VSIALNG1,VSIALNG2:  
                        VSIALNG3,VSIANOTF,VSIACONF,VSIASPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPVSIAU1  MOVE      ZERO,OVRCD                                                  
          READKP    VISIAUA1;VSIACDAT,VSIACTIM,VSIARTYP,VSIAVISN,VSIADATE:      
                        VSIATIME,VSIATYPE,VSIASUBK,VSIAWUID,VSIALNG1,VSIALNG2:  
                        VSIALNG3,VSIANOTF,VSIACONF,VSIASPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPVSIAU1  MOVE      ZERO,OVRCD                                                  
          UPDATE    VISIAUA1;VSIACDAT,VSIACTIM,VSIARTYP,VSIAVISN,VSIADATE:      
                        VSIATIME,VSIATYPE,VSIASUBK,VSIAWUID,VSIALNG1,VSIALNG2:  
                        VSIALNG3,VSIANOTF,VSIACONF,VSIASPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRVSIAU1  RESET     KEY25                                                       
          WRITE     VISIAUA1,KEY25;VSIACDAT,VSIACTIM,VSIARTYP,VSIAVISN,VSIADATE:
                        VSIATIME,VSIATYPE,VSIASUBK,VSIAWUID,VSIALNG1,VSIALNG2:  
                        VSIALNG3,VSIANOTF,VSIACONF,VSIASPAR                     
          RETURN
.
DEVSIAU1  RESET     KEY25                                                       
          DELETE    VISIAUA1,KEY25                                              
          RETURN
.
RLVSIAU1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     VISIAUA1,KEY25;VSIACDAT,VSIACTIM,VSIARTYP,VSIAVISN,VSIADATE:
                        VSIATIME,VSIATYPE,VSIASUBK,VSIAWUID,VSIALNG1,VSIALNG2:  
                        VSIALNG3,VSIANOTF,VSIACONF,VSIASPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLVSIAU1  MOVE      ZERO,OVRCD                                                  
          READLKS   VISIAUA1;VSIACDAT,VSIACTIM,VSIARTYP,VSIAVISN,VSIADATE:      
                        VSIATIME,VSIATYPE,VSIASUBK,VSIAWUID,VSIALNG1,VSIALNG2:  
                        VSIALNG3,VSIANOTF,VSIACONF,VSIASPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLVSIAU1  MOVE      ZERO,OVRCD                                                  
          READLKP   VISIAUA1;VSIACDAT,VSIACTIM,VSIARTYP,VSIAVISN,VSIADATE:      
                        VSIATIME,VSIATYPE,VSIASUBK,VSIAWUID,VSIALNG1,VSIALNG2:  
                        VSIALNG3,VSIANOTF,VSIACONF,VSIASPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUVSIAU1  RESET     KEY25                                                       
          UNLOCK    VISIAUA1                                                    
          RETURN
.
RSVSIAU2  RESET     KEY25                                                       
          READ      VISIAUA2,KEY25;;                                            
          RETURN
.
RAVSIAU2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      VISIAUA2,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDVSIAU2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      VISIAUA2,KEY25;VSIACDAT,VSIACTIM,VSIARTYP,VSIAVISN,VSIADATE:
                        VSIATIME,VSIATYPE,VSIASUBK,VSIAWUID,VSIALNG1,VSIALNG2:  
                        VSIALNG3,VSIANOTF,VSIACONF,VSIASPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKVSIAU2  MOVE      ZERO,OVRCD                                                  
          READKS    VISIAUA2;VSIACDAT,VSIACTIM,VSIARTYP,VSIAVISN,VSIADATE:      
                        VSIATIME,VSIATYPE,VSIASUBK,VSIAWUID,VSIALNG1,VSIALNG2:  
                        VSIALNG3,VSIANOTF,VSIACONF,VSIASPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPVSIAU2  MOVE      ZERO,OVRCD                                                  
          READKP    VISIAUA2;VSIACDAT,VSIACTIM,VSIARTYP,VSIAVISN,VSIADATE:      
                        VSIATIME,VSIATYPE,VSIASUBK,VSIAWUID,VSIALNG1,VSIALNG2:  
                        VSIALNG3,VSIANOTF,VSIACONF,VSIASPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPVSIAU2  MOVE      ZERO,OVRCD                                                  
          UPDATE    VISIAUA2;VSIACDAT,VSIACTIM,VSIARTYP,VSIAVISN,VSIADATE:      
                        VSIATIME,VSIATYPE,VSIASUBK,VSIAWUID,VSIALNG1,VSIALNG2:  
                        VSIALNG3,VSIANOTF,VSIACONF,VSIASPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRVSIAU2  RESET     KEY25                                                       
          WRITE     VISIAUA2,KEY25;VSIACDAT,VSIACTIM,VSIARTYP,VSIAVISN,VSIADATE:
                        VSIATIME,VSIATYPE,VSIASUBK,VSIAWUID,VSIALNG1,VSIALNG2:  
                        VSIALNG3,VSIANOTF,VSIACONF,VSIASPAR                     
          RETURN
.
DEVSIAU2  RESET     KEY25                                                       
          DELETE    VISIAUA2,KEY25                                              
          RETURN
.
RLVSIAU2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     VISIAUA2,KEY25;VSIACDAT,VSIACTIM,VSIARTYP,VSIAVISN,VSIADATE:
                        VSIATIME,VSIATYPE,VSIASUBK,VSIAWUID,VSIALNG1,VSIALNG2:  
                        VSIALNG3,VSIANOTF,VSIACONF,VSIASPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLVSIAU2  MOVE      ZERO,OVRCD                                                  
          READLKS   VISIAUA2;VSIACDAT,VSIACTIM,VSIARTYP,VSIAVISN,VSIADATE:      
                        VSIATIME,VSIATYPE,VSIASUBK,VSIAWUID,VSIALNG1,VSIALNG2:  
                        VSIALNG3,VSIANOTF,VSIACONF,VSIASPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLVSIAU2  MOVE      ZERO,OVRCD                                                  
          READLKP   VISIAUA2;VSIACDAT,VSIACTIM,VSIARTYP,VSIAVISN,VSIADATE:      
                        VSIATIME,VSIATYPE,VSIASUBK,VSIAWUID,VSIALNG1,VSIALNG2:  
                        VSIALNG3,VSIANOTF,VSIACONF,VSIASPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUVSIAU2  RESET     KEY25                                                       
          UNLOCK    VISIAUA2                                                    
          RETURN
.
