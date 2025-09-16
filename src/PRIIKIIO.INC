.
. PRIIKIIO    
. --------
. Filename     : priikiaf.dat
.
RSPRIK1   RESET     KEY26                                                       
          READ      PRIIKIA1,KEY26;;                                            
          RETURN
.
RAPRIK1   RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PRIIKIA1,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRIK1   RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PRIIKIA1,KEY26;PRIKTFLG,PRIKKITM,PRIKKKWD,PRIKKSPA          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRIK1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PRIIKIA1;PRIKTFLG,PRIKKITM,PRIKKKWD,PRIKKSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRIK1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PRIIKIA1;PRIKTFLG,PRIKKITM,PRIKKKWD,PRIKKSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRIK1                                                                         
          UPDATE    PRIIKIA1;PRIKTFLG,PRIKKITM,PRIKKKWD,PRIKKSPA                
          RETURN
.
WRPRIK1   RESET     KEY26                                                       
          WRITE     PRIIKIA1,KEY26;PRIKTFLG,PRIKKITM,PRIKKKWD,PRIKKSPA          
          RETURN
.
DEPRIK1   RESET     KEY26                                                       
          DELETE    PRIIKIA1,KEY26                                              
          RETURN
.
RSPRIK2   RESET     KEY26                                                       
          READ      PRIIKIA2,KEY26;;                                            
          RETURN
.
RAPRIK2   RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PRIIKIA2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRIK2   RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PRIIKIA2,KEY26;PRIKTFLG,PRIKKITM,PRIKKKWD,PRIKKSPA          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRIK2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PRIIKIA2;PRIKTFLG,PRIKKITM,PRIKKKWD,PRIKKSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRIK2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PRIIKIA2;PRIKTFLG,PRIKKITM,PRIKKKWD,PRIKKSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRIK2                                                                         
          UPDATE    PRIIKIA2;PRIKTFLG,PRIKKITM,PRIKKKWD,PRIKKSPA                
          RETURN
.
WRPRIK2   RESET     KEY26                                                       
          WRITE     PRIIKIA2,KEY26;PRIKTFLG,PRIKKITM,PRIKKKWD,PRIKKSPA          
          RETURN
.
DEPRIK2   RESET     KEY26                                                       
          DELETE    PRIIKIA2,KEY26                                              
          RETURN
.
