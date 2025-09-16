.
. NZPRVBIO    
. --------
. Filename     : nzprvbaf.dat
.
RSNZRVB1  RESET     KEY22                                                       
          READ      NZPRVBA1,KEY22;;                                            
          RETURN
.
RANZRVB1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      NZPRVBA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZRVB1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      NZPRVBA1,KEY22;NZRVADMN,NZRVINVN,NZRVSUNQ,NZRVBRCD,NZRVAMNT:
                        NZRVGAMN,NZRVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZRVB1                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPRVBA1;NZRVADMN,NZRVINVN,NZRVSUNQ,NZRVBRCD,NZRVAMNT:      
                        NZRVGAMN,NZRVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZRVB1                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPRVBA1;NZRVADMN,NZRVINVN,NZRVSUNQ,NZRVBRCD,NZRVAMNT:      
                        NZRVGAMN,NZRVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZRVB1                                                                        
          UPDATE    NZPRVBA1;NZRVADMN,NZRVINVN,NZRVSUNQ,NZRVBRCD,NZRVAMNT:      
                        NZRVGAMN,NZRVSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRNZRVB1  RESET     KEY22                                                       
          WRITE     NZPRVBA1,KEY22;NZRVADMN,NZRVINVN,NZRVSUNQ,NZRVBRCD,NZRVAMNT:
                        NZRVGAMN,NZRVSPAR                                       
          RETURN
.
DENZRVB1  RESET     KEY22                                                       
          DELETE    NZPRVBA1,KEY22                                              
          RETURN
.
RLNZRVB1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READL     NZPRVBA1,KEY22;NZRVADMN,NZRVINVN,NZRVSUNQ,NZRVBRCD,NZRVAMNT:
                        NZRVGAMN,NZRVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLNZRVB1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   NZPRVBA1;NZRVADMN,NZRVINVN,NZRVSUNQ,NZRVBRCD,NZRVAMNT:      
                        NZRVGAMN,NZRVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLNZRVB1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   NZPRVBA1;NZRVADMN,NZRVINVN,NZRVSUNQ,NZRVBRCD,NZRVAMNT:      
                        NZRVGAMN,NZRVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUNZRVB1  RESET     KEY22                                                       
          UNLOCK    NZPRVBA1                                                    
          RETURN
.
