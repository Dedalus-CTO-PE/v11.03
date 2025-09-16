.
. SYSSNOIO    
. --------
. Filename     : syssnoaf.dat
.
RSSYSN1   RESET     KEY5                                                        
          READ      SYSSNOA1,KEY5;;                                             
          RETURN
.
RASYSN1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      SYSSNOA1,KEY5;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSYSN1   RESET     KEY5                                                        
          MOVE      ZERO,OVRCD
          READ      SYSSNOA1,KEY5;SYSNSYS,SYSNLIN,SYSNDAT,SYSNSPA               
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSYSN1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SYSSNOA1;SYSNSYS,SYSNLIN,SYSNDAT,SYSNSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSYSN1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SYSSNOA1;SYSNSYS,SYSNLIN,SYSNDAT,SYSNSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSYSN1                                                                         
          UPDATE    SYSSNOA1;SYSNSYS,SYSNLIN,SYSNDAT,SYSNSPA                    
          RETURN
.
WRSYSN1   RESET     KEY5                                                        
          WRITE     SYSSNOA1,KEY5;SYSNSYS,SYSNLIN,SYSNDAT,SYSNSPA               
          RETURN
.
DESYSN1   RESET     KEY5                                                        
          DELETE    SYSSNOA1,KEY5                                               
          RETURN
.
