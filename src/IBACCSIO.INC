.
. IBACCSIO    
. --------
. Filename     : ibaccsaf.dat
.
RSIBCCS1  RESET     KEY5                                                        
          READ      IBACCSA1,KEY5;;                                             
          RETURN
.
RAIBCCS1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      IBACCSA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBCCS1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      IBACCSA1,KEY5;IBCCSGRP,IBCCCATG,IBCCCDAT,IBCCCTIM,IBCCCUID: 
                        IBCCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBCCS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBACCSA1;IBCCSGRP,IBCCCATG,IBCCCDAT,IBCCCTIM,IBCCCUID:      
                        IBCCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBCCS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBACCSA1;IBCCSGRP,IBCCCATG,IBCCCDAT,IBCCCTIM,IBCCCUID:      
                        IBCCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBCCS1                                                                        
          UPDATE    IBACCSA1;IBCCSGRP,IBCCCATG,IBCCCDAT,IBCCCTIM,IBCCCUID:      
                        IBCCSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBCCS1  RESET     KEY5                                                        
          WRITE     IBACCSA1,KEY5;IBCCSGRP,IBCCCATG,IBCCCDAT,IBCCCTIM,IBCCCUID: 
                        IBCCSPAR                                                
          RETURN
.
DEIBCCS1  RESET     KEY5                                                        
          DELETE    IBACCSA1,KEY5                                               
          RETURN
.
RLIBCCS1  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READL     IBACCSA1,KEY5;IBCCSGRP,IBCCCATG,IBCCCDAT,IBCCCTIM,IBCCCUID: 
                        IBCCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBCCS1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   IBACCSA1;IBCCSGRP,IBCCCATG,IBCCCDAT,IBCCCTIM,IBCCCUID:      
                        IBCCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBCCS1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   IBACCSA1;IBCCSGRP,IBCCCATG,IBCCCDAT,IBCCCTIM,IBCCCUID:      
                        IBCCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBCCS1  RESET     KEY5                                                        
          UNLOCK    IBACCSA1                                                    
          RETURN
.
RSIBCCS2  RESET     KEY5                                                        
          READ      IBACCSA2,KEY5;;                                             
          RETURN
.
RAIBCCS2  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      IBACCSA2,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBCCS2  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      IBACCSA2,KEY5;IBCCSGRP,IBCCCATG,IBCCCDAT,IBCCCTIM,IBCCCUID: 
                        IBCCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBCCS2                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBACCSA2;IBCCSGRP,IBCCCATG,IBCCCDAT,IBCCCTIM,IBCCCUID:      
                        IBCCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBCCS2                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBACCSA2;IBCCSGRP,IBCCCATG,IBCCCDAT,IBCCCTIM,IBCCCUID:      
                        IBCCSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBCCS2                                                                        
          UPDATE    IBACCSA2;IBCCSGRP,IBCCCATG,IBCCCDAT,IBCCCTIM,IBCCCUID:      
                        IBCCSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBCCS2  RESET     KEY5                                                        
          WRITE     IBACCSA2,KEY5;IBCCSGRP,IBCCCATG,IBCCCDAT,IBCCCTIM,IBCCCUID: 
                        IBCCSPAR                                                
          RETURN
.
DEIBCCS2  RESET     KEY5                                                        
          DELETE    IBACCSA2,KEY5                                               
          RETURN
.
RLIBCCS2  RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READL     IBACCSA2,KEY5;IBCCSGRP,IBCCCATG,IBCCCDAT,IBCCCTIM,IBCCCUID: 
                        IBCCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBCCS2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   IBACCSA2;IBCCSGRP,IBCCCATG,IBCCCDAT,IBCCCTIM,IBCCCUID:      
                        IBCCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBCCS2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   IBACCSA2;IBCCSGRP,IBCCCATG,IBCCCDAT,IBCCCTIM,IBCCCUID:      
                        IBCCSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBCCS2  RESET     KEY5                                                        
          UNLOCK    IBACCSA2                                                    
          RETURN
.
