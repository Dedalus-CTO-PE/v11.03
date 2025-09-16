.
. ALLVMPIO    
. --------
. Filename     : allvmpaf.dat
.
RSALVMP1  RESET     KEY13                                                       
          READ      ALLVMPA1,KEY13;;                                            
          RETURN
.
RAALVMP1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      ALLVMPA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALVMP1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      ALLVMPA1,KEY13;ALVMDEPT,ALVMCATG,ALVMEDAT,ALVMCODE,ALVMSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALVMP1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLVMPA1;ALVMDEPT,ALVMCATG,ALVMEDAT,ALVMCODE,ALVMSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALVMP1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLVMPA1;ALVMDEPT,ALVMCATG,ALVMEDAT,ALVMCODE,ALVMSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALVMP1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLVMPA1;ALVMDEPT,ALVMCATG,ALVMEDAT,ALVMCODE,ALVMSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALVMP1  RESET     KEY13                                                       
          WRITE     ALLVMPA1,KEY13;ALVMDEPT,ALVMCATG,ALVMEDAT,ALVMCODE,ALVMSPAR 
          RETURN
.
DEALVMP1  RESET     KEY13                                                       
          DELETE    ALLVMPA1,KEY13                                              
          RETURN
.
RLALVMP1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     ALLVMPA1,KEY13;ALVMDEPT,ALVMCATG,ALVMEDAT,ALVMCODE,ALVMSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALVMP1  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLVMPA1;ALVMDEPT,ALVMCATG,ALVMEDAT,ALVMCODE,ALVMSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALVMP1  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLVMPA1;ALVMDEPT,ALVMCATG,ALVMEDAT,ALVMCODE,ALVMSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALVMP1  RESET     KEY13                                                       
          UNLOCK    ALLVMPA1                                                    
          RETURN
.
