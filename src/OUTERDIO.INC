.
. OUTERDIO    
. --------
. Filename     : outerdaf.dat
.
RSOTERD1  RESET     KEY53                                                       
          READ      OUTERDA1,KEY53;;                                            
          RETURN
.
RAOTERD1  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      OUTERDA1,KEY53;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTERD1  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      OUTERDA1,KEY53;OTESHOSP,OTESPYPN,OTESPRUN,OTESPDAT,OTESCLID:
                                   OTESCDAT,OTESCLBP,OTESCLCA,OTESTRID,OTESRKEY:
                                   OTESSTAT,OTESLTYP,OTESSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTERD1  MOVE      ZERO,OVRCD                                                  
          READKS    OUTERDA1;OTESHOSP,OTESPYPN,OTESPRUN,OTESPDAT,OTESCLID:      
                             OTESCDAT,OTESCLBP,OTESCLCA,OTESTRID,OTESRKEY:      
                             OTESSTAT,OTESLTYP,OTESSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTERD1  MOVE      ZERO,OVRCD                                                  
          READKP    OUTERDA1;OTESHOSP,OTESPYPN,OTESPRUN,OTESPDAT,OTESCLID:      
                             OTESCDAT,OTESCLBP,OTESCLCA,OTESTRID,OTESRKEY:      
                             OTESSTAT,OTESLTYP,OTESSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTERD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTERDA1;OTESHOSP,OTESPYPN,OTESPRUN,OTESPDAT,OTESCLID:      
                             OTESCDAT,OTESCLBP,OTESCLCA,OTESTRID,OTESRKEY:      
                             OTESSTAT,OTESLTYP,OTESSPAR                         
          RETURN
.
WROTERD1  RESET     KEY53                                                       
          WRITE     OUTERDA1,KEY53;OTESHOSP,OTESPYPN,OTESPRUN,OTESPDAT,OTESCLID:
                                   OTESCDAT,OTESCLBP,OTESCLCA,OTESTRID,OTESRKEY:
                                   OTESSTAT,OTESLTYP,OTESSPAR                   
          RETURN
.
DEOTERD1  RESET     KEY53                                                       
          DELETE    OUTERDA1,KEY53                                              
          RETURN
.
RSOTERD2  RESET     KEY53                                                       
          READ      OUTERDA2,KEY53;;                                            
          RETURN
.
RAOTERD2  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      OUTERDA2,KEY53;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTERD2  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      OUTERDA2,KEY53;OTESHOSP,OTESPYPN,OTESPRUN,OTESPDAT,OTESCLID:
                                   OTESCDAT,OTESCLBP,OTESCLCA,OTESTRID,OTESRKEY:
                                   OTESSTAT,OTESLTYP,OTESSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTERD2  MOVE      ZERO,OVRCD                                                  
          READKS    OUTERDA2;OTESHOSP,OTESPYPN,OTESPRUN,OTESPDAT,OTESCLID:      
                             OTESCDAT,OTESCLBP,OTESCLCA,OTESTRID,OTESRKEY:      
                             OTESSTAT,OTESLTYP,OTESSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTERD2  MOVE      ZERO,OVRCD                                                  
          READKP    OUTERDA2;OTESHOSP,OTESPYPN,OTESPRUN,OTESPDAT,OTESCLID:      
                             OTESCDAT,OTESCLBP,OTESCLCA,OTESTRID,OTESRKEY:      
                             OTESSTAT,OTESLTYP,OTESSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTERD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTERDA2;OTESHOSP,OTESPYPN,OTESPRUN,OTESPDAT,OTESCLID:      
                             OTESCDAT,OTESCLBP,OTESCLCA,OTESTRID,OTESRKEY:      
                             OTESSTAT,OTESLTYP,OTESSPAR                         
          RETURN
.
WROTERD2  RESET     KEY53                                                       
          WRITE     OUTERDA2,KEY53;OTESHOSP,OTESPYPN,OTESPRUN,OTESPDAT,OTESCLID:
                                   OTESCDAT,OTESCLBP,OTESCLCA,OTESTRID,OTESRKEY:
                                   OTESSTAT,OTESLTYP,OTESSPAR                   
          RETURN
.
DEOTERD2  RESET     KEY53                                                       
          DELETE    OUTERDA2,KEY53                                              
          RETURN
.
RSOTERD3  RESET     KEY77                                                       
          READ      OUTERDA3,KEY77;;                                            
          RETURN
.
RAOTERD3  RESET     KEY77                                                       
          MOVE      ZERO,OVRCD
          READ      OUTERDA3,KEY77;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTERD3  RESET     KEY77                                                       
          MOVE      ZERO,OVRCD
          READ      OUTERDA3,KEY77;OTESHOSP,OTESPYPN,OTESPRUN,OTESPDAT,OTESCLID:
                                   OTESCDAT,OTESCLBP,OTESCLCA,OTESTRID,OTESRKEY:
                                   OTESSTAT,OTESLTYP,OTESSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTERD3  MOVE      ZERO,OVRCD                                                  
          READKS    OUTERDA3;OTESHOSP,OTESPYPN,OTESPRUN,OTESPDAT,OTESCLID:      
                             OTESCDAT,OTESCLBP,OTESCLCA,OTESTRID,OTESRKEY:      
                             OTESSTAT,OTESLTYP,OTESSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTERD3  MOVE      ZERO,OVRCD                                                  
          READKP    OUTERDA3;OTESHOSP,OTESPYPN,OTESPRUN,OTESPDAT,OTESCLID:      
                             OTESCDAT,OTESCLBP,OTESCLCA,OTESTRID,OTESRKEY:      
                             OTESSTAT,OTESLTYP,OTESSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTERD3  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTERDA3;OTESHOSP,OTESPYPN,OTESPRUN,OTESPDAT,OTESCLID:      
                             OTESCDAT,OTESCLBP,OTESCLCA,OTESTRID,OTESRKEY:      
                             OTESSTAT,OTESLTYP,OTESSPAR                         
          RETURN
.
WROTERD3  RESET     KEY77                                                       
          WRITE     OUTERDA3,KEY77;OTESHOSP,OTESPYPN,OTESPRUN,OTESPDAT,OTESCLID:
                                   OTESCDAT,OTESCLBP,OTESCLCA,OTESTRID,OTESRKEY:
                                   OTESSTAT,OTESLTYP,OTESSPAR                   
          RETURN
.
DEOTERD3  RESET     KEY77                                                       
          DELETE    OUTERDA3,KEY77                                              
          RETURN
.
