.
. OUTBOXIO    
. --------
. Filename     : outboxaf.dat
.
RSOTBOX1  RESET     KEY28                                                       
          READ      OUTBOXA1,KEY28;;                                            
          RETURN
.
RAOTBOX1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      OUTBOXA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTBOX1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      OUTBOXA1,KEY28;OTBXSITE,OTBXCLIN,OTBXDATE,OTBXSTRT,OTBXSLOT:
                        OTBXCOMM,OTBXSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTBOX1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OUTBOXA1;OTBXSITE,OTBXCLIN,OTBXDATE,OTBXSTRT,OTBXSLOT:      
                        OTBXCOMM,OTBXSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTBOX1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OUTBOXA1;OTBXSITE,OTBXCLIN,OTBXDATE,OTBXSTRT,OTBXSLOT:      
                        OTBXCOMM,OTBXSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTBOX1                                                                        
          UPDATE    OUTBOXA1;OTBXSITE,OTBXCLIN,OTBXDATE,OTBXSTRT,OTBXSLOT:      
                        OTBXCOMM,OTBXSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTBOX1  RESET     KEY28                                                       
          WRITE     OUTBOXA1,KEY28;OTBXSITE,OTBXCLIN,OTBXDATE,OTBXSTRT,OTBXSLOT:
                        OTBXCOMM,OTBXSPAR                                       
          RETURN
.
DEOTBOX1  RESET     KEY28                                                       
          DELETE    OUTBOXA1,KEY28                                              
          RETURN
.
RLOTBOX1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     OUTBOXA1,KEY28;OTBXSITE,OTBXCLIN,OTBXDATE,OTBXSTRT,OTBXSLOT:
                        OTBXCOMM,OTBXSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTBOX1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OUTBOXA1;OTBXSITE,OTBXCLIN,OTBXDATE,OTBXSTRT,OTBXSLOT:      
                        OTBXCOMM,OTBXSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTBOX1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OUTBOXA1;OTBXSITE,OTBXCLIN,OTBXDATE,OTBXSTRT,OTBXSLOT:      
                        OTBXCOMM,OTBXSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTBOX1  RESET     KEY28                                                       
          UNLOCK    OUTBOXA1                                                    
          RETURN
.
