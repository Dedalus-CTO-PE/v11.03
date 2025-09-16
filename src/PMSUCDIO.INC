.
. PMSUCDIO    
. --------
. Filename     : pmsucdaf.dat
.
RSPMUCD1  RESET     KEY20                                                       
          READ      PMSUCDA1,KEY20;;                                            
          RETURN
.
RAPMUCD1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUCDA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMUCD1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUCDA1,KEY20;PMUCURNO,PMUCCTTY,PMUCCNUM,PMUCLNUM,PMUCCOMM:
                                   PMUCSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMUCD1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSUCDA1;PMUCURNO,PMUCCTTY,PMUCCNUM,PMUCLNUM,PMUCCOMM:      
                             PMUCSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMUCD1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSUCDA1;PMUCURNO,PMUCCTTY,PMUCCNUM,PMUCLNUM,PMUCCOMM:      
                             PMUCSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMUCD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSUCDA1;PMUCURNO,PMUCCTTY,PMUCCNUM,PMUCLNUM,PMUCCOMM:      
                             PMUCSPAR                                           
          RETURN
.
WRPMUCD1  RESET     KEY20                                                       
          WRITE     PMSUCDA1,KEY20;PMUCURNO,PMUCCTTY,PMUCCNUM,PMUCLNUM,PMUCCOMM:
                                   PMUCSPAR                                     
          RETURN
.
DEPMUCD1  RESET     KEY20                                                       
          DELETE    PMSUCDA1,KEY20                                              
          RETURN
.
