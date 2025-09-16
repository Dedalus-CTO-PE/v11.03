.
. PMSREGIO    
. --------
. Filename     : pmsregaf.dat
.
RSPMREG1  RESET     KEY13                                                       
          READ      PMSREGA1,KEY13;;                                            
          RETURN
.
RAPMREG1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      PMSREGA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMREG1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      PMSREGA1,KEY13;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMREG1  MOVE      ZERO,OVRCD
          READKS    PMSREGA1;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:      
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMREG1  MOVE      ZERO,OVRCD
          READKP    PMSREGA1;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:      
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMREG1  UPDATE    PMSREGA1;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:      
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMREG1  RESET     KEY13                                                       
          WRITE     PMSREGA1,KEY13;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          RETURN
.
DEPMREG1  RESET     KEY13                                                       
          DELETE    PMSREGA1,KEY13                                              
          RETURN
.
RLPMREG1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     PMSREGA1,KEY13;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMREG1  MOVE      ZERO,OVRCD
          READLKS   PMSREGA1;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:      
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMREG1  MOVE      ZERO,OVRCD
          READLKP   PMSREGA1;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:      
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMREG1  RESET     KEY13                                                       
          UNLOCK    PMSREGA1                                                    
          RETURN
.
RSPMREG2  RESET     KEY13                                                       
          READ      PMSREGA2,KEY13;;                                            
          RETURN
.
RAPMREG2  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      PMSREGA2,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMREG2  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      PMSREGA2,KEY13;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMREG2  MOVE      ZERO,OVRCD
          READKS    PMSREGA2;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:      
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMREG2  MOVE      ZERO,OVRCD
          READKP    PMSREGA2;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:      
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMREG2  UPDATE    PMSREGA2;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:      
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMREG2  RESET     KEY13                                                       
          WRITE     PMSREGA2,KEY13;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          RETURN
.
DEPMREG2  RESET     KEY13                                                       
          DELETE    PMSREGA2,KEY13                                              
          RETURN
.
RLPMREG2  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     PMSREGA2,KEY13;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMREG2  MOVE      ZERO,OVRCD
          READLKS   PMSREGA2;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:      
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMREG2  MOVE      ZERO,OVRCD
          READLKP   PMSREGA2;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:      
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMREG2  RESET     KEY13                                                       
          UNLOCK    PMSREGA2                                                    
          RETURN
.
RSPMREG3  RESET     KEY53                                                       
          READ      PMSREGA3,KEY53;;                                            
          RETURN
.
RAPMREG3  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      PMSREGA3,KEY53;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMREG3  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      PMSREGA3,KEY53;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMREG3  MOVE      ZERO,OVRCD
          READKS    PMSREGA3;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:      
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMREG3  MOVE      ZERO,OVRCD
          READKP    PMSREGA3;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:      
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMREG3  UPDATE    PMSREGA3;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:      
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMREG3  RESET     KEY53                                                       
          WRITE     PMSREGA3,KEY53;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          RETURN
.
DEPMREG3  RESET     KEY53                                                       
          DELETE    PMSREGA3,KEY53                                              
          RETURN
.
RLPMREG3  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READL     PMSREGA3,KEY53;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMREG3  MOVE      ZERO,OVRCD
          READLKS   PMSREGA3;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:      
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMREG3  MOVE      ZERO,OVRCD
          READLKP   PMSREGA3;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:      
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMREG3  RESET     KEY53                                                       
          UNLOCK    PMSREGA3                                                    
          RETURN
.
RSPMREG4  RESET     KEY24                                                       
          READ      PMSREGA4,KEY24;;                                            
          RETURN
.
RAPMREG4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSREGA4,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMREG4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSREGA4,KEY24;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMREG4  MOVE      ZERO,OVRCD
          READKS    PMSREGA4;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:      
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMREG4  MOVE      ZERO,OVRCD
          READKP    PMSREGA4;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:      
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMREG4  UPDATE    PMSREGA4;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:      
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMREG4  RESET     KEY24                                                       
          WRITE     PMSREGA4,KEY24;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          RETURN
.
DEPMREG4  RESET     KEY24                                                       
          DELETE    PMSREGA4,KEY24                                              
          RETURN
.
RLPMREG4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     PMSREGA4,KEY24;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMREG4  MOVE      ZERO,OVRCD
          READLKS   PMSREGA4;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:      
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMREG4  MOVE      ZERO,OVRCD
          READLKP   PMSREGA4;PMREREGM,PMREUNIQ,PMREDESC,PMREITYP,PMREITMN:      
                        PMREACTV,PMREELOS,PMRESNCD,PMREBTYP,PMRESPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMREG4  RESET     KEY24                                                       
          UNLOCK    PMSREGA4                                                    
          RETURN
.
