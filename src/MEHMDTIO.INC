.
. MEHMDTIO    
. --------
. Filename     : mehmdtaf.dat
.
RSMHMDT1  RESET     KEY17                                                       
          READ      MEHMDTA1,KEY17;;                                            
          RETURN
.
RAMHMDT1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      MEHMDTA1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMHMDT1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      MEHMDTA1,KEY17;MHMDURNO,MHMDTYPE,MHMDNOTE,MHMDDATE,MHMDTIME:
                        MHMDUSER,MHMDOCCG,MHMDDELT,MHMDDDAT,MHMDDTIM,MHMDDUSE:  
                        MHMDDOCC,MHMDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMHMDT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    MEHMDTA1;MHMDURNO,MHMDTYPE,MHMDNOTE,MHMDDATE,MHMDTIME:      
                        MHMDUSER,MHMDOCCG,MHMDDELT,MHMDDDAT,MHMDDTIM,MHMDDUSE:  
                        MHMDDOCC,MHMDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMHMDT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    MEHMDTA1;MHMDURNO,MHMDTYPE,MHMDNOTE,MHMDDATE,MHMDTIME:      
                        MHMDUSER,MHMDOCCG,MHMDDELT,MHMDDDAT,MHMDDTIM,MHMDDUSE:  
                        MHMDDOCC,MHMDSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMHMDT1                                                                        
          UPDATE    MEHMDTA1;MHMDURNO,MHMDTYPE,MHMDNOTE,MHMDDATE,MHMDTIME:      
                        MHMDUSER,MHMDOCCG,MHMDDELT,MHMDDDAT,MHMDDTIM,MHMDDUSE:  
                        MHMDDOCC,MHMDSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRMHMDT1  RESET     KEY17                                                       
          WRITE     MEHMDTA1,KEY17;MHMDURNO,MHMDTYPE,MHMDNOTE,MHMDDATE,MHMDTIME:
                        MHMDUSER,MHMDOCCG,MHMDDELT,MHMDDDAT,MHMDDTIM,MHMDDUSE:  
                        MHMDDOCC,MHMDSPAR                                       
          RETURN
.
DEMHMDT1  RESET     KEY17                                                       
          DELETE    MEHMDTA1,KEY17                                              
          RETURN
.
RLMHMDT1  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READL     MEHMDTA1,KEY17;MHMDURNO,MHMDTYPE,MHMDNOTE,MHMDDATE,MHMDTIME:
                        MHMDUSER,MHMDOCCG,MHMDDELT,MHMDDDAT,MHMDDTIM,MHMDDUSE:  
                        MHMDDOCC,MHMDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLMHMDT1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   MEHMDTA1;MHMDURNO,MHMDTYPE,MHMDNOTE,MHMDDATE,MHMDTIME:      
                        MHMDUSER,MHMDOCCG,MHMDDELT,MHMDDDAT,MHMDDTIM,MHMDDUSE:  
                        MHMDDOCC,MHMDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLMHMDT1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   MEHMDTA1;MHMDURNO,MHMDTYPE,MHMDNOTE,MHMDDATE,MHMDTIME:      
                        MHMDUSER,MHMDOCCG,MHMDDELT,MHMDDDAT,MHMDDTIM,MHMDDUSE:  
                        MHMDDOCC,MHMDSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUMHMDT1  RESET     KEY17                                                       
          UNLOCK    MEHMDTA1                                                    
          RETURN
.
