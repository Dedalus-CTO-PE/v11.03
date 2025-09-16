.
. ALLCSTIO    
. --------
. Filename     : allcstaf.dat
.
RSALCST1  RESET     KEY22                                                       
          READ      ALLCSTA1,KEY22;;                                            
          RETURN
.
RAALCST1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      ALLCSTA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALCST1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      ALLCSTA1,KEY22;ALCSURNO,ALCSCNTR,ALCSTYPE,ALCSLINE,ALCSDATA:
                        ALCSUKEY,ALCSSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALCST1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLCSTA1;ALCSURNO,ALCSCNTR,ALCSTYPE,ALCSLINE,ALCSDATA:      
                        ALCSUKEY,ALCSSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALCST1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLCSTA1;ALCSURNO,ALCSCNTR,ALCSTYPE,ALCSLINE,ALCSDATA:      
                        ALCSUKEY,ALCSSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALCST1                                                                        
          UPDATE    ALLCSTA1;ALCSURNO,ALCSCNTR,ALCSTYPE,ALCSLINE,ALCSDATA:      
                        ALCSUKEY,ALCSSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALCST1  RESET     KEY22                                                       
          WRITE     ALLCSTA1,KEY22;ALCSURNO,ALCSCNTR,ALCSTYPE,ALCSLINE,ALCSDATA:
                        ALCSUKEY,ALCSSPAR                                       
          RETURN
.
DEALCST1  RESET     KEY22                                                       
          DELETE    ALLCSTA1,KEY22                                              
          RETURN
.
RLALCST1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READL     ALLCSTA1,KEY22;ALCSURNO,ALCSCNTR,ALCSTYPE,ALCSLINE,ALCSDATA:
                        ALCSUKEY,ALCSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALCST1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLCSTA1;ALCSURNO,ALCSCNTR,ALCSTYPE,ALCSLINE,ALCSDATA:      
                        ALCSUKEY,ALCSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALCST1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLCSTA1;ALCSURNO,ALCSCNTR,ALCSTYPE,ALCSLINE,ALCSDATA:      
                        ALCSUKEY,ALCSSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALCST1  RESET     KEY22                                                       
          UNLOCK    ALLCSTA1                                                    
          RETURN
.
