.
. PRICDTIO    
. --------
. Filename     : pricdtaf.dat
.
RSPRCDT1  RESET     KEY36                                                       
          READ      PRICDTA1,KEY36;;                                            
          RETURN
.
RAPRCDT1  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      PRICDTA1,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPRCDT1  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      PRICDTA1,KEY36;PRCDUNIQ,PRCDPRAC,PRCDDOCT,PRCDPIND,PRCDCTYP:
                                   PRCDNOTE,PRCDIDAT,PRCDITIM,PRCDIUSR,PRCDIOCG:
                                   PRCDDIND,PRCDDDAT,PRCDDTIM,PRCDDUSR,PRCDDOCG:
                                   PRCDSPAR                                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPRCDT1  MOVE      ZERO,OVRCD                                                  
          READKS    PRICDTA1;PRCDUNIQ,PRCDPRAC,PRCDDOCT,PRCDPIND,PRCDCTYP:      
                             PRCDNOTE,PRCDIDAT,PRCDITIM,PRCDIUSR,PRCDIOCG:      
                             PRCDDIND,PRCDDDAT,PRCDDTIM,PRCDDUSR,PRCDDOCG:      
                             PRCDSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPRCDT1  MOVE      ZERO,OVRCD                                                  
          READKP    PRICDTA1;PRCDUNIQ,PRCDPRAC,PRCDDOCT,PRCDPIND,PRCDCTYP:      
                             PRCDNOTE,PRCDIDAT,PRCDITIM,PRCDIUSR,PRCDIOCG:      
                             PRCDDIND,PRCDDDAT,PRCDDTIM,PRCDDUSR,PRCDDOCG:      
                             PRCDSPAR                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPRCDT1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PRICDTA1;PRCDUNIQ,PRCDPRAC,PRCDDOCT,PRCDPIND,PRCDCTYP:      
                             PRCDNOTE,PRCDIDAT,PRCDITIM,PRCDIUSR,PRCDIOCG:      
                             PRCDDIND,PRCDDDAT,PRCDDTIM,PRCDDUSR,PRCDDOCG:      
                             PRCDSPAR                                           
          RETURN
.
WRPRCDT1  RESET     KEY36                                                       
          WRITE     PRICDTA1,KEY36;PRCDUNIQ,PRCDPRAC,PRCDDOCT,PRCDPIND,PRCDCTYP:
                                   PRCDNOTE,PRCDIDAT,PRCDITIM,PRCDIUSR,PRCDIOCG:
                                   PRCDDIND,PRCDDDAT,PRCDDTIM,PRCDDUSR,PRCDDOCG:
                                   PRCDSPAR                                     
          RETURN
.
DEPRCDT1  RESET     KEY36                                                       
          DELETE    PRICDTA1,KEY36                                              
          RETURN
.
