.
. WEBPKIIO    
. --------
. Filename     : webpkiaf.dat
.
RSWBPKI1  RESET     KEY53                                                       
          READ      WEBPKIA1,KEY53;;                                            
          RETURN
.
RAWBPKI1  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPKIA1,KEY53;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPKI1  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPKIA1,KEY53;WBPKCODE,WBPKKKWD,WBPKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPKI1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPKIA1;WBPKCODE,WBPKKKWD,WBPKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPKI1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPKIA1;WBPKCODE,WBPKKKWD,WBPKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPKI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPKIA1;WBPKCODE,WBPKKKWD,WBPKSPAR                         
          RETURN
.
WRWBPKI1  RESET     KEY53                                                       
          WRITE     WEBPKIA1,KEY53;WBPKCODE,WBPKKKWD,WBPKSPAR                   
          RETURN
.
DEWBPKI1  RESET     KEY53                                                       
          DELETE    WEBPKIA1,KEY53                                              
          RETURN
.
RSWBPKI2  RESET     KEY53                                                       
          READ      WEBPKIA2,KEY53;;                                            
          RETURN
.
RAWBPKI2  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPKIA2,KEY53;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBPKI2  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      WEBPKIA2,KEY53;WBPKCODE,WBPKKKWD,WBPKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBPKI2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBPKIA2;WBPKCODE,WBPKKKWD,WBPKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBPKI2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBPKIA2;WBPKCODE,WBPKKKWD,WBPKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBPKI2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBPKIA2;WBPKCODE,WBPKKKWD,WBPKSPAR                         
          RETURN
.
WRWBPKI2  RESET     KEY53                                                       
          WRITE     WEBPKIA2,KEY53;WBPKCODE,WBPKKKWD,WBPKSPAR                   
          RETURN
.
DEWBPKI2  RESET     KEY53                                                       
          DELETE    WEBPKIA2,KEY53                                              
          RETURN
.
