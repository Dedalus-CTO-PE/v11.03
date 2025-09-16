.
. DEBPLNIO    
. --------
. Filename     : debplnaf.dat
.
RSDBPL1   RESET     KEY14                                                       
          READ      DEBPLNA1,KEY14;;                                            
          RETURN
.
RADBPL1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      DEBPLNA1,KEY14;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBPL1   RESET     KEY14                                                       
          MOVE      ZERO,OVRCD
          READ      DEBPLNA1,KEY14;DBPLDEB,DBPLUNI,DBPLLIN,DBPLCOM,DBPLSPA      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBPL1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBPLNA1;DBPLDEB,DBPLUNI,DBPLLIN,DBPLCOM,DBPLSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBPL1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBPLNA1;DBPLDEB,DBPLUNI,DBPLLIN,DBPLCOM,DBPLSPA            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBPL1                                                                         
          UPDATE    DEBPLNA1;DBPLDEB,DBPLUNI,DBPLLIN,DBPLCOM,DBPLSPA            
          RETURN
.
WRDBPL1   RESET     KEY14                                                       
          WRITE     DEBPLNA1,KEY14;DBPLDEB,DBPLUNI,DBPLLIN,DBPLCOM,DBPLSPA      
          RETURN
.
DEDBPL1   RESET     KEY14                                                       
          DELETE    DEBPLNA1,KEY14                                              
          RETURN
.
