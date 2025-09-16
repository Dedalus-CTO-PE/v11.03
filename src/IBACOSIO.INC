.
. IBACOSIO    
. --------
. Filename     : ibacosaf.dat
.
RSIBCOS1  RESET     KEY8                                                        
          READ      IBACOSA1,KEY8;;                                             
          RETURN
.
RAIBCOS1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      IBACOSA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBCOS1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      IBACOSA1,KEY8;IBCOSGRP,IBCOCATG,IBCOCATC,IBCOCDAT,IBCOCTIM: 
                        IBCOCUID,IBCOSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBCOS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBACOSA1;IBCOSGRP,IBCOCATG,IBCOCATC,IBCOCDAT,IBCOCTIM:      
                        IBCOCUID,IBCOSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBCOS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBACOSA1;IBCOSGRP,IBCOCATG,IBCOCATC,IBCOCDAT,IBCOCTIM:      
                        IBCOCUID,IBCOSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBCOS1                                                                        
          UPDATE    IBACOSA1;IBCOSGRP,IBCOCATG,IBCOCATC,IBCOCDAT,IBCOCTIM:      
                        IBCOCUID,IBCOSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBCOS1  RESET     KEY8                                                        
          WRITE     IBACOSA1,KEY8;IBCOSGRP,IBCOCATG,IBCOCATC,IBCOCDAT,IBCOCTIM: 
                        IBCOCUID,IBCOSPAR                                       
          RETURN
.
DEIBCOS1  RESET     KEY8                                                        
          DELETE    IBACOSA1,KEY8                                               
          RETURN
.
RLIBCOS1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     IBACOSA1,KEY8;IBCOSGRP,IBCOCATG,IBCOCATC,IBCOCDAT,IBCOCTIM: 
                        IBCOCUID,IBCOSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBCOS1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   IBACOSA1;IBCOSGRP,IBCOCATG,IBCOCATC,IBCOCDAT,IBCOCTIM:      
                        IBCOCUID,IBCOSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBCOS1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   IBACOSA1;IBCOSGRP,IBCOCATG,IBCOCATC,IBCOCDAT,IBCOCTIM:      
                        IBCOCUID,IBCOSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBCOS1  RESET     KEY8                                                        
          UNLOCK    IBACOSA1                                                    
          RETURN
.
RSIBCOS2  RESET     KEY8                                                        
          READ      IBACOSA2,KEY8;;                                             
          RETURN
.
RAIBCOS2  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      IBACOSA2,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDIBCOS2  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      IBACOSA2,KEY8;IBCOSGRP,IBCOCATG,IBCOCATC,IBCOCDAT,IBCOCTIM: 
                        IBCOCUID,IBCOSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKIBCOS2                                                                        
          MOVE      ZERO,OVRCD
          READKS    IBACOSA2;IBCOSGRP,IBCOCATG,IBCOCATC,IBCOCDAT,IBCOCTIM:      
                        IBCOCUID,IBCOSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPIBCOS2                                                                        
          MOVE      ZERO,OVRCD
          READKP    IBACOSA2;IBCOSGRP,IBCOCATG,IBCOCATC,IBCOCDAT,IBCOCTIM:      
                        IBCOCUID,IBCOSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPIBCOS2                                                                        
          UPDATE    IBACOSA2;IBCOSGRP,IBCOCATG,IBCOCATC,IBCOCDAT,IBCOCTIM:      
                        IBCOCUID,IBCOSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRIBCOS2  RESET     KEY8                                                        
          WRITE     IBACOSA2,KEY8;IBCOSGRP,IBCOCATG,IBCOCATC,IBCOCDAT,IBCOCTIM: 
                        IBCOCUID,IBCOSPAR                                       
          RETURN
.
DEIBCOS2  RESET     KEY8                                                        
          DELETE    IBACOSA2,KEY8                                               
          RETURN
.
RLIBCOS2  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     IBACOSA2,KEY8;IBCOSGRP,IBCOCATG,IBCOCATC,IBCOCDAT,IBCOCTIM: 
                        IBCOCUID,IBCOSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLIBCOS2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   IBACOSA2;IBCOSGRP,IBCOCATG,IBCOCATC,IBCOCDAT,IBCOCTIM:      
                        IBCOCUID,IBCOSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLIBCOS2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   IBACOSA2;IBCOSGRP,IBCOCATG,IBCOCATC,IBCOCDAT,IBCOCTIM:      
                        IBCOCUID,IBCOSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUIBCOS2  RESET     KEY8                                                        
          UNLOCK    IBACOSA2                                                    
          RETURN
.
