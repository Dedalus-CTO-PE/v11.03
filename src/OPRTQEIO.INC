.
. OPRTQEIO    
. --------
. Filename     : oprtqeaf.dat
.
RSOPTQE1  RESET     KEY13                                                       
          READ      OPRTQEA1,KEY13;;                                            
          RETURN
.
RAOPTQE1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      OPRTQEA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPTQE1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      OPRTQEA1,KEY13;OPTQUNID,OPTQRTYP,OPTQCNTR,OPTQADAT,OPTQATIM:
                        OPTQRDAT,OPTQRTIM,OPTQCOMM,OPTQSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPTQE1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OPRTQEA1;OPTQUNID,OPTQRTYP,OPTQCNTR,OPTQADAT,OPTQATIM:      
                        OPTQRDAT,OPTQRTIM,OPTQCOMM,OPTQSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPTQE1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OPRTQEA1;OPTQUNID,OPTQRTYP,OPTQCNTR,OPTQADAT,OPTQATIM:      
                        OPTQRDAT,OPTQRTIM,OPTQCOMM,OPTQSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPTQE1                                                                        
          UPDATE    OPRTQEA1;OPTQUNID,OPTQRTYP,OPTQCNTR,OPTQADAT,OPTQATIM:      
                        OPTQRDAT,OPTQRTIM,OPTQCOMM,OPTQSPAR                     
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROPTQE1  RESET     KEY13                                                       
          WRITE     OPRTQEA1,KEY13;OPTQUNID,OPTQRTYP,OPTQCNTR,OPTQADAT,OPTQATIM:
                        OPTQRDAT,OPTQRTIM,OPTQCOMM,OPTQSPAR                     
          RETURN
.
DEOPTQE1  RESET     KEY13                                                       
          DELETE    OPRTQEA1,KEY13                                              
          RETURN
.
RLOPTQE1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     OPRTQEA1,KEY13;OPTQUNID,OPTQRTYP,OPTQCNTR,OPTQADAT,OPTQATIM:
                        OPTQRDAT,OPTQRTIM,OPTQCOMM,OPTQSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOPTQE1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   OPRTQEA1;OPTQUNID,OPTQRTYP,OPTQCNTR,OPTQADAT,OPTQATIM:      
                        OPTQRDAT,OPTQRTIM,OPTQCOMM,OPTQSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOPTQE1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   OPRTQEA1;OPTQUNID,OPTQRTYP,OPTQCNTR,OPTQADAT,OPTQATIM:      
                        OPTQRDAT,OPTQRTIM,OPTQCOMM,OPTQSPAR                     
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOPTQE1  RESET     KEY13                                                       
          UNLOCK    OPRTQEA1                                                    
          RETURN
.
