.
. FMSBZAIO    
. --------
. Filename     : fmsbzaaf.dat
.
RSFMBZ1   RESET     KEY14                                                       
          READ      FMSBZAA1,KEY14;;                                            
          RETURN
.
RAFMBZ1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      FMSBZAA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMBZ1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      FMSBZAA1,KEY14;FMBZPORT,FMBZACCT,FMBZAMT,FMBZDESC,FMBZSPA   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMBZ1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSBZAA1;FMBZPORT,FMBZACCT,FMBZAMT,FMBZDESC,FMBZSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMBZ1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSBZAA1;FMBZPORT,FMBZACCT,FMBZAMT,FMBZDESC,FMBZSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMBZ1                                                                         
          UPDATE    FMSBZAA1;FMBZPORT,FMBZACCT,FMBZAMT,FMBZDESC,FMBZSPA         
          RETURN
.
WRFMBZ1   RESET     KEY14                                                       
          WRITE     FMSBZAA1,KEY14;FMBZPORT,FMBZACCT,FMBZAMT,FMBZDESC,FMBZSPA   
          RETURN
.
DEFMBZ1   RESET     KEY14                                                       
          DELETE    FMSBZAA1,KEY14                                              
          RETURN
.
