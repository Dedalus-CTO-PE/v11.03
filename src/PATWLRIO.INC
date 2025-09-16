.
RSPTWLR1  RESET     KEY12                                                       
          READ      PATWLRA1,KEY12;;                                            
          RETURN
.
RAPTWLR1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PATWLRA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTWLR1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PATWLRA1,KEY12;PTWRRESI,PTWRCOMP,PTWRWARD,PTWRDEPT,PTWRPRDY:
                        PTWRPDES,PTWREXDY,PTWREDES,PTWRSPAR                     
          GOTO      OVERCOND IF OVER
          MOVE      PTWRPRDY,PTWRPDAY
          MOVE      PTWREXDY,PTWREDAY
          RETURN
.
RKPTWLR1  MOVE      ZERO,OVRCD
          READKS    PATWLRA1;PTWRRESI,PTWRCOMP,PTWRWARD,PTWRDEPT,PTWRPRDY:      
                        PTWRPDES,PTWREXDY,PTWREDES,PTWRSPAR                     
          GOTO      OVERCOND IF OVER
          MOVE      PTWRPRDY,PTWRPDAY
          MOVE      PTWREXDY,PTWREDAY
          RETURN
.
RPPTWLR1  MOVE      ZERO,OVRCD
          READKP    PATWLRA1;PTWRRESI,PTWRCOMP,PTWRWARD,PTWRDEPT,PTWRPRDY:      
                        PTWRPDES,PTWREXDY,PTWREDES,PTWRSPAR                     
          GOTO      OVERCOND IF OVER
          MOVE      PTWRPRDY,PTWRPDAY
          MOVE      PTWREXDY,PTWREDAY
          RETURN
.
UPPTWLR1  MOVE      PTWRPDAY,PTWRPRDY
          MOVE      PTWREDAY,PTWREXDY
          UPDATE    PATWLRA1;PTWRRESI,PTWRCOMP,PTWRWARD,PTWRDEPT,PTWRPRDY:      
                        PTWRPDES,PTWREXDY,PTWREDES,PTWRSPAR                     
          RETURN
.
WRPTWLR1  RESET     KEY12                                                       
          MOVE      PTWRPDAY,PTWRPRDY
          MOVE      PTWREDAY,PTWREXDY
          WRITE     PATWLRA1,KEY12;PTWRRESI,PTWRCOMP,PTWRWARD,PTWRDEPT,PTWRPRDY:
                        PTWRPDES,PTWREXDY,PTWREDES,PTWRSPAR                     
          RETURN
.
DEPTWLR1  RESET     KEY12                                                       
          DELETE    PATWLRA1,KEY12                                              
          RETURN
.
ASPTWLR   RESET     KEY19                                                       
          READ      PATAUDWR,KEY19;;                                            
          RETURN
.
AKPTWLR   MOVE      ZERO,OVRCD
          READKS    PATAUDWR;PTWRAUDD,PTWRAUDT,PTWRAUDP,PTWRAUDR,PTWRAUDS:      
                    PTWRAUDO,PTWRRESI,PTWRCOMP,PTWRWARD,PTWRDEPT,PTWRPRDY:      
                        PTWRPDES,PTWREXDY,PTWREDES,PTWRSPAR                     
          GOTO      OVERCOND IF OVER
          MOVE      PTWRPRDY,PTWRPDAY
          MOVE      PTWREXDY,PTWREDAY
          RETURN
.
AUPTWLR   MOVE      PTWRPDAY,PTWRPRDY
          MOVE      PTWREDAY,PTWREXDY
          UPDATE    PATAUDWR;PTWRAUDD,PTWRAUDT,PTWRAUDP,PTWRAUDR,PTWRAUDS:      
                    PTWRAUDO,PTWRRESI,PTWRCOMP,PTWRWARD,PTWRDEPT,PTWRPRDY:      
                        PTWRPDES,PTWREXDY,PTWREDES,PTWRSPAR                     
          RETURN
.
AWPTWLR   RESET     KEY19                                                       
          MOVE      PTWRPDAY,PTWRPRDY
          MOVE      PTWREDAY,PTWREXDY
          WRITE     PATAUDWR,KEY19;PTWRAUDD,PTWRAUDT,PTWRAUDP,PTWRAUDR,PTWRAUDS:
                    PTWRAUDO,PTWRRESI,PTWRCOMP,PTWRWARD,PTWRDEPT,PTWRPRDY:      
                        PTWRPDES,PTWREXDY,PTWREDES,PTWRSPAR                     
          RETURN
.
ADPTWLR   RESET     KEY19                                                       
          DELETE    PATAUDWR,KEY19;                                             
          RETURN
