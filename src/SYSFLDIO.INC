.
RSSYFL1   RESET     KEY8                                                        
          READ      SYSFLDA1,KEY8;;                                             
          RETURN
.
RASYFL1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      SYSFLDA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSYFL1   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      SYSFLDA1,KEY8;SYFLSYS,SYFLFIL,SYFLNUM,SYFLFLD,SYFLDES:      
                        SYFLTYP,SYFLLEN,SYFLPHY,SYFLSTR,SYFLRED,SYFLV4N:        
                        SYFLSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSYFL1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SYSFLDA1;SYFLSYS,SYFLFIL,SYFLNUM,SYFLFLD,SYFLDES:           
                        SYFLTYP,SYFLLEN,SYFLPHY,SYFLSTR,SYFLRED,SYFLV4N:        
                        SYFLSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSYFL1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SYSFLDA1;SYFLSYS,SYFLFIL,SYFLNUM,SYFLFLD,SYFLDES:           
                        SYFLTYP,SYFLLEN,SYFLPHY,SYFLSTR,SYFLRED,SYFLV4N:        
                        SYFLSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSYFL1                                                                         
          UPDATE    SYSFLDA1;SYFLSYS,SYFLFIL,SYFLNUM,SYFLFLD,SYFLDES:           
                        SYFLTYP,SYFLLEN,SYFLPHY,SYFLSTR,SYFLRED,SYFLV4N:        
                        SYFLSPA                                                 
          RETURN
.
WRSYFL1   RESET     KEY8                                                        
          WRITE     SYSFLDA1,KEY8;SYFLSYS,SYFLFIL,SYFLNUM,SYFLFLD,SYFLDES:      
                        SYFLTYP,SYFLLEN,SYFLPHY,SYFLSTR,SYFLRED,SYFLV4N:        
                        SYFLSPA                                                 
          RETURN
.
DESYFL1   RESET     KEY8                                                        
          DELETE    SYSFLDA1,KEY8                                               
          RETURN
.
RSSYFL2   RESET     KEY8                                                        
          READ      SYSFLDA2,KEY8;;                                             
          RETURN
.
RASYFL2   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      SYSFLDA2,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSYFL2   RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      SYSFLDA2,KEY8;SYFLSYS,SYFLFIL,SYFLNUM,SYFLFLD,SYFLDES:      
                        SYFLTYP,SYFLLEN,SYFLPHY,SYFLSTR,SYFLRED,SYFLV4N:        
                        SYFLSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSYFL2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SYSFLDA2;SYFLSYS,SYFLFIL,SYFLNUM,SYFLFLD,SYFLDES:           
                        SYFLTYP,SYFLLEN,SYFLPHY,SYFLSTR,SYFLRED,SYFLV4N:        
                        SYFLSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSYFL2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SYSFLDA2;SYFLSYS,SYFLFIL,SYFLNUM,SYFLFLD,SYFLDES:           
                        SYFLTYP,SYFLLEN,SYFLPHY,SYFLSTR,SYFLRED,SYFLV4N:        
                        SYFLSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSYFL2                                                                         
          UPDATE    SYSFLDA2;SYFLSYS,SYFLFIL,SYFLNUM,SYFLFLD,SYFLDES:           
                        SYFLTYP,SYFLLEN,SYFLPHY,SYFLSTR,SYFLRED,SYFLV4N:        
                        SYFLSPA                                                 
          RETURN
.
WRSYFL2   RESET     KEY8                                                        
          WRITE     SYSFLDA2,KEY8;SYFLSYS,SYFLFIL,SYFLNUM,SYFLFLD,SYFLDES:      
                        SYFLTYP,SYFLLEN,SYFLPHY,SYFLSTR,SYFLRED,SYFLV4N:        
                        SYFLSPA                                                 
          RETURN
.
DESYFL2   RESET     KEY8                                                        
          DELETE    SYSFLDA2,KEY8                                               
          RETURN
.
