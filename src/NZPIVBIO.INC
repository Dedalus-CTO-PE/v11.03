.
. NZPIVBIO    
. --------
. Filename     : nzpivbaf.dat
.
RSNZIVB1  RESET     KEY22                                                       
          READ      NZPIVBA1,KEY22;;                                            
          RETURN
.
RANZIVB1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      NZPIVBA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZIVB1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      NZPIVBA1,KEY22;NZIVADMN,NZIVINVN,NZIVSUNQ,NZIVBRCD,NZIVAMNT:
                        NZIVGAMN,NZIVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZIVB1                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPIVBA1;NZIVADMN,NZIVINVN,NZIVSUNQ,NZIVBRCD,NZIVAMNT:      
                        NZIVGAMN,NZIVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZIVB1                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPIVBA1;NZIVADMN,NZIVINVN,NZIVSUNQ,NZIVBRCD,NZIVAMNT:      
                        NZIVGAMN,NZIVSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZIVB1                                                                        
          UPDATE    NZPIVBA1;NZIVADMN,NZIVINVN,NZIVSUNQ,NZIVBRCD,NZIVAMNT:      
                        NZIVGAMN,NZIVSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRNZIVB1  RESET     KEY22                                                       
          WRITE     NZPIVBA1,KEY22;NZIVADMN,NZIVINVN,NZIVSUNQ,NZIVBRCD,NZIVAMNT:
                        NZIVGAMN,NZIVSPAR                                       
          RETURN
.
DENZIVB1  RESET     KEY22                                                       
          DELETE    NZPIVBA1,KEY22                                              
          RETURN
.
RLNZIVB1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READL     NZPIVBA1,KEY22;NZIVADMN,NZIVINVN,NZIVSUNQ,NZIVBRCD,NZIVAMNT:
                        NZIVGAMN,NZIVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLNZIVB1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   NZPIVBA1;NZIVADMN,NZIVINVN,NZIVSUNQ,NZIVBRCD,NZIVAMNT:      
                        NZIVGAMN,NZIVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLNZIVB1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   NZPIVBA1;NZIVADMN,NZIVINVN,NZIVSUNQ,NZIVBRCD,NZIVAMNT:      
                        NZIVGAMN,NZIVSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUNZIVB1  RESET     KEY22                                                       
          UNLOCK    NZPIVBA1                                                    
          RETURN
.
