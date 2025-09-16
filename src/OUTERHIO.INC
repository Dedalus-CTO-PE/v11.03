.
. OUTERHIO    
. --------
. Filename     : outerhaf.dat
.
RSOTERH1  RESET     KEY47                                                       
          READ      OUTERHA1,KEY47;;                                            
          RETURN
.
RAOTERH1  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      OUTERHA1,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTERH1  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      OUTERHA1,KEY47;OTERHOSP,OTERPYPN,OTERPRUN,OTERPDAT,OTERBSBC:
                                   OTERACCN,OTERACNM,OTERDAMN,OTERSTAT,OTERRKEY:
                                   OTERSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTERH1  MOVE      ZERO,OVRCD                                                  
          READKS    OUTERHA1;OTERHOSP,OTERPYPN,OTERPRUN,OTERPDAT,OTERBSBC:      
                             OTERACCN,OTERACNM,OTERDAMN,OTERSTAT,OTERRKEY:      
                             OTERSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTERH1  MOVE      ZERO,OVRCD                                                  
          READKP    OUTERHA1;OTERHOSP,OTERPYPN,OTERPRUN,OTERPDAT,OTERBSBC:      
                             OTERACCN,OTERACNM,OTERDAMN,OTERSTAT,OTERRKEY:      
                             OTERSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTERH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTERHA1;OTERHOSP,OTERPYPN,OTERPRUN,OTERPDAT,OTERBSBC:      
                             OTERACCN,OTERACNM,OTERDAMN,OTERSTAT,OTERRKEY:      
                             OTERSPAR                                           
          RETURN
.
WROTERH1  RESET     KEY47                                                       
          WRITE     OUTERHA1,KEY47;OTERHOSP,OTERPYPN,OTERPRUN,OTERPDAT,OTERBSBC:
                                   OTERACCN,OTERACNM,OTERDAMN,OTERSTAT,OTERRKEY:
                                   OTERSPAR                                     
          RETURN
.
DEOTERH1  RESET     KEY47                                                       
          DELETE    OUTERHA1,KEY47                                              
          RETURN
.
RSOTERH2  RESET     KEY47                                                       
          READ      OUTERHA2,KEY47;;                                            
          RETURN
.
RAOTERH2  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      OUTERHA2,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTERH2  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      OUTERHA2,KEY47;OTERHOSP,OTERPYPN,OTERPRUN,OTERPDAT,OTERBSBC:
                                   OTERACCN,OTERACNM,OTERDAMN,OTERSTAT,OTERRKEY:
                                   OTERSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTERH2  MOVE      ZERO,OVRCD                                                  
          READKS    OUTERHA2;OTERHOSP,OTERPYPN,OTERPRUN,OTERPDAT,OTERBSBC:      
                             OTERACCN,OTERACNM,OTERDAMN,OTERSTAT,OTERRKEY:      
                             OTERSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTERH2  MOVE      ZERO,OVRCD                                                  
          READKP    OUTERHA2;OTERHOSP,OTERPYPN,OTERPRUN,OTERPDAT,OTERBSBC:      
                             OTERACCN,OTERACNM,OTERDAMN,OTERSTAT,OTERRKEY:      
                             OTERSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTERH2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTERHA2;OTERHOSP,OTERPYPN,OTERPRUN,OTERPDAT,OTERBSBC:      
                             OTERACCN,OTERACNM,OTERDAMN,OTERSTAT,OTERRKEY:      
                             OTERSPAR                                           
          RETURN
.
WROTERH2  RESET     KEY47                                                       
          WRITE     OUTERHA2,KEY47;OTERHOSP,OTERPYPN,OTERPRUN,OTERPDAT,OTERBSBC:
                                   OTERACCN,OTERACNM,OTERDAMN,OTERSTAT,OTERRKEY:
                                   OTERSPAR                                     
          RETURN
.
DEOTERH2  RESET     KEY47                                                       
          DELETE    OUTERHA2,KEY47                                              
          RETURN
.
RSOTERH3  RESET     KEY48                                                       
          READ      OUTERHA3,KEY48;;                                            
          RETURN
.
RAOTERH3  RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READ      OUTERHA3,KEY48;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTERH3  RESET     KEY48                                                       
          MOVE      ZERO,OVRCD
          READ      OUTERHA3,KEY48;OTERHOSP,OTERPYPN,OTERPRUN,OTERPDAT,OTERBSBC:
                                   OTERACCN,OTERACNM,OTERDAMN,OTERSTAT,OTERRKEY:
                                   OTERSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTERH3  MOVE      ZERO,OVRCD                                                  
          READKS    OUTERHA3;OTERHOSP,OTERPYPN,OTERPRUN,OTERPDAT,OTERBSBC:      
                             OTERACCN,OTERACNM,OTERDAMN,OTERSTAT,OTERRKEY:      
                             OTERSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTERH3  MOVE      ZERO,OVRCD                                                  
          READKP    OUTERHA3;OTERHOSP,OTERPYPN,OTERPRUN,OTERPDAT,OTERBSBC:      
                             OTERACCN,OTERACNM,OTERDAMN,OTERSTAT,OTERRKEY:      
                             OTERSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTERH3  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTERHA3;OTERHOSP,OTERPYPN,OTERPRUN,OTERPDAT,OTERBSBC:      
                             OTERACCN,OTERACNM,OTERDAMN,OTERSTAT,OTERRKEY:      
                             OTERSPAR                                           
          RETURN
.
WROTERH3  RESET     KEY48                                                       
          WRITE     OUTERHA3,KEY48;OTERHOSP,OTERPYPN,OTERPRUN,OTERPDAT,OTERBSBC:
                                   OTERACCN,OTERACNM,OTERDAMN,OTERSTAT,OTERRKEY:
                                   OTERSPAR                                     
          RETURN
.
DEOTERH3  RESET     KEY48                                                       
          DELETE    OUTERHA3,KEY48                                              
          RETURN
.
RSOTERH4  RESET     KEY47                                                       
          READ      OUTERHA4,KEY47;;                                            
          RETURN
.
RAOTERH4  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      OUTERHA4,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTERH4  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      OUTERHA4,KEY47;OTERHOSP,OTERPYPN,OTERPRUN,OTERPDAT,OTERBSBC:
                                   OTERACCN,OTERACNM,OTERDAMN,OTERSTAT,OTERRKEY:
                                   OTERSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTERH4  MOVE      ZERO,OVRCD                                                  
          READKS    OUTERHA4;OTERHOSP,OTERPYPN,OTERPRUN,OTERPDAT,OTERBSBC:      
                             OTERACCN,OTERACNM,OTERDAMN,OTERSTAT,OTERRKEY:      
                             OTERSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTERH4  MOVE      ZERO,OVRCD                                                  
          READKP    OUTERHA4;OTERHOSP,OTERPYPN,OTERPRUN,OTERPDAT,OTERBSBC:      
                             OTERACCN,OTERACNM,OTERDAMN,OTERSTAT,OTERRKEY:      
                             OTERSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTERH4  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTERHA4;OTERHOSP,OTERPYPN,OTERPRUN,OTERPDAT,OTERBSBC:      
                             OTERACCN,OTERACNM,OTERDAMN,OTERSTAT,OTERRKEY:      
                             OTERSPAR                                           
          RETURN
.
WROTERH4  RESET     KEY47                                                       
          WRITE     OUTERHA4,KEY47;OTERHOSP,OTERPYPN,OTERPRUN,OTERPDAT,OTERBSBC:
                                   OTERACCN,OTERACNM,OTERDAMN,OTERSTAT,OTERRKEY:
                                   OTERSPAR                                     
          RETURN
.
DEOTERH4  RESET     KEY47                                                       
          DELETE    OUTERHA4,KEY47                                              
          RETURN
.
