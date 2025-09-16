.
. PRIEADIO    
. --------
. Filename     : prieadaf.dat
.
RSPREAD1  RESET     KEY39                                                       
          READ      PRIEADA1,KEY39;;                                            
          RETURN
.
RAPREAD1  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      PRIEADA1,KEY39;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPREAD1  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      PRIEADA1,KEY39;PREDFBID,PREDARID,PREDCLID,PREDRPTC,PREDCFEC:
                        PREDEXPC,PREDCFET,PREDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPREAD1  MOVE      ZERO,OVRCD                                                  
          READKS    PRIEADA1;PREDFBID,PREDARID,PREDCLID,PREDRPTC,PREDCFEC:      
                        PREDEXPC,PREDCFET,PREDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPREAD1  MOVE      ZERO,OVRCD                                                  
          READKP    PRIEADA1;PREDFBID,PREDARID,PREDCLID,PREDRPTC,PREDCFEC:      
                        PREDEXPC,PREDCFET,PREDSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPREAD1  UPDATE    PRIEADA1;PREDFBID,PREDARID,PREDCLID,PREDRPTC,PREDCFEC:      
                        PREDEXPC,PREDCFET,PREDSPAR                              
          RETURN
.
WRPREAD1  RESET     KEY39                                                       
          WRITE     PRIEADA1,KEY39;PREDFBID,PREDARID,PREDCLID,PREDRPTC,PREDCFEC:
                        PREDEXPC,PREDCFET,PREDSPAR                              
          RETURN
.
DEPREAD1  RESET     KEY39                                                       
          DELETE    PRIEADA1,KEY39                                              
          RETURN
.
