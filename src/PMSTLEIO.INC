.
. PMSTLEIO    
. --------
. Filename     : pmstleaf.dat
.
RSPMTLE1  RESET     KEY4                                                        
          READ      PMSTLEA1,KEY4;;                                             
          RETURN
.
RAPMTLE1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PMSTLEA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMTLE1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PMSTLEA1,KEY4;PMTLTITL,PMTLDESC,PMTLACTV,PMTLSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMTLE1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSTLEA1;PMTLTITL,PMTLDESC,PMTLACTV,PMTLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMTLE1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSTLEA1;PMTLTITL,PMTLDESC,PMTLACTV,PMTLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMTLE1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSTLEA1;PMTLTITL,PMTLDESC,PMTLACTV,PMTLSPAR                
          RETURN
.
WRPMTLE1  RESET     KEY4                                                        
          WRITE     PMSTLEA1,KEY4;PMTLTITL,PMTLDESC,PMTLACTV,PMTLSPAR           
          RETURN
.
DEPMTLE1  RESET     KEY4                                                        
          DELETE    PMSTLEA1,KEY4                                               
          RETURN
.
RSPMTLE2  RESET     KEY34                                                       
          READ      PMSTLEA2,KEY34;;                                            
          RETURN
.
RAPMTLE2  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      PMSTLEA2,KEY34;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMTLE2  RESET     KEY34                                                       
          MOVE      ZERO,OVRCD
          READ      PMSTLEA2,KEY34;PMTLTITL,PMTLDESC,PMTLACTV,PMTLSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMTLE2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSTLEA2;PMTLTITL,PMTLDESC,PMTLACTV,PMTLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMTLE2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSTLEA2;PMTLTITL,PMTLDESC,PMTLACTV,PMTLSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMTLE2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSTLEA2;PMTLTITL,PMTLDESC,PMTLACTV,PMTLSPAR                
          RETURN
.
WRPMTLE2  RESET     KEY34                                                       
          WRITE     PMSTLEA2,KEY34;PMTLTITL,PMTLDESC,PMTLACTV,PMTLSPAR          
          RETURN
.
DEPMTLE2  RESET     KEY34                                                       
          DELETE    PMSTLEA2,KEY34                                              
          RETURN
.
