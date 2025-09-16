.
. WEBBRDIO    
. --------
. Filename     : webbrdaf.dat
.
RSWBBRD1  RESET     KEY53                                                       
          READ      WEBBRDA1,KEY53;;                                            
          RETURN
.
RAWBBRD1  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBRDA1,KEY53;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBRD1  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBRDA1,KEY53;WBBRHOSP,WBBRPYPN,WBBRPRUN,WBBRPDAT,WBBRCLBP:
                                   WBBRCLCA,WBBRCLID,WBBRLDAT,WBBRTRID,WBBRRKEY:
                                   WBBRSTAT,WBBRLTYP,WBBRMSID,WBBRSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBRD1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBRDA1;WBBRHOSP,WBBRPYPN,WBBRPRUN,WBBRPDAT,WBBRCLBP:      
                             WBBRCLCA,WBBRCLID,WBBRLDAT,WBBRTRID,WBBRRKEY:      
                             WBBRSTAT,WBBRLTYP,WBBRMSID,WBBRSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBRD1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBRDA1;WBBRHOSP,WBBRPYPN,WBBRPRUN,WBBRPDAT,WBBRCLBP:      
                             WBBRCLCA,WBBRCLID,WBBRLDAT,WBBRTRID,WBBRRKEY:      
                             WBBRSTAT,WBBRLTYP,WBBRMSID,WBBRSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBRD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBRDA1;WBBRHOSP,WBBRPYPN,WBBRPRUN,WBBRPDAT,WBBRCLBP:      
                             WBBRCLCA,WBBRCLID,WBBRLDAT,WBBRTRID,WBBRRKEY:      
                             WBBRSTAT,WBBRLTYP,WBBRMSID,WBBRSPAR                
          RETURN
.
WRWBBRD1  RESET     KEY53                                                       
          WRITE     WEBBRDA1,KEY53;WBBRHOSP,WBBRPYPN,WBBRPRUN,WBBRPDAT,WBBRCLBP:
                                   WBBRCLCA,WBBRCLID,WBBRLDAT,WBBRTRID,WBBRRKEY:
                                   WBBRSTAT,WBBRLTYP,WBBRMSID,WBBRSPAR          
          RETURN
.
DEWBBRD1  RESET     KEY53                                                       
          DELETE    WEBBRDA1,KEY53                                              
          RETURN
.
RSWBBRD2  RESET     KEY53                                                       
          READ      WEBBRDA2,KEY53;;                                            
          RETURN
.
RAWBBRD2  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBRDA2,KEY53;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBRD2  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBRDA2,KEY53;WBBRHOSP,WBBRPYPN,WBBRPRUN,WBBRPDAT,WBBRCLBP:
                                   WBBRCLCA,WBBRCLID,WBBRLDAT,WBBRTRID,WBBRRKEY:
                                   WBBRSTAT,WBBRLTYP,WBBRMSID,WBBRSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBRD2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBRDA2;WBBRHOSP,WBBRPYPN,WBBRPRUN,WBBRPDAT,WBBRCLBP:      
                             WBBRCLCA,WBBRCLID,WBBRLDAT,WBBRTRID,WBBRRKEY:      
                             WBBRSTAT,WBBRLTYP,WBBRMSID,WBBRSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBRD2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBRDA2;WBBRHOSP,WBBRPYPN,WBBRPRUN,WBBRPDAT,WBBRCLBP:      
                             WBBRCLCA,WBBRCLID,WBBRLDAT,WBBRTRID,WBBRRKEY:      
                             WBBRSTAT,WBBRLTYP,WBBRMSID,WBBRSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBRD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBRDA2;WBBRHOSP,WBBRPYPN,WBBRPRUN,WBBRPDAT,WBBRCLBP:      
                             WBBRCLCA,WBBRCLID,WBBRLDAT,WBBRTRID,WBBRRKEY:      
                             WBBRSTAT,WBBRLTYP,WBBRMSID,WBBRSPAR                
          RETURN
.
WRWBBRD2  RESET     KEY53                                                       
          WRITE     WEBBRDA2,KEY53;WBBRHOSP,WBBRPYPN,WBBRPRUN,WBBRPDAT,WBBRCLBP:
                                   WBBRCLCA,WBBRCLID,WBBRLDAT,WBBRTRID,WBBRRKEY:
                                   WBBRSTAT,WBBRLTYP,WBBRMSID,WBBRSPAR          
          RETURN
.
DEWBBRD2  RESET     KEY53                                                       
          DELETE    WEBBRDA2,KEY53                                              
          RETURN
.
RSWBBRD3  RESET     KEY77                                                       
          READ      WEBBRDA3,KEY77;;                                            
          RETURN
.
RAWBBRD3  RESET     KEY77                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBRDA3,KEY77;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBRD3  RESET     KEY77                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBRDA3,KEY77;WBBRHOSP,WBBRPYPN,WBBRPRUN,WBBRPDAT,WBBRCLBP:
                                   WBBRCLCA,WBBRCLID,WBBRLDAT,WBBRTRID,WBBRRKEY:
                                   WBBRSTAT,WBBRLTYP,WBBRMSID,WBBRSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBRD3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBRDA3;WBBRHOSP,WBBRPYPN,WBBRPRUN,WBBRPDAT,WBBRCLBP:      
                             WBBRCLCA,WBBRCLID,WBBRLDAT,WBBRTRID,WBBRRKEY:      
                             WBBRSTAT,WBBRLTYP,WBBRMSID,WBBRSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBRD3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBRDA3;WBBRHOSP,WBBRPYPN,WBBRPRUN,WBBRPDAT,WBBRCLBP:      
                             WBBRCLCA,WBBRCLID,WBBRLDAT,WBBRTRID,WBBRRKEY:      
                             WBBRSTAT,WBBRLTYP,WBBRMSID,WBBRSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBRD3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBRDA3;WBBRHOSP,WBBRPYPN,WBBRPRUN,WBBRPDAT,WBBRCLBP:      
                             WBBRCLCA,WBBRCLID,WBBRLDAT,WBBRTRID,WBBRRKEY:      
                             WBBRSTAT,WBBRLTYP,WBBRMSID,WBBRSPAR                
          RETURN
.
WRWBBRD3  RESET     KEY77                                                       
          WRITE     WEBBRDA3,KEY77;WBBRHOSP,WBBRPYPN,WBBRPRUN,WBBRPDAT,WBBRCLBP:
                                   WBBRCLCA,WBBRCLID,WBBRLDAT,WBBRTRID,WBBRRKEY:
                                   WBBRSTAT,WBBRLTYP,WBBRMSID,WBBRSPAR          
          RETURN
.
DEWBBRD3  RESET     KEY77                                                       
          DELETE    WEBBRDA3,KEY77                                              
          RETURN
.
RSWBBRD4  RESET     KEY77                                                       
          READ      WEBBRDA4,KEY77;;                                            
          RETURN
.
RAWBBRD4  RESET     KEY77                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBRDA4,KEY77;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBBRD4  RESET     KEY77                                                       
          MOVE      ZERO,OVRCD
          READ      WEBBRDA4,KEY77;WBBRHOSP,WBBRPYPN,WBBRPRUN,WBBRPDAT,WBBRCLBP:
                                   WBBRCLCA,WBBRCLID,WBBRLDAT,WBBRTRID,WBBRRKEY:
                                   WBBRSTAT,WBBRLTYP,WBBRMSID,WBBRSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBBRD4  MOVE      ZERO,OVRCD                                                  
          READKS    WEBBRDA4;WBBRHOSP,WBBRPYPN,WBBRPRUN,WBBRPDAT,WBBRCLBP:      
                             WBBRCLCA,WBBRCLID,WBBRLDAT,WBBRTRID,WBBRRKEY:      
                             WBBRSTAT,WBBRLTYP,WBBRMSID,WBBRSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBBRD4  MOVE      ZERO,OVRCD                                                  
          READKP    WEBBRDA4;WBBRHOSP,WBBRPYPN,WBBRPRUN,WBBRPDAT,WBBRCLBP:      
                             WBBRCLCA,WBBRCLID,WBBRLDAT,WBBRTRID,WBBRRKEY:      
                             WBBRSTAT,WBBRLTYP,WBBRMSID,WBBRSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBBRD4  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBBRDA4;WBBRHOSP,WBBRPYPN,WBBRPRUN,WBBRPDAT,WBBRCLBP:      
                             WBBRCLCA,WBBRCLID,WBBRLDAT,WBBRTRID,WBBRRKEY:      
                             WBBRSTAT,WBBRLTYP,WBBRMSID,WBBRSPAR                
          RETURN
.
WRWBBRD4  RESET     KEY77                                                       
          WRITE     WEBBRDA4,KEY77;WBBRHOSP,WBBRPYPN,WBBRPRUN,WBBRPDAT,WBBRCLBP:
                                   WBBRCLCA,WBBRCLID,WBBRLDAT,WBBRTRID,WBBRRKEY:
                                   WBBRSTAT,WBBRLTYP,WBBRMSID,WBBRSPAR          
          RETURN
.
DEWBBRD4  RESET     KEY77                                                       
          DELETE    WEBBRDA4,KEY77                                              
          RETURN
.
