.
. ALLEDTIO    
. --------
. Filename     : alledtaf.dat
.
RSALEDT1  RESET     KEY25                                                       
          READ      ALLEDTA1,KEY25;;                                            
          RETURN
.
RAALEDT1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEDTA1,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALEDT1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEDTA1,KEY25;ALEDURNO,ALEDLOAN,ALEDTYPE,ALEDNOTE,ALEDDATE:
                        ALEDTIME,ALEDUSER,ALEDOCCG,ALEDDELT,ALEDDDAT,ALEDDTIM:  
                        ALEDDUSE,ALEDDOCC,ALEDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALEDT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLEDTA1;ALEDURNO,ALEDLOAN,ALEDTYPE,ALEDNOTE,ALEDDATE:      
                        ALEDTIME,ALEDUSER,ALEDOCCG,ALEDDELT,ALEDDDAT,ALEDDTIM:  
                        ALEDDUSE,ALEDDOCC,ALEDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALEDT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLEDTA1;ALEDURNO,ALEDLOAN,ALEDTYPE,ALEDNOTE,ALEDDATE:      
                        ALEDTIME,ALEDUSER,ALEDOCCG,ALEDDELT,ALEDDDAT,ALEDDTIM:  
                        ALEDDUSE,ALEDDOCC,ALEDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALEDT1                                                                        
          UPDATE    ALLEDTA1;ALEDURNO,ALEDLOAN,ALEDTYPE,ALEDNOTE,ALEDDATE:      
                        ALEDTIME,ALEDUSER,ALEDOCCG,ALEDDELT,ALEDDDAT,ALEDDTIM:  
                        ALEDDUSE,ALEDDOCC,ALEDSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALEDT1  RESET     KEY25                                                       
          WRITE     ALLEDTA1,KEY25;ALEDURNO,ALEDLOAN,ALEDTYPE,ALEDNOTE,ALEDDATE:
                        ALEDTIME,ALEDUSER,ALEDOCCG,ALEDDELT,ALEDDDAT,ALEDDTIM:  
                        ALEDDUSE,ALEDDOCC,ALEDSPAR                              
          RETURN
.
DEALEDT1  RESET     KEY25                                                       
          DELETE    ALLEDTA1,KEY25                                              
          RETURN
.
RLALEDT1  RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     ALLEDTA1,KEY25;ALEDURNO,ALEDLOAN,ALEDTYPE,ALEDNOTE,ALEDDATE:
                        ALEDTIME,ALEDUSER,ALEDOCCG,ALEDDELT,ALEDDDAT,ALEDDTIM:  
                        ALEDDUSE,ALEDDOCC,ALEDSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALEDT1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLEDTA1;ALEDURNO,ALEDLOAN,ALEDTYPE,ALEDNOTE,ALEDDATE:      
                        ALEDTIME,ALEDUSER,ALEDOCCG,ALEDDELT,ALEDDDAT,ALEDDTIM:  
                        ALEDDUSE,ALEDDOCC,ALEDSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALEDT1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLEDTA1;ALEDURNO,ALEDLOAN,ALEDTYPE,ALEDNOTE,ALEDDATE:      
                        ALEDTIME,ALEDUSER,ALEDOCCG,ALEDDELT,ALEDDDAT,ALEDDTIM:  
                        ALEDDUSE,ALEDDOCC,ALEDSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALEDT1  RESET     KEY25                                                       
          UNLOCK    ALLEDTA1                                                    
          RETURN
.
