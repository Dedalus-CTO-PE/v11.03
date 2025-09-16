.
. MEHMTXIO    
. --------
. Filename     : mehmtxaf.dat
.
RSMHMTX1  RESET     KEY20                                                       
          READ      MEHMTXA1,KEY20;;                                            
          RETURN
.
RAMHMTX1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      MEHMTXA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHMTX1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      MEHMTXA1,KEY20;MHMTURNO,MHMTTYPE,MHMTNOTE,MHMTUNIQ,MHMTCMNT:
                        MHMTSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHMTX1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MEHMTXA1;MHMTURNO,MHMTTYPE,MHMTNOTE,MHMTUNIQ,MHMTCMNT:      
                        MHMTSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHMTX1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MEHMTXA1;MHMTURNO,MHMTTYPE,MHMTNOTE,MHMTUNIQ,MHMTCMNT:      
                        MHMTSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHMTX1                                                                        
          UPDATE    MEHMTXA1;MHMTURNO,MHMTTYPE,MHMTNOTE,MHMTUNIQ,MHMTCMNT:      
                        MHMTSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMHMTX1  RESET     KEY20                                                       
          WRITE     MEHMTXA1,KEY20;MHMTURNO,MHMTTYPE,MHMTNOTE,MHMTUNIQ,MHMTCMNT:
                        MHMTSPAR                                                
          RETURN
.
DEMHMTX1  RESET     KEY20                                                       
          DELETE    MEHMTXA1,KEY20                                              
          RETURN
.
RLMHMTX1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     MEHMTXA1,KEY20;MHMTURNO,MHMTTYPE,MHMTNOTE,MHMTUNIQ,MHMTCMNT:
                        MHMTSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMHMTX1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   MEHMTXA1;MHMTURNO,MHMTTYPE,MHMTNOTE,MHMTUNIQ,MHMTCMNT:      
                        MHMTSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMHMTX1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   MEHMTXA1;MHMTURNO,MHMTTYPE,MHMTNOTE,MHMTUNIQ,MHMTCMNT:      
                        MHMTSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMHMTX1  RESET     KEY20                                                       
          UNLOCK    MEHMTXA1                                                    
          RETURN
.
