.
. FMSRESIO    
. --------
. Filename     : fmsresaf.dat
.
RSFMRS1   RESET     KEY4                                                        
          READ      FMSRESA1,KEY4;;                                             
          RETURN
.
RAFMRS1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      FMSRESA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMRS1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      FMSRESA1,KEY4;FMRSCODE,FMRSDESC,FMRSTELE                    
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMRS1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSRESA1;FMRSCODE,FMRSDESC,FMRSTELE                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMRS1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSRESA1;FMRSCODE,FMRSDESC,FMRSTELE                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMRS1                                                                         
          UPDATE    FMSRESA1;FMRSCODE,FMRSDESC,FMRSTELE                         
          RETURN
.
WRFMRS1   RESET     KEY4                                                        
          WRITE     FMSRESA1,KEY4;FMRSCODE,FMRSDESC,FMRSTELE                    
          RETURN
.
DEFMRS1   RESET     KEY4                                                        
          DELETE    FMSRESA1,KEY4                                               
          RETURN
.
