.
. PATBMHIO    
. --------
. Filename     : patbmhaf.dat
.
RSPTBMH1  RESET     KEY14                                                       
          READ      PATBMHA1,KEY14;;                                            
          RETURN
.
RAPTBMH1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PATBMHA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTBMH1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      PATBMHA1,KEY14;PTBHWARD,PTBHDATE,PTBHOPPE,PTBHTOTP,PTBHSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTBMH1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATBMHA1;PTBHWARD,PTBHDATE,PTBHOPPE,PTBHTOTP,PTBHSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTBMH1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATBMHA1;PTBHWARD,PTBHDATE,PTBHOPPE,PTBHTOTP,PTBHSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTBMH1                                                                        
          UPDATE    PATBMHA1;PTBHWARD,PTBHDATE,PTBHOPPE,PTBHTOTP,PTBHSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTBMH1  RESET     KEY14                                                       
          WRITE     PATBMHA1,KEY14;PTBHWARD,PTBHDATE,PTBHOPPE,PTBHTOTP,PTBHSPAR 
          RETURN
.
DEPTBMH1  RESET     KEY14                                                       
          DELETE    PATBMHA1,KEY14                                              
          RETURN
.
RLPTBMH1  RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READL     PATBMHA1,KEY14;PTBHWARD,PTBHDATE,PTBHOPPE,PTBHTOTP,PTBHSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPTBMH1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATBMHA1;PTBHWARD,PTBHDATE,PTBHOPPE,PTBHTOTP,PTBHSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPTBMH1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATBMHA1;PTBHWARD,PTBHDATE,PTBHOPPE,PTBHTOTP,PTBHSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPTBMH1  RESET     KEY14                                                       
          UNLOCK    PATBMHA1                                                    
          RETURN
.
