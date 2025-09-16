.
. PMSHADIO    
. --------
. Filename     : pmshadaf.dat
.
RSPMHAD1  RESET     KEY12                                                       
          READ      PMSHADA1,KEY12;;                                            
          RETURN
.
RAPMHAD1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHADA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHAD1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHADA1,KEY12;PMHDCNTR,PMHDHACG,PMHDVALF,PMHDVALT,PMHDADJV:
                                   PMHDCDAT,PMHDCTIM,PMHDCUID,PMHDUDAT,PMHDUTIM:
                                   PMHDUUID,PMHDSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHAD1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSHADA1;PMHDCNTR,PMHDHACG,PMHDVALF,PMHDVALT,PMHDADJV:      
                             PMHDCDAT,PMHDCTIM,PMHDCUID,PMHDUDAT,PMHDUTIM:      
                             PMHDUUID,PMHDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHAD1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSHADA1;PMHDCNTR,PMHDHACG,PMHDVALF,PMHDVALT,PMHDADJV:      
                             PMHDCDAT,PMHDCTIM,PMHDCUID,PMHDUDAT,PMHDUTIM:      
                             PMHDUUID,PMHDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHAD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSHADA1;PMHDCNTR,PMHDHACG,PMHDVALF,PMHDVALT,PMHDADJV:      
                             PMHDCDAT,PMHDCTIM,PMHDCUID,PMHDUDAT,PMHDUTIM:      
                             PMHDUUID,PMHDSPAR                                  
          RETURN
.
WRPMHAD1  RESET     KEY12                                                       
          WRITE     PMSHADA1,KEY12;PMHDCNTR,PMHDHACG,PMHDVALF,PMHDVALT,PMHDADJV:
                                   PMHDCDAT,PMHDCTIM,PMHDCUID,PMHDUDAT,PMHDUTIM:
                                   PMHDUUID,PMHDSPAR                            
          RETURN
.
DEPMHAD1  RESET     KEY12                                                       
          DELETE    PMSHADA1,KEY12                                              
          RETURN
.
RSPMHAD2  RESET     KEY12                                                       
          READ      PMSHADA2,KEY12;;                                            
          RETURN
.
RAPMHAD2  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHADA2,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHAD2  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHADA2,KEY12;PMHDCNTR,PMHDHACG,PMHDVALF,PMHDVALT,PMHDADJV:
                                   PMHDCDAT,PMHDCTIM,PMHDCUID,PMHDUDAT,PMHDUTIM:
                                   PMHDUUID,PMHDSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHAD2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSHADA2;PMHDCNTR,PMHDHACG,PMHDVALF,PMHDVALT,PMHDADJV:      
                             PMHDCDAT,PMHDCTIM,PMHDCUID,PMHDUDAT,PMHDUTIM:      
                             PMHDUUID,PMHDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHAD2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSHADA2;PMHDCNTR,PMHDHACG,PMHDVALF,PMHDVALT,PMHDADJV:      
                             PMHDCDAT,PMHDCTIM,PMHDCUID,PMHDUDAT,PMHDUTIM:      
                             PMHDUUID,PMHDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHAD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSHADA2;PMHDCNTR,PMHDHACG,PMHDVALF,PMHDVALT,PMHDADJV:      
                             PMHDCDAT,PMHDCTIM,PMHDCUID,PMHDUDAT,PMHDUTIM:      
                             PMHDUUID,PMHDSPAR                                  
          RETURN
.
WRPMHAD2  RESET     KEY12                                                       
          WRITE     PMSHADA2,KEY12;PMHDCNTR,PMHDHACG,PMHDVALF,PMHDVALT,PMHDADJV:
                                   PMHDCDAT,PMHDCTIM,PMHDCUID,PMHDUDAT,PMHDUTIM:
                                   PMHDUUID,PMHDSPAR                            
          RETURN
.
DEPMHAD2  RESET     KEY12                                                       
          DELETE    PMSHADA2,KEY12                                              
          RETURN
.
