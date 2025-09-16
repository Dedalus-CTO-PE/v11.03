.
. MEHAKIIO    
. --------
. Filename     : mehakiaf.dat
.
RSMHAKI1  RESET     KEY25                                                       
          READ      MEHAKIA1,KEY25;;                                            
          RETURN
.
RAMHAKI1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      MEHAKIA1,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHAKI1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      MEHAKIA1,KEY25;MHAKKTYP,MHAKKITM,MHAKKKWD,MHAKSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHAKI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MEHAKIA1;MHAKKTYP,MHAKKITM,MHAKKKWD,MHAKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHAKI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MEHAKIA1;MHAKKTYP,MHAKKITM,MHAKKKWD,MHAKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHAKI1                                                                        
          UPDATE    MEHAKIA1;MHAKKTYP,MHAKKITM,MHAKKKWD,MHAKSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMHAKI1  RESET     KEY25                                                       
          WRITE     MEHAKIA1,KEY25;MHAKKTYP,MHAKKITM,MHAKKKWD,MHAKSPAR          
          RETURN
.
DEMHAKI1  RESET     KEY25                                                       
          DELETE    MEHAKIA1,KEY25                                              
          RETURN
.
RLMHAKI1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     MEHAKIA1,KEY25;MHAKKTYP,MHAKKITM,MHAKKKWD,MHAKSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMHAKI1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   MEHAKIA1;MHAKKTYP,MHAKKITM,MHAKKKWD,MHAKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMHAKI1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   MEHAKIA1;MHAKKTYP,MHAKKITM,MHAKKKWD,MHAKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMHAKI1  RESET     KEY25                                                       
          UNLOCK    MEHAKIA1                                                    
          RETURN
.
RSMHAKI2  RESET     KEY25                                                       
          READ      MEHAKIA2,KEY25;;                                            
          RETURN
.
RAMHAKI2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      MEHAKIA2,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHAKI2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      MEHAKIA2,KEY25;MHAKKTYP,MHAKKITM,MHAKKKWD,MHAKSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHAKI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    MEHAKIA2;MHAKKTYP,MHAKKITM,MHAKKKWD,MHAKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHAKI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    MEHAKIA2;MHAKKTYP,MHAKKITM,MHAKKKWD,MHAKSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHAKI2                                                                        
          UPDATE    MEHAKIA2;MHAKKTYP,MHAKKITM,MHAKKKWD,MHAKSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMHAKI2  RESET     KEY25                                                       
          WRITE     MEHAKIA2,KEY25;MHAKKTYP,MHAKKITM,MHAKKKWD,MHAKSPAR          
          RETURN
.
DEMHAKI2  RESET     KEY25                                                       
          DELETE    MEHAKIA2,KEY25                                              
          RETURN
.
RLMHAKI2  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     MEHAKIA2,KEY25;MHAKKTYP,MHAKKITM,MHAKKKWD,MHAKSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMHAKI2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   MEHAKIA2;MHAKKTYP,MHAKKITM,MHAKKKWD,MHAKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMHAKI2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   MEHAKIA2;MHAKKTYP,MHAKKITM,MHAKKKWD,MHAKSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMHAKI2  RESET     KEY25                                                       
          UNLOCK    MEHAKIA2                                                    
          RETURN
.
