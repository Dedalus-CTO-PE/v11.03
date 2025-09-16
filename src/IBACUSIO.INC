.
. IBACUSIO    
. --------
. Filename     : ibacusaf.dat
.
RSIBCUS1  RESET     KEY13                                                       
          READ      IBACUSA1,KEY13;;                                            
          RETURN
.
RAIBCUS1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      IBACUSA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBCUS1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      IBACUSA1,KEY13;IBCUSGRP,IBCUUSER,IBCUCDAT,IBCUCTIM,IBCUCUID:
                        IBCUSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBCUS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBACUSA1;IBCUSGRP,IBCUUSER,IBCUCDAT,IBCUCTIM,IBCUCUID:      
                        IBCUSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBCUS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBACUSA1;IBCUSGRP,IBCUUSER,IBCUCDAT,IBCUCTIM,IBCUCUID:      
                        IBCUSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBCUS1                                                                        
          UPDATE    IBACUSA1;IBCUSGRP,IBCUUSER,IBCUCDAT,IBCUCTIM,IBCUCUID:      
                        IBCUSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBCUS1  RESET     KEY13                                                       
          WRITE     IBACUSA1,KEY13;IBCUSGRP,IBCUUSER,IBCUCDAT,IBCUCTIM,IBCUCUID:
                        IBCUSPAR                                                
          RETURN
.
DEIBCUS1  RESET     KEY13                                                       
          DELETE    IBACUSA1,KEY13                                              
          RETURN
.
RLIBCUS1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     IBACUSA1,KEY13;IBCUSGRP,IBCUUSER,IBCUCDAT,IBCUCTIM,IBCUCUID:
                        IBCUSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBCUS1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   IBACUSA1;IBCUSGRP,IBCUUSER,IBCUCDAT,IBCUCTIM,IBCUCUID:      
                        IBCUSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBCUS1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   IBACUSA1;IBCUSGRP,IBCUUSER,IBCUCDAT,IBCUCTIM,IBCUCUID:      
                        IBCUSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBCUS1  RESET     KEY13                                                       
          UNLOCK    IBACUSA1                                                    
          RETURN
.
RSIBCUS2  RESET     KEY13                                                       
          READ      IBACUSA2,KEY13;;                                            
          RETURN
.
RAIBCUS2  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      IBACUSA2,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBCUS2  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      IBACUSA2,KEY13;IBCUSGRP,IBCUUSER,IBCUCDAT,IBCUCTIM,IBCUCUID:
                        IBCUSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBCUS2                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBACUSA2;IBCUSGRP,IBCUUSER,IBCUCDAT,IBCUCTIM,IBCUCUID:      
                        IBCUSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBCUS2                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBACUSA2;IBCUSGRP,IBCUUSER,IBCUCDAT,IBCUCTIM,IBCUCUID:      
                        IBCUSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBCUS2                                                                        
          UPDATE    IBACUSA2;IBCUSGRP,IBCUUSER,IBCUCDAT,IBCUCTIM,IBCUCUID:      
                        IBCUSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBCUS2  RESET     KEY13                                                       
          WRITE     IBACUSA2,KEY13;IBCUSGRP,IBCUUSER,IBCUCDAT,IBCUCTIM,IBCUCUID:
                        IBCUSPAR                                                
          RETURN
.
DEIBCUS2  RESET     KEY13                                                       
          DELETE    IBACUSA2,KEY13                                              
          RETURN
.
RLIBCUS2  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     IBACUSA2,KEY13;IBCUSGRP,IBCUUSER,IBCUCDAT,IBCUCTIM,IBCUCUID:
                        IBCUSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBCUS2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   IBACUSA2;IBCUSGRP,IBCUUSER,IBCUCDAT,IBCUCTIM,IBCUCUID:      
                        IBCUSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBCUS2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   IBACUSA2;IBCUSGRP,IBCUUSER,IBCUCDAT,IBCUCTIM,IBCUCUID:      
                        IBCUSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBCUS2  RESET     KEY13                                                       
          UNLOCK    IBACUSA2                                                    
          RETURN
.
