.
. PRITKIIO    
. --------
. Filename     : pritkiaf.dat
.
RSPRTKI1  RESET     KEY24                                                       
          READ      PRITKIA1,KEY24;;                                            
          RETURN
.
RAPRTKI1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PRITKIA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRTKI1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PRITKIA1,KEY24;PRTKPTST,PRTKPKWD,PRTKPSPA                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRTKI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRITKIA1;PRTKPTST,PRTKPKWD,PRTKPSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRTKI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRITKIA1;PRTKPTST,PRTKPKWD,PRTKPSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRTKI1                                                                        
          UPDATE    PRITKIA1;PRTKPTST,PRTKPKWD,PRTKPSPA                         
          RETURN
.
WRPRTKI1  RESET     KEY24                                                       
          WRITE     PRITKIA1,KEY24;PRTKPTST,PRTKPKWD,PRTKPSPA                   
          RETURN
.
DEPRTKI1  RESET     KEY24                                                       
          DELETE    PRITKIA1,KEY24                                              
          RETURN
.
RSPRTKI2  RESET     KEY24                                                       
          READ      PRITKIA2,KEY24;;                                            
          RETURN
.
RAPRTKI2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PRITKIA2,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRTKI2  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PRITKIA2,KEY24;PRTKPTST,PRTKPKWD,PRTKPSPA                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRTKI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PRITKIA2;PRTKPTST,PRTKPKWD,PRTKPSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRTKI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PRITKIA2;PRTKPTST,PRTKPKWD,PRTKPSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRTKI2                                                                        
          UPDATE    PRITKIA2;PRTKPTST,PRTKPKWD,PRTKPSPA                         
          RETURN
.
WRPRTKI2  RESET     KEY24                                                       
          WRITE     PRITKIA2,KEY24;PRTKPTST,PRTKPKWD,PRTKPSPA                   
          RETURN
.
DEPRTKI2  RESET     KEY24                                                       
          DELETE    PRITKIA2,KEY24                                              
          RETURN
.
