.
. PMSIPLIO    
. --------
. Filename     : pmsiplaf.dat
.
RSPMIPL1  RESET     KEY10                                                       
          READ      PMSIPLA1,KEY10;;                                            
          RETURN
.
RAPMIPL1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIPLA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIPL1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIPLA1,KEY10;PMILUNIQ,PMILRTYP,PMILCODE,PMILUSID,PMILSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIPL1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIPLA1;PMILUNIQ,PMILRTYP,PMILCODE,PMILUSID,PMILSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIPL1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIPLA1;PMILUNIQ,PMILRTYP,PMILCODE,PMILUSID,PMILSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIPL1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIPLA1;PMILUNIQ,PMILRTYP,PMILCODE,PMILUSID,PMILSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIPL1  RESET     KEY10                                                       
          WRITE     PMSIPLA1,KEY10;PMILUNIQ,PMILRTYP,PMILCODE,PMILUSID,PMILSPAR 
          RETURN
.
DEPMIPL1  RESET     KEY10                                                       
          DELETE    PMSIPLA1,KEY10                                              
          RETURN
.
RLPMIPL1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     PMSIPLA1,KEY10;PMILUNIQ,PMILRTYP,PMILCODE,PMILUSID,PMILSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIPL1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIPLA1;PMILUNIQ,PMILRTYP,PMILCODE,PMILUSID,PMILSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIPL1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIPLA1;PMILUNIQ,PMILRTYP,PMILCODE,PMILUSID,PMILSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIPL1  RESET     KEY10                                                       
          UNLOCK    PMSIPLA1                                                    
          RETURN
.
