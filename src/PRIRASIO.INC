.
. PRIRASIO    
. --------
. Filename     : prirasaf.dat
.
RSPRRAS1  RESET     KEY10                                                       
          READ      PRIRASA1,KEY10;;                                            
          RETURN
.
RAPRRAS1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PRIRASA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRRAS1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PRIRASA1,KEY10;PRRAINVN,PRRACNTN,PRRAOUST,PRRARMOV,PRRAPPOR:
                                   PRRADELE,PRRADBAG,PRRACDAT,PRRACTIM,PRRACUID:
                                   PRRAUDAT,PRRAUTIM,PRRAUUID,PRRASPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRRAS1  MOVE      ZERO,OVRCD                                                  
          READKS    PRIRASA1;PRRAINVN,PRRACNTN,PRRAOUST,PRRARMOV,PRRAPPOR:      
                             PRRADELE,PRRADBAG,PRRACDAT,PRRACTIM,PRRACUID:      
                             PRRAUDAT,PRRAUTIM,PRRAUUID,PRRASPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRRAS1  MOVE      ZERO,OVRCD                                                  
          READKP    PRIRASA1;PRRAINVN,PRRACNTN,PRRAOUST,PRRARMOV,PRRAPPOR:      
                             PRRADELE,PRRADBAG,PRRACDAT,PRRACTIM,PRRACUID:      
                             PRRAUDAT,PRRAUTIM,PRRAUUID,PRRASPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRRAS1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PRIRASA1;PRRAINVN,PRRACNTN,PRRAOUST,PRRARMOV,PRRAPPOR:      
                             PRRADELE,PRRADBAG,PRRACDAT,PRRACTIM,PRRACUID:      
                             PRRAUDAT,PRRAUTIM,PRRAUUID,PRRASPAR                
          RETURN
.
WRPRRAS1  RESET     KEY10                                                       
          WRITE     PRIRASA1,KEY10;PRRAINVN,PRRACNTN,PRRAOUST,PRRARMOV,PRRAPPOR:
                                   PRRADELE,PRRADBAG,PRRACDAT,PRRACTIM,PRRACUID:
                                   PRRAUDAT,PRRAUTIM,PRRAUUID,PRRASPAR          
          RETURN
.
DEPRRAS1  RESET     KEY10                                                       
          DELETE    PRIRASA1,KEY10                                              
          RETURN
.
