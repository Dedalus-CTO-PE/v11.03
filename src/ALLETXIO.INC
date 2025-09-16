.
. ALLETXIO    
. --------
. Filename     : alletxaf.dat
.
RSALETX1  RESET     KEY28                                                       
          READ      ALLETXA1,KEY28;;                                            
          RETURN
.
RAALETX1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      ALLETXA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALETX1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      ALLETXA1,KEY28;ALETURNO,ALETLOAN,ALETTYPE,ALETNOTE,ALETUNIQ:
                        ALETCMNT,ALETSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALETX1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLETXA1;ALETURNO,ALETLOAN,ALETTYPE,ALETNOTE,ALETUNIQ:      
                        ALETCMNT,ALETSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALETX1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLETXA1;ALETURNO,ALETLOAN,ALETTYPE,ALETNOTE,ALETUNIQ:      
                        ALETCMNT,ALETSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALETX1                                                                        
          UPDATE    ALLETXA1;ALETURNO,ALETLOAN,ALETTYPE,ALETNOTE,ALETUNIQ:      
                        ALETCMNT,ALETSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALETX1  RESET     KEY28                                                       
          WRITE     ALLETXA1,KEY28;ALETURNO,ALETLOAN,ALETTYPE,ALETNOTE,ALETUNIQ:
                        ALETCMNT,ALETSPAR                                       
          RETURN
.
DEALETX1  RESET     KEY28                                                       
          DELETE    ALLETXA1,KEY28                                              
          RETURN
.
RLALETX1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     ALLETXA1,KEY28;ALETURNO,ALETLOAN,ALETTYPE,ALETNOTE,ALETUNIQ:
                        ALETCMNT,ALETSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALETX1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   ALLETXA1;ALETURNO,ALETLOAN,ALETTYPE,ALETNOTE,ALETUNIQ:      
                        ALETCMNT,ALETSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALETX1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   ALLETXA1;ALETURNO,ALETLOAN,ALETTYPE,ALETNOTE,ALETUNIQ:      
                        ALETCMNT,ALETSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALETX1  RESET     KEY28                                                       
          UNLOCK    ALLETXA1                                                    
          RETURN
.
