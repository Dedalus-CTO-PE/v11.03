.
. AUDERRIO    
. --------
. Filename     : auderraf.dat
.
RSAUERR1  RESET     KEY20                                                       
          READ      AUDERRA1,KEY20;;                                            
          RETURN
.
RAAUERR1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      AUDERRA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAUERR1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      AUDERRA1,KEY20;AUERUNQ,AUERTRG,AUERERR,AUERSPA              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAUERR1  MOVE      ZERO,OVRCD                                                  
          READKS    AUDERRA1;AUERUNQ,AUERTRG,AUERERR,AUERSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAUERR1  MOVE      ZERO,OVRCD                                                  
          READKP    AUDERRA1;AUERUNQ,AUERTRG,AUERERR,AUERSPA                    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAUERR1  MOVE      ZERO,OVRCD                                                  
          UPDATE    AUDERRA1;AUERUNQ,AUERTRG,AUERERR,AUERSPA                    
          RETURN
.
WRAUERR1  RESET     KEY20                                                       
          WRITE     AUDERRA1,KEY20;AUERUNQ,AUERTRG,AUERERR,AUERSPA              
          RETURN
.
DEAUERR1  RESET     KEY20                                                       
          DELETE    AUDERRA1,KEY20                                              
          RETURN
.
