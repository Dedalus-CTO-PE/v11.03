.
. CEAPCDIO    
. --------
. Filename     : ceapcdaf.dat
.
RSCEPC1   RESET     KEY4                                                        
          READ      CEAPCDA1,KEY4;;                                             
          RETURN
.
RACEPC1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CEAPCDA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCEPC1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      CEAPCDA1,KEY4;CEPCDRGC,CEPCNUR,CEPCTHE,CEPCPHA,CEPCICU:     
                        CEPCALL,CEPCMSS,CEPCTAX,CEPCOVH,CEPCCAT,CEPCDEP:        
                        CEPCOTH,CEPCALOS,CEPCNWG,CEPCSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCEPC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CEAPCDA1;CEPCDRGC,CEPCNUR,CEPCTHE,CEPCPHA,CEPCICU:          
                        CEPCALL,CEPCMSS,CEPCTAX,CEPCOVH,CEPCCAT,CEPCDEP:        
                        CEPCOTH,CEPCALOS,CEPCNWG,CEPCSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCEPC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CEAPCDA1;CEPCDRGC,CEPCNUR,CEPCTHE,CEPCPHA,CEPCICU:          
                        CEPCALL,CEPCMSS,CEPCTAX,CEPCOVH,CEPCCAT,CEPCDEP:        
                        CEPCOTH,CEPCALOS,CEPCNWG,CEPCSPA                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCEPC1                                                                         
          UPDATE    CEAPCDA1;CEPCDRGC,CEPCNUR,CEPCTHE,CEPCPHA,CEPCICU:          
                        CEPCALL,CEPCMSS,CEPCTAX,CEPCOVH,CEPCCAT,CEPCDEP:        
                        CEPCOTH,CEPCALOS,CEPCNWG,CEPCSPA                        
          RETURN
.
WRCEPC1   RESET     KEY4                                                        
          WRITE     CEAPCDA1,KEY4;CEPCDRGC,CEPCNUR,CEPCTHE,CEPCPHA,CEPCICU:     
                        CEPCALL,CEPCMSS,CEPCTAX,CEPCOVH,CEPCCAT,CEPCDEP:        
                        CEPCOTH,CEPCALOS,CEPCNWG,CEPCSPA                        
          RETURN
.
DECEPC1   RESET     KEY4                                                        
          DELETE    CEAPCDA1,KEY4                                               
          RETURN
.
