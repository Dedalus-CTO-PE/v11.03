.
. PMSPDPIO    
. --------
. Filename     : pmspdpaf.dat
.
RSPMPDP1  RESET     KEY17                                                       
          READ      PMSPDPA1,KEY17;;                                            
          RETURN
.
RAPMPDP1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPDPA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPDP1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPDPA1,KEY17;PMPDADMN,PMPDDATE,PMPDSHIF,PMPDWARD,PMPDSCOR:
                        PMPDCATE,PMPDCLOS,PMPDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPDP1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSPDPA1;PMPDADMN,PMPDDATE,PMPDSHIF,PMPDWARD,PMPDSCOR:      
                        PMPDCATE,PMPDCLOS,PMPDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPDP1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSPDPA1;PMPDADMN,PMPDDATE,PMPDSHIF,PMPDWARD,PMPDSCOR:      
                        PMPDCATE,PMPDCLOS,PMPDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPDP1                                                                        
          UPDATE    PMSPDPA1;PMPDADMN,PMPDDATE,PMPDSHIF,PMPDWARD,PMPDSCOR:      
                        PMPDCATE,PMPDCLOS,PMPDSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMPDP1  RESET     KEY17                                                       
          WRITE     PMSPDPA1,KEY17;PMPDADMN,PMPDDATE,PMPDSHIF,PMPDWARD,PMPDSCOR:
                        PMPDCATE,PMPDCLOS,PMPDSPAR                              
          RETURN
.
DEPMPDP1  RESET     KEY17                                                       
          DELETE    PMSPDPA1,KEY17                                              
          RETURN
.
RLPMPDP1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     PMSPDPA1,KEY17;PMPDADMN,PMPDDATE,PMPDSHIF,PMPDWARD,PMPDSCOR:
                        PMPDCATE,PMPDCLOS,PMPDSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMPDP1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSPDPA1;PMPDADMN,PMPDDATE,PMPDSHIF,PMPDWARD,PMPDSCOR:      
                        PMPDCATE,PMPDCLOS,PMPDSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMPDP1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSPDPA1;PMPDADMN,PMPDDATE,PMPDSHIF,PMPDWARD,PMPDSCOR:      
                        PMPDCATE,PMPDCLOS,PMPDSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMPDP1  RESET     KEY17                                                       
          UNLOCK    PMSPDPA1                                                    
          RETURN
.
RSPMPDP2  RESET     KEY20                                                       
          READ      PMSPDPA2,KEY20;;                                            
          RETURN
.
RAPMPDP2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPDPA2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPDP2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPDPA2,KEY20;PMPDADMN,PMPDDATE,PMPDSHIF,PMPDWARD,PMPDSCOR:
                        PMPDCATE,PMPDCLOS,PMPDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPDP2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSPDPA2;PMPDADMN,PMPDDATE,PMPDSHIF,PMPDWARD,PMPDSCOR:      
                        PMPDCATE,PMPDCLOS,PMPDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPDP2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSPDPA2;PMPDADMN,PMPDDATE,PMPDSHIF,PMPDWARD,PMPDSCOR:      
                        PMPDCATE,PMPDCLOS,PMPDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPDP2                                                                        
          UPDATE    PMSPDPA2;PMPDADMN,PMPDDATE,PMPDSHIF,PMPDWARD,PMPDSCOR:      
                        PMPDCATE,PMPDCLOS,PMPDSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMPDP2  RESET     KEY20                                                       
          WRITE     PMSPDPA2,KEY20;PMPDADMN,PMPDDATE,PMPDSHIF,PMPDWARD,PMPDSCOR:
                        PMPDCATE,PMPDCLOS,PMPDSPAR                              
          RETURN
.
DEPMPDP2  RESET     KEY20                                                       
          DELETE    PMSPDPA2,KEY20                                              
          RETURN
.
RLPMPDP2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     PMSPDPA2,KEY20;PMPDADMN,PMPDDATE,PMPDSHIF,PMPDWARD,PMPDSCOR:
                        PMPDCATE,PMPDCLOS,PMPDSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMPDP2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSPDPA2;PMPDADMN,PMPDDATE,PMPDSHIF,PMPDWARD,PMPDSCOR:      
                        PMPDCATE,PMPDCLOS,PMPDSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMPDP2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSPDPA2;PMPDADMN,PMPDDATE,PMPDSHIF,PMPDWARD,PMPDSCOR:      
                        PMPDCATE,PMPDCLOS,PMPDSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMPDP2  RESET     KEY20                                                       
          UNLOCK    PMSPDPA2                                                    
          RETURN
.
