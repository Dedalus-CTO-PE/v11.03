.
. PMSINCIO    
. --------
. Filename     : pmsincaf.dat
.
RSPMINC1  RESET     KEY10                                                       
          READ      PMSINCA1,KEY10;;                                            
          RETURN
.
RAPMINC1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PMSINCA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMINC1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PMSINCA1,KEY10;PMINUNIQ,PMINSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMINC1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSINCA1;PMINUNIQ,PMINSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMINC1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSINCA1;PMINUNIQ,PMINSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMINC1                                                                        
          UPDATE    PMSINCA1;PMINUNIQ,PMINSPAR                                  
          RETURN
.
WRPMINC1  RESET     KEY10                                                       
          WRITE     PMSINCA1,KEY10;PMINUNIQ,PMINSPAR                            
          RETURN
.
DEPMINC1  RESET     KEY10                                                       
          DELETE    PMSINCA1,KEY10                                              
          RETURN
.
