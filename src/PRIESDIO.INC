.
. PRIESDIO    
. --------
. Filename     : priesdaf.dat
.
RSPRESD1  RESET     KEY47                                                       
          READ      PRIESDA1,KEY47;;                                            
          RETURN
.
RAPRESD1  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      PRIESDA1,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRESD1  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      PRIESDA1,KEY47;PRSDFBID,PRSDARID,PRSDCLID,PRSDRPTC,PRSDITMN:
                        PRSDSRVC,PRSDSFEC,PRSDSEXC,PRSDSFET,PRSDSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRESD1  MOVE      ZERO,OVRCD                                                  
          READKS    PRIESDA1;PRSDFBID,PRSDARID,PRSDCLID,PRSDRPTC,PRSDITMN:      
                        PRSDSRVC,PRSDSFEC,PRSDSEXC,PRSDSFET,PRSDSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRESD1  MOVE      ZERO,OVRCD                                                  
          READKP    PRIESDA1;PRSDFBID,PRSDARID,PRSDCLID,PRSDRPTC,PRSDITMN:      
                        PRSDSRVC,PRSDSFEC,PRSDSEXC,PRSDSFET,PRSDSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRESD1  UPDATE    PRIESDA1;PRSDFBID,PRSDARID,PRSDCLID,PRSDRPTC,PRSDITMN:      
                        PRSDSRVC,PRSDSFEC,PRSDSEXC,PRSDSFET,PRSDSPAR            
          RETURN
.
WRPRESD1  RESET     KEY47                                                       
          WRITE     PRIESDA1,KEY47;PRSDFBID,PRSDARID,PRSDCLID,PRSDRPTC,PRSDITMN:
                        PRSDSRVC,PRSDSFEC,PRSDSEXC,PRSDSFET,PRSDSPAR            
          RETURN
.
DEPRESD1  RESET     KEY47                                                       
          DELETE    PRIESDA1,KEY47                                              
          RETURN
.
