.
. PRICTCIO    
. --------
. Filename     : prictcaf.dat
.
RSPRCT1   RESET     KEY16                                                       
          READ      PRICTCA1,KEY16;;                                            
          RETURN
.
RAPRCT1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PRICTCA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRCT1   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PRICTCA1,KEY16;PRCTINVN,DPRCTUNI,PRCTSNAM,PRCTSAD1,PRCTSAD2:
                        PRCTSAD3,PRCTSAD4,PRCTSPCO,PRCTSPHN,PRCTCONT,PRCTREFN:  
                        PRCTSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPRCTUNI,PRCTUNIQ                                           
          RETURN
.
RKPRCT1                                                                         
          MOVE      ZERO,OVRCD
          READKS    PRICTCA1;PRCTINVN,DPRCTUNI,PRCTSNAM,PRCTSAD1,PRCTSAD2:      
                        PRCTSAD3,PRCTSAD4,PRCTSPCO,PRCTSPHN,PRCTCONT,PRCTREFN:  
                        PRCTSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPRCTUNI,PRCTUNIQ                                           
          RETURN
.
RPPRCT1                                                                         
          MOVE      ZERO,OVRCD
          READKP    PRICTCA1;PRCTINVN,DPRCTUNI,PRCTSNAM,PRCTSAD1,PRCTSAD2:      
                        PRCTSAD3,PRCTSAD4,PRCTSPCO,PRCTSPHN,PRCTCONT,PRCTREFN:  
                        PRCTSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPRCTUNI,PRCTUNIQ                                           
          RETURN
.
UPPRCT1                                                                         
          MOVE      PRCTUNIQ,DPRCTUNI                                           
          UPDATE    PRICTCA1;PRCTINVN,DPRCTUNI,PRCTSNAM,PRCTSAD1,PRCTSAD2:      
                        PRCTSAD3,PRCTSAD4,PRCTSPCO,PRCTSPHN,PRCTCONT,PRCTREFN:  
                        PRCTSPAR                                                
          RETURN
.
WRPRCT1   RESET     KEY16                                                       
          MOVE      PRCTUNIQ,DPRCTUNI                                           
          WRITE     PRICTCA1,KEY16;PRCTINVN,DPRCTUNI,PRCTSNAM,PRCTSAD1,PRCTSAD2:
                        PRCTSAD3,PRCTSAD4,PRCTSPCO,PRCTSPHN,PRCTCONT,PRCTREFN:  
                        PRCTSPAR                                                
          RETURN
.
DEPRCT1   RESET     KEY16                                                       
          DELETE    PRICTCA1,KEY16                                              
          RETURN
.
RSPRCT2   RESET     KEY16                                                       
          READ      PRICTCA2,KEY16;;                                            
          RETURN
.
RAPRCT2   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PRICTCA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRCT2   RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PRICTCA2,KEY16;PRCTINVN,DPRCTUNI,PRCTSNAM,PRCTSAD1,PRCTSAD2:
                        PRCTSAD3,PRCTSAD4,PRCTSPCO,PRCTSPHN,PRCTCONT,PRCTREFN:  
                        PRCTSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPRCTUNI,PRCTUNIQ                                           
          RETURN
.
RKPRCT2                                                                         
          MOVE      ZERO,OVRCD
          READKS    PRICTCA2;PRCTINVN,DPRCTUNI,PRCTSNAM,PRCTSAD1,PRCTSAD2:      
                        PRCTSAD3,PRCTSAD4,PRCTSPCO,PRCTSPHN,PRCTCONT,PRCTREFN:  
                        PRCTSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPRCTUNI,PRCTUNIQ                                           
          RETURN
.
RPPRCT2                                                                         
          MOVE      ZERO,OVRCD
          READKP    PRICTCA2;PRCTINVN,DPRCTUNI,PRCTSNAM,PRCTSAD1,PRCTSAD2:      
                        PRCTSAD3,PRCTSAD4,PRCTSPCO,PRCTSPHN,PRCTCONT,PRCTREFN:  
                        PRCTSPAR                                                
          GOTO      OVERCOND IF OVER
          MOVE      DPRCTUNI,PRCTUNIQ                                           
          RETURN
.
UPPRCT2                                                                         
          MOVE      PRCTUNIQ,DPRCTUNI                                           
          UPDATE    PRICTCA2;PRCTINVN,DPRCTUNI,PRCTSNAM,PRCTSAD1,PRCTSAD2:      
                        PRCTSAD3,PRCTSAD4,PRCTSPCO,PRCTSPHN,PRCTCONT,PRCTREFN:  
                        PRCTSPAR                                                
          RETURN
.
WRPRCT2   RESET     KEY16                                                       
          MOVE      PRCTUNIQ,DPRCTUNI                                           
          WRITE     PRICTCA2,KEY16;PRCTINVN,DPRCTUNI,PRCTSNAM,PRCTSAD1,PRCTSAD2:
                        PRCTSAD3,PRCTSAD4,PRCTSPCO,PRCTSPHN,PRCTCONT,PRCTREFN:  
                        PRCTSPAR                                                
          RETURN
.
DEPRCT2   RESET     KEY16                                                       
          DELETE    PRICTCA2,KEY16                                              
          RETURN
.
