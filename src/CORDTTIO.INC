.
. CORDTTIO    
. --------
. Filename     : cordttaf.dat
.
RSCODT1   RESET     KEY10                                                       
          READ      CORDTTA1,KEY10;;                                            
          RETURN
.
RACODT1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      CORDTTA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCODT1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      CORDTTA1,KEY10;CODTCTYP,CODTFLNO,CODTDSEQ,CODTHEAD,CODTCNVT:
                        CODTSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCODT1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CORDTTA1;CODTCTYP,CODTFLNO,CODTDSEQ,CODTHEAD,CODTCNVT:      
                        CODTSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCODT1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CORDTTA1;CODTCTYP,CODTFLNO,CODTDSEQ,CODTHEAD,CODTCNVT:      
                        CODTSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCODT1                                                                         
          UPDATE    CORDTTA1;CODTCTYP,CODTFLNO,CODTDSEQ,CODTHEAD,CODTCNVT:      
                        CODTSPAR                                                
          RETURN
.
WRCODT1   RESET     KEY10                                                       
          WRITE     CORDTTA1,KEY10;CODTCTYP,CODTFLNO,CODTDSEQ,CODTHEAD,CODTCNVT:
                        CODTSPAR                                                
          RETURN
.
DECODT1   RESET     KEY10                                                       
          DELETE    CORDTTA1,KEY10                                              
          RETURN
.
RSCODT2   RESET     KEY13                                                       
          READ      CORDTTA2,KEY13;;                                            
          RETURN
.
RACODT2   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CORDTTA2,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCODT2   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CORDTTA2,KEY13;CODTCTYP,CODTFLNO,CODTDSEQ,CODTHEAD,CODTCNVT:
                        CODTSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCODT2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CORDTTA2;CODTCTYP,CODTFLNO,CODTDSEQ,CODTHEAD,CODTCNVT:      
                        CODTSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCODT2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CORDTTA2;CODTCTYP,CODTFLNO,CODTDSEQ,CODTHEAD,CODTCNVT:      
                        CODTSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCODT2                                                                         
          UPDATE    CORDTTA2;CODTCTYP,CODTFLNO,CODTDSEQ,CODTHEAD,CODTCNVT:      
                        CODTSPAR                                                
          RETURN
.
WRCODT2   RESET     KEY13                                                       
          WRITE     CORDTTA2,KEY13;CODTCTYP,CODTFLNO,CODTDSEQ,CODTHEAD,CODTCNVT:
                        CODTSPAR                                                
          RETURN
.
DECODT2   RESET     KEY13                                                       
          DELETE    CORDTTA2,KEY13                                              
          RETURN
.
