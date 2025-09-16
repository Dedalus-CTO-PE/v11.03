.
. WEBBRHIO    
. --------
. Filename     : webbrhaf.dat
.
RSWBBRH1  RESET     KEY47                                                       
          READ      WEBBRHA1,KEY47;;                                            
          RETURN
.
RAWBBRH1  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBRHA1,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBRH1  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBRHA1,KEY47;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:
                                   WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:
                                   WBBHRKEY,WBBHMSID,WBBHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBRH1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBRHA1;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:      
                             WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:      
                             WBBHRKEY,WBBHMSID,WBBHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBRH1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBRHA1;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:      
                             WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:      
                             WBBHRKEY,WBBHMSID,WBBHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBRH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBRHA1;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:      
                             WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:      
                             WBBHRKEY,WBBHMSID,WBBHSPAR                         
          RETURN
.
WRWBBRH1  RESET     KEY47                                                       
          WRITE     WEBBRHA1,KEY47;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:
                                   WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:
                                   WBBHRKEY,WBBHMSID,WBBHSPAR                   
          RETURN
.
DEWBBRH1  RESET     KEY47                                                       
          DELETE    WEBBRHA1,KEY47                                              
          RETURN
.
RSWBBRH2  RESET     KEY47                                                       
          READ      WEBBRHA2,KEY47;;                                            
          RETURN
.
RAWBBRH2  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBRHA2,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBRH2  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBRHA2,KEY47;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:
                                   WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:
                                   WBBHRKEY,WBBHMSID,WBBHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBRH2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBRHA2;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:      
                             WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:      
                             WBBHRKEY,WBBHMSID,WBBHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBRH2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBRHA2;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:      
                             WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:      
                             WBBHRKEY,WBBHMSID,WBBHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBRH2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBRHA2;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:      
                             WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:      
                             WBBHRKEY,WBBHMSID,WBBHSPAR                         
          RETURN
.
WRWBBRH2  RESET     KEY47                                                       
          WRITE     WEBBRHA2,KEY47;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:
                                   WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:
                                   WBBHRKEY,WBBHMSID,WBBHSPAR                   
          RETURN
.
DEWBBRH2  RESET     KEY47                                                       
          DELETE    WEBBRHA2,KEY47                                              
          RETURN
.
RSWBBRH3  RESET     KEY48                                                       
          READ      WEBBRHA3,KEY48;;                                            
          RETURN
.
RAWBBRH3  RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBRHA3,KEY48;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBRH3  RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBRHA3,KEY48;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:
                                   WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:
                                   WBBHRKEY,WBBHMSID,WBBHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBRH3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBRHA3;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:      
                             WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:      
                             WBBHRKEY,WBBHMSID,WBBHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBRH3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBRHA3;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:      
                             WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:      
                             WBBHRKEY,WBBHMSID,WBBHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBRH3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBRHA3;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:      
                             WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:      
                             WBBHRKEY,WBBHMSID,WBBHSPAR                         
          RETURN
.
WRWBBRH3  RESET     KEY48                                                       
          WRITE     WEBBRHA3,KEY48;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:
                                   WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:
                                   WBBHRKEY,WBBHMSID,WBBHSPAR                   
          RETURN
.
DEWBBRH3  RESET     KEY48                                                       
          DELETE    WEBBRHA3,KEY48                                              
          RETURN
.
RSWBBRH4  RESET     KEY47                                                       
          READ      WEBBRHA4,KEY47;;                                            
          RETURN
.
RAWBBRH4  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBRHA4,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBRH4  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBRHA4,KEY47;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:
                                   WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:
                                   WBBHRKEY,WBBHMSID,WBBHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBRH4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBRHA4;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:      
                             WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:      
                             WBBHRKEY,WBBHMSID,WBBHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBRH4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBRHA4;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:      
                             WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:      
                             WBBHRKEY,WBBHMSID,WBBHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBRH4  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBRHA4;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:      
                             WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:      
                             WBBHRKEY,WBBHMSID,WBBHSPAR                         
          RETURN
.
WRWBBRH4  RESET     KEY47                                                       
          WRITE     WEBBRHA4,KEY47;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:
                                   WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:
                                   WBBHRKEY,WBBHMSID,WBBHSPAR                   
          RETURN
.
DEWBBRH4  RESET     KEY47                                                       
          DELETE    WEBBRHA4,KEY47                                              
          RETURN
.
RSWBBRH5  RESET     KEY47                                                       
          READ      WEBBRHA5,KEY47;;                                            
          RETURN
.
RAWBBRH5  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBRHA5,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBRH5  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBRHA5,KEY47;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:
                                   WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:
                                   WBBHRKEY,WBBHMSID,WBBHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBRH5  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBRHA5;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:      
                             WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:      
                             WBBHRKEY,WBBHMSID,WBBHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBRH5  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBRHA5;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:      
                             WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:      
                             WBBHRKEY,WBBHMSID,WBBHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBRH5  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBRHA5;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:      
                             WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:      
                             WBBHRKEY,WBBHMSID,WBBHSPAR                         
          RETURN
.
WRWBBRH5  RESET     KEY47                                                       
          WRITE     WEBBRHA5,KEY47;WBBHHOSP,WBBHPYPN,WBBHPRUN,WBBHPDAT,WBBHDAMN:
                                   WBBHACCN,WBBHACNM,WBBHBSBC,WBBHSTAT,WBBHRSTA:
                                   WBBHRKEY,WBBHMSID,WBBHSPAR                   
          RETURN
.
DEWBBRH5  RESET     KEY47                                                       
          DELETE    WEBBRHA5,KEY47                                              
          RETURN
.
