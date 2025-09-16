.
. MRTRQDIO    
. --------
. Filename     : mrtrqdaf.dat
.
RSMRRQD1  RESET     KEY20                                                       
          READ      MRTRQDR1,KEY20;;                                            
          RETURN
.
RAMRRQD1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      MRTRQDR1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRRQD1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      MRTRQDR1,KEY20;MRRDRQNO,MRRDRKEY,MRRDFILL,MRRDFUID,MRRDSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRRQD1  MOVE      ZERO,OVRCD                                                  
          READKS    MRTRQDR1;MRRDRQNO,MRRDRKEY,MRRDFILL,MRRDFUID,MRRDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRRQD1  MOVE      ZERO,OVRCD                                                  
          READKP    MRTRQDR1;MRRDRQNO,MRRDRKEY,MRRDFILL,MRRDFUID,MRRDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRRQD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTRQDR1;MRRDRQNO,MRRDRKEY,MRRDFILL,MRRDFUID,MRRDSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRRQD1  RESET     KEY20                                                       
          WRITE     MRTRQDR1,KEY20;MRRDRQNO,MRRDRKEY,MRRDFILL,MRRDFUID,MRRDSPAR 
          RETURN
.
DEMRRQD1  RESET     KEY20                                                       
          DELETE    MRTRQDR1,KEY20                                              
          RETURN
.
RLMRRQD1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     MRTRQDR1,KEY20;MRRDRQNO,MRRDRKEY,MRRDFILL,MRRDFUID,MRRDSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRRQD1  MOVE      ZERO,OVRCD                                                  
          READLKS   MRTRQDR1;MRRDRQNO,MRRDRKEY,MRRDFILL,MRRDFUID,MRRDSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRRQD1  MOVE      ZERO,OVRCD                                                  
          READLKP   MRTRQDR1;MRRDRQNO,MRRDRKEY,MRRDFILL,MRRDFUID,MRRDSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRRQD1  RESET     KEY20                                                       
          UNLOCK    MRTRQDR1                                                    
          RETURN
.
RSMRRQD2  RESET     KEY20                                                       
          READ      MRTRQDR2,KEY20;;                                            
          RETURN
.
RAMRRQD2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      MRTRQDR2,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRRQD2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      MRTRQDR2,KEY20;MRRDRQNO,MRRDRKEY,MRRDFILL,MRRDFUID,MRRDSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRRQD2  MOVE      ZERO,OVRCD                                                  
          READKS    MRTRQDR2;MRRDRQNO,MRRDRKEY,MRRDFILL,MRRDFUID,MRRDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRRQD2  MOVE      ZERO,OVRCD                                                  
          READKP    MRTRQDR2;MRRDRQNO,MRRDRKEY,MRRDFILL,MRRDFUID,MRRDSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRRQD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTRQDR2;MRRDRQNO,MRRDRKEY,MRRDFILL,MRRDFUID,MRRDSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMRRQD2  RESET     KEY20                                                       
          WRITE     MRTRQDR2,KEY20;MRRDRQNO,MRRDRKEY,MRRDFILL,MRRDFUID,MRRDSPAR 
          RETURN
.
DEMRRQD2  RESET     KEY20                                                       
          DELETE    MRTRQDR2,KEY20                                              
          RETURN
.
RLMRRQD2  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READL     MRTRQDR2,KEY20;MRRDRQNO,MRRDRKEY,MRRDFILL,MRRDFUID,MRRDSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMRRQD2  MOVE      ZERO,OVRCD                                                  
          READLKS   MRTRQDR2;MRRDRQNO,MRRDRKEY,MRRDFILL,MRRDFUID,MRRDSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMRRQD2  MOVE      ZERO,OVRCD                                                  
          READLKP   MRTRQDR2;MRRDRQNO,MRRDRKEY,MRRDFILL,MRRDFUID,MRRDSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMRRQD2  RESET     KEY20                                                       
          UNLOCK    MRTRQDR2                                                    
          RETURN
.
