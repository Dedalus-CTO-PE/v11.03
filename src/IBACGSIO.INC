.
. IBACGSIO    
. --------
. Filename     : ibacgsaf.dat
.
RSIBCGS1  RESET     KEY3                                                        
          READ      IBACGSA1,KEY3;;                                             
          RETURN
.
RAIBCGS1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      IBACGSA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBCGS1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      IBACGSA1,KEY3;IBCGSGRP,IBCGDESC,IBCGACTV,IBCGCDAT,IBCGCTIM: 
                        IBCGCUID,IBCGUDAT,IBCGUTIM,IBCGUUID,IBCGSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBCGS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBACGSA1;IBCGSGRP,IBCGDESC,IBCGACTV,IBCGCDAT,IBCGCTIM:      
                        IBCGCUID,IBCGUDAT,IBCGUTIM,IBCGUUID,IBCGSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBCGS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBACGSA1;IBCGSGRP,IBCGDESC,IBCGACTV,IBCGCDAT,IBCGCTIM:      
                        IBCGCUID,IBCGUDAT,IBCGUTIM,IBCGUUID,IBCGSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBCGS1                                                                        
          UPDATE    IBACGSA1;IBCGSGRP,IBCGDESC,IBCGACTV,IBCGCDAT,IBCGCTIM:      
                        IBCGCUID,IBCGUDAT,IBCGUTIM,IBCGUUID,IBCGSPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBCGS1  RESET     KEY3                                                        
          WRITE     IBACGSA1,KEY3;IBCGSGRP,IBCGDESC,IBCGACTV,IBCGCDAT,IBCGCTIM: 
                        IBCGCUID,IBCGUDAT,IBCGUTIM,IBCGUUID,IBCGSPAR            
          RETURN
.
DEIBCGS1  RESET     KEY3                                                        
          DELETE    IBACGSA1,KEY3                                               
          RETURN
.
RLIBCGS1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     IBACGSA1,KEY3;IBCGSGRP,IBCGDESC,IBCGACTV,IBCGCDAT,IBCGCTIM: 
                        IBCGCUID,IBCGUDAT,IBCGUTIM,IBCGUUID,IBCGSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBCGS1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   IBACGSA1;IBCGSGRP,IBCGDESC,IBCGACTV,IBCGCDAT,IBCGCTIM:      
                        IBCGCUID,IBCGUDAT,IBCGUTIM,IBCGUUID,IBCGSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBCGS1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   IBACGSA1;IBCGSGRP,IBCGDESC,IBCGACTV,IBCGCDAT,IBCGCTIM:      
                        IBCGCUID,IBCGUDAT,IBCGUTIM,IBCGUUID,IBCGSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBCGS1  RESET     KEY3                                                        
          UNLOCK    IBACGSA1                                                    
          RETURN
.
RSIBCGS2  RESET     KEY23                                                       
          READ      IBACGSA2,KEY23;;                                            
          RETURN
.
RAIBCGS2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      IBACGSA2,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBCGS2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      IBACGSA2,KEY23;IBCGSGRP,IBCGDESC,IBCGACTV,IBCGCDAT,IBCGCTIM:
                        IBCGCUID,IBCGUDAT,IBCGUTIM,IBCGUUID,IBCGSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBCGS2                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBACGSA2;IBCGSGRP,IBCGDESC,IBCGACTV,IBCGCDAT,IBCGCTIM:      
                        IBCGCUID,IBCGUDAT,IBCGUTIM,IBCGUUID,IBCGSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBCGS2                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBACGSA2;IBCGSGRP,IBCGDESC,IBCGACTV,IBCGCDAT,IBCGCTIM:      
                        IBCGCUID,IBCGUDAT,IBCGUTIM,IBCGUUID,IBCGSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBCGS2                                                                        
          UPDATE    IBACGSA2;IBCGSGRP,IBCGDESC,IBCGACTV,IBCGCDAT,IBCGCTIM:      
                        IBCGCUID,IBCGUDAT,IBCGUTIM,IBCGUUID,IBCGSPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBCGS2  RESET     KEY23                                                       
          WRITE     IBACGSA2,KEY23;IBCGSGRP,IBCGDESC,IBCGACTV,IBCGCDAT,IBCGCTIM:
                        IBCGCUID,IBCGUDAT,IBCGUTIM,IBCGUUID,IBCGSPAR            
          RETURN
.
DEIBCGS2  RESET     KEY23                                                       
          DELETE    IBACGSA2,KEY23                                              
          RETURN
.
RLIBCGS2  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READL     IBACGSA2,KEY23;IBCGSGRP,IBCGDESC,IBCGACTV,IBCGCDAT,IBCGCTIM:
                        IBCGCUID,IBCGUDAT,IBCGUTIM,IBCGUUID,IBCGSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBCGS2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   IBACGSA2;IBCGSGRP,IBCGDESC,IBCGACTV,IBCGCDAT,IBCGCTIM:      
                        IBCGCUID,IBCGUDAT,IBCGUTIM,IBCGUUID,IBCGSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBCGS2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   IBACGSA2;IBCGSGRP,IBCGDESC,IBCGACTV,IBCGCDAT,IBCGCTIM:      
                        IBCGCUID,IBCGUDAT,IBCGUTIM,IBCGUUID,IBCGSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBCGS2  RESET     KEY23                                                       
          UNLOCK    IBACGSA2                                                    
          RETURN
.
