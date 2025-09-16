.
. ALLVREIO    
. --------
. Filename     : allvreaf.dat
.
RSALVRE1  RESET     KEY17                                                       
          READ      ALLVREA1,KEY17;;                                            
          RETURN
.
RAALVRE1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      ALLVREA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALVRE1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      ALLVREA1,KEY17;ALVRSTAT,ALVRURNO,ALVRVISN,ALVRMTYP,ALVRECOD:
                                   ALVRCONT,ALVRSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALVRE1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLVREA1;ALVRSTAT,ALVRURNO,ALVRVISN,ALVRMTYP,ALVRECOD:      
                             ALVRCONT,ALVRSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALVRE1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLVREA1;ALVRSTAT,ALVRURNO,ALVRVISN,ALVRMTYP,ALVRECOD:      
                             ALVRCONT,ALVRSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALVRE1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLVREA1;ALVRSTAT,ALVRURNO,ALVRVISN,ALVRMTYP,ALVRECOD:      
                             ALVRCONT,ALVRSPAR                                  
          RETURN
.
WRALVRE1  RESET     KEY17                                                       
          WRITE     ALLVREA1,KEY17;ALVRSTAT,ALVRURNO,ALVRVISN,ALVRMTYP,ALVRECOD:
                                   ALVRCONT,ALVRSPAR                            
          RETURN
.
DEALVRE1  RESET     KEY17                                                       
          DELETE    ALLVREA1,KEY17                                              
          RETURN
.
