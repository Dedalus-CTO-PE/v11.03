.
. PMSPTHIO    
. --------
. Filename     : pmspthaf.dat
.
RSPMPTH1  RESET     KEY16                                                       
          READ      PMSPTHA1,KEY16;;                                            
          RETURN
.
RAPMPTH1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPTHA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPTH1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPTHA1,KEY16;PMPTEXDT,PMPTEXTM,PMPTFLNM,PMPTRCCT,PMPTSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPTH1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSPTHA1;PMPTEXDT,PMPTEXTM,PMPTFLNM,PMPTRCCT,PMPTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPTH1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSPTHA1;PMPTEXDT,PMPTEXTM,PMPTFLNM,PMPTRCCT,PMPTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPTH1                                                                        
          UPDATE    PMSPTHA1;PMPTEXDT,PMPTEXTM,PMPTFLNM,PMPTRCCT,PMPTSPAR       
          RETURN
.
WRPMPTH1  RESET     KEY16                                                       
          WRITE     PMSPTHA1,KEY16;PMPTEXDT,PMPTEXTM,PMPTFLNM,PMPTRCCT,PMPTSPAR 
          RETURN
.
DEPMPTH1  RESET     KEY16                                                       
          DELETE    PMSPTHA1,KEY16                                              
          RETURN
.
