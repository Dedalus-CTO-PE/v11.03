.
. PATKICIO    
. --------
. Filename     : patkicaf.dat
.
RSPTKIC1  RESET     KEY21                                                       
          READ      PATKICA1,KEY21;;                                            
          RETURN
.
RAPTKIC1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PATKICA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTKIC1  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PATKICA1,KEY21;PTKICODE,PTKIKWRD,PTKISPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTKIC1  MOVE      ZERO,OVRCD                                                  
          READKS    PATKICA1;PTKICODE,PTKIKWRD,PTKISPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTKIC1  MOVE      ZERO,OVRCD                                                  
          READKP    PATKICA1;PTKICODE,PTKIKWRD,PTKISPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTKIC1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATKICA1;PTKICODE,PTKIKWRD,PTKISPAR                         
          RETURN
.
WRPTKIC1  RESET     KEY21                                                       
          WRITE     PATKICA1,KEY21;PTKICODE,PTKIKWRD,PTKISPAR                   
          RETURN
.
DEPTKIC1  RESET     KEY21                                                       
          DELETE    PATKICA1,KEY21                                              
          RETURN
.
RSPTKIC2  RESET     KEY21                                                       
          READ      PATKICA2,KEY21;;                                            
          RETURN
.
RAPTKIC2  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PATKICA2,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTKIC2  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      PATKICA2,KEY21;PTKICODE,PTKIKWRD,PTKISPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTKIC2  MOVE      ZERO,OVRCD                                                  
          READKS    PATKICA2;PTKICODE,PTKIKWRD,PTKISPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTKIC2  MOVE      ZERO,OVRCD                                                  
          READKP    PATKICA2;PTKICODE,PTKIKWRD,PTKISPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTKIC2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATKICA2;PTKICODE,PTKIKWRD,PTKISPAR                         
          RETURN
.
WRPTKIC2  RESET     KEY21                                                       
          WRITE     PATKICA2,KEY21;PTKICODE,PTKIKWRD,PTKISPAR                   
          RETURN
.
DEPTKIC2  RESET     KEY21                                                       
          DELETE    PATKICA2,KEY21                                              
          RETURN
.
